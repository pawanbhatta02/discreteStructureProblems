#include<iostream>
#include<string>

using namespace std;

void setUnion(int setA[],int setB[],int lengthA, int lengthB)
{
	int i,j,k=0,size;
	int mark=0;
	size = lengthA+lengthB;
	int setC[size] = {0};
	
	for(i=0;i<lengthA;i++)
	{
		setC[i] = setA[i];
		k++;
	}
    for(i=0;i<lengthB;i++)
    {
    	mark=0;
    	for(j=0;j<lengthA;j++)
    	{
    		if(setA[j]==setB[i])
    		{
    			mark=1;
			}
		}
		if(!mark){
			setC[k] = setB[i];
			k++;
		}
	}
	cout << "Union of the set = { ";
	for(i=0;i<k;i++)
	{
		cout << setC[i] ;
		if(i!=k-1)
		{	
			cout << " , ";
		}
	}
	cout << " } ";

}

void setIntersection(int setA[],int setB[],int lengthA, int lengthB)
{
	int i,j,k=0;
	int setC[lengthA];
	for(i=0;i<lengthA;i++)
	{
		for(j=0;j<lengthB;j++)
		{
			if(setA[i]==setB[j])
			{
				setC[k] = setA[i]; 
				k++;
			}
		}
	}
	
	cout << "Intersection of the set = { ";
	for(i=0;i<k;i++)
	{
		cout << setC[i] ;
		if(i!=k-1)
		{	
			cout << " , ";
		}
	}
	cout << " } ";

}

void setDifference(int setA[],int setB[],int lengthA, int lengthB)
{
	int i,j,k=0,size;
	int mark=0;
	size = lengthA+lengthB;
	int setC[size] = {0};
	
    for(i=0;i<lengthA;i++)
    {
    	mark=0;
    	for(j=0;j<lengthB;j++)
    	{
    		if(setA[i]==setB[j])
    		{
    			mark=1;
			}
		}
		if(!mark){
			setC[k] = setA[i];
			k++;
		}
	}
	cout << "Difference of the set = { ";
	for(i=0;i<k;i++)
	{
		cout << setC[i] ;
		if(i!=k-1)
		{	
			cout << " , ";
		}
	}
	cout << " } ";
}

void setComplement(int setA[],int setB[],int lengthA, int lengthB)
{
	int i,j,k=0;
	int mark=0;
	int setU[100];
	int setC[100] = {0};
	for(i=0;i<100;i++)
	{
		setU[i] = i;	
	}
	
	for(j=0;j<100;j++)
	{
		for(i=0;i<lengthA;i++)
	    {
			mark=0;
			if(setA[i]==setU[j])
			{
				mark=1;
				break;
			}
		}
		if(mark==0){
			setC[k] = setU[j];
			k++;
		}
	}
	cout << "Complement of the set = { ";
	for(i=0;i<k;i++)
	{
		cout << setC[i] ;
		if(i!=k-1)
		{	
			cout << " , ";
		}
	}
	cout << " } ";	
}

int main()
{
	int setA[] = {1,2,3,4,5,89, 76,88};
	int setB[] = {1,2,4,5,6,7};

	int lengthA,lengthB;
	
	lengthA = sizeof(setA)/sizeof(setA[0]);
	lengthB = sizeof(setB)/sizeof(setB[0]);
	
	int choice;
	cout << "1. Union"<<endl<<"2. Intersection"<<endl<<"3. Difference"<<endl<<"4. Complement"<<endl;
	cout << endl << "Enter you choice : ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			setUnion(setA,setB,lengthA, lengthB);
			break;
		
		case 2:
			setIntersection(setA,setB,lengthA, lengthB);
			break;
		
		case 3:
			setDifference(setA,setB,lengthA, lengthB);
			break;
			
		case 4:
			setComplement(setA,setB,lengthA, lengthB);
			break;
			
		default:
			cout << endl << "Invalid Choice";
			
	}
}
