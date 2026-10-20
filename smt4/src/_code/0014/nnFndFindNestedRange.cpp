/* Finds the innermost node in a nested list whose [start, end) range contains the address. */
#include "common.h"

extern "C" {

typedef struct ListNode ListNode;
struct ListNode {
    u8 unk00[0xc];        /* 0x00 */
    u8 children[0xc];     /* 0x0c nested list head */
    u32 start;            /* 0x18 */
    u32 end;              /* 0x1c */
};

ListNode *nn_fnd_detail_GetNextListObject(void *list, ListNode *previous);

ListNode *nnFndFindNestedRange(void *list, u32 address)
{
    ListNode *node = NULL;

    while ((node = nn_fnd_detail_GetNextListObject(list, node)) != NULL) {
        if (node->start <= address && address < node->end) {
            ListNode *inner = nnFndFindNestedRange(node->children, address);

            if (inner == NULL) {
                inner = node;
            }
            return inner;
        }
    }
    return NULL;
}

} /* extern "C" */
