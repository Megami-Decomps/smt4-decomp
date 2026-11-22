/* NON_MATCHING: 120 lines (102 vs 98 rows): clean rewrite with real vtables, OnlineScopedLock RAII, and tail-call to setState; retail uses stm for the 3-word header clear and keeps lock registers in r5/r8/r9. */
#include "network/DataStore/DataStoreMain.h"
#include "network/Common/CTRNetInit.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct OnlineLockMember {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 mask;
    /* 0x2C */ u8 state;
};

struct OnlineContext {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ OnlineLockMember lock;
};

extern "C" {
extern const u32 _ZTV9Obj557c90[];
extern const u32 _ZTV9Obj55a800[];
extern const u32 _ZTV9Obj559bd0[];
extern u32 DAT_005949a0;

void *FUN_0012bc90(void *sub);
void *FUN_002e9ff4(void *sub);
void *FUN_00514d48(void *sub, u32 arg);
void _ZN9Obj559f087vfunc00Ev(void *sub, u32 value);
OnlineContext *onlineContextGetInstance(void);
void FUN_0010d29c(OnlineLockMember *lock);
void onlineScopedLockUnlockMember(OnlineLockMember *lock);
void _ZN9Obj557c908setStateEj(void *obj, u32 state);
}

struct OnlineScopedLock {
    OnlineLockMember *member;
    s8 locked;
    OnlineScopedLock(OnlineLockMember *m) : member(m), locked(1)
    {
        if (member->state == 2 || (member->state == 1 && member->mask != 0 && (member->mask & ~DAT_005949a0) == 0)) {
            FUN_0010d29c(member);
        }
    }
    ~OnlineScopedLock()
    {
        if (locked) {
            if (member->state == 2 || (member->state == 1 && member->mask != 0 && (member->mask & ~DAT_005949a0) == 0)) {
                onlineScopedLockUnlockMember(member);
            }
        }
    }
};

extern "C" {
/* Allocates and initializes the DataStore reply object (Obj557c90), binds it under the online lock, and starts state 0. */
void dataStoreSubmitJob(DataStoreWork *work)
{
    if (FUN_00432acc() == 0) {
        return;
    }
    u8 *obj = (u8 *)asdOperatorNew(0x100);
    if (obj != NULL) {
        u32 linkValue = work->transfer.linkValue;
        *(const void **)obj = &_ZTV9Obj557c90[2];
        u8 *a = (u8 *)FUN_0012bc90(obj + 4);
        u8 *b = (u8 *)FUN_002e9ff4(a + 0x78);
        u8 *base = b - 0x7C;
        *(u32 *)(base + 0x88) = 0;
        *(u32 *)(base + 0x90) = 0;
        *(u32 *)(base + 0x94) = 0;
        *(u32 *)(base + 0x98) = 0;
        *(u32 *)(base + 0x9C) = 0;
        *(u32 *)(base + 0xA0) = 0;
        *(u32 *)(base + 0xA4) = 0;
        *(u32 *)(base + 0xA8) = 0;
        *(u32 *)(base + 0xAC) = 0;
        *(u32 *)(base + 0xB0) = 0;
        *(u32 *)(base + 0xB4) = 0;
        *(u32 *)(base + 0xB8) = 0;
        *(u32 *)(base + 0xBC) = 0;
        *(u32 *)(base + 0xC0) = 0;
        *(u32 *)(base + 0xC4) = 0;
        *(u32 *)(base + 0xC8) = 0;
        *(u32 *)(base + 0xCC) = 0;
        *(u32 *)(base + 0xD0) = 0;
        *(u32 *)(base + 0xD4) = 0;
        *(u32 *)(base + 0xD8) = 0;
        *(const void **)(base + 0xDC) = &_ZTV9Obj55a800[2];
        base[0xE0] = 0;
        u8 *c = (u8 *)FUN_00514d48(base + 0xE8, 0);
        *(const void **)(c - 0x0C) = &_ZTV9Obj559bd0[2];
        *(u32 *)(c + 0x10) = 0;
        c[0x14] = 0;
        obj = c - 0xE8;
        _ZN9Obj559f087vfunc00Ev(obj + 4, linkValue);
        {
            OnlineScopedLock guard(&onlineContextGetInstance()->lock);
            *(u32 *)(obj + 0x64) = 15;
        }
    }
    work->transfer.reply = (DataStoreReply *)obj;
    _ZN9Obj557c908setStateEj(obj, 0);
}
}
