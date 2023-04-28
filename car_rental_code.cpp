#include <iostream>
using namespace std;
void railwaydetails();
void personaldetails();
void changes();
void display();
void displaystaff();
void finalchange();
struct node
{
   string dest1;
   string dest2;
   string type;
   string name;
   node*next;
};
node*head=NULL;
int main()
{
    cout<<"Are you a new staff member or new user?\n";
    cout<<"Enter 1 for staff member enter 2 for user\n";
    int n,id;
    string name;
    cin>>n;
    switch(n)
    {
        case 1:cout<<"Enter your name: ";
        cin>>name;
        cout<<"\n";
        cout<<"Enter you staff id: ";
        cin>>id;
        railwaydetails();
        finalchange();
        displaystaff();
        break;

        case 2:cout<<"Enter your name: ";
        cin>>name;
        cout<<"\n";
        railwaydetails();
        finalchange();
        display();
        break;
    }
    return 0;
}
void railwaydetails()
{
    int tix;
    cout<<"Start Destination   End Destination  AC     Sleeper     FirstClass\n";
    cout<<" Mumbai Central          Delhi      3535/-   1460/-        2500/- \n";
    cout<<" Mumbai Central        Bangalore    3085/-   1270/-        1825/- \n";
    cout<<" Mumbai Central         Chennai     2200/-   1540/-        1875/- \n";
    cout<<" Mumbai Central          Pune        910/-     NA           355/-    \n";
    cout<<"    Dadar                Delhi      3865/-   1595/-        2280/- \n";
    cout<<"    Dadar              Bangalore    3085/-   1270/-        1825/- \n";
    cout<<"    Dadar               Chennai     2035/-   1265/-        1540/- \n";
    cout<<"    Dadar                Pune        890/-     NA           345/-   \n";

    cout<<"Enter how many tickets you want to purchase:\n";
    cin>>tix;
    for(int i=0;i<tix;i++)
    {
        personaldetails();
    }
    cout<<"Do you want to cancel any tickets?\n";
    cout<<"Type Y for yes and N for no\n";
    string cancel;
    cin>>cancel;
    if(cancel=="Y")
    {
        changes();

    }
    else
    {
        cout<<"Your ticket will be displayed\n";
    }

}
void personaldetails()
{
    node*end;
    end=new node;
    cout<<"Enter name:\n";
    cin>>end->name;
    cout<<"Enter starting destination:\n";
    cin>>end->dest1;
    cout<<"Enter ending destination:\n";
    cin>>end->dest2;
    cout<<"Enter type of ticket you want:\n";
    cin>>end->type;
    end->next=NULL;
    if(head==NULL)
    {
        head=end;
    }
    else
    {
      node*current=head;
      while(current->next!=NULL)
      {
          current=current->next;
      }
      current->next=end;
    }

}
/*void personaldetails()
{
    node*first;
    first=new node;
    cout<<"Enter name:\n";
    cin>>first->name;
    cout<<"Enter starting destination:\n";
    cin>>first->dest1;
    cout<<"Enter ending destination:\n";
    cin>>first->dest2;
    cout<<"Enter type of ticket you want:\n";
    cin>>first->type;
    first->next=head;
    head=first;
}
*/
void finalchange()
{
    string final;
    int x;
    cout<<"Do you want to purchase any more tickets?\n";
    cout<<"Type Y for Yes and N for No\n";
    cin>>final;
    if(final=="Y")
    {
        cout<<"How many tickets do you want to purchase?\n";
        cin>>x;
        for(int i=0;i<x;i++)
        {
        personaldetails();
        }
        cout<<"Your tickets were added successfully\n";
    }
    else
    {
        cout<<"Your ticket will be displayed\n";
    }
}
void changes()
{
    int n;
    cout<<"Enter passenger number whose ticket you want to cancel: ";
    cin>>n;
    node*temp2;
    temp2=new node;
    node*current=new node;
    node*temp=new node;
    temp2=head;
    current=head;
    temp=head;
    current=current->next;
    if(n==1)
    {
        head=head->next;
        delete temp;
    }
    else
    {


    for(int i=1;i<n;i++)
    {
        temp=temp->next;
        current=current->next;
    }
    for(int i=1;i<n-1;i++)
    {
        temp2=temp2->next;
    }
    delete temp;

    temp2->next=current;
    }
    cout<<"Passenger number "<<n<<"s ticket was cancelled successfully\n";
}

