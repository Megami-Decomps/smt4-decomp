/* NON_MATCHING: compiler initializes the list sentinel and member values in a different order. */
#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj558aac[];
struct Node { Node *next; Node *previous; };
struct ListWork { u32 first, second, third, fourth; Node *sentinel; u32 count; };
struct Object { const void *vtable; ListWork list; };
Node *FUN_002ee998(ListWork *object, u32 option);
/* Constructs an empty circular list and initializes its dispatch pointer. */
Object *FUN_002fe94c(Object *object) {
    object->list.first = object->list.second = object->list.third = object->list.fourth = 0;
    object->list.sentinel = NULL;
    object->list.count = 0;
    Node *sentinel = FUN_002ee998(&object->list, 1);
    object->list.sentinel = sentinel;
    sentinel->next = sentinel;
    sentinel->previous = sentinel;
    object->vtable = _ZTV9Obj558aac + 8;
    return object;
}
}
