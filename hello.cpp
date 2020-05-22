
/*#include<iostream>
using namespace std;
int main(){
	float fah,cel;
	cin>>fah;
	cel=(fah-32)/9/5;


	cout<<cel;
	return 0;
	
}*/


/*8953
#include<iostream>
using namespace std;
int main()
{
	int a[2][2]={{1,3},{2,4}};
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout<<a[j][i]<<endl;
		}
	}
}
*/

/*904
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	double a[5]={6, 7.5, 2.1, 2.0, 0};
	for (int i = 0; i < 5; ++i){
		
		if(a[i]<2.5){
			cout.precision(2);
			cout<<fixed<<a[i]<<endl;
			break;}
		else if(a[i]<!2.5){
				cout<<"Not Found";
			}
		
	
}

}*/
	

/*907
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	double a[5]={6, 7.5, 5.1, 7.0, 80};
	for (int i = 0; i < 5; ++i){
		
		if(a[i]<2.5){
			cout.precision(2);
			cout<<fixed<<a[i]<<endl;
			break;}
		else if(a[i]<!2.5){
				cout<<"Not Found";
			}
		}

}
*/	
/*910
#include<iostream>
using namespace std;
int main(){

	double a[3]={5.2, -2, 4};
	double s=0;
	
	for (int i = 0; i < 3; ++i)
	{
		if(a[i]>0){
			int x=sizeof(a[i])/a[i];
			cout<<x<<endl;
			s+=a[i];
			double n=s/x;
			cout.precision(2);
			cout<<fixed<<n<<endl;}
	
		}

	}
*/

/*921
#include<iostream>
using namespace std;
int main(){
	double a[5]={6,-7.5, -2.0, 2.0, 0};
	double s=0;
	for (int i = 0; i < 5; ++i)
	{
		if(a[i]<0){
			int x=sizeof(a[i])/sizeof(int);
			s+=a[i];
			cout<<x<<endl;
			cout.precision(2);
			cout<<fixed<<s<<endl;
		}
	}
}
*/

/*922 surusdurme
#include<iostream>
using namespace std;
int main(){
	int n=4;
	int a[n]={1,2,3,4};
	int temp=a[3];
	for (int i = 3; i >=0; --i)
	{
		a[i+1]=a[i];
		cout<<a[i]<<endl;
	}
	a[0]=temp;

	for (int i = 0; i < 4; ++i)
	{
		cout<<a[i]<<" ";
	}
}
*/



/*
#include <iostream>
using namespace std;

int main()
{	
	int b=7;
	int a[b]={3, 5, (-7), 7, 5, (-9), (-4)};
	
	int max=a[6];
	int min=a[6];


	int n = sizeof(a) / sizeof(a[0]);

	int i=0;
    for (int i = 0; i <= n-1; ++i){
    
    	if(a[i]>max);
    	{
    		a[i]=max;
		}
		if(a[i]<min)
		{
			a[i]=min;
		}
	}   
    cout<<max<<"	"<<min<<endl;
}
*/

/*917
#include<iostream>
using namespace std;
int main(){
	int n=5;
	double A[n]={6, 7.5, 2.1, 2.0, 0};

	int min=A[0], max=A[0];
	for (int i = 0; i < n; ++i)
	{
		if(A[i]<min){
			min=A[i];
			}
		if(A[i]>max){
			max=A[i];
		}   
	}	
	double x=max*2;
	cout.precision(2);

	cout<<fixed<<x;

}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int n=5;
	double A[n]={6, 7.5, 2.1, 2.0, 0};
		

	double min=A[0], max=A[0];
	for (int i = 0; i < n; ++i)
	{
		if(A[i]<min){
			min=A[i];
			}
		if(A[i]>max){
			max=A[i];
		}

	}
		
		double x=max;
		cout.precision(2);
		cout<<fixed<<x<<endl; 
}
*/




// #include<iostream>
// using namespace std;

// int main(){
//   //declaring array
//   int array[5];
//   cout<<"Enter 5 numbers randomly : "<<endl;
//   for(int i=0; i<5; i++)
//   {
//     //Taking input in array
//     cin>>array[i];
//   }
//   cout<<endl;
//   cout<<"Input array is: "<<endl;

//   for(int j=0; j<5; j++)
//   {
//     //Displaying Array
//     cout<<"\t\t\tValue at "<<j<<" Index: "<<array[j]<<endl;
//   }
//   cout<<endl;
//   // Bubble Sort Starts Here
  
