#include "linked_list.h"

int main(int argc, char *argv[])
{
    Node* head = NULL;
    int end = atoi(argv[1]);
    list_init(&head, end*sizeof(Node));
    //list_insert(&head, 10);
    for(int i = 0; i < end; i++)
    {
        list_insert(&head, i);
    }
    list_display_range(&head, head, head->next->next->next);
    list_display(&head);
    list_cleanup(&head);

}