#include "camp/CampCec/CampCecEdit.h"
#include "script/scrScriptProcess.h"
#include "quest_center/qcMain.h"
#include "bible/bibleMain.h"
#include "code/Code0026.h"
#include "code/Code0029_Smt4.h"
#include "script/ScriptEntry.h"

extern "C" {

u32 messageMainGetChoiceResult(void);
u32 messageTargetGetValue(void);
u8 messageWindowIsState1(void);
u32 FUN_0026f1f0(void);
u32 FUN_00259800(void);
void linkHolderApplyFlag(u32 holder, s32 flag);
void FUN_0028a924(s32 a, s32 b, s32 c);
void rt_aeabi_memclr(void *dest, u32 size);
void FUN_0029e774(void);
void FUN_0028a368(int reset);
void partyPanelReset(void);
void partyPanelSetDisabledMode(s32 mode);
void characterInfoPanelPopulate(u32 panel, const CecProcessSlot *record, void *messages);
void FUN_003111e8(int flag);
s32 uiDrawRecordNameLabels(u32 labels, const CecProcessSlot *record);
void devilCreateRaceEffect(u32 devilId, s32 group);

/* Sets the pair of values message 7 leaves for the next state (16 and 0 or 100 with a demon attached,
 * 4 and 200 without one). */
static __inline void campCecEditSetView(CampCecEdit *edit, s32 first, s32 second)
{
    edit->messageBase = second;
    edit->listCount = first;
}

/* State 2 of the StreetPass card editor: the conversation. Starts the queued message when none is
 * running, and once the running one has finished acts on its answer: rebuilds the card with or
 * without the attached demon, and queues the next message and state. Returns 2 to change state. */
s32 campCecEditMessageState(CampCecEdit *edit)
{
    s32 result = 0;

    switch (edit->message) {
    case -1:
        if (edit->nextMessage != -1) {
            scrScriptProcessStartEntry(edit->resource, edit->messageEntries[edit->nextMessage]);
            edit->message = edit->nextMessage;
        }
        break;
    case 0:
        if (scrRunOpcodesStub(edit->resource) == 2) {
            switch (messageMainGetChoiceResult()) {
            case 0:
                edit->selectionMode = 0;
                break;
            case 1:
                edit->selectionMode = 1;
                break;
            }
            cecCardBuild(edit->card, (s16)edit->card->selectedDemon, edit->selectionMode, FUN_00259800());
            if (edit->card->selectedDemon == 0) {
                rt_aeabi_memclr(&edit->card->demon, sizeof(CecCardDemon));
            }
            if (edit->activeMemberCount != 0) {
                edit->message = -1;
                edit->nextMessage = 1;
            } else {
                edit->unit = 0;
                edit->nextState = 5;
                edit->followingState = 2;
                edit->message = -1;
                edit->nextMessage = 7;
                campCecEditResetPositions(edit);
                result = 2;
            }
        } else if (messageTargetGetValue() != edit->shownTarget && messageWindowIsState1() != 0) {
            edit->shownTarget = messageTargetGetValue();
            if (edit->shownTarget == 0) {
                FUN_0026f188(FUN_0026f1f0(), 20);
            } else {
                FUN_0026f188(FUN_0026f1f0(), 21);
            }
        }
        break;
    case 1:
        if (scrRunOpcodesStub(edit->resource) != 2) {
            break;
        }
        switch (messageMainGetChoiceResult()) {
        case 0:
            edit->followingState = 3;
            edit->nextState = 5;
            campCecEditResetPositions(edit);
            linkHolderApplyFlag(edit->statusScene, 0);
            FUN_0028a924(0x10, 0, -1);
            FUN_0029e774();
            FUN_0028a368(1);
            partyPanelReset();
            partyPanelSetDisabledMode(1);
            edit->message = -1;
            edit->nextMessage = -1;
            result = 2;
            break;
        case 1:
            edit->unit = 0;
            cecCardBuild(edit->card, edit->unit, edit->card->selectionMode, FUN_00259800());
            if (edit->unit == 0) {
                rt_aeabi_memclr(&edit->card->demon, sizeof(CecCardDemon));
            }
            characterInfoPanelPopulate(edit->infoPage, edit->card, edit->cardMessageFile);
            edit->nextState = 5;
            edit->followingState = 2;
            campCecEditResetPositions(edit);
            buttonHelpSetPreset(200);
            edit->message = -1;
            edit->nextMessage = 7;
            result = 2;
            break;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(edit->resource) != 2) {
            break;
        }
        partyPanelSetDisabledMode(1);
        edit->nextState = 3;
        partyPanelReset();
        FUN_003111e8(1);
        edit->message = -1;
        result = 2;
        break;
    case 6:
    case 9:
        if (scrRunOpcodesStub(edit->resource) == 2) {
            edit->message = -1;
            edit->nextState = 8;
            edit->nextMessage = -1;
            result = 2;
        }
        break;
    case 4:
    case 5:
        if (scrRunOpcodesStub(edit->resource) != 2) {
            break;
        }
        switch (messageMainGetChoiceResult()) {
        case 0:
            FUN_0026d5a4();
            cecCardBuild(edit->card, edit->unit, edit->card->selectionMode, FUN_00259800());
            characterInfoPanelPopulate(edit->infoPage, edit->card, edit->cardMessageFile);
            uiDrawRecordNameLabels(edit->nameLabels, edit->card);
            edit->message = -1;
            edit->followingState = 2;
            edit->nextState = 5;
            edit->nextMessage = 7;
            linkHolderApplyFlag(edit->statusScene, 1);
            campCecEditResetPositions(edit);
            buttonHelpSetPreset(200);
            devilCreateRaceEffect(edit->unit, 0);
            result = 2;
            break;
        case 1:
            edit->message = -1;
            edit->nextMessage = -1;
            partyPanelSetDisabledMode(1);
            partyPanelReset();
            FUN_003111e8(1);
            edit->nextState = 3;
            result = 2;
            break;
        }
        break;
    case 7: {
        s32 help;

        scrRunOpcodesStub(edit->resource);
        if (edit->unit == 0) {
            campCecEditSetView(edit, 4, 200);
            help = 18;
        } else {
            if (edit->selectionMode == 1) {
                campCecEditSetView(edit, 16, 100);
                help = 17;
            } else {
                campCecEditSetView(edit, 16, 0);
                help = 16;
            }
        }
        FUN_0026f188(FUN_0026f1f0(), help);
        edit->unk12A = 1;
        edit->followingState = 2;
        edit->nextState = 6;
        edit->message = -1;
        edit->nextMessage = -1;
        result = 2;
        break;
    }
    case 8:
        if (scrRunOpcodesStub(edit->resource) != 2) {
            break;
        }
        switch (messageMainGetChoiceResult()) {
        case 0:
            edit->listActive = 0;
            edit->followingState = 8;
            edit->nextState = 7;
            edit->listWindow.frame = 0;
            edit->listWindow.done = 0;
            buttonHelpSetPreset(0xbd);
            buttonHelpSetTextVisible(0);
            result = 2;
            break;
        case 1:
            edit->message = -1;
            edit->nextMessage = 7;
            result = 2;
            break;
        }
        break;
    case 3:
        if (scrRunOpcodesStub(edit->resource) == 2) {
            edit->message = -1;
            edit->nextState = 8;
            edit->nextMessage = -1;
            result = 2;
        }
        break;
    }
    return result;
}

} /* extern "C" */
