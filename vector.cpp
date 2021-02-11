#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,l,c,p,q,max,min,sum;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{cin>>arr[i];
	}
	vector<int> vect(arr,arr+n);
	for(i=0;i<n;i++)
	{cout<<vect[i]<<"\n";
	}
	sort(vect.begin(),vect.end());
	for(i=0;i<n;i++)
	{cout<<vect[i]<<"\n ";
	}
	reverse(vect.begin(),vect.end());
	for(i=0;i<n;i++)
	{cout<<vect[i]<<"\n ";
	}
	max=*max_element(vect.begin(),vect.end());
	cout<<"maximum is: "<<max<<"\n";
	min=*min_element(vect.begin(),vect.end());
	cout<<"minium is: "<<min<<"\n";
	sum=accumulate(vect.begin(),vect.end(),0);
	cout<<"total sum: "<<sum<<"\n";
	cout<<"give the element whose no. of occurance has to be found: ";
	cin>>l;
	c=count(vect.begin(),vect.end(),l);
	cout<<"no is: "<<c<<"\n";
	cout<<"give the element to be found: ";
	cin>>l;
	if(find(vect.begin(),vect.end(),l)!=vect.end())
	{
		cout<<"element found\n";
	}
	else
	{cout<<"not found\n";
	}
    q= *lower_bound(vect.begin(), vect.end(), l); 

    p = *upper_bound(vect.begin(), vect.end(), l); 
  
    cout << "The lower bound is at position: "; 
    cout << q << endl; 
  
    cout << "The upper bound is at position: "; 
    cout << p << endl;
       cout << "Distance between first to max element: ";  
    cout << distance(vect.begin(), max_element(vect.begin(), vect.end()));
}