#ifndef UI_DUMMY_ATTACHMENT_WORK_H
#define UI_DUMMY_ATTACHMENT_WORK_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "ui/UiSpriteState.h"
#include "ui/ScreenObject.h"
#include <stddef.h>

struct DummyAttachmentSource {
    u8 unk00[0x1c];
    AsdMdlObject *model; // 0x1c
};

/* One selectable NPC of the quest center: its row of data table 0x27/0 and its 1-based marker. */
struct DummyAttachmentNpcEntry {
    s32 record; // 0x00
    s32 npc;    // 0x04
};

struct ScriptProcess;

/* An event a finished delivery can start (0x1a bytes): the first row whose location and flags fit. */
struct QcDeliveryEvent {
    char name[0x12];    // 0x00, "e022_02"
    u16 requiredFlag;   // 0x12, 0: none, 0xffff: quests 0x65-0x67 completed instead of a flag
    u16 forbiddenFlag;  // 0x14, 0: none
    u16 location;       // 0x16, DummyAttachmentWork::location
    s16 kind;           // 0x18, the DummyAttachmentWork::kind a board event needs (-1: any)
};

/* The quest center scene's work area. `state` picks the member callback at 0x5c8 and `step` is that
 * callback's own progress. */
struct DummyAttachmentWork {
    u32 flags; // 0x00, 0x100 while an NPC conversation runs
    u32 state; // 0x04
    s32 step; // 0x08
    union {
        u8 unk0c[4];
        s32 timer; // 0x0c, a step's own frame count
    };
    s8 kind; // 0x10, the row of data table 0x28/0 shown; also the quest menu's confirmation choice
    u8 unk11[3];
    const QcDeliveryEvent *deliveryEvent; // 0x14, the event a finished delivery unlocked
    u8 location; // 0x18, which quest center this is (0: Mikado, 1-3: the Tokyo ones, by quest area)
    u8 unk19[7];
    u8 npcTable; // 0x20, the `this` of the table 0x27 accessors
    u8 mode; // 0x21
    u8 unk22[2];
    union {
        u8 unk24[0x594];
        struct {
            UiResourceParameters resources; // 0x24
            UiSpriteState sprites[4];       // 0x44, the board's three panels and its fade
            ScreenVec2 positions[3];        // 0x274, where the panels slide in from
        } board;
    };
    u32 npcScriptFile; // 0x5b8, the loaded "n%03d.bf"
    u32 npcMessageFile; // 0x5bc, the loaded "n%03d.mbm"
    ScriptProcess *npcScript; // 0x5c0
    ScriptProcess **sceneScript; // 0x5c4
    u8 unk5c8[0x744];
    u32 questId; // 0xd0c, the quest list entry chosen for delivery
    AsdMdlObject *primary[6]; // 0xd10
    AsdMdlObject *secondary[6]; // 0xd28
    u8 initialized; // 0xd40
    u8 unkD41[3];
    f32 unkD44; // 0xd44
    union {
        u8 unkD48[0x14];
        struct {
            u8 unkD48[0xc];
            s8 fullNoticePlayed; // 0xd54, the "no free slot" sound was played for this board
            u8 unkD55[3];
            s32 inputWait;       // 0xd58, frames left before the board takes input
        } boardState;
    };
    DummyAttachmentNpcEntry npcEntries[6]; // 0xd5c
    s32 npcEntryCount; // 0xd8c
    s32 choices[4]; // 0xd90, indices into npcEntries offered by the selection message
    s32 choiceCount; // 0xda0
    s32 cursor; // 0xda4, the highlighted or chosen choice
    DummyAttachmentNpcEntry *selected; // 0xda8, NULL until an NPC is chosen
    char choiceText[0x200]; // 0xdac
    DummyAttachmentSource *source; // 0xfac
    union {
        u8 unkFB0[8];
        struct {
            /* 0xFB0 */ s32 requested;
            /* 0xFB4 */ s32 applied;
        } playback;
    };
    AsdMdlObject *alternate; // 0xfb8
    u8 unkFBC[4];
    s32 lastChoice; // 0xfc0
};

typedef char DummyAttachmentLayoutCheck[
    offsetof(DummyAttachmentSource, model) == 0x1c &&
    sizeof(QcDeliveryEvent) == 0x1a &&
    offsetof(DummyAttachmentWork, kind) == 0x10 &&
    offsetof(DummyAttachmentWork, deliveryEvent) == 0x14 &&
    offsetof(DummyAttachmentWork, location) == 0x18 &&
    offsetof(DummyAttachmentWork, questId) == 0xd0c &&
    offsetof(DummyAttachmentWork, mode) == 0x21 &&
    offsetof(DummyAttachmentWork, primary) == 0xd10 &&
    offsetof(DummyAttachmentWork, secondary) == 0xd28 &&
    offsetof(DummyAttachmentWork, initialized) == 0xd40 &&
    offsetof(DummyAttachmentWork, source) == 0xfac &&
    offsetof(DummyAttachmentWork, alternate) == 0xfb8 &&
    offsetof(DummyAttachmentWork, npcScriptFile) == 0x5b8 &&
    offsetof(DummyAttachmentWork, sceneScript) == 0x5c4 &&
    offsetof(DummyAttachmentWork, unkD44) == 0xd44 &&
    offsetof(DummyAttachmentWork, npcEntries) == 0xd5c &&
    offsetof(DummyAttachmentWork, choices) == 0xd90 &&
    offsetof(DummyAttachmentWork, selected) == 0xda8 &&
    offsetof(DummyAttachmentWork, choiceText) == 0xdac &&
    offsetof(DummyAttachmentWork, lastChoice) == 0xfc0 ? 1 : -1];
typedef char DummyAttachmentBoardOffsets[
    offsetof(DummyAttachmentWork, board.resources) == 0x24 &&
    offsetof(DummyAttachmentWork, board.sprites) == 0x44 &&
    offsetof(DummyAttachmentWork, board.positions) == 0x274 &&
    offsetof(DummyAttachmentWork, boardState.fullNoticePlayed) == 0xd54 &&
    offsetof(DummyAttachmentWork, boardState.inputWait) == 0xd58 ? 1 : -1];
typedef char DummyAttachmentPlaybackOffsets[
    offsetof(DummyAttachmentWork, playback.requested) == 0xFB0 &&
    offsetof(DummyAttachmentWork, playback.applied) == 0xFB4 ? 1 : -1];

#endif
