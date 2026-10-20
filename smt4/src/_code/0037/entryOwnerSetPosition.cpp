#include "common.h"

typedef struct Vec3Words {
    /* 0x0 */ u32 x;
    /* 0x4 */ u32 y;
    /* 0x8 */ u32 z;
} Vec3Words;

typedef struct PlacedEntry {
    /* 0x00 */ u32 flags;           /* bit 31: first kind, bit 30: second kind */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ Vec3Words position;
} PlacedEntry;

/* The object that hands out the current entry (slot 4 of its vtable). */
class EntryProvider {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual PlacedEntry *getCurrentEntry();
};

typedef struct EntryOwner {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ EntryProvider *provider;
} EntryOwner;

extern "C" {

/* Writes `position` into the current entry of the first kind, or else of the second kind. */
void entryOwnerSetPosition(EntryOwner *owner, Vec3Words *position)
{
    PlacedEntry *entry = owner->provider->getCurrentEntry();
    PlacedEntry *first;
    PlacedEntry *second;

    if (entry != NULL && (entry->flags & 0x80000000) != 0) {
        first = entry;
    } else {
        first = NULL;
    }
    second = owner->provider->getCurrentEntry();
    if (second != NULL && (second->flags & 0x40000000) == 0) {
        second = NULL;
    }
    if (first != NULL) {
        first->position = *position;
    } else if (second != NULL) {
        second->position = *position;
    }
}

} /* extern "C" */
