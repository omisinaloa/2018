// A. Matriz serpentina
#define MAX 20
int main(){
int m[MAX][MAX];
int i=0,j=0,k=1,N,M,t, pos;

scanf("%d%d", &N, &M);

t=N*M;

  for (i=0;i<N; i++)
    for (j=0; j<M; j++){
      pos = ((i+1)%2==0)?M-j-1:j;
      m[i][pos]=k++;
    }


  for (i=0;i<N; i++){
    for (j=0; j<M; j++)
      printf("%d ",m[i][j]);

  printf ("\n");

  }

return 0;
}
