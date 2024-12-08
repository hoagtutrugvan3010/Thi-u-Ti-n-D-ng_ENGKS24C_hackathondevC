#include <stdio.h>
int main()
{
	int value, arr[100], index, sum, temp=0, max=arr[0], max2=arr[0], min=arr[0], min2=arr[0], value2, addindex, key, k, start, end, mid, sapxep[index],truoc=0, sau=index-1;
	do
	{
		printf("\nMenu\n");
		printf("1.Nhap so luong va gia tri cho cac phan tu\n");
		printf("2.In mang(ar[0]=...,arr[1]=...)\n");
		printf("3.Dem so luong so hoan hao\n");
		printf("4.Dem so luong so nguyen to\n");
		printf("5.Tim gia tri lon thu 2 (khong sap xep)\n");
		printf("6Tim gia tri nho thu 2 (khong sap xep)\n");
		printf("7.Them phan tu tai vi tri\n");
		printf("8.Xoa phan tu tai vi tri\n");
		printf("9.Sap xep mang tang dan (sap xep chen)\n");
		printf("10.Sap xep mang giam dan (sap xep chen)\n");
		printf("11.Tim kiem phan tu(Tim kiem nhi phan)\n");
		printf("12.Xoa phan tu trung lap va in in phan tu doc nhat\n");
		printf("13.Sap xep va hien thi so chan dung truoc, so le sung sau\n");
		printf("14. Dao nguoc mang\n");
		printf("15.Thoat\n");
		printf ("moi ban nhap lua chon :");
		scanf ("%d",&value);
		switch (value)
		{
			case 1:
				printf ("moi nhap kich co:");
				scanf ("%d",&index);
				for (int i=0; i<index; i++)
				{
					printf ("moi nhap gia tri[%d]:",i);
					scanf ("%d",&arr[i]);
				}
				printf ("\n");
				break;
			case 2:
				for (int i=0; i<index; i++)
				{
					printf ("arr[%d] = %d, ",i,arr[i]);
				}
				printf ("\n");
				break;
			case 3:
				for (int i=0; i<index; i++)
				{
					sum=0;
					for (int j=1; j<arr[i]; j++)
					{
						if(arr[i]%j==0)
						{
							sum=sum+j;
						}
					}
					if (sum==arr[i])
					{
						temp++;
					}
				}
				printf ("co %d so hoan hao",temp);
				printf ("\n");
				break;
			case 4:
				temp=0;
				for (int i=0; i<index; i++)
				{
					if (arr[i]<10)
					{
						switch (arr[i])
						{
							case 1:
								temp++;
								break;
							case 2:
								temp++;
								break;
							case 3:
								temp++;
								break;
							case 5:
								temp++;
								break;
							case 7:
								temp++;
								break;		
						}
					} else if (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0) 
					{
						temp++;
						break;
					}
				}
				printf ("co %d so nguyen to",temp);
				printf ("\n");
				break;
			case 5:
				for (int i=0; i<index; i++)
				{
					if (arr[i]>max)
					{
						max=arr[i];
					}
				}
				for (int i=0; i<index; i++)
		        {
		        	if (arr[i]==max)
		        	{
		        		continue;
					}else if (arr[i]>max2)
					{
						max2=arr[i];
					}
				}	
				printf ("so lon thu 2 la:%d",max2);
				printf ("\n");
				break;
			case 6:
				for (int i=0; i<index; i++)
				{
					if (arr[i]<min)
					{
						min=arr[i];
					}
				}
				for (int i=0; i<index; i++)
				{
					if (arr[i]!=min)
					{
						continue;
					}else if (arr[i]<min)
					{
						min2=arr[i];
					}
				}
				printf ("so nho thu 2 la:%d ",min2);
				printf ("\n");
				break;
			case 7:
				printf ("moi nhap gia tri muon them:");
				scanf ("%d",&value2);
				printf ("moi nhap vi tri:");
				scanf ("%d",&addindex);
				for (int i=index; i>=addindex; i--)
				{
					arr[i]=arr[i-1];
				}
				arr[addindex]=value2;
				index++;
				for (int i=0; i<index; i++)
				{
					printf ("%d ",arr[i]);
				}
				printf ("\n");
				break;
			case 8:
				addindex=0;
				printf ("moi nhap gia tri muon xoa:");
				scanf ("%d",&addindex);
				for (int i=addindex-1; i<index; i++)
				{
					arr[i]=arr[i+1];
				}
				index--;
					for (int i=0; i<index; i++)
				{
					printf ("%d ",arr[i]);
				}
				printf ("\n");
				break;
			case 9:
				for (int i=0; i<index; i++)
				{
					key=arr[i];
					k=i-1;
					while (k>=0 && arr[k]>key)
					{
						arr[k+1]=arr[k];
						k=k-1;
					}
					arr[k+1]=key;
				}     
				for (int i=0; i<index; i++)
				{
					printf ("%d ",arr[i]);
				}
				printf ("\n");
				break;
			case 10:
			    	k=0;
			       key=0;
			    for (int i=0; i<index; i++)
				{
					key=arr[i];
					k=i-1;
					while (k>=0 && arr[k]<key)
					{
						arr[k+1]=arr[k];
						k=k-1;
					}
					arr[k+1]=key;
				}     
				for (int i=0; i<index; i++)
				{
					printf ("%d ",arr[i]);
				}
				printf ("\n");
				break;
			case 11:
				value2=0;
				printf ("moi ban nhap gia tri can tim:");
				scanf ("%d",&value2);
				start=0;
				end=index-1;
				temp=-1;
				while (start<=end)
				{
					mid=start+(end-start)/2;
					if (arr[mid]==value2)
					{
						temp=mid;
						break;
					}
					if (arr[mid]<value2)
					{
						start=mid+1;
					} else
					{
						start=mid-1;
					}
				}
				if (temp!=0)
				{
					printf ("%d duoc tim thay tai vi tri %d",value2,temp+1);
				} else 
				{
					printf ("khong tim thay");
				}
				printf ("\n");
				break;
			case 12:
				for (int i=0; i<index; i++)
				{
					for (int j=j+1; j<index; j++)
					{
						if(arr[i]==arr[j])
						{
							for (int f = j; f < index - 1; f++) 
							{
							  arr[f] = arr[f + 1]; 
							}
							index--;
							j--;
						}
					}
				}
				printf("Mang sau khi xoa cac phan tu trung lap: ");
				for (int i=0; i<index; i++)
				{
					printf ("%d ",arr[i]);
			    }
			    printf ("\n");
			case 13:
				printf ("mang khi sap xep:");
				for (int i=0; i<index; i++)
				{
					if(arr[i]%2==0)
					{
						sapxep[truoc++]=arr[i];
						temp++;
					}else if (arr[i]%2!=0)
					{
						sapxep[sau--]=arr[i];
					}
				}
				for (int i=0; i<index; i++)
				{
					arr[i]=sapxep[i];
				}
				for (int i=0; i<index; i++)
				{
					printf ("%d ", arr[i]);
				}
				printf ("\n");
				break;
			case 14:
				printf ("mang sau dao nguoc:");
				for (int i=index-1; i>=0; i--)
				{
					printf ("%d ",arr[i]);
				}
				printf ("\n");
				break;
			case 15:
				return 0;
				break;
			default:
				printf ("khong hop le");
				break;
				
		}
	} while (value!=0);
}

