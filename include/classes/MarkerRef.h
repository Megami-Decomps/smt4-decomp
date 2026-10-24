#ifndef CLASSES_MARKERREF_H
#define CLASSES_MARKERREF_H

#include "common.h"

/* An allocator the engine's reference-counted handles free through (vtable slot 0 allocates, slot 1
 * releases; there is no destructor slot). */
class RefAllocator {
public:
    virtual void *allocate(u32 bytes) = 0;     /* +0x00 */
    virtual void release(void *block) = 0;     /* +0x04 */
};

/* The 0x18-byte object a marker handle points at. */
struct Marker {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 ready;
    /* 0x12 */ u8 unk12[6];
};

/* A handle on a Marker: handles on the same marker form a ring; the last one to leave frees it
 * through the allocator (16 bytes). */
struct MarkerRef {
    /* 0x00 */ RefAllocator *allocator;
    /* 0x04 */ Marker *object;
    /* 0x08 */ MarkerRef *next;
    /* 0x0C */ MarkerRef *prev;

    /* Leaves the ring it is in. */
    void leaveRing()
    {
        next->prev = prev;
        prev->next = next;
        next = NULL;
        prev = NULL;
    }

    /* Makes this handle a one-element ring on `marker`. */
    void reset(Marker *marker)
    {
        if (next == NULL || next == this) {
            if (object != NULL) {
                allocator->release(object);
            }
        } else {
            leaveRing();
        }
        object = marker;
        prev = this;
        next = this;
    }

    /* Joins the ring of `other`. */
    MarkerRef &operator=(const MarkerRef &other)
    {
        if (this != &other) {
            if (next != NULL && next != this) {
                leaveRing();
            }
            object = NULL;
            object = other.object;
            prev = other.prev;
            prev->next = this;
            next = const_cast<MarkerRef *>(&other);
            const_cast<MarkerRef &>(other).prev = this;
        }
        return *this;
    }
};

#endif
