#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define INFINITY 999

int cost[MAX][MAX],visited[MAX];

void prims(int cost[][MAX],int n)
{
	int i,j,ne=1;
	int a,b,u,v,min,mincost=0;
	for(i=2;i<=n;i++)
		visited[i]=0;
	printf("\nEDGES OF THE SPANNING TREE -\n");
	visited[1]=1;
	while(ne<n)
	{
		for(i=1,min=INFINITY;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
					if(visited[i]==0){
                      
						continue;}
				else
				{
					
                           min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		if(visited[u]==0||visited[v]==0)
		{
			printf("\n%d.EDGE (%d,%d)=%d\n",ne++,a,b,min);
			mincost+=min;
			visited[b]=1;
		}
		cost[a][b]=cost[b][a]=INFINITY;
	}
	printf("\nMINIMUM COST = %d\n",mincost);
}


int main(int argc, char *argv[])
{
    int i,j,n;
	printf("ENTER THE NUMBER OF VERTICES : ");
	scanf("%d",&n);
	printf("ENTER THE COST MATRIX (ENTER 999 FOR INFINITY)- \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	prims(cost,n);
	getch();

  
  return 0;
}
