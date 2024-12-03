# include<stdio.h>
int main(){
	int choice;
	do{
	printf("\nMENU\n");
	printf("1.Nhap kich co va gia tri phan tu cua mang\n");
	printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
	printf("3.In ra cac phan tu nam tren duong bien va tinh tich\n");
	printf("4.In ra cac phan tu nam tren duong cheo chinh\n");
	printf("5.In ra cac phan tu nam tren duong cheo phu\n");
	printf("6.Sap xep duong cheo chinh theo thu tu tang dan\n");
	printf("7.Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
	printf("8.Thoat\n");
	printf(" \n");
	printf("Nhap lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		//1.Nhap kich co va gia tri phan tu cua mang
		int n,m;
		int a[100][100];
		int i,j;
		case 1:
			printf("Nhap so hang: ");
			scanf("%d",&n);
			printf("Nhap so cot: ");
			scanf("%d",&m);
			printf("nhap gia tri cho mang:\n");
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("a[%d][%d]= ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
			printf(" \n");
			break;
	    //2.In gia tri cac phan tu cua mang theo ma tran
	    case 2:
	    	printf("gia tri cac phan tu trong mang la:\n");
	    	for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("%d ",a[i][j]);
	    	    }
	    	printf(" \n");
			}
	    	printf(" \n");
			break;
		//3.In ra cac phan tu nam tren duong bien va tinh tich
        long long result;
		case 3:
			result=1;
			printf("cac phan tu nam tren duong bien la: \n");
		    for (j=0;j<m;j++){
                printf("%d ",a[0][j]);
                result=result*a[0][j];
			}
	        for (i=1;i<n-1;i++){
                printf("%d ",a[i][m-1]);
                result=result*a[i][m-1];
			}
            if(n>1){
                for (j=m-1;j>=0;j--){
                    printf("%d ",a[n-1][j]);
                    result=result*a[n-1][j];
				}
            }
	        if (m>1){
                for(i=n-2;i>0;i--){
                    printf("%d ",a[i][0]);
                    result=result*a[i][0];
				}
            }
			printf("\ntich cac phan tu nam tren duong bien la: %d",result);
			printf(" \n");
			break;
		//4.In ra cac phan tu nam tren duong cheo chinh
		case 4:
			printf("cac phan tu nam tren duong cheo chinh la: \n");
			if(n==m){
			    for(i=0;i<n;i++){
					printf("%d ",a[i][i]);
			    }
	    	}else{
	    		printf("mang khong co duong cheo chinh");
			}
			printf(" \n");
		    break;
		//5.In ra cac phan tu nam tren duong cheo phu
		case 5:
			printf("cac phan tu nam tren duong cheo phu la: \n");
			if(n==m){
			    for(i=0;i<n;i++){
					printf("%d ",a[i][n-1-i]);
			    }
	    	}else{
	    		printf("mang khong co duong cheo phu");
			}
			printf(" \n");
			break;
		//6.Sap xep duong cheo chinh theo thu tu tang dan
		int k[100],temp;
		case 6:
			if(n==m){
			    for(i=0;i<n;i++){
					k[i]=a[i][i];
			    }
	    	}else{
	    		printf("mang khong co duong cheo chinh");
			}
			printf ("mang sau khi xap xep: ");
			for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if (k[j+1]<k[j]){
                        temp=k[j];
                        k[j]=k[j+1];
                        k[j+1]= temp;
                    }
                }
		    }
		    for(i=0;i<n;i++){
		        printf("%d ",k[i]);
			}
		    printf(" \n");
			break;
		//7.Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang
		int x,check1,check2;
		case 7:
			check1=-1;
			printf("nhap mot so: ");
			scanf("%d",&x);
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					if(a[i][j]==x){
						check1=i;
						check2=j;
						break;
					}
				}
		    }
            if(check1==-1&&check2==-1){
            	printf("khong co trong mang");
			}else{
				printf("vi tri cua phan tu o hang la: %d\n",i);
				printf("vi tri cua phan tu o cot la: %d\n",j);
			}
			printf(" \n");
			break;
		case 8:
			printf(" \n");
			break;
	    default:
	    	printf("khong hop le");
	
	
	}
	}while(choice!=8);
	return 0;
	}
