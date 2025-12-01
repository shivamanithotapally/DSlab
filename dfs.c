void creategraph();
void dfs(int);
int g[10][10],visited[10],n,st[10],top=-1;
main()
{
	int v;
	creategraph();
	printf("enter the starting node:");
	scanf("%d",&v);
	dfs(v);
	getch();
}
void creategraph()
{
}
void dfs(int v)
{
	int i;
	st[++top]=v;
	while(top!=-1){
		v=st[top];
		top--;
		if(visited[v]==0)
		{
			printf("%d->",v);
			visited[v]=1;
		}
		for(i=0;i<n;i++)
		{
			if(g[v][i]==1 && visited[i]==0)
			{
				st[++top]=i;
			}
		}
	}	}
