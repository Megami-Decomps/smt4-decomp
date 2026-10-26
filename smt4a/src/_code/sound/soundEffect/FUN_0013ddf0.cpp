/* NON_MATCHING: retail stores the three integer values as one stm (+ the table pointer from the same address register); built splits the stores. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "kernel/jyoucyuGetTableEntry.h"

struct SoundReverbEffect {
    u8 unk00[0x110];
};

extern "C" {
extern const char DAT_00536228[];
SoundReverbEffect DAT_0061964c;
SoundReverbParameters DAT_0061975c;
extern void *g_soundEffectBuffers[2];
s32 nw_snd_FxReverb_SetParam(SoundReverbEffect *effect,
                             const SoundReverbParameters *parameters);
u32 nw_snd_FxReverb_GetRequiredMemSize(SoundReverbEffect *effect);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 kind);
s32 nw_snd_FxReverb_AssignWorkBuffer(SoundReverbEffect *effect,
                                    void *buffer, u32 size);
s32 queueRequesterNode(u32 bus, SoundReverbEffect *effect);

void FUN_0013ddf0(void)
{
    if (jyoucyuGetTableEntry(1) != NULL)
        return;
    DAT_0061975c.integerParameters[0] = 90;
    DAT_0061975c.integerParameters[1] = 1200;
    DAT_0061975c.integerParameters[2] = 30;
    DAT_0061975c.scalarParameters[0] = 0.5f;
    DAT_0061975c.scalarParameters[1] = 0.8f;
    DAT_0061975c.integerValues[0] = 3040;
    DAT_0061975c.integerValues[1] = 3680;
    DAT_0061975c.integerValues[2] = 2080;
    DAT_0061975c.integerTable = DAT_0061975c.integerValues;
    DAT_0061975c.additionalScalars[0] = 0.4f;
    DAT_0061975c.additionalScalars[1] = 0.4f;
    DAT_0061975c.flags[1] = 1;
    DAT_0061975c.flags[0] = 0;
    nw_snd_FxReverb_SetParam(&DAT_0061964c, &DAT_0061975c);
    u32 requiredSize = nw_snd_FxReverb_GetRequiredMemSize(&DAT_0061964c);
    asdDebugTrace(DAT_00536228, 108);
    void *buffer = g_soundEffectBuffers[1] = asdMemoryAlloc(0x10000, 0x100, 0, requiredSize, 1);
    nw_snd_FxReverb_AssignWorkBuffer(&DAT_0061964c, buffer, requiredSize);
    queueRequesterNode(1, &DAT_0061964c);
}
}
