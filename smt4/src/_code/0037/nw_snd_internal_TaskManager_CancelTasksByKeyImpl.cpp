/* NON_MATCHING: the inner loop is laid out differently (retail tests at the top and keeps the critical section pointer in a register). */
/* Removes every entry whose key is `key` from the three entry lists of `self` (under its critical section) and destroys it. */
#include "common.h"

extern "C" {

struct ListNode0037a2a8 {
    /* 0x00 */ ListNode0037a2a8 *next;
    /* 0x04 */ ListNode0037a2a8 *prev;
};

struct Entry0037a2a8 {
    /* 0x00 */ ListNode0037a2a8 link;
    /* 0x08 */ u8 payload[8];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 key;
};

struct EntryList0037a2a8 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ListNode0037a2a8 root; /* circular: the list is empty when root.next == &root */
};

struct Owner0037a2a8 {
    /* 0x00 */ EntryList0037a2a8 lists[3];
    /* 0x24 */ u8 unk24[8];
    /* 0x2c */ u8 criticalSection[0x10];
};

void nn_os_CriticalSection_Enter(u8 *cs);
void nn_os_CriticalSection_Leave(u8 *cs);
void nw_ut_internal_LinkListImpl_erase_2BAE30(EntryList0037a2a8 *list, ListNode0037a2a8 *node);
void nn_os_LightEvent_Signal(u8 *payload);

void nw_snd_internal_TaskManager_CancelTasksByKeyImpl(Owner0037a2a8 *self, u32 key)
{
    u32 i;

    nn_os_CriticalSection_Enter(self->criticalSection);
    for (i = 0; i < 3; i++) {
        EntryList0037a2a8 *list = &self->lists[(u8)i];
        ListNode0037a2a8 *node = list->root.next;

        while (node != &list->root) {
            Entry0037a2a8 *entry = (Entry0037a2a8 *)node;

            node = node->next;
            if (entry->key == key) {
                nw_ut_internal_LinkListImpl_erase_2BAE30(list, &entry->link);
                entry->state = 4;
                nn_os_LightEvent_Signal(entry->payload);
            }
        }
    }
    nn_os_CriticalSection_Leave(self->criticalSection);
}

}
