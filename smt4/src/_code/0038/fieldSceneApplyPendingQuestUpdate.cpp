#include "common.h"
#include "gamedata/GameFlags.h"

/* The pending quest/event update the scene works from (0xD00..0xD56 of the controller). */
struct FieldScenePending {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 savedPrimaryState;
    /* 0x49 */ u8 unk49;
    /* 0x4A */ u8 secondaryState;
    /* 0x4B */ u8 unk4B;
    /* 0x4C */ u8 mapChanged;
    /* 0x4D */ u8 unk4D;
    /* 0x4E */ u16 placeId;
    /* 0x50 */ u16 eventId;
    /* 0x52 */ u8 unk52[3];
    /* 0x55 */ u8 messageActive;
    /* 0x56 */ u8 unk56;
};

/* The field scene's controller (observed fields). */
struct FieldSceneWork {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 phase;
    /* 0x00C */ u8 unk00C[0xCF4];
    /* 0xD00 */ FieldScenePending pending;
};

/* The current map block (observed fields). */
struct MapBlock {
    /* 0x00 */ u8 unk00[0x1E];
    /* 0x1E */ u16 placeId;
    /* 0x20 */ u8 unk20[2];
    /* 0x22 */ u16 pendingEntry;
};

/* A word of the quest state block. */
struct QuestStateWord {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u16 secondaryDone;
};

extern "C" {

extern QuestStateWord DAT_0049fa1c;

s32 FUN_00241990(void);
u8 FUN_002cf750(void);
u16 uiQuestProcessPendingUpdate(void);
u16 FUN_002eff34(void);
s32 questGetPrimaryState(void);
u8 questGetSecondaryState(void);
s32 FUN_002cf738(void);

MapBlock *gameGetMapBlock(void);
void FUN_00273f5c(void);
void mapClearPendingEntries(void);
void FUN_00273d34(void);
void FUN_00273c54(void);
void FUN_00296934(void);
void messageBannerInitSelection(s32 a, s32 b);
void messageTargetSetValue(s32 target, s32 value);
s32 questCenterGetHealingFee(void);
void messageMainSetTargetFlags(s32 flags);
void FUN_0029ee6c(s32 a, u32 color);
void FUN_00289c98(s32 value);
void FUN_002355ac(s32 value);

#define EVENT_FIRST_ENDING 0xCA
#define EVENT_SECOND_ENDING 0xC3

/* Reads the pending quest/event result and updates the field scene accordingly: clears the ending
 * flags, resets the map entries and selects the scene's next state. */
void fieldSceneApplyPendingQuestUpdate(FieldSceneWork *work)
{
    s32 primaryState;

    if (FUN_00241990() == 0) {
        return;
    }
    work->pending.mapChanged = FUN_002cf750();
    u16 placeId = uiQuestProcessPendingUpdate();
    FieldScenePending *pending = &work->pending;
    pending->placeId = placeId;
    pending->eventId = FUN_002eff34();
    primaryState = questGetPrimaryState();
    work->pending.secondaryState = questGetSecondaryState();
    if (FUN_002cf738() != 0) {
        if (pending->eventId == EVENT_FIRST_ENDING) {
            gameFlagSetValue(0x246, 0, 1);
            gameFlagSetValue(0x274, 0, 1);
            gameFlagSetValue(0x26B, 0, 1);
            gameFlagSetValue(0x248, 0, 1);
            gameFlagSetValue(0x247, 0, 1);
        } else if (pending->eventId == EVENT_SECOND_ENDING) {
            gameFlagSetValue(0x24C, 0, 1);
            gameFlagSetValue(0x24E, 0, 1);
            gameFlagSetValue(0x24D, 0, 1);
            gameFlagSetValue(0x24F, 0, 1);
            gameFlagSetValue(0x250, 0, 1);
            gameFlagSetValue(0x252, 0, 1);
            gameFlagSetValue(0x251, 0, 1);
            gameFlagSetValue(0x253, 0, 1);
        }
    }
    if (pending->mapChanged != 0) {
        MapBlock *map = gameGetMapBlock();

        map->pendingEntry = 0;
        FUN_00273f5c();
        mapClearPendingEntries();
        if (primaryState == 0) {
            map->placeId = pending->placeId;
            FUN_00273d34();
            FUN_00273c54();
        }
    }
    FUN_00296934();
    if (pending->secondaryState != 0) {
        DAT_0049fa1c.secondaryDone = 1;
        work->state = 0xF;
        work->phase = 0;
        FUN_002355ac(0);
        return;
    }
    if (primaryState != 0) {
        work->pending.savedPrimaryState = primaryState;
        FUN_0029ee6c(0, 0x323232FF);
        FUN_00289c98(1);
        work->state = 0xC;
        work->phase = 0;
        FUN_002355ac(0);
        return;
    }
    if (pending->messageActive != 0) {
        messageBannerInitSelection(1, 0);
        messageTargetSetValue(-questCenterGetHealingFee(), 0);
        messageMainSetTargetFlags(1);
        work->pending.messageActive = 0;
    }
    FUN_00296934();
    work->state = 5;
    work->phase = 0;
}

} /* extern "C" */
