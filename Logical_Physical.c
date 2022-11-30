#include<stdio.h>
#include<conio.h>
struct Main{
	int start_data;
	int pno;
	
};
int main(){
	struct Main mm[100];
	int totPages,i,s,offset,n,r,arr[200]={0},phy_add,fno[100],pno;
	//srand((unsigned)time(NULL));
	printf("\n Enter the size of file ");
	scanf("%d",&n);
	printf("\n Enter the page size ");
	scanf("%d",&s);
	totPages = n/s;
	for(i=0;i<totPages;i++){
		r = rand()%totPages;
		if(arr[r]==1){
			i--;
			continue;
			
		}
		arr[r]=1;
		mm[i].pno=r;
		mm[i].start_data=i*s;
		fno[r]=i;
		
	}
	printf("\n FrameNumber\t PageNumber\t \n");
	for(i=0;i<totPages;i++){
		printf("%d\t %d\n ",i,mm[i].pno);
	}
	printf("\n Enter the logical address page number");
	scanf("%d",&pno);
	printf("\n offset ");
	scanf("%d",&offset);
	if(pno>=totPages||offset>s){
		printf("\n Invalid input ");
	}
	phy_add=mm[fno[pno]].start_data+offset;
	printf("Physical address is %d ",phy_add);
	
}