//   for(int i2=0; i2<=4; i2++)
//   {
//     for(int j=0; j<4; j++)
//     {
//       //Swapping element in if statement
//       if(array[j]>array[j+1])
//       {
//         int temp=array[j];
//         array[j]=array[j+1];
//         array[j+1]=temp;
//       }
//     }
//   }
//   // Displaying Sorted array
//   cout<<"  Sorted Array is: "<<endl;
//   for(int i3=0; i3<5; i3++)
//   {
//     cout<<"\t\t\tValue at "<<i3<<" Index: "<<array[i3]<<endl;
//   }
//   return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
// 	int a[5];
// 	for (int v = 0; v < 5; ++v)
// 	{
// 		cin>>a[v];
// 	}
// 	cout<<"	"<<endl<<endl;


// 	for (int j = 0; j < 5; j++)
// 	{
	
	
// 		for (int i = j; i < 5; i++)
// 	{	
// 		if (a[j]>a[i])
// 	{
// 		int temp=a[j];
// 		a[j]=a[i];
// 		a[i]=temp;

// 	}
	
		
// 	}

// }

// for (int i = 0; i < 5; i++)
// 	cout<<a[i]<<endl;
	

// }


// #include<iostream>
// using namespace std;

// int ustal(int eded, int ust){
// 	int netice=1;
// 	for (int i = 0; i <ust; ++i)
// 	{
// 		netice*=eded;
// 	}
// 	return netice;
// }


// int main(){
// 	int eded;
// 	int ust;
// 	cin>>eded>>ust;
	
// 	cout<<ustal(eded,ust)<<endl;
	
// }

// #include<iostream>
// using namespace std;
// void degistir(int a,int b){
// 	int temp=a;
// 	a=b;
// 	b=a;
// 	a=120;
// 	b=240;
// }

// int main(){
// 	int sayi1=5,sayi2=10;
// 	cout<<"sayi1..:"<<sayi1<<endl;
// 	cout<<"sayi2..:"<<sayi2<<endl;

// 	degistir(sayi1,sayi2);

// 	cout<<"sayi1..:"<<sayi1<<endl;
// 	cout<<"sayi2..:"<<sayi2<<endl;

// } 


// #include<iostream>
// using namespace std;

// int main(){
// 	int *p=new int[10];
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		p[i]=i;
// 		cout<<p[i]<<endl;
// 	}

// 	int *k=new int[20];

// 	for (int i = 0; i < 10; ++i)
// 	{
// 		k[i]=p[i];
// 	}

// 	delete [] p;
// 	p=k;
// 	for (int i = 0; i < 20; ++i)
// 	{
// 		p[i]=i;
// 		cout<<p[i]<<endl;
// 	}

// }


// #include<iostream>
// using namespace std;

// struct dortbucaq
// {	
// 	int en;
// 	int uzun;
// };

// int sahe(dortbucaq d1){
// 	d1.en=20;
// 	d1.uzun=40;
// 	return d1.en*d1.uzun;
// }


// int main()
// {
// 	dortbucaq d1;
// 	d1.en=30;
// 	d1.uzun=60;
// 	cout<<sahe(d1)<<endl;	
// }

// #include<iostream>
// using namespace std;
// class dortbucaq
// {
// private:
// 	int en;	
// 	int uzun;
// 	int sahe;

// public:
// 	~dortbucaq(){
// 		cout<<"ay-ay"<<endl;

// }
// 	void daxilet(){
// 		cout<<"en daxil et..:";
// 		cin>>en;
// 		cout<<"uzun daxil et..:";
// 		cin>>uzun;
// 	}

// 	void sahetap(){
// 		sahe=en*uzun;
// 		cout<<"dortbucagin sahesi..:"<<sahe<<endl;
// 	}
// };
// int main()
// {
// 	dortbucaq d1;
// 	d1.daxilet();
// 	d1.sahetap();
// }

// #include<iostream>
// using namespace std;
// class Intarray(){
// private:
// 	int*p;//baslangic unvani
// 	int en;//elementlerin sayi
// 	int sn;//max alabileceyi say
// public:
// 	Intarray(){
// 		p=new int[10];
// 		sn=10;
// 		en=0;
// 	}
// 	Intolcu(int olcu){
// 		p= new int[olcu];
// 	}
// };
// int main()
// {
// 	Intarray d;
	
// }

// #include<iostream>
// using namespace std;
// int f(int num){
// 	if(num==1)
// 		return 1;
// 	return num*f(num-1);
// }
// int main()
// {
	
// 	cout<<f(4)<<endl;
// }

// #include<iostream>
// using namespace std;
// int u(int a,int b)
// {
// 	int sum=1;
// 	for (int i = 0; i < b; ++i)
// 		sum*=a;
// 	return sum;
// }
// int ur(int a,int b)
// {
// 	if(b==1)
// 		return a;
// 	return a*ur(a,b-1);
// }

