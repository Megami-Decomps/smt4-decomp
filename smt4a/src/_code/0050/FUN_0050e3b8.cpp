/* NON_MATCHING: retail 33 vs built 33 rows; armcc hoists the _ZTV9Obj55840c vtable load and -1 store above the lock field stores (4 lines differ). */
#include "common.h"

struct ExpHeapWithLockInit {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ void *field04;
    /* 0x08 */ void *field08;
    /* 0x0C */ u32 field0C;
    /* 0x10 */ u32 field10;
    /* 0x14 */ void *field14;
    /* 0x18 */ void *field18;
    /* 0x1C */ u8 unk1C[0x38];
    /* 0x54 */ u32 field54;
    /* 0x58 */ u32 lockState;
    /* 0x5C */ u32 lockOwner;
    /* 0x60 */ s32 lockCount;
};

struct AuxObjectInit {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ void *field04;
};

extern "C" {
extern u8 entry;
extern const u8 _ZTV9Obj55840c[];
extern const u8 _ZTV9Obj5583d0[];
extern ExpHeapWithLockInit DAT_0064751c;
extern AuxObjectInit DAT_00647580;

void expHeapBaseDestroyB(void *heap);
void FUN_00431e18(void *obj);
s32 __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso);

/* Dynamic initializer for the global ExpHeapBase+CriticalSection (DAT_0064751c) and auxiliary object (DAT_00647580). */
void FUN_0050e3b8(void)
{
    ExpHeapWithLockInit *heap = &DAT_0064751c;

    heap->field04 = NULL;
    heap->field08 = NULL;
    heap->field0C = 0;
    heap->field10 = 0;
    heap->field14 = NULL;
    heap->field18 = NULL;
    heap->field54 = 0;
    heap->lockState = 0;
    heap->lockCount = -1;
    heap->vtbl = _ZTV9Obj55840c + 8;
    heap->lockOwner = 0;
    __aeabi_atexit(heap, expHeapBaseDestroyB, &entry);
    DAT_00647580.vtbl = _ZTV9Obj5583d0 + 0x2C;
    DAT_00647580.field04 = NULL;
    __aeabi_atexit(&DAT_00647580, FUN_00431e18, &entry);
}

} /* extern "C" */
