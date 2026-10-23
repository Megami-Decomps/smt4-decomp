/* NON_MATCHING: transition clear remains a pair-unrolled loop and the default-definition branch lacks retail's discarded flag load; 103 vs 104 instructions. */
#include "event/bustupEvent/BustupTextureWork.h"
#include "addon/aocMain.h"
#include "AsdSDK/AsdDebug.h"

namespace {
struct BustupTextureDefinition {
    u8 prefix[0x26];
    u8 section;
    u8 flags;
};
}
extern "C" {
extern AocSystemA *g_aocSystem;
extern const char DAT_0052f77c[];
extern const char DAT_0052f76c[];
s32 gameFlagIsSet(u32 flag);
BustupTextureDefinition *FUN_00283498(u32 id);
u32 *dataTable19FindAddonWord(BustupTextureDefinition *definition, u32 index);
void *asdMemoryAllocTracked(s32 heap, s32 alignment, u32 flags, u32 bytes, s32 fromFront);
void sysMemClear(void *memory, u32 bytes);
s32 FUN_00162ea4();
s32 aocRunByName(AocSystemA *system, s32 table, s32 node, u32 mode);
u32 aocLoadTextureNode(AocSystemA *system, s32 table, s32 node, u32 heap);
u32 FUN_0014afd0(s32 table, s32 node);
void FUN_0026c568(void *work);
void asdMTeXReleaseJobContext(void *work);
u32 asdProcessCreateSimple(const char *name, s32 priority, s32 mode, s32 flags, void (*update)(void *), void (*destroy)(void *), void *work);

// Start a bustup texture job, honoring the add-on availability gate and deferred-load mode.
void FUN_0039c840(u32 id, s32 useDefinition)
{
    // Transition values extend beyond the shared 0x90-byte work prefix.
    struct ExtendedTextureWork { BustupTextureWork work; f32 transition[6]; };
    typedef char ExtendedTextureWorkLayout[offsetof(ExtendedTextureWork, transition) == 0x90 && sizeof(ExtendedTextureWork) == 0xa8 ? 1 : -1];
    if (gameFlagIsSet(0x522) && !dataTable19FindAddonWord(FUN_00283498(id), 1))
        return;
    asdDebugTrace(DAT_0052f77c, 0x4c0);
    ExtendedTextureWork *allocation = static_cast<ExtendedTextureWork *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(ExtendedTextureWork), 1));
    sysMemClear(allocation, sizeof(ExtendedTextureWork));
    BustupTextureWork *work = &allocation->work;
    work->id = id;
    work->previousId = -1;
    work->previousNode = -1;
    work->definition = FUN_00283498(id);
    if (!useDefinition) {
        work->table = 0x17;
        work->node = -1;
        work->x = 25.0f;
        work->y = 25.0f;
    }
    if (FUN_00162ea4()) {
        work->deferred = 1;
    } else {
        if (work->node != -1) {
            if (aocRunByName(g_aocSystem, work->table, work->node, 1))
                work->texture = aocLoadTextureNode(g_aocSystem, work->table, work->node, 0x10000);
            else
                work->texture = FUN_0014afd0(work->table, work->node);
        }
        work->deferred = 0;
    }
    work->alpha = 1.0f;
    work->active = 0;
    work->visible = 1;
    work->frame = 0.0f;
    for (s32 index = 0; index < 6; ++index)
        allocation->transition[index] = 0.0f;
    asdProcessCreateSimple(DAT_0052f76c, 4, 0, 0, FUN_0026c568, asdMTeXReleaseJobContext, allocation);
}
}