// int main()
// {
// 	cout<<u(2,3);

// 	cout<<endl<<ur(2,3);
	

// }

// #include<iostream>
//  using namespace std;
//  int main()
// {
//     int i,j,n,loc,temp,min,a[5];
//     cout<<"Enter the number of elements:";
//     cin>>n;
//     cout<<"\nEnter the elements\n";
 
//     for(i=0;i<n;i++)
//         cin>>a[i];
    
 
//     for(i=0;i<n-1;i++)
//     {
//         min=a[i];
//         loc=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(min>a[j])
//             {
//                 min=a[j];
//                 loc=j;
//             }
//         }
 
//         temp=a[i];
//         a[i]=a[loc];
//         a[loc]=temp;
//     }
 
//     cout<<"\nSorted list is as follows\n";
//     for(i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
 
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void selectionSort(int a[], int n){
// for(int i = 0; i < n-1; i++){
// int minIndex = i;
// for(int j = i + 1; j < n; j++){
// if(a[j] < a[minIndex]){
// minIndex = j;
// }
// }
// swap(a[i], a[minIndex]);
// }
// }
// int main()
// {
// int a[] = {64, 34, 25, 12, 22, 11, 90};
// int n = 7;
// selectionSort(a, n);
// for(int i = 0; i < n; i++){
// cout<<a[i]<<" ";
// }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void hello(){
// cout<<"Hello World"<<endl;
// hello();
// }
// int main()
// {
// hello();
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n, faktorial = 1;
// cin>>n;
// for(int i = 1; i <= n; i++){
// faktorial = faktorial*i;
// }
// cout<<faktorial;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n){
// if(n == 0 || n == 1){
// return n;
// }
// return fib(n-1) + fib(n-2);
// }
// int main()
// {
// cout<<fib(5)<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n = 5;
// int fib[n+1];
// fib[0] = 0;
// fib[1] = 1;
// for(int i = 2; i <= n; i++){
// fib[i] = fib[i-1] + fib[i-2];
// }
// cout<<fib[n]<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void digits(int n){
// if(n == 0){
// return;
// }
// digits(n/10);
// cout<<n%10<<" ";
// }
// int main()
// {
// int n = 15234;
// digits(n);
// }


// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int a[], int l, int r, int x)
// {
// if(l <= r){
// int m = (l + r)/2;
// if(x == a[m]){
// return m;
// }
// if(x > a[m]){
// return binarySearch(a, m + 1, r, x);
// }
// return binarySearch(a, l, m - 1, x);
// }
// return -1;
// }
// int main(){
// int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
// int n = 10;
// cout<<binarySearch(a, 0, n-1, 23)<<endl;
// cout<<binarySearch(a, 0, n-1, 5)<<endl;
// cout<<binarySearch(a, 0, n-1, 45)<<endl;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int a[], int l, int r, int x)
// {
// while(l <= r){
// int m = (l + r)/2;
// if(x == a[m]){
// return m;
// }
// if(x > a[m]){
// l = m + 1;
// }
// else{
// r = m - 1;
// }
// }
// return -1;
// }
// int main()
// {
// int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
// int n = 10;
// cout<<binarySearch(a, 0, n-1, 23)<<endl;
// cout<<binarySearch(a, 0, n-1, 5)<<endl;
// cout<<binarySearch(a, 0, n-1, 45)<<endl;
// }



// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// int a[n];
// for(int i = 0; i < n; i++){
// cin>>a[i];
// }
// cout<<binary_search(a, a + n, 5)<<endl;
// cout<<binary_search(a, a + n, 2)<<endl;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// int a[n];
// for(int i = 0; i < n; i++){
// cin>>a[i];
// }
// cout<<upper_bound(a, a + n, 5) - a<<endl;
// cout<<lower_bound(a, a + n, 5) - a<<endl;
// cout<<upper_bound(a, a + n, 3) - a<<endl;
// cout<<lower_bound(a, a + n, 3) - a<<endl;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// int a[n];
// for(int i = 0; i < n; i++){
// cin>>a[i];
// }
// sort(a, a + n);
// for(int i = 0; i < n; i++){
// cout<<a[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int a[8]={2,5,8,12,16,23,38,56};
// 	int axtarilan=23;
// 	int eb=7;
// 	int ek=0;
// 	int bay=0;

// 	while(eb-ek>1){
// 		int baxilan=(eb+ek)/2;
// 		if (a[baxilan]==axtarilan)
// 		{
// 			bay=1;
// 			cout<<"tapilan: "<<baxilan;
// 			break;
// 		}
// 		else if(a[baxilan]<axtarilan)
// 			ek=baxilan;
// 		else
// 			eb=baxilan;
// 	}
// 	if(bay==0)
// 		cout<<"eded tapilmadi"<<endl;
// }


// #include<iostream>
// using namespace std;
// int partition(int arr[], int low, int high) 
// {
//     int temp;
//     int pivot = arr[high]; // assuming last element of the array as the pivot element
//     int i = (low - 1); // assuming the index of i pointer as one position less than the first element 
//     for (int j = low; j <= high - 1; j++) // assuming the index of j pointer as the first position
//     { 

//         // If current element is smaller than or equal to pivot 
//         if (arr[j] <= pivot) 
//         { 
//             i++; // increment index of i pointer and swap the elemets at index i and j
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         } 
//     } 

