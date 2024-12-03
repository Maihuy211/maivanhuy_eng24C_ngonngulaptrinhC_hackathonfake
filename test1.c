# include <stdio.h>
int main(){
	int choice;
	do{
		printf("\nMENU\n");
		printf("1.Nhap so phan tu can nhap va cac gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra cac gia tri lon nhat cua mang\n");
        printf("4.In ra cac phan tu la so nguyen to trong mang\n");
		printf("6.Them mot phan tu trong mang\n");
		printf("5.Xoa mot phan tu vao trong mang\n");
		printf("7.Sap xep mang theo thu tu tang dan\n");
		printf("8.Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cua phan tu do\n");
		printf("9.Thoat\n");
	    printf("nhap lua chon(1-9): ");
	    scanf("%d",&choice);
	    printf(" \n");
	    switch(choice){
	    	//1.Nhap so phan tu can nhap va cac gia tri cac phan tu
			int n,i,j;
			int a[100];
			case 1:
				printf("Nhap so phan tu: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("a[%d]= ",i);
					scanf("%d",&a[i]);
				}
				printf(" \n");
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la: \n");
				for(i=0;i<n;i++){
					printf("a[%d]= %d\n",i,a[i]);
				}
				printf(" \n");
				break;
			int max;
			case 3:
				max=a[0];
				for(i=0;i<n;i++){
					if(a[i]>max){
						max=a[i];
					}
				}
				printf("gia tri lon nhat trong mang la: %d",max);
				printf(" \n");
				break;
			case 4:
				printf("cac phan tu la so nguyen to trong mang la: ");
				for(i=0;i<n;i++){
					if(a[i]<10){
						switch(a[i]){
							case 1:
							case 2:
							case 3:
							case 5:
							case 7:
								printf("%d ",a[i]);
						}
					}else if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0){
						printf("%d ",a[i]);
					}
				}
			    printf(" \n");
				break;
			int val,pos;
			case 5:
				printf("nhap gia tri muon them: ");
				scanf("%d",&val);
				printf("nhap vi tri muon them: ");
				scanf("%d",&pos);
				if(pos>n||pos<0){
					printf("vi tri khong hop le");
				}else{
					for(i=n;i>=pos;i--){
						a[i]=a[i-1];
					}
					a[pos]=val;
					n++;
				}
			    printf(" \n");
				break;
			case 6:
			    printf("nhap vi tri muon xoa: ");
				scanf("%d",&pos);
				if(pos>n||pos<0){
					printf("vi tri khong hop le");
				}else{
					for(i=pos;i<n-1;i++){
						a[i]=a[i+1];
					}
					n--;
				}
			    printf(" \n");
				break;	
			int k,temp;
			case 7:
				for(i=0;i<n;i++){
					for(k=0;k<n-1-i;k++){
						if(a[k+1]<a[k]){
							temp=a[k];
							a[k]=a[k+1];
							a[k+1]=temp;
						}
					}
				}
				printf(" \n");
				break;
			int x,check;
			case 8:
				check=-1;
				printf("nhap mot so bat ki: ");
				scanf("%d",&x);
				for(i=0;i<n;i++){
					if(a[i]==x){
						check=i;
						break;
					}
				}
				if(check==-1){
					printf("khong co trong mang\n");
				}else{
					printf("vi tri cua phan tu giong %d la: %d",x,i);
				}
				printf(" \n");
				break;
			case 9:
				printf(" \n");
				break;
			default:
				printf("khong hop le");
	    }   
    }while(choice!=8);
	return 0;
	}
