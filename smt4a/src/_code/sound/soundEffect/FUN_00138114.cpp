/* NON_MATCHING: the adjacent effect object is loaded separately instead of derived from the parameter address. */
#include "sound/SoundEffectDelay.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern SoundEffectDelay DAT_006195dc;
extern SoundEffectDelayParameters DAT_0061963c;
extern void *g_soundEffectBuffers;
extern const char DAT_00536228[];
u32 jyoucyuGetTableEntry(u32 index);
void FUN_00147f08(SoundEffectDelay *effect, const SoundEffectDelayParameters *parameters);
u32 nw_snd_FxDelay_GetRequiredMemSize(SoundEffectDelay *effect);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void nw_snd_FxDelay_AssignWorkBuffer(SoundEffectDelay *effect, void *buffer, u32 size);
void queueRequesterNode(u32 bus, SoundEffectDelay *effect);
void FUN_0013ddf0();

void FUN_00138114()
{
    if (jyoucyuGetTableEntry(1) == 0) {
        DAT_0061963c.unk00 = 150;
        DAT_0061963c.unk04 = 0.1f;
        DAT_0061963c.unk08 = 0.7f;
        DAT_0061963c.unk0c = 1;
        FUN_00147f08(&DAT_006195dc, &DAT_0061963c);
        u32 size = nw_snd_FxDelay_GetRequiredMemSize(&DAT_006195dc);
        asdDebugTrace(DAT_00536228, 71);
        g_soundEffectBuffers = asdMemoryAlloc(0x10000, 0x100, 0, size, 1);
        nw_snd_FxDelay_AssignWorkBuffer(&DAT_006195dc, g_soundEffectBuffers, size);
        queueRequesterNode(0, &DAT_006195dc);
    }
    FUN_0013ddf0();
}
}
