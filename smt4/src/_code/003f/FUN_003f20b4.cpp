/* NON_MATCHING: stores and calls match; armcc hoists the vtable-pointer load to the first instruction in retail but schedules it just before its store here */
#include "common.h"

/* An object with a vtable at the start and six zeroed link/count words. */
struct HeapOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 words[6];
    /* 0x1c */ u8 unk1c[0x54 - 0x1c];
    /* 0x54 */ u32 tail;
};

/* The module's heap bookkeeping record. */
struct HeapRecord {
    /* 0x00 */ u32 head;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 total;
    /* 0x0c */ u32 reserved;
    /* 0x10 */ u8 flagA;
    /* 0x14 */ u32 next;
    /* 0x18 */ u8 flagB;
};

extern "C" {
extern const u8 DAT_00420ef4;
extern HeapRecord DAT_004eac24;
extern u8 entry;

void expHeapDestroyA(HeapOwner *owner);
void FUN_003574ac(HeapRecord *record);
__weak int __aeabi_atexit(void *object, void (*destroy)(void *), void *module);
void sceneNotifyNoop(void *object, void (*destroy)(void *), void *module);

/* Resets a heap owner and the shared heap record, registering each one's destructor. */
void FUN_003f20b4(HeapOwner *owner)
{
    owner->words[0] = 0;
    owner->words[1] = 0;
    owner->words[2] = 0;
    owner->words[3] = 0;
    owner->words[4] = 0;
    owner->words[5] = 0;
    owner->vtable = &DAT_00420ef4;
    owner->tail = 0;
    __aeabi_atexit(owner, (void (*)(void *))expHeapDestroyA, &entry);

    DAT_004eac24.head = 0;
    DAT_004eac24.count = 0;
    DAT_004eac24.total = 0;
    DAT_004eac24.reserved = 0;
    DAT_004eac24.flagA = 0;
    DAT_004eac24.next = 0;
    DAT_004eac24.flagB = 0;
    sceneNotifyNoop(&DAT_004eac24, (void (*)(void *))FUN_003574ac, &entry);
}

} /* extern "C" */
