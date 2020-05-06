#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

int main(){
    dlist *l;
    l = create_dlist();
    insert_dlist(l,1,0);
    insert_dlist(l,2,1);
    insert_dlist(l,3,2);
    print_dlist(l);
    remove_init(l);
    remove_end(l);
    print_dlist(l);
    l = NULL;
    return 0;
    
}
