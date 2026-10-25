/* NON_MATCHING: resource-array initialization lowers to memclr instead of retail's individual word stores, changing saved registers; size-output stack slot also differs. */
#include "shard/W4_Match3_EplSlots.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern s32 g_gameState;
extern const char DAT_00531a18[];
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void tripleClear(void *triple);
void textFormatBuffer(char *destination, const char *format, ...);
void *asdLoadFileSyncNoContext(const char *path, u32 *sizes, u32 mode, u32 alignment);
void *FUN_001abbc4(void *buffer);

void FUN_002b75b0(void)
{
    u32 size;
    char path[32];
    if (g_eplSlots == NULL) {
        asdDebugTrace(DAT_00531a18, 82);
        g_eplSlots = static_cast<EplSlots *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EplSlots), 1));
        EplSlots *pool = g_eplSlots;
        tripleClear(pool);
        for (s32 index = 0; index < EPL_SLOT_COUNT; ++index) {
            EplSlot *slot = &pool->slots[index];
            for (s32 resource = 0; resource < 18; ++resource)
                slot->initialization.resources[resource] = 0;
            slot->buffer = NULL;
            slot->list = NULL;
            for (s32 parameter = 0; parameter < 4; ++parameter)
                slot->initialization.parameters[parameter] = 0.0f;
            slot->loaded = 0;
        }
    }
    if (g_gameState == 0x26) {
        textFormatBuffer(path, "effect_editor/SIBUKI.EPL");
        EplSlot *slot = &g_eplSlots->slots[0];
        if (slot->list == NULL) {
            slot->buffer = asdLoadFileSyncNoContext(path, &size, 1, 0x80);
            slot->list = FUN_001abbc4(slot->buffer);
        }
    }
    if (g_gameState == 0x2B || g_gameState == 0x2C || g_gameState == 0x2F) {
        textFormatBuffer(path, "effect_editor/SIBUKI.EPL");
        EplSlot *slot = &g_eplSlots->slots[0];
        if (slot->list == NULL) {
            slot->buffer = asdLoadFileSyncNoContext(path, &size, 1, 0x80);
            slot->list = FUN_001abbc4(slot->buffer);
        }
    }
    EplSlot *slot = &g_eplSlots->slots[3];
    if (slot->list == NULL) {
        slot->buffer = asdLoadFileSyncNoContext("effect_editor/NB_003.EPL", &size, 1, 0x80);
        slot->list = FUN_001abbc4(slot->buffer);
    }
}
}
