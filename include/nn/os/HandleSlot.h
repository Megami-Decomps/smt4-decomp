#ifndef NN_OS_HANDLE_SLOT_H
#define NN_OS_HANDLE_SLOT_H

#include "nn/svc.h"

/* A kernel handle owned by an object; closing it zeroes the slot. */
struct HandleSlot {
    u32 value;
};

static __inline HandleSlot *closeSlot(HandleSlot *slot)
{
    if (slot->value != 0) {
        nn::svc::CloseHandle(slot->value);
        slot->value = 0;
    }
    return slot;
}

#endif
