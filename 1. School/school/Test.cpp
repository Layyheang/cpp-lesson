#include<iostream>
using namespace std;
typedef struct
{
   string id;
   string name;
   string sex;
   float  c_sharp,ds,web,total,avg;
}student; 

int main()
{
  	int i=-1,index,tempIndex;
  	int countPass=0,countFail=0,countMale=0,countFemale=0,countName;
  	char menu,choose;
  	student x[99];
  	
  	string searchId,searchName;
    int found = 0;
  	
again: 
	system("cls");
	countPass=0;countFail=0;countMale=0;countFemale=0;
	for (int j = 0;j <= i;j++)
	{
		if(x[j].avg>=50)
     		++countPass;
     	else
     	    ++countFail;
     	    
     	if(x[j].sex=="Male"||x[j].sex=="M"||x[j].sex=="m"||x[j].sex=="male")
     		++countMale;
     		
     	if(x[j].sex=="Female"||x[j].sex=="F"||x[j].sex=="f"||x[j].sex=="female")
     		++countFemale;
	}
	cout<<"Student\t: "<<i+1;
	cout<<"\nPass\t: "<<countPass;
	cout<<"\nFail\t: "<<countFail;
	cout<<"\nMale\t: "<<countMale;
	cout<<"\nFemale\t: "<<countFemale<<endl;
	cout<<"-------------------------------------------------------------------------------\n";
    if(i<=-1)
    {
    	cout<<"1- Add";
    	cout<<"\nPlease choose: ";
    	cin>>choose;
    	if(choose!='1')
    	 goto again;
	}
	else
	{
	    cout<<"1- Add";
	    cout << "\n2- Delete";
	    cout << "\n3- Update";
	    cout << "\n4- Display";
	    cout<<"\nPlease choose: ";
	    cin>>choose;
	}
   	   	
    switch (choose)
    {
        case '1': 
        		i++;
				cout<<"Student: "<<i+1<<endl;
			again1_1:
     			cout<<"\tID: ";
     			cin>>x[i].id;
     			for(int k=0;k<=i;++k)
     			{
	     			for(int j=0; j<i; ++j)
			      	{
				    	if(x[j].id==x[i].id)
				        {
				            cout<<"*** Duplicate !!!"<<endl;
				            goto again1_1;
				        }
			        }
				}
		         
     			cout<<"\tName: ";
     			cin>>x[i].name;
     			cout<<"\tSex: ";
     			cin>>x[i].sex;
     			cout<<"\tScore: "<<endl;
     			cout<<"\t   C#: ";
     			cin>>x[i].c_sharp;
     			cout<<"\t   DS: ";
     			cin>>x[i].ds;
     			cout<<"\t   Web: ";
     			cin>>x[i].web;
     			x[i].total=x[i].c_sharp+x[i].ds+x[i].web;
     			x[i].avg=x[i].total/3;
     			cout<<"-------------------------------------------------------------------------------\n";
     			break;
     	case '2':	
     		again2:
     			found=0; countName=0;
     			//protect from machine choose random value
     			system("cls");
		 		cout<<"Delete By:";
		 		cout << "\n1- ID";
    			cout << "\n2- Name";
   				cout<<"\nPlease choose: ";
    			cin>>choose;
					
    			if(choose=='1')
    			{
    				cout << "Input ID to Delete: ";
    				cin >> searchId;
    				for (int j = 0;j <= i;j++)
                		if (searchId == x[j].id)
                			found=1;
				}
				
    			else if(choose=='2')
    			{
    				cout << "Input Name to Delete: ";
    				cin >> searchName;
    				cout<<"-------------------------------------------------------------------------------\n";
    				cout<<"Student\tID\tName\t\tSex\tC#\tDS\tWeb\tTotal\tAverage\tResult\n";
    				for (int j = 0;j <= i;j++)
                		if (searchName == x[j].name)
                		{
                			found = 1;	
	                    	cout<<j+1<<"\t";
							cout<<x[j].id<<"\t";
							cout<<x[j].name<<"\t";
							cout<<x[j].sex<<"\t";
							cout<<x[j].c_sharp<<"\t";
							cout<<x[j].ds<<"\t";
							cout<<x[j].web<<"\t";
							cout<<x[j].total<<"\t";
							cout<<x[j].avg<<"\t";
							if(x[j].avg>=50)
	     						cout<<"Pass!";
	    					else
	    						cout<<"Fail!";
							cout<<endl;	
							++countName;
						}
					cout<<"-------------------------------------------------------------------------------\n";
					if(countName>1)	
					{
						cout << "Input ID to Delete: ";
    					cin >> searchId;
    					for(int j=0;j<=i;++j)
    					{
    						if(!(searchId==x[j].id&&searchName==x[j].name))
	    						found=-1;
	    					else
	    					{
	    						found=1;
								break;	
							}	
						}										
					}			
				}
				else if(countName==1)
				{
					found=1;
					break;
				}
    			else
    				goto again2;
                //////////////////////////////////////////////////////////		
    			if(found==1)
    			{
    				for (int j = 0;j <= i;j++)
                	if (searchId == x[j].id)
                	{
                    	found = 1;
                    	cout<<"-------------------------------------------------------------------------------\n";
						cout<<"Student\tID\tName\t\tSex\tC#\tDS\tWeb\tTotal\tAverage\tResult\n";
                    	cout<<j+1<<"\t";
						cout<<x[j].id<<"\t";
						cout<<x[j].name<<"\t";
						cout<<x[j].sex<<"\t";
						cout<<x[j].c_sharp<<"\t";
						cout<<x[j].ds<<"\t";
						cout<<x[j].web<<"\t";
						cout<<x[j].total<<"\t";
						cout<<x[j].avg<<"\t";
						if(x[j].avg>=50)
     						cout<<"Pass!";
    					else
    						cout<<"Fail!";
    					cout<<"\n-------------------------------------------------------------------------------\n";
    					tempIndex=j;
							
                	}
	            again2_1:
	                cout<<"Are you sure to delete this data? [Y/N]: ";
					cin>>choose;
					if(choose=='y'||choose=='Y')
	    			{	
						for (int j=tempIndex ; j<=i ; j++)
	                	{
	                    	x[j].id = x[j+1].id;
							x[j].name = x[j+1].name;
							x[j].sex = x[j+1].sex;
							x[j].c_sharp = x[j+1].c_sharp;
							x[j].ds = x[j+1].ds;
							x[j].web = x[j+1].web;
							x[j].total = x[j+1].total;
							x[j].avg = x[j+1].avg;	
						}
						i--;
						cout << "Data delete successfully! ";
						cout<<"\n-------------------------------------------------------------------------------\n";
						break;
					}
	    			else if(choose=='n'||choose=='N')
						goto again;			
					else
						goto again2_1;	
				
				}
				else if(found==-1)
					cout<<"Data invalid !"<<endl;
    			else
                	cout << "Data have not found ! "<<endl;
                cout<<"-------------------------------------------------------------------------------\n";
        		break;
       	
		case '3':
        	again3:
        		found=0;
        		searchId="-1";
     			system("cls");
		 		cout<<"Update By ID: ";
    			cin>>searchId;
    		
    			for (int j = 0;j <= i;j++)
                	if (searchId == x[j].id)
                	{
                    	found = 1;
                    	cout<<"-------------------------------------------------------------------------------\n";
						cout<<"Student\tID\tName\t\tSex\tC#\tDS\tWeb\tTotal\tAverage\tResult\n";
                    	cout<<j+1<<"\t";
						cout<<x[j].id<<"\t";
						cout<<x[j].name<<"\t";
						cout<<x[j].sex<<"\t";
						cout<<x[j].c_sharp<<"\t";
						cout<<x[j].ds<<"\t";
						cout<<x[j].web<<"\t";
						cout<<x[j].total<<"\t";
						cout<<x[j].avg<<"\t";
						if(x[j].avg>=50)
     						cout<<"Pass!";
    					else
    						cout<<"Fail!";
    					tempIndex=j;
    					cout<<"\n-------------------------------------------------------------------------------\n";
    					break;
    				}
    			if(found==1)
    			{
    					cout<<"Are you sure to update this data? [Y/N]: ";
    					cin>>choose;
						if(choose=='y'||choose=='Y')
						{
						again3_1:	
	    					cout<<"1- Name";
	    					cout<<"\n2- Sex";
	    					cout<<"\n3- C# Score";
	    					cout<<"\n4- DS Score";
	    					cout<<"\n5- Web Score";
	    					cout<<"\nChoose to update: ";
	    					cin>>choose;
	    					switch(choose)
	    					{
	    						case '1':
	    								cout<<"--> Name: ";
	    								cin>>x[tempIndex].name;
	    								break;
	    						case '2':
	    								cout<<"--> sex: ";
	    								cin>>x[tempIndex].sex;
	    								break;
	    						case '3':
	    								cout<<"--> C#: ";
	    								cin>>x[tempIndex].c_sharp;
	    								break;
	    						case '4':
	    								cout<<"--> DS: ";
	    								cin>>x[tempIndex].ds;
	    								break;
	    						case '5':
	    								cout<<"--> Web: ";
	    								cin>>x[tempIndex].web;
	    								break;
	    						default:
										goto again3_1;	
							}
							x[tempIndex].total=x[tempIndex].c_sharp+x[tempIndex].ds+x[tempIndex].web;
     						x[tempIndex].avg=x[tempIndex].total/3;
							cout << "Data update successfully! ";
							
						}
						else
							goto again;	
				}
				else//(found == 0)
                	cout << "Data have not found! ";
                cout<<"\n-------------------------------------------------------------------------------";
                cout<<"\nDo you want to continue? [Y/N]: ";
				cin>>choose;
				if(choose=='y'||choose=='Y')
    				goto again3;
    			else
    				goto again;	
				break;		  

		case '4': 
		   		cout<<"\n-------------------------------------------------------------------------------\n";
  				cout<<"Student\tID\tName\t\tSex\tC#\tDS\tWeb\tTotal\tAverage\tResult\n";
		   		for(int j=0;j<=i;j++)
 				{
					cout<<j+1<<"\t";
					cout<<x[j].id<<"\t";
     				cout<<x[j].name<<"\t";
     				cout<<x[j].sex<<"\t";
     				cout<<x[j].c_sharp<<"\t";
     				cout<<x[j].ds<<"\t";
     				cout<<x[j].web<<"\t";
     				cout<<x[j].total<<"\t";
     				cout<<x[j].avg<<"\t";
     				if(x[j].avg>=50)
     					cout<<"Pass!";
    				else
    					cout<<"Fail!";
    				cout<<endl;
  				}
				cout<<"-------------------------------------------------------------------------------\n";			
                break;
        default: goto again;   
		}
		
question:
        cout<<"\nGo to Menu [Y] / Exit [N]: ";
        cin>>menu;
        if(menu=='y'||menu=='Y')
           goto again;
        else if(menu=='n'||menu=='N')
           cout<<"\n***Press any key to exit !";
        else
		   goto question;
           
}
