/* NON_MATCHING: the critical-section pointer and linked-list traversal occupy different saved registers. */
#include "shard/Shard0043.h"

extern "C" void nn_os_CriticalSection_Enter(void *section);
extern "C" void nn_os_CriticalSection_Leave(void *section);

/* Mark an owned entry for processing unless it is already in state three. */
extern "C" void synchronizedListMarkEntry(SynchronizedListOwner *owner, SynchronizedListEntry *entry)
{
    u32 *section = &owner->criticalSection;
    nn_os_CriticalSection_Enter(section);
    for (SynchronizedListEntry *current = owner->first; current != NULL; current = current->next) {
        if (current == entry) {
            if (entry->state != 3) {
                owner->flags |= 2;
            }
            break;
        }
    }
    nn_os_CriticalSection_Leave(section);
}
