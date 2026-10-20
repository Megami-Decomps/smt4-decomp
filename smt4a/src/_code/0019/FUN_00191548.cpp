/* NON_MATCHING: instruction scheduling of the static initialisation differs (retail hoists the guard address for the release hook above the stores and pairs [4]/[8] in one strd). */
#include "common.h"

extern "C" {

typedef struct ListNode {
    /* 0x00 */ struct ListNode *next;
    /* 0x04 */ struct ListNode *prev;
} ListNode;

/* A function-local static: two words, a circular list head, a flag and a counter. */
typedef struct StaticList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ ListNode head;
    /* 0x10 */ u8 flag;
    /* 0x11 */ u8 pad11[3];
    /* 0x14 */ u32 count;
} StaticList;

extern u32 DAT_005c0f60;         /* initialisation guard of the static */
extern StaticList DAT_006465f8;  /* the static */

__weak void FUN_00191548_guardRelease(u32 *guard);
int __cxa_guard_acquire(u32 *guard);    /* guard acquire: nonzero when this caller initialises */

/* Returns the (lazily constructed) static list. */
StaticList *FUN_00191548(void)
{
    if ((DAT_005c0f60 & 1) == 0 && __cxa_guard_acquire(&DAT_005c0f60) != 0) {
        DAT_006465f8.unk00 = 0;
        DAT_006465f8.unk04 = 0;
        DAT_006465f8.head.next = &DAT_006465f8.head;
        DAT_006465f8.head.prev = &DAT_006465f8.head;
        DAT_006465f8.flag = 0;
        DAT_006465f8.count = 0;
        FUN_00191548_guardRelease(&DAT_005c0f60);
    }
    return &DAT_006465f8;
}

} /* extern "C" */
