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
