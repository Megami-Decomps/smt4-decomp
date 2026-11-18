#ifndef UI_DUMMY_ATTACHMENT_WORK_H
#define UI_DUMMY_ATTACHMENT_WORK_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct DummyAttachmentSource {
    u8 unk00[0x1c];
    AsdMdlObject *model; // 0x1c
};

/* Show or hide a model object: the draw flag and its scene node's follow byte go together. */
static __inline void asdMdlObjectShow(AsdMdlObject *model)
{
    model->flags &= ~2;
    model->node->sceneNode->positionFollowed = 1;
}

static __inline void asdMdlObjectHide(AsdMdlObject *model)
{
    model->flags |= 2;
    model->node->sceneNode->positionFollowed = 0;
}

/* One selectable NPC of the quest center: its row of data table 0x27/0 and its 1-based marker. */
struct DummyAttachmentNpcEntry {
    s32 record; // 0x00
    s32 npc;    // 0x04
};

struct ScriptProcess;

/* The quest center scene's work area. `state` picks the member callback at 0x5c8 and `step` is that
 * callback's own progress. */
struct DummyAttachmentWork {
    u32 flags; // 0x00, 0x100 while an NPC conversation runs
    u32 state; // 0x04
    s32 step; // 0x08
    u8 unk0c[0x14];
    u8 npcTable; // 0x20, the `this` of the table 0x27 accessors
    u8 mode; // 0x21
    u8 unk22[0x596];
    u32 npcScriptFile; // 0x5b8, the loaded "n%03d.bf"
    u32 npcMessageFile; // 0x5bc, the loaded "n%03d.mbm"
    ScriptProcess *npcScript; // 0x5c0
    ScriptProcess **sceneScript; // 0x5c4
    u8 unk5c8[0x748];
    AsdMdlObject *primary[6]; // 0xd10
    AsdMdlObject *secondary[6]; // 0xd28
    u8 initialized; // 0xd40
    u8 unkD41[3];
    f32 unkD44; // 0xd44
    u8 unkD48[0x14];
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
typedef char DummyAttachmentPlaybackOffsets[
    offsetof(DummyAttachmentWork, playback.requested) == 0xFB0 &&
    offsetof(DummyAttachmentWork, playback.applied) == 0xFB4 ? 1 : -1];

#endif
