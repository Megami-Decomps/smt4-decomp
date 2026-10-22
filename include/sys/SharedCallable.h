#ifndef SYS_SHARED_CALLABLE_H
#define SYS_SHARED_CALLABLE_H

#include <stddef.h>
#include "common.h"

class SharedCallableObject {
public:
    virtual ~SharedCallableObject();
};

class SharedCallableAllocator {
public:
    virtual void vfunc00();
    virtual void release(SharedCallableObject *object);
};

/* Copies share an object through an intrusive ring; each slot retains its own allocator. */
struct SharedCallableSlot {
    /* 0x00 */ SharedCallableAllocator *allocator;
    /* 0x04 */ SharedCallableObject *object;
    /* 0x08 */ SharedCallableSlot *next;
    /* 0x0C */ SharedCallableSlot *previous;

    void clear(bool destroyObject)
    {
        if (next == NULL || next == this) {
            if (object != NULL) {
                if (destroyObject) {
                    object->~SharedCallableObject();
                }
                allocator->release(object);
            }
        } else {
            next->previous = previous;
            previous->next = next;
            next = NULL;
            previous = NULL;
        }
        object = NULL;
    }

    SharedCallableSlot &operator=(SharedCallableSlot &source)
    {
        if (this != &source) {
            clear(false);
            object = source.object;
            previous = source.previous;
            previous->next = this;
            next = &source;
            source.previous = this;
        }
        return *this;
    }
};

typedef char SharedCallableSlotSizeCheck[sizeof(SharedCallableSlot) == 0x10 ? 1 : -1];
typedef char SharedCallableSlotObjectOffsetCheck[
    offsetof(SharedCallableSlot, object) == 0x04 ? 1 : -1];
typedef char SharedCallableSlotNextOffsetCheck[
    offsetof(SharedCallableSlot, next) == 0x08 ? 1 : -1];
typedef char SharedCallableSlotPreviousOffsetCheck[
    offsetof(SharedCallableSlot, previous) == 0x0c ? 1 : -1];

#endif
