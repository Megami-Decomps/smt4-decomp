/* NON_MATCHING: compiler removes the initial count clear overwritten by the final pair store. */
#include "common.h"
struct ListState { ListState *first; ListState *last; u32 count; u32 allocator; u32 capacity; };
/* Initializes an empty list with its allocator and capacity. */
extern "C" void FUN_004386a4(ListState *list,u32 allocator,u32 capacity) { list->count=0; list->first=list; list->allocator=allocator; list->capacity=capacity; list->last=list; list->count=capacity; }
