/* NON_MATCHING: code is identical; retail's function-local static and its guard are the globals DAT_0064776c / DAT_005c1d20 and __cxa_guard_acquire / a __weak guard release, which a compiled static local cannot name. */
#include "common.h"

typedef struct ListNode {
    ListNode *next;
    ListNode *prev;
} ListNode;

/* Intrusive list whose empty sentinel points at itself. */
struct List {
    u32 count;     /* 0x00 */
    ListNode head; /* 0x04 */

    List()
    {
        count = 0;
        head.next = &head;
        head.prev = &head;
    }
};

extern "C" {

/* Returns the list singleton, constructing it on first use. */
List *FUN_001c35d8(void)
{
    static List list;
    return &list;
}

} /* extern "C" */
