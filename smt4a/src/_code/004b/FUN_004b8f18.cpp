/* NON_MATCHING: conditional flag stores, terminal-state constant lifetime and state-reset epilogues differ. */
#include "shard/Shard004B.h"
#include "shard/W4_Match3_AocMainA.h"
#include "map/mapDepart.h"
#include "map/MapSelection.h"

/* The shared padding at +0x24 ends unaligned; a local view avoids enlarging its union. */
struct MapReturnStateViewA {
    u8 unk00[0x28];
    u32 state;
    s32 phase;
    u8 unk30[0xC];
    u16 first;
    u8 unk3E[2];
    u16 second;
};
struct MapReturnSaveValuesA {
    u8 kind;
    u8 first;
    u8 second;
    u8 flags;
    MapVector position;
    /* The copied 24-byte packet's final eight bytes are not initialized by this constructor. */
    u8 unk10[8];
    MapReturnSaveValuesA() : first(0), second(0), flags(0)
    {
        position.x = 0.0f;
        position.y = 0.0f;
        position.z = 0.0f;
    }
};
typedef char MapReturnSaveValuesSizeCheck[sizeof(MapReturnSaveValuesA) == 24 ? 1 : -1];
extern "C" {
extern GameStateA g_gameState;
void infoWinSetValue(s32);
void FUN_00341fa4(AocMainAObjC *, s32);
s32 FUN_0047e150(AocMainAObjC *);
void helpResourcesRelease(AocMainAObjC *);
void gameDataSaveSetValues(const MapReturnSaveValuesA *);
void gameDataCopySaveToWork();
void FUN_001d1438(void *, const u16 *);
void FUN_004b7a08(Menu4C *);
void FUN_004731d8();
void FUN_004b7d88(Menu4C *);

void FUN_004b8f18(Menu4C *work)
{
    MapReturnStateViewA *state = reinterpret_cast<MapReturnStateViewA *>(work);
    if (state->phase == 0) {
        infoWinSetValue(0);
        FUN_00341fa4(&g_aocMain->scriptHolder, 1);
        state->phase = 1;
    } else if (state->phase == 1) {
        s32 result = FUN_0047e150(&g_aocMain->scriptHolder);
        if (result) {
            helpResourcesRelease(&g_aocMain->scriptHolder);
            if (g_mapSelection.id >= 0) {
                MapReturnSaveValuesA values;
                values.kind = 3;
                values.first = static_cast<u8>(state->first);
                values.second = static_cast<u8>(state->second);
                gameDataSaveSetValues(&values);
                gameDataCopySaveToWork();
                u16 location[3];
                location[0] = static_cast<u16>(g_mapSelection.id);
                location[1] = static_cast<u16>(g_mapSelection.kind);
                location[2] = static_cast<u16>(g_mapSelection.counter);
                FUN_001d1438(work->value42, location);
                work->flags |= 0x10;
                if (g_mapSelection.id < 200)
                    work->flags |= 0x100100;
                state->phase = 0;
                state->state = 5;
            } else if (g_gameState.clear.unk5C) {
                MapReturnSaveValuesA values;
                values.kind = 3;
                values.first = static_cast<u8>(state->first);
                values.second = static_cast<u8>(state->second);
                gameDataSaveSetValues(&values);
                gameDataCopySaveToWork();
                FUN_004b7a08(work);
                work->flags |= 0x40100;
                state->phase = 0;
                state->state = 5;
            } else {
                FUN_004731d8();
                infoWinSetValue(1);
                FUN_004b7d88(work);
                state->phase = 0;
                state->state = 5;
            }
            if (result == 2) {
                state->state = 15;
                state->phase = 0;
                return;
            }
        }
        u32 flags = g_aocMain->flags;
        g_aocMain->flags = flags & ~0x70U;
        if (flags & 0x10) {
            state->state = 15;
            state->phase = 0;
        }
    }
}
}
