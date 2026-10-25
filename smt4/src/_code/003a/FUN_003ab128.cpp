/* NON_MATCHING: case-4 shared transition tail now matches; initial entry-address/state registers r0/r1 remain exchanged. */
#include "common.h"
#include <stddef.h>
#include "util/CalleeContracts.h"

extern "C" {
struct StatusCursor;
s32 pointConvertToFloat(void *target, u32 x, u32 y);
void FUN_00233240(void *window, s32 enable);
s32 flaggedValueHolderGetTotal(void *holder);
void messageMainSetTargetFlags(s32 flags);
void gameClearUnlockedSavedId(u32 id);
void buttonHelpSetPreset(s32 preset);
void FUN_002b8ee0(void *vec, s32 value);
void FUN_002bf818(void *vec);
void statusOpenSkillSelection(u16 skill, s32 mode);
s32 buttonHelpIsNotActive(void);
u32 statusDownGetValue(void);
s32 statusScreenIsClosed(void);
u32 vec2GetYInt(void *vec);
u32 vec2GetXInt(void *vec);
s32 uiSpriteGetCompletionState(const void *record);

// One selectable entry of the status list (0x20 bytes).
struct StatusListEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 skill;
    /* 0x06 */ u8 unk06[6];
    /* 0x0c */ s32 value;
    /* 0x10 */ u8 unk10[0x10];
};

// Selection cursor (0x8c bytes); its done flag is a signed byte at +0x8a read through uiSpriteGetCompletionState.
struct StatusCursor {
    /* 0x00 */ u8 body[0x8c];
};

// Skill-learning flow of the status screen.
struct StatusFlow {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 phase;
    /* 0x018 */ s32 state;
    /* 0x01c */ u8 unk01c[4];
    /* 0x020 */ u8 entryHolder[0xa8];
    /* 0x0c8 */ u8 pointer[0x14];
    /* 0x0dc */ u8 window[0x20];
    /* 0x0fc */ StatusCursor cursorA;
    /* 0x188 */ StatusCursor cursorB;
    /* 0x214 */ u8 unk214[0x394];
    /* 0x5a8 */ StatusListEntry entries[1];
};

// The result is beyond the recovered status-flow prefix.
struct StatusFlowResult : StatusFlow {
    u8 unk5C8[0xa5b4 - sizeof(StatusFlow)];
    u32 unlockedSkill;
};
typedef char StatusFlowResultLayout[sizeof(StatusFlow) == 0x5c8 &&
    offsetof(StatusFlowResult, unlockedSkill) == 0xa5b4 &&
    sizeof(StatusFlowResult) == 0xa5b8 ? 1 : -1];

// Advances the skill-learning flow by one step.
void FUN_003ab128(StatusFlow *flow)
{
    StatusListEntry *entries = flow->entries;
    s32 index = flaggedValueHolderGetTotal(flow->entryHolder);
    s32 skill = entries[index].skill;

    switch (flow->state) {
    case 0:
        messageMainSetTargetFlags(0);
        break;
    case 1:
        FUN_00233240(flow->window, 1);
        statusOpenSkillSelection(skill, 1);
        break;
    case 2: {
        StatusCursor *cursor = &flow->cursorB;
        FUN_002bf818(cursor);
        pointConvertToFloat(flow->pointer, vec2GetXInt(cursor), vec2GetYInt(cursor));
        if (uiSpriteGetCompletionState(cursor) != 0) {
            flow->state++;
        }
        return;
    }
    case 3: {
        if (statusScreenIsClosed() == 0) {
            return;
        }
        u32 unlocked = statusDownGetValue();
        static_cast<StatusFlowResult *>(flow)->unlockedSkill = unlocked;
        if (unlocked != 0) {
            gameClearUnlockedSavedId(unlocked & 0xffff);
            flaggedValueHolderGetTotal(flow->entryHolder);
            messageMainSetTargetFlags(1);
        }
        FUN_00233240(flow->window, 0);
        buttonHelpSetPreset(0x3e);
        break;
    }
    case 4: {
        StatusCursor *cursor = &flow->cursorA;
        FUN_002b8ee0(cursor, 0);
        pointConvertToFloat(flow->pointer, vec2GetXInt(cursor), vec2GetYInt(cursor));
        if (uiSpriteGetCompletionState(cursor) == 0) {
            return;
        }
        if (buttonHelpIsNotActive() == 0) {
            return;
        }
        if (static_cast<StatusFlowResult *>(flow)->unlockedSkill != 0) {
            flow->state++;
            return;
        }
        flow->state = 10;
        return;
    }
    case 5:
        index = flaggedValueHolderGetTotal(flow->entryHolder);
        FUN_0029c43c(-flow->entries[index].value, 0);
        flow->phase = 7;
        flow->state = 0;
        return;
    case 10:
        flow->phase = 3;
        flow->state = 0;
        return;
    default:
        return;
    }
    flow->state++;
}
}
