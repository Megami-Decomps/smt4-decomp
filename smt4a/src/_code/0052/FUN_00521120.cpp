/* NON_MATCHING: Retail mov r6, r0 differs from recovered mov r5, r0. */
#include "common.h"

namespace {

struct PayloadView;
struct AllocatorView;

struct PayloadVTableView {
    void (*destroy)(PayloadView*);
};

struct PayloadView {
    PayloadVTableView* vtable; // 0x00
};

struct AllocatorVTableView {
    u32 unk00; // 0x00
    void (*release)(AllocatorView*, void*); // 0x04
};

struct AllocatorView {
    AllocatorVTableView* vtable; // 0x00
};

struct LinkView {
    AllocatorView* allocator; // 0x00 (entry + 0x14)
    PayloadView* payload; // 0x04 (entry + 0x18)
    LinkView* previous; // 0x08 (entry + 0x1c)
    LinkView* next; // 0x0c (entry + 0x20)
};

struct EntryView {
    u8 unk00[0x14]; // 0x00
    LinkView link; // 0x14
};

struct OwnerView {
    u8 unk00[0x24]; // 0x00
    AllocatorView* allocator; // 0x24
};

// Unlink an entry or destroy its standalone payload, then release the entry.
}

extern "C" void FUN_00521120(OwnerView* owner, EntryView* entry)
{
    LinkView* link = &entry->link;
    LinkView* previous = link->previous;

    if (previous == 0 || previous == link) {
        if (link->payload != 0) {
            link->payload->vtable->destroy(link->payload);
            link->allocator->vtable->release(link->allocator, link->payload);
        }
    } else {
        previous->next = link->next;
        link->next->previous = link->previous;
        link->previous = 0;
        link->next = 0;
    }

    link->payload = 0;
    owner->allocator->vtable->release(owner->allocator, entry);
}
