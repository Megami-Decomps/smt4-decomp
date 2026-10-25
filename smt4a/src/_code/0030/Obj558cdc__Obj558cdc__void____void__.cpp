/* NON_MATCHING: constructor stores and shared-tail list insertion scheduling differ; OnlineCore excluded from scope. */
#include "classes/Obj558cdc.h"

extern "C" RegisteredTaskList *FUN_002f4424();
extern "C" s32 wordRefsDiffer_002f4474(Obj558cdc *const *left, Obj558cdc *const *right);

// Register this task at the end of the global task list.
Obj558cdc::Obj558cdc(void *firstValue, void *secondValue)
{
    next = NULL;
    second = secondValue;
    first = firstValue;
    previous = NULL;
    active = 0;
    RegisteredTaskList *list = FUN_002f4424();
    if (wordRefsDiffer_002f4474(&list->head, &list->end)) {
        list->tail->next = this;
        previous = list->tail;
        list->tail = this;
    } else {
        list->head = this;
        list->tail = this;
    }
    ++list->count;
}
