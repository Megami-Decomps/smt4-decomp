/* NON_MATCHING: map block pointer/capacity register assignment (r5/r6) swapped and the timer init uses stm instead of retail's writeback stores. */
#include "gamedata/MapSaveBlock.h"
#include "map/MapIfTimer.h"
#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {
extern const MapHintRecord DAT_00447ab0[9];
u32 messageVoiceFlagsGet(void);
s32 gameFlagIsSet(u32 flag);
s32 gameCountUnits(void);
u32 gameCountersGetWord(s32 index);
s32 FUN_00334038(void);
s32 FUN_0028d310(void);
u32 messageVoiceBankGet(void);
void voiceRequestPlayFile(u32 layer, u32 message, u32 argument, u32 flags, f32 first, f32 second);

// Select the next idle hint, skipping time/party-inapplicable hints, and queue its message.
void FUN_001e2be4(void)
{
    MapSaveBlock *map = gameGetMapBlock();
    u32 flags = messageVoiceFlagsGet() | 4;
    if (g_gameState.inputBlocked != 0 || g_mapIfTimer->state != 0 || !gameFlagIsSet(22)) {
        return;
    }
    s32 hint = map->hintProgress;
    if (hint == 1) {
        if (gameCountUnits() < 1) {
            hint = 2;
        }
    } else switch (hint) {
    case 5:
        if (gameCountersGetWord(32) != 0) {
            u32 seconds = clockGetSecondsSinceStart();
            if (seconds >= 1800 && seconds <= 3600) {
                break;
            }
        }
        hint = 6;
        // fall through
    case 6:
        if (gameCountersGetWord(32) != 0) {
            u32 seconds = clockGetSecondsSinceStart();
            if (seconds >= 3600 && seconds <= 7200) {
                break;
            }
        }
        hint = 7;
        // fall through
    case 7:
        if (gameCountersGetWord(32) != 0 && clockGetSecondsSinceStart() >= 7200) {
            break;
        }
        hint = 8;
        // fall through
    case 8:
        if (FUN_00334038() / 2 <= FUN_0028d310()) {
            hint = 0;
        }
        break;
    }
    MapIfTimer *timer = g_mapIfTimer;
    const MapHintRecord *record = &DAT_00447ab0[hint];
    timer->state = 2;
    timer->frames = 0;
    timer->hintLabel = record->label;
    voiceRequestPlayFile(1, record->message, messageVoiceBankGet(), flags, 0.707f, 0.707f);
    ++hint;
    if (hint >= 9) {
        hint = 0;
    }
    map->hintProgress = hint;
}
}
