void creategraph();
void bfs(int);
int g[10][10],n,visited[10],f=-1,r=-1,q[20];
void main()
{
	int v;
	
	creategraph();
	printf("enter starting vertex:");
	scanf("%d",&v); 
	bfs(v);
	getch();
}
void creategraph()
{
	int i,j;
	printf("enter the no of nodes:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter edge from %d to %d:",i,j);
			scanf("%d",&g[i][j]);
		}
	}
	for(i=0;i<n;i++)
	visited[i]=0;
}
void bfs(int v)
{
	int i;
	q[++r]=v;
	visited[v]=1;
	while(r!=f)
	{
		v=q[++f];
		printf("%d->",v);
		for (i=0;i<n;i++)
		{
			if(g[v][i]=1 && visited[i]==0)
			{
				q[++r]=i;
				visited[i]=1;
			}
		}
	}
	
}
