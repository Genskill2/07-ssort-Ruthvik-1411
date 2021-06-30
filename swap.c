void swap_max(int arr[], int l, int pos){
int temp=0;
int max=pos;
for(int i=pos;i<l;i++){
	if(arr[i]>arr[max]){
	max=i;
	}
}
temp=arr[max];
arr[max]=arr[pos];
arr[pos]=temp;
}

void ssort(int arr[], int l){
for(int i=0;i<l;i++){
swap_max(arr,l,i);
}
for(int i=0;i<l;i++){
printf("|%i|",arr[i]);
}
printf("\n");
}
