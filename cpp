#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<"chandraprakash"<<endl;
// cout<<"var"<<endl;
// short s=20,a=19;
//   cout<<"the sum of"<<s<<"and"<<a<<"is"<<a+s<<endl;
//   ascending order of integers
// short w;
// int x;
// long y;
// long long z;
// float xy=4;
// double yz=5;
// long double xz=6;
//  we can chang any value later
// xz=10.333;
// cout <<xz<<endl;
// if we are want to make constant valus then use 'const'
/*long double const marks=99.99;
marks=98.01;
cout<<marks;*/
/*we can use 'float' or 'double' at the place of 'int' to get results into rational and irrational numbers
along with the integers and we can also use 'type casting'{**cout<<"the A/B is"<<(float)A/B<<endl;**}*/
/***int A,B,C;
cout<<"enter the value of A";
cin>>A;
cout<<"enter the value of B";
cin>>B;
cout<<"the A+B is"<<A+B<<endl;
cout<<"the A-B is"<<A-B<<endl;
cout<<"the A*B is"<<A*B<<endl;
cout<<"the A/B is"<<(float)A/B<<endl;
cout <<"hear A is"<<A<<"and"<<"B is"<<B<<endl;***/
/**int E;
cout <<"enter your age"<<endl;
cin>>E;
if(E>160||E<1){cout<<"invalid age"<<endl;}
else if (E<18){cout<<"you are younger then me"<<endl;}
else if(E>18){cout<<"you are elder then me"<<endl;}
else if(E=18){cout<<"our age is same-same"<<endl;}
if (E>170||E<1){cout<<"-----";}
else if(E>=18){cout<<"you can vote"<<endl;}
else if(E<18){cout<<"you cannot vote"<<endl;}**/
// cout<<"radhe\t"<<"radhe"<<endl;
// int i;
// cout<<"enter the value of any angle"<<endl;
// cin>>i;
// cout<<90-i<<"is the POORAK angle"<<endl;

//  gellons to cubic feets 
 /*
 #include <iostream>
 using namespace std;
 int main()
 {
    float cf,g;
  cout<<"Enter the value of volume in gallons to convert into cubic feet. "<<endl;
  cin>>g;
  cf=g/7.481;
  cout<<g<<" gallons is = "<<cf<<" feets "<<endl;
 }
 */ 

// Escape sequences
/*
\' ----- '
\" ----- "
\? ----- ?
\\ ----- \
\a ----- audible bell 
\b ----- backspace
\f ----- newpage 
\n ----- new line
\r ----- carriage tab
\t ----- hirizontal tab
\v ----- vertical tab
*/

/*
int aa;
cin>>aa;
switch(aa)
{
    case 5:
    cout<<"great";
    break;
    default:
    cout<<"default";
}
*/

// loops
//1. for loop
/*
for(initialization; condition; updation)
  {
   loop body(c++ code) 
  }
*/
// for(int a=1; a<6; a++){cout<<a<<endl;}

// 2. while loop
/*
while(condition)
               {
                c++ statement;   
               }
*/
// int i=1;
//  while(i<=10){
//      cout<<i<<endl;
//      i++;}   
//3.  do while 
/*
do{
  c++ statement;  
}while(condition);
*/
    
// prime or  not 1st.
 /* 
 #include <iostream>
using namespace std;
int main()
{ 
   int a;
   string c="prime";
   cout <<"enter the value of any integer"<<endl
   cin >>a;
   for(int b=2; b<a; ++b)
   {
       if(a%b==0){c="non_prime"; break;}
    }
cout<<a<<" is "<<c<<" number";
}
  */  
  
 // prime or  not 2nd.
 /*
 #include <iostream>
using namespace std;
int main()
{ 
   int a;
   int d,c=1;
   cout <<"enter the value of any integer"<<endl
   cin >>a;
   for(int b=2; b<a; ++b)
   {
       if(a%b==0){c=2 ; break;}
    }
   if(c==1){cout<<a<<" is prime number";} 
   else{cout<<a<<" is non prime number";}
}
 */

//  math functions  // 
//1st / maximum number    cout << max(5, 10);
//2nd / minimum number    cout << min(5, 10);
//3rd / s.root            cout << sqrt(64);
//4th / log               cout << log(2); 
//5th / round             cout << round(.9);

