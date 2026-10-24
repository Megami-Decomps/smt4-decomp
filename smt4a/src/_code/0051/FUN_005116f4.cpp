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
extern const u8 DAT_005583d8;
extern HeapRecord DAT_006475e4;
extern u8 entry;

void expHeapBaseDestroyA(HeapOwner *owner);
void FUN_0042ce40(HeapRecord *record);
__weak int __aeabi_atexit(void *object, void (*destroy)(void *), void *module);
void emptyStub_002f4370(void *object, void (*destroy)(void *), void *module);

/* Resets a heap owner and the shared heap record, registering each one's destructor. */
void FUN_005116f4(HeapOwner *owner)
{
    owner->words[0] = 0;
    owner->words[1] = 0;
    owner->words[2] = 0;
    owner->words[3] = 0;
    owner->words[4] = 0;
    owner->words[5] = 0;
    owner->vtable = &DAT_005583d8;
    owner->tail = 0;
    __aeabi_atexit(owner, (void (*)(void *))expHeapBaseDestroyA, &entry);

    DAT_006475e4.head = 0;
    DAT_006475e4.count = 0;
    DAT_006475e4.total = 0;
    DAT_006475e4.reserved = 0;
    DAT_006475e4.flagA = 0;
    DAT_006475e4.next = 0;
    DAT_006475e4.flagB = 0;
    emptyStub_002f4370(&DAT_006475e4, (void (*)(void *))FUN_0042ce40, &entry);
}

} /* extern "C" */
