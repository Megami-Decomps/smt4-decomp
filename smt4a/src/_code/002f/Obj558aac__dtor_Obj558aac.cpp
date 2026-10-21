/* NON_MATCHING: retail emits 'adds r4, r0, #4'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
struct Node { Node *next; u32 reserved; void *allocation; };
struct List { Node *first; Node *free; u32 second, third; Node *sentinel; };
extern "C" {
void FUN_001329ba(List *list);
void asdOperatorDeleteArray(void *array);
}
class Obj558aac {
public:
    ~Obj558aac();
    u32 reserved;
    List list;
};
Obj558aac::~Obj558aac() {
    if (list.sentinel) {
        FUN_001329ba(&list);
        list.sentinel->next = list.free;
        list.free = list.sentinel;
        while (list.first) {
            Node *node = list.first;
            list.first = node->next;
            asdOperatorDeleteArray(node->allocation);
            asdOperatorDeleteArray(node);
        }
        list.free = NULL;
        list.second = list.third = 0;
    }
}
