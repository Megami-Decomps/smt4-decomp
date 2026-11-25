#include <stdio.h>
#include "camp/ScriptPanelResources.h"
#include "ui/UiControl.h"
#include "camp/Camp.h"
#include "camp/CampStateQueries.h"
#include "mikado/mikadoMain.h"
#include "game/GameStateA.h"
#include "gamedata/MapSaveBlockA.h"
#include "gamedata/DataTableSections.h"
#include "quest_center/QuestRecordA.h"
#include "map/MapSelection.h"
#include "event/2dEvent/EventEffect.h"
#include "font/PlaceWin.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "camp/CampMenuEntry.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "code/Code0021_Smt4a.h"
#include "code/Code003c_Smt4a.h"

inline void MikadoTalkWorkA::operator delete(void *block)
{
    asdOperatorDelete(block);
}

extern "C" {
extern const char g_mikadoPathPrefix[]; /* "mikado/" */

void transformInterpolationStep(CampScriptPanelResources *work);
void soundPlayCueForContextKind(CampScriptPanelResources *work); // declcheck: local (code/Code004b_Smt4a.h types the argument as a SoundCueContext view)
void contentMenuRebuildGroup(CampScriptPanelResources *work, s32 type, s32 group);
s32 FUN_004ba698(Menu4C *menu);
void menu4CClearFlag84(Menu4C *menu);
ListEntry20 *menu4CGetCurrentEntry(Menu4C *menu);
void menu4CScrollToKind(Menu4C *menu, u32 kind);
void menu4CStartBlock74(Menu4C *menu);
void menu4CReset(Menu4C *menu);
void placeWinSetValue(u8 value);
void infoWinSetValue(u8 value);
void dialogClose(s32 immediate);
void objectE0ResetFlags1040(void);
void obj04Finish(void);
void frameTransitionSetMode(s32 mode);
void frameTexInitActive(void);
void frameTexApplyMode(s32 request);
void commonBgStopChildAndReset(void);
void FUN_002c3398(s32 a, s32 b);
void FUN_00363c58(s32 mode);
void mapRestoreSavedSelection(void);
u32 campIsState51(void);
u32 screenFadeIsBusy(void);
void clearFlags310To31F(void);
void sub68OwnerCall4(void);
void titleSetSlotValueState2(u32 index, u32 value);
void cameraResourcesRelease(MikadoTalkWorkA *talk);
void soundResetSpatialState(MikadoTalkWorkA *talk);
void moveCameraCtrlSetup(MikadoTalkWorkA *talk, const char *cameraName, const char *dataName);
void moveCameraCtrlMoveToKey(MikadoTalkWorkA *talk, s32 view, s32 immediate);
void moveCameraCtrlCreateEntry(MikadoTalkWorkA *talk, const char *name, s32 index);
void listSelectItem(MikadoTalkWorkA *talk, s32 index);
void linkSlotSetFlag20(MikadoTalkWorkA *talk, s32 enable);
void linkSlotSetFlag1C(MikadoTalkWorkA *talk, s32 enable);

/* The mikado scene's visit to the camp, one step a call: closes the scene's windows and camera,
 * waits for the camp to open and close, applies what it reports (a quest event, a menu request, a
 * new quest selection), then either leaves the scene or rebuilds its menu, camera and windows. */
void mikadoCampVisitUpdate(CampScriptPanelResources *work)
{
    transformInterpolationStep(work);
    switch (work->mikado.step) {
    case 0:
        placeWinSetValue(0);
        infoWinSetValue(0);
        objectE0ResetFlags1040();
        frameTransitionSetMode(1);
        if (work->mikado.flags & 0x40) {
            work->mikado.flags &= ~0x40;
            obj04Finish();
        }
        work->keepUi = 0;
        work->mikado.step++;
        break;
    case 1:
        dialogClose(0);
        work->mikado.step++;
        work->mikado.frame = 0;
        commonBgStopChildAndReset();
        if (work->cacheLoaded) {
            cameraResourcesRelease(work->talkWork);
            asdDebugHookPtr(work->talkWork);
            delete work->talkWork;
            work->talkWork = NULL;
            for (s32 i = 0; i < 10; i++) {
                if (work->cachedFiles[i] != NULL) {
                    asdMemFree(work->cachedFiles[i]);
                    work->cachedFiles[i] = NULL;
                }
            }
        }
        placeWindowStartClose();
        break;
    case 2:
        if (++work->mikado.frame < 10) {
            break;
        }
        menu4CClearFlag84(&work->panel.menu);
        FUN_002c3398(0, 0);
        work->panel.menu.inputLocked = 1;
        work->mikado.step++;
        /* Fall through to wait for the camp. */
    case 3:
        if (campIsState51() || !campIsState85()) {
            if (!g_gameState.retainCampResources) {
                slotSetRequest(1, 10, 255);
            }
            work->mikado.step++;
        }
        break;
    case 4: {
        if (campIsState85()) {
            break;
        }
        if (screenFadeIsBusy()) {
            break;
        }
        CampResult *result = campGetState();
        if (result->changed) {
            if (result->startQuestEvent) {
                QuestRecordA *quest = questDataGetRecord(result->questId);
                g_gameState.eventId = quest->eventId;
                libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.eventEntryName), reinterpret_cast<unsigned int *>(quest->token));
                g_gameState.eventResult = 1;
            } else if (result->requestSecondary) {
                g_gameState.menuRequestSecondary = 1;
            }
            gameFlagsGetBlock()->mapId = 0;
            clearFlags310To31F();
            sub68OwnerCall4();
            asdDebugHookVoid(); /* IV clears the map's pending entries here */
            if (result->requestPrimary) {
                g_gameState.menuRequestPrimary = 1;
            }
            if (result->keepUi) {
                work->keepUi = 1;
            } else {
                gameFlagsGetBlock()->quest = result->mapValue;
                asdDebugHookVoid(); /* IV refreshes two map displays here */
                asdDebugHookVoid();
            }
        }
        if (g_gameState.retainCampResources) {
            /* The camp stays loaded: leave the scene for wherever the map selection points. */
            FUN_003c91e8();
            FUN_00363c58(1);
            frameTransitionSetMode(0);
            switch (gameDataBlocksGetSaveData()[2]) {
            case 0:
            case 1:
                mapRestoreSavedSelection();
                asdDebugHookVoid();
                if (g_mapSelection.id >= 200) {
                    work->mikado.exitRequest[2] = 1;
                } else if (g_mapSelection.id >= 100) {
                    work->mikado.exitRequest[0] = 1;
                } else {
                    work->mikado.exitRequest[1] = 1;
                }
                break;
            case 2:
                work->mikado.exitRequest[3] = 1;
                break;
            }
            work->mikado.step = 8;
        } else {
            work->mikado.step++;
        }
        break;
    }
    case 5: {
        if (campGetState()->changed) {
            u8 kind = menu4CGetCurrentEntry(&work->panel.menu)->kind;
            contentMenuRebuildGroup(work, work->mikado.sceneId, work->panel.group);
            menu4CScrollToKind(&work->panel.menu, kind);
            work->mikado.menuTotal = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(&work->panel.menu));
        }
        frameTransitionSetMode(0);
        commonBgStopChildAndBeginTransition();
        menu4CStartBlock74(&work->panel.menu);
        menu4CReset(&work->panel.menu);
        work->panel.menu.inputLocked = 0;
        soundPlayCueForContextKind(work);
        if (!campGetState()->keepSlot && !work->keepUi) {
            titleSetSlotValueState2(1, 10);
        }
        work->mikado.step++;
        if (work->cacheLoaded) {
            char path[0x80];
            char altPath[0x80];
            u8 table33[4];
            ListEntry20 *current;

            work->talkWork = new MikadoTalkWorkA;
            soundResetSpatialState(work->talkWork);
            sprintf(path, "%s%s", g_mikadoPathPrefix, work->panel.record->image);
            if ((work->panel.record->altFlagA != 0 && gameFlagIsSet(work->panel.record->altFlagA) != 0) ||
                (work->panel.record->altFlagB != 0 && gameFlagIsSet(work->panel.record->altFlagB) != 0)) {
                sprintf(altPath, "%s%s", g_mikadoPathPrefix, work->panel.record->altImage);
                moveCameraCtrlSetup(work->talkWork, path, altPath);
            } else {
                moveCameraCtrlSetup(work->talkWork, path, NULL);
            }
            current = menu4CGetCurrentEntry(&work->panel.menu);
            moveCameraCtrlSnapToNode(work->talkWork, 0, -1);
            moveCameraCtrlMoveToKey(work->talkWork, current->cameraView, 1);
            if (work->panel.record->modelSet >= 0) {
                const char *names = static_cast<const char *>(dataTable33Entries(table33, work->panel.record->modelSet));

                if (names != NULL) {
                    for (s32 i = 0; i < dataTable33TypeCount(table33, work->panel.record->modelSet); i++) {
                        sprintf(path, "%s%s.bam", g_mikadoPathPrefix, names);
                        moveCameraCtrlCreateEntry(work->talkWork, path, i);
                        names += 0x20;
                    }
                    listSelectItem(work->talkWork, current->modelIndex);
                }
            }
            if ((work->mikado.sceneId == 4 || work->mikado.sceneId == 3) &&
                (current->cameraView == 0 || current->cameraView == 6)) {
                linkSlotSetFlag20(work->talkWork, 1);
                linkSlotSetFlag1C(work->talkWork, 0);
            } else {
                linkSlotSetFlag20(work->talkWork, 0);
                linkSlotSetFlag1C(work->talkWork, 1);
            }
        }
        if (!work->keepUi) {
            dialogOpen(0, 0);
            infoWinSetText(static_cast<const char *>(work->talkMessages), work->panel.record->messageId);
            placeWinStartText(work->panel.record->name);
            placeWinSetValue(1);
            infoWinSetValue(1);
        }
        break;
    }
    case 6:
        if (FUN_004ba698(&work->panel.menu) && !screenFadeIsBusy()) {
            if (!work->keepUi) {
                work->mikado.state = 5;
                work->mikado.step = 0;
            } else {
                eventQueueAddUnique(0x1000222);
                frameTexInitActive();
                work->mikado.step++;
                work->mikado.frame = 0;
            }
        }
        break;
    case 7:
        work->mikado.frame++;
        if (work->mikado.frame == 1) {
            frameTexApplyMode(4);
        }
        if (work->mikado.frame >= 4) {
            work->mikado.state = 17;
            work->mikado.step = 0;
        }
        break;
    case 8:
        work->mikado.state = 17;
        work->mikado.step = 0;
        break;
    }
}

} /* extern "C" */
