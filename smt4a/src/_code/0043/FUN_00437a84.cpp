/* NON_MATCHING: compiler merges count and sentinel stores and reorders zero stores. */
#include "common.h"
struct ListLink { ListLink *next,*previous; };
struct ListOwner { u32 count; ListLink sentinel; u32 first,second,third; };
/* Initializes the empty list and clears its state words. */
extern "C" void FUN_00437a84(ListOwner *owner) { owner->count=0; owner->sentinel.next=&owner->sentinel; owner->first=0; owner->sentinel.previous=&owner->sentinel; owner->second=0;owner->third=0; }