//     // swapping the pivot (last) element and element at i + 1 index
//     temp = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = temp;

//     // returning the index of pivot element having lesser elements to the left and greater elements to the right
//     return (i + 1); 
// } 
// void quick_sort(int arr[], int low, int high) 
// { 
//     if (low < high) 
//     { 

//         // partitioning the single array into two sub-arrays 
//         int pi = partition(arr, low, high); 

//         // sorting the sub-arrays
//         quick_sort(arr, low, pi - 1); 
//         quick_sort(arr, pi + 1, high); 
//     } 
// } 
// int print(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n, i;
//     cin >> n;
//     int arr[n];
//     for(i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     quick_sort(arr, 0, n - 1);
//     print(arr, n);
// }





// #include<iostream>
// using namespace std;

// int quickSort(int arr[], int left, int right) {

//       int i = left, j = right;

//       int tmp;

//       int pivot = arr[(left + right) / 2];

 

//       /* partition */

//       while (i <= j) {

//             while (arr[i] < pivot)

//                   i++;

//             while (arr[j] > pivot)

//                   j--;

//             if (i <= j) {

//                   tmp = arr[i];

//                   arr[i] = arr[j];

//                   arr[j] = tmp;

//                   i++;

//                   j--;

//             }

//       };

 

//       /* recursion */

//       if (left < j)

//             quickSort(arr, left, j);

//       if (i < right)

//             quickSort(arr, i, right);

// }

// int main(){
// 	int arr[5]={2,1,3,5,4};
// 	int left=0;
// 	int right=4;
	
// 	cout<<quickSort(arr[],left,right);


// }

// 





// #include <iostream>
// #include <vector> // Vector
// #include <algorithm> // Sıralama (sort) algoritması

// using namespace std;

// int main()
// {

//     vector<string> kisiler;
//     kisiler.push_back("Yusuf SEZER");
//     kisiler.push_back("Ramazan SEZER");
//     kisiler.push_back("Sinan SEZER");
//     kisiler.push_back("Mehmet SEZER");

//     for(auto current : kisiler)
//     {
//         cout << current << endl;
//     }

 

//     for(auto current : kisiler)
//     {
//         cout << current << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void print(vector<int>v){
// for(int i = 0; i < v.size(); i++){
// cout<<v[i]<<" ";
// }
// cout<<endl;
// }
// int main()
// {
// vector<int>v; //vector təyin edilir.
// v.push_back(5); // vektorun sonuna 5 əlavə edilir.
// v.push_back(3); // vektorun sonuna 3 əlavə edilir.
// v.push_back(4); // vektorun sonuna 4 əlavə edilir.
// print(v); // çıxışda 5 3 4 verilir.
// v.pop_back(); // sonuncu element silinir.
// v.erase(v.begin()); // birinci element (0-cı element) silinir.
// print(v); // çıxışda 3 verilir.
// v.push_back(6); // vektorun sonuna 6 əlavə edilir.
// v.push_back(2); // vektorun sonuna 2 əlavə edilir.
// v.insert(v.begin(), 1); // vektorun əvvəlinə (0-cı indeksə) 1 əlavə edilir.
// v.insert(v.begin() + 2, 8); // vektorun 3-cü indeksinə 8 əlavə edilir.
// print(v); // çıxışda 1 3 8 6 2 verilir.
// cout<<v.size()<<endl; // çıxışda 5 (vektordakı elementlərin sayı) verilir.
// sort(v.begin(), v.end()); // vektor artan sıra ilə düzülür.
// reverse(v.begin(), v.end()); // vektor tərsinə çevrilir.
// print(v); // çıxışda 8 6 3 2 1 verilir.
// v.clear(); // vektordakı bütün elementlər silinir.
// cout<<v.size()<<endl; // çıxışda 0 verilir.
// }

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
// queue<int>q; //int data tipli queue təyin edilir.
// q.push(8); //növbəyə 8 daxil edilir q = {8}.
// q.push(5); //növbəyə 5 daxil edilir q = {5, 8}.
// q.push(10); //növbəyə 10 daxil edilir q = {10, 5, 8}.
// q.pop(); //növbədən ilk element (başdakı) çıxarılır q = {10, 5}.
// q.push(6); //növbəyə 6 daxil edilir q = {6, 10, 5}.
// cout<<q.front()<<endl; //çıxışda 5 verilir.
// cout<<q.size()<<endl; //elementlərin sayı = 3.
// while(q.size() != 0){
// cout<<q.front()<<" "; //çıxışda 5 10 6 verilir.
// q.pop();
// }
// return 0;
// }














