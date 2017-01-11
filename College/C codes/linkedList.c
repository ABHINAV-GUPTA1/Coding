#include<stdio.h>
#include<stdlib.h>
/*
Linked List ALL operations
author : ABHINAV GUPTA
2014-2018
made during 3rd semester
-------------------------------------------------------------
Input-Output--
=====================================================

6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
1=>2=>5=>3=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  9
enter the data to be deleted  :  3

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
1=>2=>5=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  5
enter the data of new node  :  4
enter the node before which u want to insert  :  5

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
1=>2=>4=>5=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  6
enter the data of new node  :  3

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
1=>2=>3=>4=>5=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  11

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
5=>4=>3=>2=>1=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  10

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
1=>2=>3=>4=>5=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  1
enter the data of new node  :  5
5=>1=>2=>3=>4=>5=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
5=>1=>2=>3=>4=>5=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  13

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  14
5=>1=>2=>3=>4=>NULL

1)insert at beg
2)insert at end
3)insert after a given data
4)insert after a given node number
5)insert before a given node
6)insert in sorted list
7)delete beg
8)delete end
9)delete a given node
10)sort the list
11)reverse the list
12)search a value
13)remove duplicates
14)display the list
15)exit

Enter your choice  :  15
Thanks for using the program by ABHINAV GUPTA 1410991019
Process returned 0 (0x0)   execution time : 197.530 s
Press any key to continue.



=====================================================
-----------------------------------------------------------



*/
struct node {
    int data;
    struct node * next;
}*start=NULL;

struct node * new;

void create() {
    int d;
    printf("enter the data of new node  :  ");
    scanf("%d",&d);
    new=(struct node *)malloc(sizeof(struct node));
    new->data=d;
    new->next=NULL;
}

void insert_beg() {
    create();
    if(start==NULL) {
        start=new;
    } else {
        new->next=start;
        start=new;
    }
}

void insert_end() {
    create();
    if(start==NULL) {
        start=new;
    } else {
        struct node * ptr;
        ptr=start;
        while(ptr->next!=NULL) {
            ptr=ptr->next;
        }
        ptr->next=new;
    }
}

void insert_middle1() {
    create();
    int d;
    if(start==NULL) {
        start=new;
    } else {
        printf("enter the node value  :  ");
        scanf("%d",&d);
        struct node * ptr;
        ptr=start;
        while(ptr!=NULL && ptr->data!=d) {
            ptr=ptr->next;
        }
        if(ptr!=NULL) {
            new->next=ptr->next;
            ptr->next=new;
        } else
            printf("entered node value does not exist");
    }
}

void insert_middle2() {
    create();
    int i,d;
    if(start==NULL) {
        start=new;
    } else {
        struct node * ptr;
        ptr=start;
        printf("enter the node number  :  ");
        scanf("%d",&d);
        for(i=1;ptr!=NULL && i<d;i++) {
            ptr=ptr->next;
        }
        if(ptr==NULL)
            printf("enter a valid node number");
        else {
            new->next=ptr->next;
            ptr->next=new;
        }
    }
}

void insert_before() {
    create();
    int d;
    if(start==NULL) {
        start=new;
    } else {
        printf("enter the node before which u want to insert  :  ");
        scanf("%d",&d);
        struct node * ptr, * ptr1;
        ptr=start;
        ptr1=ptr->next;
        while(ptr1!=NULL && ptr1->data!=d && ptr->data!=d) {
            ptr=ptr->next;
            ptr1=ptr1->next;
        }
        if(ptr1!=NULL && ptr1->data==d) {
            new->next=ptr1;
            ptr->next=new;
        } else if(ptr1!=NULL && ptr->data==d) {
            new->next=start;
            start=new;
        } else
            printf("enter a valid node data");
    }
}

void insert_sort() {
    create();
    if(start==NULL) {
        start=new;
    } else {
        struct node * ptr,*ptr1;
        ptr=start;
        ptr1=NULL;
        while(ptr!=NULL && ptr->data<new->data) {
            ptr1=ptr;
            ptr=ptr->next;
        }
        if(ptr1==NULL) {
            new->next=ptr;
            start=new;
        } else {
            new->next=ptr1->next;
            ptr1->next=new;
        }
    }
}

void delete_beg() {
    if(start==NULL) {
        printf("list is empty");
    } else {
        struct node * ptr;
        ptr=start;
        start=ptr->next;
        free(ptr);
    }
}

