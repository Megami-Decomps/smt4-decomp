#include <stdio.h>
#include "camp/ScriptPanelResources.h"
#include "ui/UiControl.h"
#include "ui/UiControl_Shard004B.h"
#include "mikado/mikadoMain.h"
#include "event/2dEvent/EventEffect.h"
#include "script/scrScriptProcess.h"
#include "shard/Shard0047.h"
#include "code/Code002b_Smt4a.h"
#include "script/ScriptEntry.h"

extern "C" {
extern s32 g_scrConditionRejected;

void soundPlayCueForContextKind(CampScriptPanelResources *work); // declcheck: local (code/Code004b_Smt4a.h types the argument as a SoundCueContext view)
void contentTransitionApplyCommand(CampScriptPanelResources *work, const ListEntry20 *entry);
s32 FUN_004ba698(Menu4C *menu);
void menu4CStartBlock74(Menu4C *menu);
void menu4CReset(Menu4C *menu);
void dialogClose(s32 immediate);
void sysPlaySe(u32 id);
void buttonHelpSetText(s32 index, u32 color);
u32 tableGroupFindEntryIndex(void *group, const char *name);
void FUN_0040738c(MikadoTalkWorkA *talk, f32 frame);
void FUN_00407a80(MikadoTalkWorkA *talk);
void moveCameraCtrlCreateEntry(MikadoTalkWorkA *talk, const char *name, s32 index);
void listSelectItem(MikadoTalkWorkA *talk, s32 index);
void linkSlotSetFlag20(MikadoTalkWorkA *talk, s32 enable);
void linkSlotSetFlag1C(MikadoTalkWorkA *talk, s32 enable);

enum {
    MIKADO_STATE_MENU = 5,
    MIKADO_CAMERA_FRAMES = 15
};

/* The steps of this state (the IV twin mikadoGateStep numbers them the same). */
enum {
    CHOSEN_STEP_BEGIN = 0,
    CHOSEN_STEP_RESET = 1,
    CHOSEN_STEP_START_SCRIPT = 10,
    CHOSEN_STEP_RUN_SCRIPT = 11,
    CHOSEN_STEP_BRANCH = 20,
    CHOSEN_STEP_MOVE_CAMERA = 21,
    CHOSEN_STEP_RUN_LEADER_SCRIPT = 30,
    CHOSEN_STEP_CLOSE_AFTER_LEADER = 31,
    CHOSEN_STEP_CLOSE_REJECTED = 40,
    CHOSEN_STEP_TRANSITION = 99
};

/* The mikado scene's state after a list entry is chosen, one step a call: runs the entry's own script, then
 * either the leader's script (back to the menu afterwards), the rejection (back to the menu) or the camera
 * move to the entry and its transition. */
void mikadoGateStep(CampScriptPanelResources *work)
{
    char name[32];

    switch (work->mikado.step) {
    case CHOSEN_STEP_BEGIN:
        work->mikado.step++;
        break;
    case CHOSEN_STEP_RESET:
        g_scrConditionRejected = 0;
        dialogClose(0);
        work->mikado.step = CHOSEN_STEP_START_SCRIPT;
        break;
    case CHOSEN_STEP_START_SCRIPT:
        if (g_scrConditionRejected == 0) {
            if (work->panel.entry->scriptName[0] == '0') {
                work->mikado.step = CHOSEN_STEP_BRANCH;
            } else {
                sprintf(name, "%s", work->panel.entry->scriptName);
                u32 index = tableGroupFindEntryIndex(work->scriptFileA, name);
                messageSetMode(0);
                sysPlaySe(0x92);
                scrScriptProcessStartEntry(work->scriptA, index);
                work->panel.menu.inputLocked = 1;
                work->mikado.step++;
            }
        } else {
            work->mikado.step = 0;
            work->mikado.state = MIKADO_STATE_MENU;
            dialogOpen(0, 0);
            infoWinSetText((const char *)work->talkMessages, work->panel.record->messageId);
            g_scrConditionRejected = 0;
            work->panel.menu.unk9EE = 0;
        }
        break;
    case CHOSEN_STEP_RUN_SCRIPT:
        if (scrRunOpcodesStub(work->scriptA) != 2) {
            break;
        }
        work->mikado.step = CHOSEN_STEP_BRANCH;
        break;
    case CHOSEN_STEP_BRANCH:
        if (g_scrConditionRejected != 0) {
            messageSetMode(1);
            soundPlayCueForContextKind(work);
            menu4CStartBlock74(&work->panel.menu);
            menu4CReset(&work->panel.menu);
            work->panel.menu.inputLocked = 0;
            g_scrConditionRejected = 0;
            work->mikado.step = CHOSEN_STEP_CLOSE_REJECTED;
        } else {
            messageSetMode(1);
            if (work->panel.entry->unk7C != 0 && rosterGetLeaderId() != 0) {
                scrScriptProcessStartEntry(work->scriptB, 0x3b);
                if (work->panel.menu.inputLocked == 0) {
                    work->panel.menu.inputLocked = 1;
                }
                sysPlaySe(0x92);
                buttonHelpSetText(0, 0xf4f4f4ff);
                work->mikado.step = CHOSEN_STEP_RUN_LEADER_SCRIPT;
            } else {
                if (work->cacheLoaded) {
                    ListEntry20 *current = menu4CGetEntry(&work->panel.menu, work->mikado.menuTotal);
                    if (work->mikado.sceneId == 4 || work->mikado.sceneId == 3) {
                        if (current->cameraMode == 0 || current->cameraMode == 6) {
                            FUN_00407a80(work->talkWork);
                            moveCameraCtrlSnapToNode(work->talkWork, current->cameraView, current->cameraMode);
                            moveCameraCtrlCreateEntry(work->talkWork, "mikado/akyura_park_gate.bam", 0);
                            listSelectItem(work->talkWork, 0);
                            linkSlotSetFlag20(work->talkWork, 1);
                            linkSlotSetFlag1C(work->talkWork, 0);
                        } else {
                            moveCameraCtrlSnapToNode(work->talkWork, current->cameraView, current->cameraMode);
                            linkSlotSetFlag20(work->talkWork, 0);
                            linkSlotSetFlag1C(work->talkWork, 1);
                        }
                    } else {
                        moveCameraCtrlSnapToNode(work->talkWork, current->cameraView, current->cameraMode);
                    }
                }
                work->mikado.cameraFrame = 0;
                work->mikado.step++;
            }
        }
        break;
    case CHOSEN_STEP_MOVE_CAMERA:
        work->mikado.cameraFrame++;
        if (work->mikado.cameraFrame >= MIKADO_CAMERA_FRAMES) {
            work->mikado.step = CHOSEN_STEP_TRANSITION;
        }
        FUN_0040738c(work->talkWork, (f32)work->mikado.cameraFrame);
        break;
    case CHOSEN_STEP_RUN_LEADER_SCRIPT:
        messageSetMode(0);
        if (scrRunOpcodesStub(work->scriptB) != 2) {
            break;
        }
        work->mikado.step = CHOSEN_STEP_CLOSE_AFTER_LEADER;
        soundPlayCueForContextKind(work);
        menu4CStartBlock74(&work->panel.menu);
        menu4CReset(&work->panel.menu);
        work->panel.menu.inputLocked = 0;
        g_scrConditionRejected = 0;
        buttonHelpSetPanelState(1);
        dialogOpen(0, 0);
        infoWinSetText((const char *)work->talkMessages, work->panel.record->messageId);
        break;
    case CHOSEN_STEP_CLOSE_AFTER_LEADER:
        if (!FUN_004ba698(&work->panel.menu)) {
            break;
        }
        messageSetMode(1);
        work->mikado.step = 0;
        work->mikado.state = MIKADO_STATE_MENU;
        g_scrConditionRejected = 0;
        work->panel.menu.unk9EE = 0;
        break;
    case CHOSEN_STEP_CLOSE_REJECTED:
        if (!FUN_004ba698(&work->panel.menu)) {
            break;
        }
        work->mikado.step = 0;
        work->mikado.state = MIKADO_STATE_MENU;
        dialogOpen(0, 0);
        infoWinSetText((const char *)work->talkMessages, work->panel.record->messageId);
        g_scrConditionRejected = 0;
        work->panel.menu.unk9EE = 0;
        break;
    case CHOSEN_STEP_TRANSITION:
        contentTransitionApplyCommand(work, work->panel.entry);
        break;
    }
}

} /* extern "C" */
