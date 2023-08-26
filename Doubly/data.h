#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
typedef struct {
  int x ;
  struct data *next;
  struct data *prev;

}data;


data *Create_Node(data *head ,int x); // create the first node //
/////////////////////////////////////////
void AddEnd(data *head); // add elements from the beginning//
////////////////////////////////////////
void PrintData(data *head);
/////////////////////////////////////////
data *AddFirst(data *head);
/////////////////////////////////////////
int Counter(data *head);
/////////////////////////////////////////
data *AddPosition(data *head,int position , int value);

#endif // DATA_H_INCLUDED