void display()
{
    node*temp=new node;
    temp=head;
    while(temp!=NULL)
    {
    cout<<"Name of the passenger: "<<temp->name<<"\n";
    cout<<"Starting Destination: "<<temp->dest1<<"\n";
    cout<<"Ending Destination: "<<temp->dest2<<"\n";
    cout<<"Ticket Type: "<<temp->type<<"\n";
    if(temp->dest1=="Mumbai Central"&&temp->dest2=="Delhi"&&temp->type=="AC")
    {
        cout<<"Total Rate:3535/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Delhi"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1460/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Delhi"&&temp->type=="First Class")
    {
        cout<<"Total Rate:2500/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Bangalore"&&temp->type=="AC")
    {
        cout<<"Total Rate:3085/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Bangalore"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1270/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Bangalore"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1825/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Chennai"&&temp->type=="AC")
    {
        cout<<"Total Rate:2200/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Chennai"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1540/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Chennai"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1875/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Pune"&&temp->type=="AC")
    {
        cout<<"Total Rate:910/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Pune"&&temp->type=="Sleeper")
    {
        cout<<"No sleeper available";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Pune"&&temp->type=="First Class")
    {
        cout<<"Total Rate:355/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Delhi"&&temp->type=="AC")
    {
        cout<<"Total Rate:3865/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Delhi"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1595/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Delhi"&&temp->type=="First Class")
    {
        cout<<"Total Rate:2280/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Bangalore"&&temp->type=="AC")
    {
        cout<<"Total Rate:3085/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Bangalore"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1270/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Bangalore"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1825/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Chennai"&&temp->type=="AC")
    {
        cout<<"Total Rate:2035/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Chennai"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1265/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Chennai"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1540/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Pune"&&temp->type=="AC")
    {
        cout<<"Total Rate:890/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Pune"&&temp->type=="Sleeper")
    {
        cout<<"No sleeper available\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Pune"&&temp->type=="First Class")
    {
        cout<<"Total Rate:345/-\n";
    }

    cout<<"\n";
    cout<<"\n";
    temp=temp->next;
    }
}
void displaystaff()
{
    node*temp=new node;
    temp=head;
    while(temp!=NULL)
    {
    cout<<"Name of the passenger: "<<temp->name<<"\n";
    cout<<"Starting Destination: "<<temp->dest1<<"\n";
    cout<<"Ending Destination: "<<temp->dest2<<"\n";
    cout<<"Ticket Type: "<<temp->type<<"\n";
    cout<<"Staff concession is applied\n";
    if(temp->dest1=="Mumbai Central"&&temp->dest2=="Delhi"&&temp->type=="AC")
    {
        cout<<"Total Rate:3535/-\n";
        cout<<"Discount applied=50%";
        cout<<"Final Rate:1767.5/-";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Delhi"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1460/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:730/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Delhi"&&temp->type=="First Class")
    {
        cout<<"Total Rate:2500/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1250/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Bangalore"&&temp->type=="AC")
    {
        cout<<"Total Rate:3085/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1542.5/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Bangalore"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1270/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:635/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Bangalore"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1825/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:622.5/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Chennai"&&temp->type=="AC")
    {
        cout<<"Total Rate:2200/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1100/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Chennai"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1540/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:770/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Chennai"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1875/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:937.5/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Pune"&&temp->type=="AC")
    {
        cout<<"Total Rate:910/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:455/-\n";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Pune"&&temp->type=="Sleeper")
    {
        cout<<"No sleeper available";
    }
    else if(temp->dest1=="Mumbai Central"&&temp->dest2=="Pune"&&temp->type=="First Class")
    {
        cout<<"Total Rate:355/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:177.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Delhi"&&temp->type=="AC")
    {
        cout<<"Total Rate:3865/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1932.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Delhi"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1595/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:797.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Delhi"&&temp->type=="First Class")
    {
        cout<<"Total Rate:2280/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1140/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Bangalore"&&temp->type=="AC")
    {
        cout<<"Total Rate:3085/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1542.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Bangalore"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1270/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:635/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Bangalore"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1825/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:612.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Chennai"&&temp->type=="AC")
    {
        cout<<"Total Rate:2035/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:1017.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Chennai"&&temp->type=="Sleeper")
    {
        cout<<"Total Rate:1265/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:632.5/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Chennai"&&temp->type=="First Class")
    {
        cout<<"Total Rate:1540/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:770/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Pune"&&temp->type=="AC")
    {
        cout<<"Total Rate:890/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:445/-\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Pune"&&temp->type=="Sleeper")
    {
        cout<<"No sleeper available\n";
    }
    else if(temp->dest1=="Dadar"&&temp->dest2=="Pune"&&temp->type=="First Class")
    {
        cout<<"Total Rate:345/-\n";
        cout<<"Discount applied=50%\n";
        cout<<"Final Rate:172.5/-\n";
    }

    cout<<"\n";
    cout<<"\n";
    temp=temp->next;
    }
}

