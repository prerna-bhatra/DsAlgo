#include <iostream> 
using namespace std; 
int binaryNum[32]; 
int sz = 0; 
void decToBinary(int n) 
{ 
	while (n > 0) { 
		binaryNum[sz] = n % 2; 
		n = n / 2; 
		sz++; 
	} 
} 

int main() 
{ 
	cout<<"length\n";
	int l;
	cin>>l;
	cout<<"binary sequenec\n";
	int a[l];
	for(int i=0;i<l;i++)
	{
		cin>>a[i];
	}
	int n;
	cout<<"value\n";
	cin>>n; 
	
	string str,binarystr;
	for (int i: a) {
		str += std::to_string(i);
	}
	decToBinary(n); 
	int binaryarr[sz];
	for (int j = sz - 1; j >= 0; j--) 
		binaryarr[j]=binaryNum[j];
		cout<<"array\n";
	for (int j = sz - 1; j >= 0; j--) 
		cout<<binaryarr[j];
	cout<<"\n binary num\n";
	for (int j = sz - 1; j >= 0; j--) 
		cout<<binaryNum[j];
        
        for (int j: binaryarr) {
		binarystr += std::to_string(j);
	}
	cout<<"binary string="<<binarystr<<"  string "<<str<<"\n";
	int strln=binarystr.length();
	cout<<"length="<<strln<<"\n";
	int curr,mx=0,nextstrt;
	int found = str.find(binarystr); 
    if (found != string::npos) 
        cout << "First occurrence is " << found << endl; 
    int lengthofstr=str.length();
    int endofstr=0;
  		//now we should use to find logic

    cout<<"\n longest connected subsequnec="<<mx;
} 










