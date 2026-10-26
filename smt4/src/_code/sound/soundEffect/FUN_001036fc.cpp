#include "sound/SoundEffectDelay.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
SoundEffectDelay DAT_004c5484;
SoundEffectDelayParameters DAT_004c54e4;
extern void *g_soundEffectBuffers;
extern const char DAT_004076c8[];
void FUN_00110d54(SoundEffectDelay *effect, const SoundEffectDelayParameters *parameters);
u32 nw_snd_FxDelay_GetRequiredMemSize(SoundEffectDelay *effect);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void nw_snd_FxDelay_AssignWorkBuffer(SoundEffectDelay *effect, void *buffer, u32 size);
void soundSourceQueueReadyRequest(u32 bus, SoundEffectDelay *effect);
void FUN_00109580();

void FUN_001036fc()
{
    if (jyoucyuGetTableEntry(1) == 0) {
        DAT_004c54e4.unk00 = 150;
        DAT_004c54e4.unk04 = 0.1f;
        DAT_004c54e4.unk08 = 0.7f;
        DAT_004c54e4.unk0c = 1;
        FUN_00110d54(&DAT_004c5484, &DAT_004c54e4);
        u32 size = nw_snd_FxDelay_GetRequiredMemSize(&DAT_004c5484);
        asdDebugTrace(DAT_004076c8, 71);
        g_soundEffectBuffers = asdMemoryAlloc(0x10000, 0x100, 0, size, 1);
        nw_snd_FxDelay_AssignWorkBuffer(&DAT_004c5484, g_soundEffectBuffers, size);
        soundSourceQueueReadyRequest(0, &DAT_004c5484);
    }
    FUN_00109580();
}
}