// Function	Description
// abs(x)	Returns the absolute value of x
// acos(x)	Returns the arccosine of x
// asin(x)	Returns the arcsine of x
// atan(x)	Returns the arctangent of x
// cbrt(x)	Returns the cube root of x
// ceil(x)	Returns the value of x rounded up to its nearest integer
// cos(x)	Returns the cosine of x
// cosh(x)	Returns the hyperbolic cosine of x
// exp(x)	Returns the value of Ex
// expm1(x)	Returns ex -1
// fabs(x)	Returns the absolute value of a floating x
// fdim(x, y)	Returns the positive difference between x and y
// floor(x)	Returns the value of x rounded down to its nearest integer
// hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
// fma(x, y, z)	Returns x*y+z without losing precision
// fmax(x, y)	Returns the highest value of a floating x and y
// fmin(x, y)	Returns the lowest value of a floating x and y
// fmod(x, y)	Returns the floating point remainder of x/y
// pow(x, y)	Returns the value of x to the power of y
// sin(x)	Returns the sine of x (x is in radians)
// sinh(x)	Returns the hyperbolic sine of a double value
// tan(x)	Returns the tangent of an angle
// tanh(x)	Returns the hyperbolic tangent of a double value 


// int f,s,n,i,p;
// cout<<"enter a number "<<endl;
// cin>>n;
// p=0;
// s=1;
// f=1;
// i=1;
// for(i=1; i<=n; p=f+s)
// {i=++i;
// cout<<p<<" ";
// f=s;
// s=p; }
/*
int a,b;
cin >>a;
cout<<endl;
for(b=1; b<=25; b=++b)
                     { if(b%5!=0){cout<<a*b<<"\t";}
                       else{cout<<a*b<<"\n";}
                     }
*//*
int a,b;
b=1;
cin>>a;
cout<<endl;
while(b<=50){
    if(b%5!=0){cout<<a*b<<"\t";}
            else{cout<<a*b<<"\n";} 
            b=++b;
            }
*/

// pointers
// int a,b,c;
// a=1;b=2;c=3;
// int*x,*y,*z;
// x=&a;
// y=&b;
// z=&c;
// cout <<endl<<x<<endl<<y<<endl<<z<<endl;
// int **p=&x;
// cout<<p;

// arrays 1D   //
/*
int marks[10]={11,22,33,44,55,66,77,88,99,110};
cout<<marks[0]<<endl<<marks[1]<<endl<<marks[2]<<endl<<marks[3]<<endl<<marks[4]<<endl
<<marks[5]<<endl<<marks[6]<<endl<<marks[7]<<endl<<marks[8]<<endl<<marks[9]<<endl;
*/
// arrays 2D   //
/*
int marks[5][4];
marks[0][1]=1;
cout<<marks[0][1];
*/

