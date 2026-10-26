/* NON_MATCHING: retail stores the three integer values as one stm (+ the table pointer from the same address register) and pushes r3-r9; built splits the stores. Fixed here: the table-entry test (return when present), buffer slot 1 and same-file reverb data. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

struct SoundReverbEffect {
    u8 unk00[0x110];
};

extern "C" {
extern const char DAT_004076c8[];
SoundReverbEffect DAT_004c54f4;
SoundReverbParameters DAT_004c5604;
extern void *g_soundEffectBuffers[2];
s32 nw_snd_FxReverb_SetParam(SoundReverbEffect *effect,
                             const SoundReverbParameters *parameters);
u32 nw_snd_FxReverb_GetRequiredMemSize(SoundReverbEffect *effect);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 kind);
s32 nw_snd_FxReverb_AssignWorkBuffer(SoundReverbEffect *effect,
                                    void *buffer, u32 size);
s32 FUN_00120dc4(u32 bus, SoundReverbEffect *effect);

void FUN_00109580(void)
{
    if (jyoucyuGetTableEntry(1) != NULL)
        return;
    DAT_004c5604.integerParameters[0] = 90;
    DAT_004c5604.integerParameters[1] = 1200;
    DAT_004c5604.integerParameters[2] = 30;
    DAT_004c5604.scalarParameters[0] = 0.5f;
    DAT_004c5604.scalarParameters[1] = 0.8f;
    DAT_004c5604.integerValues[0] = 3040;
    DAT_004c5604.integerValues[1] = 3680;
    DAT_004c5604.integerValues[2] = 2080;
    DAT_004c5604.integerTable = DAT_004c5604.integerValues;
    DAT_004c5604.additionalScalars[0] = 0.4f;
    DAT_004c5604.additionalScalars[1] = 0.4f;
    DAT_004c5604.flags[1] = 1;
    DAT_004c5604.flags[0] = 0;
    nw_snd_FxReverb_SetParam(&DAT_004c54f4, &DAT_004c5604);
    u32 requiredSize = nw_snd_FxReverb_GetRequiredMemSize(&DAT_004c54f4);
    asdDebugTrace(DAT_004076c8, 108);
    void *buffer = g_soundEffectBuffers[1] = asdMemoryAlloc(0x10000, 0x100, 0, requiredSize, 1);
    nw_snd_FxReverb_AssignWorkBuffer(&DAT_004c54f4, buffer, requiredSize);
    FUN_00120dc4(1, &DAT_004c54f4);
}
}
