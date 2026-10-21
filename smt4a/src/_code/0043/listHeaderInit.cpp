/* Resets the list header to empty: both ends point at the header itself and all counters are zero. */
#include "common.h"

extern "C" {

typedef struct ListHeader {
    /* 0x00 */ struct ListHeader *head;
    /* 0x04 */ struct ListHeader *tail;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} ListHeader;

void listHeaderInit(ListHeader *list)
{
    list->unk08 = 0;
    list->head = list;
    list->unk0C = 0;
    list->unk10 = 0;
    list->unk14 = 0;
    list->unk18 = 0;
    list->tail = list;
}

}
