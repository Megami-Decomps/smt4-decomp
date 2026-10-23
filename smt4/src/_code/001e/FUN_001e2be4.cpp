/* NON_MATCHING: hint dispatch becomes a jump table; timer initialization combines stores and interval constants load differently. */
#include "map/MapIfTimer.h"
#include "map/mapDepart.h"

extern "C" {
extern GameState g_gameState;
extern const MapHintRecord DAT_00447ab0[9];
void *gameGetMapBlock(void);
u32 FUN_002bfdd4(void);
s32 gameFlagIsSet(u32 flag);
s32 gameCountUnits(void);
u32 gameCountersGetWord(s32 index);
u32 clockGetSecondsSinceStart(void);
s32 FUN_00334038(void);
s32 FUN_0028d310(void);
u32 FUN_002bfdc4(void);
void FUN_002bfc24(u32 layer, u32 message, u32 argument, u32 flags, f32 first, f32 second);

// Select the next idle hint, skipping time/party-inapplicable hints, and queue its message.
void FUN_001e2be4(void)
{
    struct MapHintProgressView { u8 unk000[0xD5B]; s8 next; };
    typedef char HintProgressOffsetCheck[offsetof(MapHintProgressView, next) == 0xD5B ? 1 : -1];
    MapHintProgressView *map = (MapHintProgressView *)gameGetMapBlock();
    u32 flags = FUN_002bfdd4() | 4;
    if (g_gameState.unk18 != 0 || g_mapIfTimer->state != 0 || !gameFlagIsSet(22)) {
        return;
    }
    s32 hint = map->next;
    switch (hint) {
    case 1:
        if (gameCountUnits() < 1) {
            hint = 2;
        }
        break;
    case 5:
        if (gameCountersGetWord(32) != 0 && clockGetSecondsSinceStart() - 1800 <= 1800) {
            break;
        }
        hint = 6;
        // fall through
    case 6:
        if (gameCountersGetWord(32) != 0 && clockGetSecondsSinceStart() - 3600 <= 3600) {
            break;
        }
        hint = 7;
        // fall through
    case 7:
        if (gameCountersGetWord(32) != 0 && clockGetSecondsSinceStart() >= 7200) {
            break;
        }
        hint = 8;
        // fall through
    case 8: {
        s32 capacity = FUN_00334038();
        if (FUN_0028d310() >= capacity / 2) {
            hint = 0;
        }
        break;
    }
    }
    const MapHintRecord *record = &DAT_00447ab0[hint];
    g_mapIfTimer->state = 2;
    g_mapIfTimer->frames = 0;
    g_mapIfTimer->hintLabel = record->label;
    FUN_002bfc24(1, record->message, FUN_002bfdc4(), flags, 0.707f, 0.707f);
    ++hint;
    if (hint >= 9) {
        hint = 0;
    }
    map->next = hint;
}
}
