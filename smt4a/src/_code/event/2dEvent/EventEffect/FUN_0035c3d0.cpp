/* NON_MATCHING: readable rebuild; retail zero-fills the work with integer stores (the float fields 0x14..0x20 and 0x2C are written as ints first, then as 0.0f), keeps the slot array base in r9 and tests the slot index against 2 after allocating, which armcc here orders differently. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* One slash effect of the 2D event layer (0x38 bytes). */
struct EventSlash {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 slot;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ u32 kind;       /* texture set 0..3 */
    /* 0x28 */ u32 side;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ u32 argument0;
    /* 0x34 */ u32 argument1;
};

/* A texture table node the effect keeps loaded, with its load count. */
struct EventTextureNode {
    /* 0x00 */ u32 table;
    /* 0x04 */ u32 node;
    /* 0x08 */ s32 loads;
    /* 0x0C */ u32 unk0C;
};

struct EventEffectState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 sharedLoads;   /* loads of texture table 0x35 */
};

extern "C" {
extern EventEffectState g_eventEffect;
extern EventSlash *DAT_0057f3c8[2];
extern EventTextureNode DAT_0057f43c[4];

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 bytes, u32 option);
void textFormatBuffer(char *buffer, const char *format, ...);
u32 asdProcessCreateSimple(const char *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate,
                           AsdProcFunc onEnd, u32 work);
u32 taskCreateDraw(const char *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate,
                   AsdProcFunc onEnd, u32 work, void *owner);
s32 eventColorTransitionUpdate(u32 handle);
s32 FUN_002835f4(u32 handle);
void *textureGetIndexedResource(u32 table);
void asdTMTexTableLoadTmx(u32 table, u32 arg);
void asdTMTexLoadMainHeap(u32 table, u32 node);

/* Starts a slash effect in a free slot: allocates its work, creates its calc process and its two
 * draw tasks (left and right) and makes sure the textures of its set are loading. Returns the
 * process handle, or 0 when both slots are in use. */
u32 FUN_0035c3d0(u32 kind, u32 side, u32 argument0, u32 argument1)
{
    for (s32 slot = 0; slot < 2; slot++) {
        if (DAT_0057f3c8[slot] != NULL)
            continue;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\EventEffect.cpp", 1389);
        EventSlash *effect = (EventSlash *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventSlash), 1);
        DAT_0057f3c8[slot] = effect;
        effect->process = 0;
        effect->unk04 = 0;
        effect->slot = slot;
        effect->unk0C = 0;
        effect->unk10 = 0;
        effect->unk14 = 0.0f;
        effect->unk18 = 0.0f;
        effect->unk1C = 0.0f;
        effect->unk20 = 0.0f;
        effect->kind = 0;
        effect->side = 0;
        effect->unk2C = 0.0f;
        effect->argument0 = 0;
        effect->argument1 = 0;
        char name[68];
        textFormatBuffer(name, "EvtEftSlash Calc%d", slot);
        effect->process = asdProcessCreateSimple(name, 3, 0, 0, eventColorTransitionUpdate, NULL, (u32)effect);
        textFormatBuffer(name, "EvtEftSlash DrawUpLeft%d", slot);
        taskCreateDraw(name, 133, 0, 0, FUN_002835f4, NULL, (u32)effect, (void *)effect->process);
        textFormatBuffer(name, "EvtEftSlash DrawUpRight%d", slot);
        taskCreateDraw(name, 225, 0, 0, FUN_002835f4, NULL, (u32)effect, (void *)effect->process);
        effect->unk10 = 0;
        effect->kind = kind;
        effect->side = side;
        effect->unk14 = 0.0f;
        effect->unk18 = 0.0f;
        effect->unk1C = 0.0f;
        effect->unk20 = 0.0f;
        effect->unk2C = 0.0f;
        effect->argument0 = argument0;
        effect->argument1 = argument1;
        if (kind < 4) {
            if (textureGetIndexedResource(0x35) != NULL) {
                g_eventEffect.sharedLoads++;
            } else {
                asdTMTexTableLoadTmx(0x35, 0);
                g_eventEffect.sharedLoads = 0;
            }
            EventTextureNode *node = &DAT_0057f43c[kind];
            if (asdTMTexTableNodeIsLoaded(node->table, node->node)) {
                node->loads++;
            } else {
                asdTMTexLoadMainHeap(node->table, node->node);
                node->loads = 0;
            }
        }
        effect->unk0C = 0;
        return effect->process;
    }
    return 0;
}

} /* extern "C" */
