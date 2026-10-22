/* NON_MATCHING: Retail add r5, r5, #16 differs from recovered ldr r0, [r5, #8]!. */
#include "common.h"

struct RangeObjectView;
struct RangeOwnerView;

struct RangeObjectVTableView {
    void (*unk00)(RangeObjectView *object); // 0x00
};

struct RangeObjectView {
    const RangeObjectVTableView *vtable; // 0x00
};

struct RangeOwnerVTableView {
    u8 unk00[4]; // 0x00
    void (*unk04)(RangeOwnerView *owner, RangeObjectView *object); // 0x04
};

struct RangeOwnerView {
    const RangeOwnerVTableView *vtable; // 0x00
};

struct RangeEntryView {
    RangeOwnerView *owner; // 0x00
    RangeObjectView *object; // 0x04
    RangeEntryView *next; // 0x08
    RangeEntryView *previous; // 0x0C
};

struct RangeContainerView {
    u8 unk00[4]; // 0x00
    RangeEntryView *entries; // 0x04
};

// Clear a range of entries, releasing standalone objects or unlinking linked entries.
extern "C" void FUN_00521c8c(RangeContainerView *container, s32 first, s32 last)
{
    RangeEntryView *entry = container->entries + first;
    RangeEntryView *end = container->entries + last;

    while (entry < end) {
        RangeEntryView *current = entry++;
        if (current->next == 0 || current->next == current) {
            if (current->object != 0) {
                current->object->vtable->unk00(current->object);
                current->owner->vtable->unk04(current->owner, current->object);
            }
        } else {
            current->next->previous = current->previous;
            current->previous->next = current->next;
            current->next = 0;
            current->previous = 0;
        }
        current->object = 0;
    }
}
