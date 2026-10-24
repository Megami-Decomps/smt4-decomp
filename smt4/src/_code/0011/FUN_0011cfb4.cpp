/* NON_MATCHING: close: retail copies the configured float through VFP (vldr/vstr) and re-materializes the zero for each group of three integer stores with `vmov r0, s0`; the build copies the float with ldr/str and keeps one `mov r0, #0`. */
#include "common.h"
#include "nn/Result.h"

/* A block of 24 tuning floats, cleared except for the value taken from the configuration. */
struct TuningBlock {
    /* 0x00 */ f32 values[6];
    /* 0x18 */ u32 words[12];
    /* 0x48 */ f32 configured;
    /* 0x4c */ f32 tail[5];
};

/* The configuration record read from the system settings (only the float this block uses). */
struct TuningConfig {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 scale;
};

extern "C" {

extern s8 DAT_0044e7e8;       /* set once the settings have been read */
extern TuningConfig DAT_004d4638;

void nn_cfg_CTR_Initialize(void);
s32 FUN_0013a170(TuningConfig *out, u32 size, u32 id);
void FUN_001467a4(void);
void asdFatalError(void);

// Resets the tuning block; the first call also loads the configuration.
void FUN_0011cfb4(TuningBlock *block)
{
    if (DAT_0044e7e8 == 0) {
        nn_cfg_CTR_Initialize();
        s32 result = FUN_0013a170(&DAT_004d4638, 0x20, 0x50005);
        if (nnResultIsFailure(result)) {
            asdFatalError();
        }
        FUN_001467a4();
        DAT_0044e7e8 = 1;
    }
    block->configured = DAT_004d4638.scale;
    block->tail[0] = 0.0f;
    block->tail[1] = 0.0f;
    block->tail[2] = 0.0f;
    block->tail[3] = 0.0f;
    block->tail[4] = 0.0f;
    block->values[0] = 0.0f;
    block->values[1] = 0.0f;
    block->values[2] = 0.0f;
    block->values[3] = 0.0f;
    block->values[4] = 0.0f;
    block->values[5] = 0.0f;
    block->words[0] = 0;
    block->words[1] = 0;
    block->words[2] = 0;
    block->words[3] = 0;
    block->words[4] = 0;
    block->words[5] = 0;
    block->words[6] = 0;
    block->words[7] = 0;
    block->words[8] = 0;
    block->words[9] = 0;
    block->words[10] = 0;
    block->words[11] = 0;
}

}
