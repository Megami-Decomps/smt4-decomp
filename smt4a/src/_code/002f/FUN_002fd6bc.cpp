/* NON_MATCHING: compiler schedules copied fields and linked-list pointer updates differently. */
#include "common.h"
extern "C" {
extern const u8 DAT_005591d8;
struct Value { const void *vtable; u32 first, second, third; };
struct Node { Node *next; Node *previous; Value value; };
struct Object { u8 unk00[0x10]; Node *current; u32 count; };
Node *FUN_002fd694(Object *object, u32 option);
/* Inserts a copied virtual value into the circular node chain. */
void FUN_002fd6bc(Object *object, const Value *source) {
    Node *head = object->current;
    Node *node = FUN_002fd694(object, 0);
    node->value.vtable = &DAT_005591d8;
    node->value.second = source->second;
    node->value.first = source->first;
    node->value.third = source->third;
    node->next = head;
    node->previous = head->previous;
    head->previous->next = node;
    head->previous = node;
    ++object->count;
}
}
