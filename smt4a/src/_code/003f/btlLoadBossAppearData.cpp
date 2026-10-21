#include "common.h"

extern "C" {

typedef struct BossAppearOwner {
    /* 0x0000 */ u8 unk0000[0x2290];
    /* 0x2290 */ void *data;
} BossAppearOwner;

int FUN_002804b0(const char *path, void **slot, s32 arg);

/* Passes battle/NewBossAppear.tbb and the owner's data slot to FUN_002804b0 unless the slot is already set. */
void btlLoadBossAppearData(BossAppearOwner *owner)
{
    if (owner->data == NULL) {
        FUN_002804b0("battle/NewBossAppear.tbb", &owner->data, 0);
    }
}

} /* extern "C" */
