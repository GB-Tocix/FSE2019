#include<iostream>
using namespace std;


int main(){
	int n,m,i,j,x;
	int a[3000],b[3000],c[6000];
	cin>>n>>m;
	for(int k=0;k<n;k++)cin>>a[k];
	for(int k=0;k<m;k++)cin>>b[k];
	i=0;
	j=0;
	x=0;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			c[x]=a[i];
			x++;
			i++;
		}
		else{
			c[x]=b[j];
			x++;
			j++;
		}
	}
	while(i<n){
		c[x]=a[i];
		x++;
		i++;
	}
	while(j<m){
		c[x]=b[j];
		j++;
		x++;
	}
	
	for(int k=0;k<n+m;k++)cout<<c[k]<<' ';
	return 0;
} 
