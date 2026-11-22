/* NON_MATCHING: remaining: the empty-list arm, where retail recomputes the conversion for the two link stores (the build reuses the node). */
#include "common.h"
#include "classes/AsdNodeList.h"

/* unit-local: a model work request (FUN_0011cd24 runs its first virtual function); the list link follows the
 * vtable pointer, so converting the entry to its link is the NULL-checked derived-to-base cast. */
class ModelRegistryEntry : public AsdListLink {
public:
    virtual void run() = 0;
    /* 0x0C */ u32 parameter;
};

extern AsdNodeList g_modelWorkList;

extern "C" {

/* Stores the model parameter and appends the entry's link to the circular model work list. */
u32 modelWorkListAppend(ModelRegistryEntry *entry, u32 parameter)
{
    entry->parameter = parameter;
    AsdListLink *head = g_modelWorkList.head;
    AsdListLink *node = entry;
    if (head == NULL) {
        entry->previous = entry->next = node;
        g_modelWorkList.head = entry;
    } else {
        node->next = head;
        head->previous->next = node;
        node->previous = head->previous;
        head->previous = node;
    }
    return 0;
}
}
