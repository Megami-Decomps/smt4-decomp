/* NON_MATCHING: guards and calls now match retail; armcc hoists each group's base address (work + group offset) out of the slot loop (r5) where retail adds the group offset to work + i*0x8c per iteration (and uses r4/r5/r6 for index/work/table). */
#include "common.h"

/* One loading slot (0x8C bytes). */
struct LoadingSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 resource;     /* what the slot loaded; 0 while it is still pending */
    /* 0x08 */ u8 unk08[0x80];
    /* 0x88 */ u8 flags;         /* bit 0: the slot is in use */
};

/* Something the loader waits on. */
class LoadingReadiness {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
    virtual s32 IsReady() = 0;
};

/* The loading screen's work area (the part this reads). */
struct LoadingWork {
    /* 0x0000 */ u8 unk0000[0x1cfc];
    /* 0x1CFC */ void *table;       /* the loading table; NULL until it is set up */
    /* 0x1D00 */ LoadingSlot slotsA[4];
    /* 0x1F30 */ LoadingSlot slotsB[4];
    /* 0x2160 */ LoadingSlot slotsC[4];
    /* 0x2390 */ LoadingSlot slotsD[4];
    /* 0x25C0 */ u8 unk25c0[0xa74];
    /* 0x3034 */ LoadingReadiness *readiness;
};

extern "C" {
void __aeabi_memcpy4(void *dest, const void *source, u32 bytes);

// Whether every slot in use has loaded its resource (nothing to check without a loading table).
static inline bool slotsLoaded(void *table, const LoadingSlot *slots)
{
    if (table != NULL) {
        for (s32 i = 0; i < 4; i++) {
            LoadingSlot slot;
            __aeabi_memcpy4(&slot, &slots[i], sizeof(LoadingSlot));
            if ((slot.flags & 1) && slot.resource == 0) {
                return false;
            }
        }
    }
    return true;
}

// Whether every slot in use has finished loading and the loader's readiness object agrees.
s32 FUN_003dc504(LoadingWork *work)
{
    void *table = work->table;
    if (!slotsLoaded(table, work->slotsA)) {
        return 0;
    }
    if (!slotsLoaded(table, work->slotsB)) {
        return 0;
    }
    if (!slotsLoaded(table, work->slotsC)) {
        return 0;
    }
    if (!slotsLoaded(table, work->slotsD)) {
        return 0;
    }
    if (work->readiness != NULL && work->readiness->IsReady() == 0) {
        return 0;
    }
    return 1;
}

}
