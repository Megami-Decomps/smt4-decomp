#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" void asdVramBlockListInsert(AsdVramBlockList* list, AsdVramBlock* block)
{
    AsdVramBlock* previous = list->tail;
    if (previous == NULL) {
        list->head = block;
        list->tail = block;
        block->prev = NULL;
        block->next = NULL;
    } else {
        while (previous != NULL) {
            if (block->addr > previous->addr) {
                break;
            }
            previous = previous->prev;
        }
        if (previous == NULL) {
            block->prev = NULL;
            block->next = list->head;
            list->head = block;
            block->next->prev = block;
        } else {
            AsdVramBlock* next = previous->next;
            previous->next = block;
            block->prev = previous;
            block->next = next;
            if (next == NULL) {
                list->tail = block;
            } else {
                next->prev = block;
            }
        }
    }
    ++list->count;
}
