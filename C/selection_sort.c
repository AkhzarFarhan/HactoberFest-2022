include <iostream>

using namespace std;

int main()
{
    int i,j,n,min;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i]; 
  for(i=0;i<n-1;i++){
      min=a[i];
      for(j=i+1;j<n;j++){
          if(a[j]<min){
            min=a[j];
            a[j]=a[i];
            a[i]=min;
          }
      }
  }
  cout<<"sorting array is ";
  for(i=0;i<n;i++)
  cout<<" "<<a[i];
             
    return 0;
}