void delete_end() {
    if(start==NULL) {
        printf("list is empty");
    } else {
        struct node * ptr,* ptr1;
        ptr=start;
        ptr1=ptr->next;
        if(ptr1!=NULL) {
            while(ptr1->next!=NULL) {
                ptr=ptr->next;
                ptr1=ptr1->next;
            }
            ptr->next=NULL;
            free(ptr1);
        } else {
            start=NULL;
            free(ptr);
        }
    }
}

void delete_middle() {
    if(start==NULL) {
        printf("list is empty");
    } else {
        int d;
        struct node * ptr, *ptr1;
        printf("enter the data to be deleted  :  ");
        scanf("%d",&d);
        ptr=start;
        ptr1=start;
        while(ptr1!=NULL && ptr->data!=d && ptr1->data!=d) {
            ptr=ptr1;
            ptr1=ptr1->next;
        }
        if(ptr1!=NULL && ptr->data!=d) {
            ptr->next=ptr1->next;
            free(ptr1);
        } else if(ptr1!=NULL && ptr->data==d) {
            start=ptr->next;
            free(ptr);
        } else {
            printf("enter a valid data");
        }
    }
}

void sort() {
    struct node * ptr, * ptr1;
    int temp;
    ptr=start;
    if(start==NULL) {
        printf("There is no list to sort");
    } else {
        while(ptr->next!=NULL) {
            ptr1=ptr->next;
            while(ptr1!=NULL) {
                if(ptr->data>ptr1->data) {
                    temp=ptr->data;
                    ptr->data=ptr1->data;
                    ptr1->data=temp;
                }
                ptr1=ptr1->next;
            }
            ptr=ptr->next;
        }
    }
}

void reverse() {
    struct node * ptr, * ptr1, * ptr2;
    ptr=start;
    ptr1=NULL;
    while(ptr!=NULL) {
        ptr2=ptr1;
        ptr1=ptr;
        ptr=ptr->next;
        ptr1->next=ptr2;
    }
    start=ptr1;
}

void search() {
    if(start==NULL)
        printf("list is empty");
    else {
        struct node * ptr;
        int d;
        printf("enter the valu u want to search  :  ");
        scanf("%d",&d);
        ptr=start;
        while(ptr!=NULL && ptr->data!=d) {
            ptr=ptr->next;
        }
        if(ptr==NULL) {
            printf("data not found in the list");
        } else if(ptr->data==d) {
            printf("data found");
        }
    }
}

void remove_dup() {
    struct node *ptr,*ptr1,*ptr2;
    ptr=start;
    while(ptr!=NULL && ptr->next!=NULL) {
        ptr1=ptr;
        while(ptr1->next!=NULL) {
            if(ptr->data==ptr1->next->data) {
                ptr2=ptr1->next;
                ptr1->next=ptr1->next->next;
                free(ptr2);
            } else {
                ptr1=ptr1->next;
            }
        }
        ptr=ptr->next;
    }
}

void display() {
    struct node * ptr;
    ptr=start;
    while(ptr!=NULL) {
        printf("%d=>",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
/*
Linked list by ABHINAV GUPTA
all linked list operations implemented during my 3rd semester in c
*/
int main() {
    int ch;
    while(1) {
        printf("\n1)insert at beg\n2)insert at end\n3)insert after a given data\n4)insert after a given node number\n5)insert before a given node\n6)insert in sorted list\n7)delete beg\n8)delete end\n9)delete a given node\n10)sort the list\n11)reverse the list\n12)search a value\n13)remove duplicates\n14)display the list\n15)exit\n");
        printf("\nEnter your choice  :  ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                insert_beg();
                display();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_middle1();
                break;
            case 4:
                insert_middle2();
                break;
            case 5:
                insert_before();
                break;
            case 6:
                insert_sort();
                break;
            case 7:
                delete_beg();
                break;
            case 8:
                delete_end();
                break;
            case 9:
                delete_middle();
                break;
            case 10:
                sort();
                break;
            case 11:
                reverse();
                break;
            case 12:
                search();
                break;
            case 13:
                remove_dup();
                break;
            case 14:
                display();
                break;
            default:
                printf("Thanks for using the program by ABHINAV GUPTA 1410991019");
                exit(0);
        }
    }
}