// //911
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){

//     float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
//     cout << "Enter coefficients a, b and c: ";
//     cin >> a >> b >> c;
//     discriminant = b*b - 4*a*c;

// if(a>0){    
//     if (discriminant > 0) {
//         x1 = (-b + sqrt(discriminant)) / (2*a);
//         x2 = (-b - sqrt(discriminant)) / (2*a);
     
//         if(x1>x2)
//         	cout<<"Two roots"<<" "<<x2<<" "<<x1;
    
//         else if(x2>x1)
//         	cout<<"Two roots"<<" "<<x1<<" "<<x2;
        

    
//     else if (discriminant == 0) {
      
//         x1 = (-b + sqrt(discriminant)) / (2*a);
//         cout << "One root " << x1 << endl;
//     }

//     else {
//         realPart = -b/(2*a);
//         imaginaryPart =sqrt(-discriminant)/(2*a);   
//         cout<<"No roots";}
        
//     return 0;
// }
// }
// }

// //8599
// #include <bits/stdc++.h>
// using namespace std;
// void digits(int n){
// if(n == 0){
// return;
// }
// digits(n/10);
// cout<<n%10<<" ";
// }
// int main()
// {
// int n;
// cin>>n;
// digits(n);
// }

////8607,8603,8600
// #include <iostream>
// using namespace std;
// int main()
// {
   
//    int minler,sayi,yuzler,onlar,birler;
//    cin>>sayi;
//    if(1000<=sayi<=9999){

//    minler=sayi/1000;
//    sayi=sayi-(minler*1000);
//    yuzler=sayi/100;
//    sayi=sayi-(yuzler*100);
//    onlar=sayi/10;
//    sayi=sayi-(onlar*10);
//    birler=sayi;
//    cout<<minler*minler+yuzler*yuzler+onlar*onlar+birler*birler;
// }
   
// }


////8602
// #include <iostream>
// using namespace std;
// int main()
// {
   
//    int minler,sayi,yuzler,onlar,birler;
//    cin>>sayi;
//    if(100<=sayi<=1000000000){

//    minler=sayi/1000;
//    sayi=sayi-(minler*1000);
//    yuzler=sayi/100;
//    sayi=sayi-(yuzler*100);
//    onlar=sayi/10;
//    sayi=sayi-(onlar*10);
//    birler=sayi;
//    cout<<yuzler;
// }
   
// }


// //903
// #include <iostream>
// using namespace std;
// int main()
// {
   
//    int sayi,yuzler,onlar,birler;
//    cin>>sayi;
   

  
//    yuzler=sayi/100;
//    sayi=sayi-(yuzler*100);
//    onlar=sayi/10;
//    sayi=sayi-(onlar*10);
//    birler=sayi;
//    if(yuzler>onlar&&yuzler>birler)
//    	cout<<yuzler;
//    else if(onlar>yuzler&&onlar>birler)
//    	cout<<onlar;
//    else if(yuzler==onlar&&onlar==birler)
//    	cout<<"=";
//    else
//    	cout<<birler;
// }
   
// 935
// #include <iostream>
// using namespace std;
// int main()
// {
//    int sayi,yuzler,onlar,birler;
  
//    cin>>sayi;
   

  
//    yuzler=sayi/100;
//    sayi=sayi-(yuzler*100);
//    onlar=sayi/10;
//    sayi=sayi-(onlar*10);
//    birler=sayi;
  
//    cout<<yuzler<<endl;
//    cout<<onlar<<endl;
//    cout<<birler;
// }

// // 935
// #include <bits/stdc++.h>
// using namespace std;
// void digits(int n){
// if(n == 0){
// return;
// }
// digits(n/10);
// cout<<n%10<<endl;
// }
// int main()
// {
// int n;
// cin>>n;
// digits(n);
// }


