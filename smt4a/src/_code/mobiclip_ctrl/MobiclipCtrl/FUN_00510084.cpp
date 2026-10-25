/* NON_MATCHING: static initializer of the MobiClip controller globals. Six 0x58-byte slot objects of vtable Obj5583d0 (g_mobiclipSlots + 4) are zeroed and registered with atexit, then the stream objects follow; the vtable stores need real constructors for Obj5583d0/Obj5583b8/Obj557f14/Obj557f00 whose classes are not recovered yet, so the vtable words are kept out of this version. */
#include "common.h"

// One MobiClip slot object: a vtable word, six state words and a trailing word.
struct MobiclipSlot {
    u32 vtable;             // 0x00 (set by the Obj5583d0 constructor)
    u32 words[6];           // 0x04
    u8 unk1c[0x38];
    u32 tail;               // 0x54
};

struct StreamHeader {
    u32 vtable;             // 0x00
    u32 unk04;              // 0x04: points back into the object
    u8 flagA;               // 0x08
    u8 flagB;               // 0x09
    u8 flagC;               // 0x0a
};

extern "C" {

extern u8 g_mobiclipSlots[0x210];
extern u8 entry;

s32 __aeabi_atexit(void* object, void (*destroy)(void*), void* module);
void expHeapBaseDestroyA(void* object);

// Clears the six slot objects and registers their finalizers.
void FUN_00510084(void)
{
    MobiclipSlot* slots = reinterpret_cast<MobiclipSlot*>(g_mobiclipSlots + 4);
    for (s32 i = 0; i < 6; i++) {
        MobiclipSlot* slot = &slots[i];
        for (s32 w = 0; w < 6; w++) slot->words[w] = 0;
        slot->tail = 0;
        __aeabi_atexit(slot, expHeapBaseDestroyA, &entry);
    }
}

} /* extern "C" */
