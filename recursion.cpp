#include <iostream>
using namespace std;

// int alphano=["zero","one"...............till nine]
int factorial(int n)
{
	if(n==0)	return 1;
	int ans=n*factorial(n-1);
	return ans;

	//time=O(n)
	//space=O(n)

}
int fibonacci(int n){
	//nth element is sum of n-1 and n-2 element.
	if(n==0)	return 0;
	else if(n==1)	return 1;
	int ans =fibonacci(n-1)+fibonacci(n-2);
	return ans;

	//time =O(2^n)
	//space=O(n)
}
bool isSorted(int arr[],int n){
	if(n==0 || n==1)	return true;
	if(arr[0]<arr[1] && isSorted(arr+1,n-1))	return true;
	return false;

}
bool isSortedtwo(int arr[],int i,int n){
	//2nd method to know whether array is sorted recursively
	if(i=n-1)	return true;
	if(arr[i]<arr[i+1] && isSortedtwo(arr,i+1,n))	return true;
	return false;

}

void printDigitdec(int n){
	if(n==0)	return;
	cout<<n<<" ";
	printDigitdec(n-1);

}
void printDigitinc(int n){
	if(n==0)	return;
	printDigitinc(n-1);

	cout<<n<<" ";


}
int firstocc(int arr[],int n,int key,int index){
     //first  occurence of number in  array
   if(index==n) return -1;
   if(arr[index]==key)  return index;
    return firstocc(arr,n,key,index+1);
  
    


}



int lastocc(int arr[],int n,int key){
     //last  occurence of number in  array

	if(n==0){
		return -1;
	}
	if(arr[n]==key) return n;
	return lastocc(arr,n-1,key);
}
int powerof(int a,int n){
	if(n==0)	return 1;
	int ans =a*powerof(a,n-1);
	
	return ans;
}

int power_opt(int a,int n){
	if(n==0)	return 1;
	long int ans=power_opt(a,n/2);
	long int ans_sq=ans*ans;
	if(n&1)	return a*ans_sq;
	return ans_sq;
}

void bubble_sort(int arr,int n){
	if(n==1)	return;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])	swap(arr[i],arr[i+1]);

	}
	bubble_sort(arr,n-1);
}
void bubble_sort2(int arr,int n,int j){
	if(n==1)	return;
	if(j==n-1){
		bubble_sort2(arr,n-1,0);
	}

		if(arr[j]>arr[j+1])	swap(arr[j],arr[j+1]);

	bubble_sort2(arr,n,j+1);
}

void spell(int n){
	if(n==0)	return;
	int last_digit=n%10;
	spell(n/10);
	cout<<spell(alphano(last_digit));
}
int main(){
	// int n=5;
	// cout<<fibonacci(n-1)<<endl;

	// int arr[]={1,2,4,5};
	// int len=sizeof(arr)/sizeof(int);	
	// cout<<(isSorted(arr,len));


	// int n=10;printDigitdec(n);
	// printDigitinc(n);

 // int arr[]={1,2,5,4,6,7};
 //    int key=7;
 //    int n=sizeof(arr)/sizeof(int);
 //   cout<< firstocc(arr,n,key,0)<<endl;


	cout<<power_opt(2,10);

}