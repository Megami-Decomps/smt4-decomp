/* Matches with --cpu=5TE (requested): this unit was built for the older core. */
#include "common.h"

extern "C" {

typedef struct Effect {
    u8 unk00[0x18];
    u8 finished; /* 0x18 */
    u8 unk19[3];
    void *handle; /* 0x1c */
} Effect;

typedef struct EffectOwner {
    u8 unk00[4];
    Effect *effect; /* 0x04 */
} EffectOwner;

extern void FUN_002a6fb8(void *handle);
extern void asdMemFreeNonNull(void *handle);
extern void jyoucyuGetTableEntry(int index);

extern EffectOwner g_qcMain;

/* Marks the owner's effect finished and releases its handle. */
void effectQcFinish(void)
{
    Effect *effect = g_qcMain.effect;

    effect->finished = 1;
    if (effect->handle != NULL) {
        FUN_002a6fb8(effect->handle);
        asdMemFreeNonNull(effect->handle);
        effect->handle = NULL;
    }
    jyoucyuGetTableEntry(0);
}

} /* extern "C" */
