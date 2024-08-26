#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* next;
};
struct node* head;
void insert(int x)
{
    node* temp = (node*)malloc(sizeof(struct node));
    temp->data =x;
    temp->next= head;
    head = temp;
}
void print()
{
    struct node* temp = head;
    cout <<"list sir :";
    while(temp !=NULL)
    {
        cout<< temp->data;
        temp=temp->next;

    }
    cout << endl;
    
}
int main() {
    head =NULL;
    cout << "enter a no.";
    int n,i,x;
    cin >> n;
    for (i=0;i<n;i++){
        cout << "value";
        cin >> x;
        insert(x);
        print();
    }
return 0;
}
