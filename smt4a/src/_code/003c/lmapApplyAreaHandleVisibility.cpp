/* NON_MATCHING: retail unit includes a stray trailing "mov r0, #0" after its return/literal pool; readable dispatch also lowers to a switch table rather than the retail compare chain. */
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

struct LmapHandleTable {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 count;
};

struct LmapHandleCollection {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ LmapHandleTable *table;
};

struct LmapHandleRegistration {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u8 registered;
    /* 0x79 */ u8 unk79[0xf];
};

// The high-offset handle-registration view of the map's main state.
struct LmapHandleMain {
    /* 0x000 */ u8 unk000[0xae4];
    /* 0xae4 */ LmapHandleCollection *handles;
    /* 0xae8 */ u8 unkae8[0x18];
    /* 0xb00 */ LmapHandleRegistration registrations[1];
};

extern "C" {
extern LmapHandleMain *g_lmapMainState;
extern void *g_handleRegistry;
extern const u8 DAT_0058024c[], DAT_0058029c[], DAT_005802ec[];
extern const u8 DAT_0058033c[], DAT_0058038c[], DAT_005803dc[];
extern const u8 DAT_0058042c[], DAT_0058047c[], DAT_005804cc[];
void FUN_003cb948(const u8 *mask);
RegisteredHandle *FUN_0040619c(LmapHandleTable *, u32 index);
void handleRegistryRegisterObject(void *registry, RegisteredHandle *handle);
void FUN_00399290(u32 index, s32 enabled);

// Apply the special-area visibility mask, or enable every map handle.
void lmapApplyAreaHandleVisibility(void)
{
    LmapHandleMain *map = g_lmapMainState;
    if (g_gameState.mode == 0x65) {
        switch (g_gameState.submode) {
        case 1: FUN_003cb948(DAT_0058024c); return;
        case 2: FUN_003cb948(DAT_0058029c); return;
        case 3: FUN_003cb948(DAT_005802ec); return;
        case 4: FUN_003cb948(DAT_0058033c); return;
        case 5: FUN_003cb948(DAT_0058038c); return;
        case 6: FUN_003cb948(DAT_005803dc); return;
        case 7: FUN_003cb948(DAT_0058042c); return;
        case 8: FUN_003cb948(DAT_0058047c); return;
        case 9: FUN_003cb948(DAT_005804cc); return;
        }
    }
    for (u32 index = 0; index < map->handles->table->count; ++index) {
        RegisteredHandle *handle = FUN_0040619c(map->handles->table, index);
        handleRegistryRegisterObject(g_handleRegistry, handle);
        if (g_lmapMainState != NULL &&
            g_lmapMainState->registrations[index].registered == 0) {
            g_lmapMainState->registrations[index].registered = 1;
        }
        FUN_00399290(index, 1);
    }
}
}
