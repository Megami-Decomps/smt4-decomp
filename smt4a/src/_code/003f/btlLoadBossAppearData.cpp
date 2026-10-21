#include "common.h"

extern "C" {

typedef struct BossAppearOwner {
    /* 0x0000 */ u8 unk0000[0x2290];
    /* 0x2290 */ void *data;
} BossAppearOwner;

int asdLoadFileAsyncSimple(const char *path, void **slot, s32 arg);

/* Passes battle/NewBossAppear.tbb and the owner's data slot to asdLoadFileAsyncSimple unless the slot is already set. */
void btlLoadBossAppearData(BossAppearOwner *owner)
{
    if (owner->data == NULL) {
        asdLoadFileAsyncSimple("battle/NewBossAppear.tbb", &owner->data, 0);
    }
}

} /* extern "C" */
