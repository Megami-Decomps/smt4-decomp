/* NON_MATCHING: typed rewrite; everything matches except register allocation of the four-slot copy (retail temporaries r2/r3/ip and a shared r0+256 base for the last record, build uses r3 and per-record bases). */
#include "common.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelContent.h"
#include "code/Code003a.h"
#include "code/Code0034.h"
#include "code/Code0037.h"
#include "ui/QuestSelectionState.h"
#include "ui/UiControl.h"
#include "code/Code0021_Smt4a.h"
#include "shard/W6_W6Match2_EffectEditor.h"

/* One of the four candidate quests the chooser lists. */
struct QuestMatchRecord {
    u8 unk00[8];
    u16 value;      // 0x08
    u8 unk0A[0x48];
    u8 first;       // 0x52
    u8 second;      // 0x53
};

/* The chooser's copy of one candidate. */
struct QuestChoiceSlot {
    u8 first;
    u8 unk01;
    u16 value;
    u8 second;
    u8 unk05[5];
};

/* The quest-center interaction work as the choice step uses it. */
struct QuestChoiceWork {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 counter;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u8 kind;
    /* 0x011 */ u8 unk011[7];
    /* 0x018 */ u8 interactive;
    /* 0x019 */ u8 entryToken[0x29B];
    /* 0x2B4 */ u32 *script;
    /* 0x2B8 */ u8 unk2B8[0x770];
    /* 0xA28 */ MoriModelContent *pointerHolder;
    /* 0xA2C */ u8 unkA2C[0x20];
    /* 0xA4C */ MoriModelContent *cursorHolder;
    /* 0xA50 */ u8 unkA50[0x290];
    /* 0xCE0 */ u32 cursorMode;
    /* 0xCE4 */ u8 unkCE4[8];
    /* 0xCEC */ s32 choice;
    /* 0xCF0 */ u8 unkCF0[4];
    /* 0xCF4 */ u16 matchesLoaded;
    /* 0xCF6 */ u8 unkCF6[0x154];
    /* 0xE4A */ QuestChoiceSlot slots[4];
};

extern "C" {
extern const u8 DAT_005333b8[];
extern const u8 DAT_005333bb[];

s32 scrRunOpcodesStub(u32 handle);
s32 messageWindowIsState1(void);
s32 messageMainGetValue(void);
const s8 *dataTable28Type1GetEntry(const void *token, u8 index);
void buttonHelpSetText(const s8 *text, u32 color);
void FUN_0037c8e4(s32 first, s32 second);
void messageMainSetTargetFlags(s32 flags);
s32 panelIsActiveState2(void);
u8 gameFlagIsSet(u32 flag);
QuestMatchRecord *dataTableFindMatching35(void);
s32 messageGetChoiceResult(void);
void messageBannerRestartOrClear(void);

/* Makes the cursor model visible when it is hidden. */
static __inline void showModel(Obj557b18 *model)
{
    if ((model->flags & 1) == 0) {
        model->flags |= 1;
    }
}

/* Drives the quest-center choice: shows the help text for the highlighted entry, or reacts to the finished script's answer. */
void FUN_00468fec(QuestChoiceWork *work)
{
    if (scrRunOpcodesStub(*work->script) != 2) {
        if (messageWindowIsState1() == 0) {
            return;
        }
        s32 value = messageMainGetValue();
        u8 text;
        if (work->interactive == 0) {
            text = DAT_005333b8[value];
        } else {
            text = DAT_005333bb[value];
            if (value == 0 && FUN_00467df8() == 0) {
                text = 7;
            }
        }
        buttonHelpSetText(dataTable28Type1GetEntry(work->entryToken, text), 0xf4f4f4ff);
        if (value == -1 || work->interactive == 0) {
            return;
        }
        if (value == 0) {
            if (FUN_0034919c() == 0) {
                FUN_0037c8e4(1, 0);
                u32 target = FUN_00467df8();
                if (target != 0) {
                    panelSetTarget(-target, 0);
                }
                messageMainSetTargetFlags(1);
            }
        } else if (panelIsActiveState2() != 0) {
            messageDismissNumericBanner(0);
        }
        if (work->kind == 14 && gameFlagIsSet(0x491) == 0) {
            if (value != 3) {
                if (work->cursorMode != 0) {
                    work->cursorMode = 0;
                    showModel(work->cursorHolder->body);
                }
                showModel(work->cursorHolder->body);
            } else {
                if (work->cursorMode != 7) {
                    work->cursorMode = 7;
                }
                Obj557b18 *model = work->cursorHolder->body;
                if ((model->flags & 1) != 0) {
                    model->flags &= ~1u;
                }
            }
        }
        return;
    }
    if (work->interactive == 0) {
        FUN_003a7630(0);
        work->flags |= 0x200;
        FUN_0037d6e4(1);
        work->matchesLoaded = 1;
        QuestMatchRecord *records = dataTableFindMatching35();
        if (records != NULL) {
            work->slots[0].first = records[0].first;
            work->slots[0].value = records[0].value;
            work->slots[0].second = records[0].second;
            work->slots[1].first = records[1].first;
            work->slots[1].value = records[1].value;
            work->slots[1].second = records[1].second;
            work->slots[2].first = records[2].first;
            work->slots[2].value = records[2].value;
            work->slots[2].second = records[2].second;
            work->slots[3].first = records[3].first;
            work->slots[3].value = records[3].value;
            work->slots[3].second = records[3].second;
        }
        FUN_00214da4();
        work->state = 8;
        work->counter = 0;
        return;
    }
    FUN_003a7630(0);
    switch (messageGetChoiceResult()) {
    case -1:
        if (FUN_0034919c() != 0) {
            messageDismissNumericBanner(0);
        }
        messageBannerRestartOrClear();
        work->state = 17;
        work->counter = 0;
        break;
    case 0:
        FUN_00214da4();
        work->counter = 0;
        work->state = 7;
        break;
    case 1:
        if (FUN_0034919c() != 0) {
            messageDismissNumericBanner(0);
        }
        FUN_00214da4();
        work->state = 8;
        work->counter = 0;
        break;
    case 2:
        if (FUN_0034919c() != 0) {
            messageDismissNumericBanner(0);
        }
        FUN_00214da4();
        work->state = 9;
        work->counter = 0;
        messageDismissNumericBanner(0);
        break;
    case 3: {
        if (FUN_0034919c() != 0) {
            messageDismissNumericBanner(0);
        }
        FUN_00214da4();
        work->state = 10;
        work->counter = 0;
        Obj557b18 *model = work->pointerHolder->body;
        modelPlayClip(model, 0, 0, 0.0f, 0.0f);
        model->speed = 1.0f;
        showModel(work->cursorHolder->body);
        break;
    }
    }
    if (messageGetChoiceResult() != -1) {
        work->choice = messageGetChoiceResult();
        return;
    }
    work->choice = 0;
}

} /* extern "C" */
