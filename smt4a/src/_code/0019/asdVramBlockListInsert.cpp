#include "AsdSDK/asdVramBlockListInsert.h"

// Insert in ascending address order, ahead of existing runs at the same address.
extern "C" void asdVramBlockListInsert(AsdVramBlockListA *list, AsdVramBlockA *block)
{
    AsdVramBlockA *cursor = list->tail;
    if (cursor == 0) {
        list->head = block;
        list->tail = block;
        block->prev = 0;
        block->next = 0;
    } else {
        do {
            if (block->addr > cursor->addr) {
                break;
            }
            cursor = cursor->prev;
        } while (cursor != 0);

        if (cursor == 0) {
            block->prev = 0;
            block->next = list->head;
            list->head = block;
            block->next->prev = block;
        } else {
            AsdVramBlockA *successor = cursor->next;
            cursor->next = block;
            block->prev = cursor;
            block->next = successor;
            if (successor == 0) {
                list->tail = block;
            } else {
                successor->prev = block;
            }
        }
    }
    ++list->count;
}
