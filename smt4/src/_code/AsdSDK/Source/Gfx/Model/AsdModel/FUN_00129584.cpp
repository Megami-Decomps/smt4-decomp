/* NON_MATCHING: layout matches; only head/node use opposite r1/r2 assignments (retail node r1, head r2). */
#include "common.h"

struct ModelRegistryLink {
    ModelRegistryLink *next;     // 0x00
    ModelRegistryLink *previous; // 0x04
};

struct ModelRegistryEntry {
    u32 unk00;
    ModelRegistryLink link; // 0x04
    u32 parameter;          // 0x0c
};

static __inline ModelRegistryLink *modelRegistryGetLink(ModelRegistryEntry *entry)
{
    return entry != NULL ? &entry->link : NULL;
}

extern "C" {
extern ModelRegistryLink *g_modelWorkList;

// Retain the model parameter and insert its node into the circular registry.
u32 FUN_00129584(ModelRegistryEntry *entry, u32 parameter)
{
    entry->parameter = parameter;
    ModelRegistryLink *head = g_modelWorkList;
    ModelRegistryLink *node = modelRegistryGetLink(entry);
    if (head == NULL) {
        entry->link.next = entry->link.previous = modelRegistryGetLink(entry);
        g_modelWorkList = modelRegistryGetLink(entry);
    } else {
        node->previous = head;
        head->next->previous = node;
        node->next = head->next;
        head->next = node;
    }
    return 0;
}
}
