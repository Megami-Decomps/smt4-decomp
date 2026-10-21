/* NON_MATCHING: retail reloads the next link and uses different register allocation and virtual-call scheduling. */
#include "common.h"

class ListValue {
public:
    virtual void release();
};

struct ListNode {
    ListNode* next;   // 0x00
    ListNode* prev;   // 0x04
    u32 valueStorage; // 0x08: inline polymorphic value
};

struct NodeList {
    u32 unk00;       // 0x00
    ListNode* free;   // 0x04
    u32 unk08[2];    // 0x08
    ListNode* end;    // 0x10
    u32 count;       // 0x14
};

extern "C" void FUN_00306d50(ListNode** result, NodeList* list, ListNode** iterator)
{
    if (list->end == *iterator) {
        *result = list->end;
        return;
    }
    ListNode* next = (*iterator)->next;
    (*iterator)->prev->next = (*iterator)->next;
    (*iterator)->next->prev = (*iterator)->prev;
    --list->count;
    reinterpret_cast<ListValue*>(&(*iterator)->valueStorage)->release();
    ListNode* node = *iterator;
    node->next = list->free;
    list->free = node;
    *result = next;
}
