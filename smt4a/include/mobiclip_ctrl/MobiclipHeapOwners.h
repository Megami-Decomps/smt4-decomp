#ifndef MOBICLIP_CTRL_MOBICLIPHEAPOWNERS_H
#define MOBICLIP_CTRL_MOBICLIPHEAPOWNERS_H

#include "mobiclip_ctrl/MobiclipHeaps.h"

/* The movie player's heap owners: consecutive 0x58-byte slots after a 4-byte header. */
struct MobiclipSlotTable {
    u8 header[4];
    MobiclipHeap owners[6];
};

extern "C" MobiclipSlotTable g_mobiclipSlots;

static __inline MobiclipHeap *mobiclipHeapOwnerAt(u32 index)
{
    return &g_mobiclipSlots.owners[index];
}

#endif
