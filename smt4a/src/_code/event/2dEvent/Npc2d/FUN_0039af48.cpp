/* NON_MATCHING: state/option store merging and task callback/register packing differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"

extern "C" {
void *asdMemoryAllocTracked(u32, u32, u32, u32, s32);
void sysMemClear(void *, u32);
void *FUN_00283498(u32);
s32 FUN_00162ea4(void);
NpcPortraitResource *FUN_00409fe8(s32, s32, s32);
s32 FUN_002897cc(u32);
void FUN_0034da3c(u32);
u32 asdProcessCreateSimple(const s8 *, s32, u16, u16, AsdProcUpdateFunc, AsdProcFunc, u32);
extern const s8 DAT_0052f4f0[];

// Create an NPC's two-dimensional portrait, choosing the draw region from its x coordinate.
u32 FUN_0039af48(u32 npcId, u32 option, s32 x, s32 y, f32 alpha)
{
    struct NpcTableEntry {
        u8 unk00[0x22];
        u16 portraitId;
    };
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\Npc2d.cpp", 0x32c);
    NpcTextureEffectWork *work = static_cast<NpcTextureEffectWork *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(*work), 1));
    sysMemClear(work, sizeof(*work));
    work->scaleX = 1.0f;
    work->fade = 0.0f;
    work->fadeStep = 0.25f;
    work->state = 0x1f;
    work->y = y - 13;
    work->x = x;
    work->unk08 = option;
    work->stopWhenHidden = 0;
    work->alpha = alpha;
    for (s32 index = 0; index < 6; ++index)
        work->unk70[index] = 0;
    work->portraitId = -static_cast<s32>(static_cast<NpcTableEntry *>(FUN_00283498(npcId))->portraitId);
    if (FUN_00162ea4()) {
        work->resourceState = 1;
    } else {
        work->portrait = FUN_00409fe8(work->portraitId, 1, 1);
        work->resourceState = 2;
    }
    work->unk00 = npcId;
    if (x <= -100)
        work->screenRegion = 0x11;
    else if (x <= -60)
        work->screenRegion = 3;
    else if (x >= 100)
        work->screenRegion = 0x12;
    else if (x >= 40)
        work->screenRegion = 4;
    else if (x < 0)
        work->screenRegion = 0x13;
    else
        work->screenRegion = 5;
    work->speed = 0.33f;
    return asdProcessCreateSimple(DAT_0052f4f0, 4, 0, 0,
                                 FUN_002897cc, FUN_0034da3c, reinterpret_cast<u32>(work));
}
}