// ternary operation
/*int a;
cin>>a;
a<10?cout<<"less then or equal to 10":cout<<"geater then 10"; */

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {cout<<"4th power of all natural nunbers\n";
//  int a;
//  for(a=1; pow(a,4)<=999999; a=++a){cout<<a<<"\t"<<pow(a,4)<<"\n";}
//  cout<<"the 4th power of "<<a<<" goes more then 999999 that is = "<<pow(a,4)<<endl;
// }

// int a,b;
// cin>>a;
// cout<<"enter an integer to find factorial\n";
// for(a,b=1; a>=1; a--){b=a*b;}
// cout<<"factorial is = "<<b;


//    Function                                                                                   // important //
// syntax of a function 
//             returnType functionName(parameter1, peremeter2, ...){function body }
//exempal//    
 /*
   #include <iostream>
   using namespace std;
   int add(int a,int b){int sum= a+b;return sum;}
   int main()
   {
   int x,y;
   cin>>x>>y;
    cout<<add(x,y);
    }
*/ 

//             to find  transpossed array //
/*

#include <iostream>
using namespace std;
int main()
{
  int n,m,i,j;
  cout<<"enter order of matrix (n x m)\n";
  cin>>n>>m;
  int arr[n][m];
  cout<<"enter elements of matrix row by row \n";
  for(i=0; i<n; i++){for(j=0; j<m; j++){cin>>arr[i][j];}}
  cout<<" your arrar is here \n";
  for(i=0; i<n; i++){for(j=0; j<m; j++){cout<<arr[i][j]<<" ";} cout<<endl;}
  
 cout<<"transpossed arrar is here \n";
  for(j=0; j<m; j++){for(i=0; i<n; i++){cout<<arr[i][j]<<" ";} cout<<endl;}
}
*/


/*                                                                              // ptoduct of matris //

#include <iostream>
using namespace std;
int main()
{
  int n,m,l,o,i,j;
  cout<<"enter order of first matrix (n x m)\n";
  cin>>n>>m;
  int ar[n][m];
  cout<<"enter elements of first matrix row by row \n";
  for(i=0; i<n; i++){for(j=0; j<m; j++){cin>>ar[i][j];}}
  cout<<" your first matrix is \n";
  for(i=0; i<n; i++){for(j=0; j<m; j++){cout<<ar[i][j]<<" ";} cout<<endl;}
  
  
cout<<"enter order of second  matrix (m x l)\n";
  cin>>o>>l;
  int br[m][l];
  cout<<"enter elements of second matrix row by row \n";
  for(i=0; i<m; i++){for(j=0; j<l; j++){cin>>br[i][j];}}
  cout<<" your second matrix is \n";
  for(i=0; i<m; i++){for(j=0; j<l; j++){cout<<br[i][j]<<" ";} cout<<endl;}
 
int ii,jj,x,mu,k,s,oo;
oo=n*l;
int pro[oo];
for(ii=0,x=0; ii<n; ii++){
                         for(k=0,s=0; k<l; k++){
                                               for(jj=0; jj<m; jj++){
                                                                    mu=ar[ii][jj]*br[jj][k]; s=s+mu;
                                                                    }
                            pro[x]=s; x=x+1; s=0; }
                         }
 
 cout<<"\nproduct matrix is \n"; for(k=0; k<oo; k++){cout<<pro[k]<<"  ";if((k+1)%l==0){cout<<"\n";} }
}

*/


/*
#include <iostream>
using namespace std;
int main() {
	int a,b,i,j,k,n,m;
	n=-1;
	m=-1;
	k=0;
	cout<<"enter two integers to find common fectors\n";
	cin >>a>>b;	
	int ar[a];
	int br[b];
	cout << "Input numbers are "<<a<<" , "<<b<<endl;
for(i=1; i<=a; ++i){if(a%i==0){n=n+1; ar[n]=i;} }
for(i=1; i<=b; ++i){if(b%i==0){m=m+1; br[m]=i;} }
cout<<"common fectors are ---> ";
for(i=0; i<=m; ++i){for(j=0; j<=n; ++j){if(br[i]==ar[j]){cout <<br[i]<<"  "; k=k+1;}} }
cout<<"\n number common fectors are "<<k;
}
*/

/*                                                     // Dynamically memory allocation.
******
#include <iostream>
using namespace std;
int main()
{
    int*p;
    p=new int;
    *p=5;
    p=new int(10);       //  here *p=5; become garbage //use  delete p; after *p=5;
    delete p;                                           //
    p= new int(12);
    cout<<*p;
    //after all 
    delete p;
    p=NULL;  // p=0;
    
}
******
           // Dynamically allocate memory for 1D Array in C++
******
#include <iostream>
int main()
{
    // dynamically allocate memory of size `N`
    int* A = new int[N];
    // assign values to the allocated memory
    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }
    // print the 1D array
    for (int i = 0; i < N; i++) {
        std::cout << A[i] << " ";    // or *(A + i)
    }
//                              A[], is an array and A, an pointer  **
    // deallocate memory
    delete[] A;
    return 0;
}
******
*/    
    
/*                            //  vector
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(11);
    v.push_back(111);
    v.push_back(1111);
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<endl;
    }
}
*/    
    
/*
                                     // struct     #.1
#include <iostream>
using namespace std;
struct student{
    int year;
    char group;
    string name;
    float age;
};

int main()
{
    struct student me;
    me.year=18;
    me.group='a';
    me.name="cpr";
    me.age=18;
    cout<<me.year<<endl;
    cout<<me.group<<endl;
    cout<<me.name<<endl;
    cout<<me.age<<endl;
}

                                     //     #.3  enum
#include <iostream>
using namespace std;
int main()
{
    enum num{a=2,b,c,d,e,f,g,h,i,j,k,l};
    cout<<"a "<<a <<endl;
    cout<<"b "<<b <<endl;
    cout<<"c "<<c <<endl;
    cout<<"d "<<d <<endl;
    cout<<"e "<<e <<endl;
    num mi=f;
    cout<<"f "<<mi <<endl;
    cout<<"g "<<g <<endl;
    mi=num(8);
    cout<<"h "<<mi <<endl;
    int ii;
    ii=num(10);
    cout<<"i "<<ii<<endl;
    cout<<"j "<<j <<endl;
    cout<<"k "<<k <<endl;
    cout<<"l "<<l <<endl;
    
}


                                                     ///  use of printf and scanf ///////////
int i;
    long l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    printf("%d", i);
    cout<<"\n";
    printf("%ld",l);
    cout<<"\n";
    printf("%c", ch);
    cout<<"\n";
    printf("%f", f);
    cout<<"\n";
    printf("%lf", d);
    cout<<"\n";
    return 0;
*/ }
                                                             
                                                             
                                                             // to change case of a string

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    string name;
    bool sw;
    cout<<"enter your name\n";
    cin>>name;
    cout<<"enter '1' for lower case and '0' for capitalised\n";
    cin>>sw;


    switch (sw)
    {
    case 1:
    for(int j=0; j<name.size(); ++j){
        if(name[j]>='A' && name[j]<='Z'){
            name[j] += 32;
        }
    }
        break;
    
    default:
    for(int i=0; i<name.size(); ++i){
        if(name[i]>='a' && name[i]<='z'){
            name[i] -= 32;
        }
    }
        break;
    }

    

cout<<name;


    return 0;
}
