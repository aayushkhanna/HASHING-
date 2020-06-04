#include<iostream>

#include<math.h>
'
#include<string>

#include<vector>

#include<map>

using namespace std;

void ll(int,string);


int B[]={0,0,0,0,0,0,0};

string A[]={"192.0.0.1","122.11.12.1","133.90.45.6","221.22.34.5","144.23.1.1","0.0.8.12","0.1.9.78"};

int N=7;

vector<string> v;

map<string,int> m;


void naive()

{

   cout<<"Service A Selected"<<endl;
  
   int r,i;

   r=(rand()%(N-1+1))+1;
 
   r=r-1;

  string a[]={"192.0.0.1","122.11.12.1","133.90.45.6","221.22.34.5","144.23.1.1","0.0.8.12","0.1.9.78"};
   
  int b[]={0,0,0,0,0,0,0};
 
   string ip=a[r];

    for(i=0;i<N;i++)

   {
       
     int z=ip.compare(a[i]);

       if(z==0)
  
     {
 b[i]=b[i]+1;
 break;
 }

   }



   for(i=0;i<N;i++)

   {
  
    int z=ip.compare(A[i]);
  
    if(z==0)

      { 
B[i]=B[i]+1; 
break;
 }

   }

  

   cout<<"A hash function is any function that can be used to map data of arbitrary size to fixed-size values. The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing."<<endl<<endl;

   
   int c;

   cout<<"Press 1-To Get Connected IP Inforamtion Or 0 To Skip: ";
   
cin>>c;
   
if(c==1)
 
  {
  
     cout<<"Currently Used IP: "<<ip<<endl;

       cout<<"IP: "<<ip<<" Has Been Used For "<<B[i]<<" Times"<<endl;
 
  }
  
string s1=A[i];
  
 m[s1]=B[i];

   ll(1,ip);


}



void da()

{

   int a[100000],i,j;

   cout<<"Service B Selected"<<endl;

   for(i=0;i<100000;i++)

        a[i]=0;
 
  int r=(rand()%(N-6+1))+6;

   r=r-1;

   string ip=A[r];
   

   int nn[]={0,0,0,0};
 
  i=0;
   
for(j=0;j<4;j++)

   {
  
     while(ip[i]!='.')

       {
   
        int x=(int)ip[i];
  
         x=x-48;
  
         nn[j]=nn[j]*10+x;
   
        i++;
   
        if(ip[i]=='\0')
   
            break;
 
      }
  
     i++;

   }


   int v=nn[0]*pow(2,24)+nn[1]*pow(2,16)+nn[2]*pow(2,8)+nn[3]*pow(2,0);
  
 a[v]=a[v]+1;
 
  
   for(i=0;i<N;i++)

    {

        int z=ip.compare(A[i]);
  
      if(z==0)
    
    { 
 B[i]=B[i]+1;
 break;
 }

    }

 
     cout<<"It is clear that a term of address is always closely linked with the pronoun 'you,' which in itself has vocative qualities. One could say, in fact, that whenever pronominal 'you' is used in direct address, vocative 'you' is implicitly present. The two kinds of 'you' are inextricably bound together, though in an utterance like 'You! What do you think you're doing!"<<endl<<endl;


      int c;
  
    cout<<"Press 1-To Get Connected IP Inforamtion Or 0 To Skip: ";
  
    cin>>c;

      if(c==1)
    
  {
     
     cout<<"Currently Used IP: "<<ip<<endl;
  
        cout<<"IP: "<<ip<<" Has Been Used For "<<B[i]<<" Times"<<endl;
 
     }
   
   string s1=A[i];
  
    m[s1]=B[i];
 
     ll(1,ip);

}


void ll(int x,string ipp)

{
  
int i;
 
 if(x==0)
 
 {

    cout<<"Service C Selected"<<endl;

    int r=(rand()%(N-1+1))+1;

    r=r-1;

    string ip=A[r];
    

    v.push_back(ip);


    for(i=0;i<N;i++)

    {
   
     int z=ip.compare(A[i]);
  
      if(z==0)
  
      { 
B[i]=B[i]+1;
 break;
 }
  
  }


  }

  else

  {
   
 v.push_back(ipp);
   

 /*  
 for(i=0;i<N;i++)
   
 {

        int z=ipp.compare(A[i]);
        if(z==0)
        { B[i]=B[i]+1; break; }
    }*/

  }
      if(x==0){
        cout<<"This is a List Based approach to perform the Operations.It uses a dynamic array that implements the IP addreses counts them"<<endl<<endl;
        
        int c;
        cout<<"Press 1-To Get Connected IP Inforamtion Or 0 To Skip: ";
        cin>>c;

        if(c==1)
        {
         cout<<"Currently Used IP: "<<A[i]<<endl;
         int co=0;
         for(int k=0;k<v.size();k++)
         {   int z=A[i].compare(v[k]);
             if(z==0)
                 co++;}

         cout<<"IP: "<<A[i]<<" Has Been Used For "<<co<<" Times"<<endl;
        }
      }
}

void ht()
{
    int i;
    cout<<"In computing, a hash table (hash map) is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found."<<endl<<endl;
    cout<<endl<<endl;
    cout<<"[ IP ADDRESS "<<"COUNT ]"<<endl;
    for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
        cout<<" "<<it->first<<" : "<<it->second<<endl;
}

int main()
{
 
    cout<<"|||||||||||||||||||| INTERNET PROTOCOL ACCESS TECNIQUES ||||||||||||||||||||"<<endl<<endl;
    int i,j=0,k,p,r;
    char c;string s;
    for(i=0;i<N;i++)
        m.insert(pair<string,int>(A[i],0));
    cout<<"Enter Pin: ";
    cin>>p;
    r=(p%(100-1+1))+1;
    
    if((r>=10)&&(r<=20))
    {
     cout<<"Connecting...."<<endl;
     cout<<"Connected"<<endl<<endl<<endl;
    while(1)
    {
        if(j==1){
        cout<<"Press Y To Enter Service Again Or N To Skip: ";
        cin>>c;}

        if((j==0)||((c=='Y')||(c=='y')))
        {
        cout<<"Select Key In Order To Get Service"<<endl<<endl;
        cout<<"1-Service A\n"<<"2-Service B\n"<<"3-Service C\n"<<"4-Service D\n"<<endl;
        cout<<"Enter Key: ";
        cin>>k;
        cout<<endl;

        switch(k)
        {
          case 1:
              naive();
              break;

          case 2:
              da();
              break;

          case 3:
              
              ht();
              break;

          case 4:
              ll(0,s);
              break;

          case 5:
              break;
        }
        

        }
        else 
            break;
        j=1;
     }
    }

 cout<<endl<<"Thanks For Visiting"<<endl<<endl;

return 0;
}
