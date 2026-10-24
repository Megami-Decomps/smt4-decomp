/* NON_MATCHING: scheduling/register allocation only (retail keeps the list in r4 and the head in r5 and hoists the zero above the child-list null check); instructions and stores otherwise match. */
#include "common.h"
#include <new>

/* A circular doubly linked list link: `next` first, then `prev`. */
struct ListLink {
    /* 0x00 */ ListLink *next;
    /* 0x04 */ ListLink *prev;
};

/* The empty child list every entry starts with: both links point at itself. */
struct ChildList {
    ChildList() : next(this), prev(this), value(0), ordinal(0) {}

    /* 0x00 */ ChildList *next;
    /* 0x04 */ ChildList *prev;
    /* 0x08 */ u32 value;
    /* 0x0C */ u32 ordinal;
};

/* An entry: the list link and its child list. */
struct ListEntry {
    /* 0x00 */ ListLink link;
    /* 0x08 */ ChildList child;
};

/* The container: the owning key, the list head and the allocation context it was built for. */
struct EntryList {
    /* 0x00 */ u32 key;
    /* 0x04 */ ListLink head;
    /* 0x0C */ void *context;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 nextOrdinal;
};

struct EntryListSource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 key;
};

extern "C" {

ListEntry *FUN_004387f0(void *context, s32 kind);
s32 FUN_0043596c(EntryList *list, u32 *position, ListEntry **entry);

// Adds a new entry to the front of the list, registers it and numbers the entries; returns 0 or
// an error code (2 when no entry could be allocated).
s32 FUN_00436b2c(EntryList *list, void *context, EntryListSource *source)
{
    ListLink *head = &list->head;
    list->key = source->key;
    list->context = context;
    list->nextOrdinal = (u32)context;
    ListEntry *entry = FUN_004387f0(context, 2);
    if (entry == NULL) {
        return 2;
    }
    new (&entry->child) ChildList();
    entry->link.next = head->next;
    entry->link.prev = head;
    head->next = &entry->link;
    entry->link.next->prev = &entry->link;
    entry->child.value = list->nextOrdinal;
    ListEntry *registered = entry;
    s32 result = FUN_0043596c(list, &list->unk10, &registered);
    if (result != 0) {
        return result;
    }
    u32 ordinal = 0;
    for (ListLink *link = list->head.prev; link != head; link = link->prev) {
        ((ListEntry *)link)->child.ordinal = ordinal++;
    }
    return 0;
}

}
