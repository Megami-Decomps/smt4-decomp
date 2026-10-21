/* NON_MATCHING: compiler merges sentinel stores and omits retail register saves. */
#include "common.h"
struct Link {Link *next,*previous,*owner;};
struct ListState {Link *first;Link sentinel;u8 active;u8 unk11[3];Link *last,*end;u32 count;u32 argument;};
/* Initializes the empty intrusive list and stores its argument. */
extern "C" void FUN_004d92b8(ListState *list,u32 argument){list->first=&list->sentinel;list->sentinel.next=&list->sentinel;list->sentinel.previous=&list->sentinel;list->sentinel.owner=&list->sentinel;list->active=0;list->last=&list->sentinel;list->argument=argument;list->end=&list->sentinel;list->count=0;}
