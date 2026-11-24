/* Twin of Apocalypse's FUN_004b990c. Retail reads the pending jump's group through its own pool word, so the
 * jump request is a global of its own (g_mapSelection, as in Apocalypse), not a member of g_gameState. */
#include <stdio.h>
#include "mikado/mikadoMain.h"
#include "ui/UiControl.h"
#include "camp/Camp.h"
#include "game/GameState.h"
#include "gamedata/MapSaveBlock.h"
#include "gamedata/DataTable33.h"
#include "quest_center/QuestRecord.h"
#include "shard/Shard004B.h"
#include "font/PlaceWin.h"
#include "sys/RuntimeObjects.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "AsdSDK/FileLoadSync.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "battle/btlHelp.h"
#include "camp/CampMenuEntry.h"
#include "event/2dEvent/EventEffect.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

inline void MikadoTalkWork::operator delete(void *block)
{
    asdMemFreeNonNull(block);
}

extern "C" {
void transformInterpolationStep(MikadoCamera *camera);
void buttonHelpSelectByProgress(MikadoCamera *camera); // declcheck: local (ui/UiControl_Smt4.h types the argument as a HelpOwner view)
void contentMenuRebuildGroup(MikadoCamera *camera, s32 type, s32 group);
s32 listUpdateRevealTransition(SelectionFlags *menu);
void FUN_00233808(SelectionFlags *menu);
ListEntry20 *FUN_0022b8c0(SelectionFlags *menu); // declcheck: local (code/Code0022_Smt4.h returns the entry as a u32)
void listScrollToId(SelectionFlags *menu, u32 id);
void objBlockInitAndMark(SelectionFlags *menu);
void FUN_0022b6c4(SelectionFlags *menu); // declcheck: local (code/Code0022_Smt4.h types the argument as a Context view)
void placeWinSetValue(u8 value);
void infoWinStartTimer(s32 immediate); // declcheck: local (retail passes 0; the definition takes nothing)
void infoWinSetMessage(const void *message, u32 id);
void FUN_00275dc4(void);
void messageMainFinishWindow(void);
void frameTexCampSetMode(s32 mode);
void FUN_00275dec(void);
void frameTexApplyMode(s32 mode);
void commonBgStopChildAndReset(void);
void placeWindowStartClose(void);
void FUN_0028a420(s32 a, s32 b);
void mapSceneResetState(s32 mode);
void saveLoadUiRestoreBackups(void);
void mapRestoreSavedSelection(void);
void encounterFlagsRollSlots(void);
s32 FUN_002b8694(void);
u32 screenFadeIsBusy(void);
void clearFlags310To31F(void);
void naviClearObjectBlock(void);
void mapClearPendingEntries(void);
void mapUpdateLocationAvailability(void);
void mapUpdatePendingAvailabilityFlags(void);
void titleSetSlotValueState2(u32 index, u32 value);
void FUN_002a4bac(MikadoTalkWork *talk);
void FUN_00235250(MikadoTalkWork *talk);
void FUN_00234f5c(MikadoTalkWork *talk, const char *name, const char *altName);
void FUN_0022afc4(MikadoTalkWork *talk, s32 index, s32 mode); // declcheck: local (code/Code0022_Smt4.h types the argument as a ModelController view)
void moverRetargetToSlot(MikadoTalkWork *talk, s32 view, s32 immediate);
void objModelCreateFromSource(MikadoTalkWork *talk, void *file, u32 size);
void modelSetVisible(MikadoTalkWork *talk, s32 visible);
void nodeOwnerSetEnabled(MikadoTalkWork *talk, s32 enabled);

/* The mikado scene's visit to the camp, one step a call: closes the scene's windows and model,
 * waits for the camp to open and close, applies what it reports (a quest event, a menu request, a
 * new quest selection), then either leaves the scene or rebuilds its menu, model and windows. */
void mikadoCampVisitUpdate(MikadoCamera *camera)
{
    transformInterpolationStep(camera);
    switch (camera->step) {
    case 0:
        placeWinSetValue(0);
        infoWinSetShown(0);
        FUN_00275dc4();
        frameTexCampSetMode(1);
        if (camera->flags & 0x40) {
            camera->flags &= ~0x40;
            messageMainFinishWindow();
        }
        camera->keepUi = 0;
        camera->step++;
        break;
    case 1:
        infoWinStartTimer(0);
        camera->step++;
        camera->frame = 0;
        commonBgStopChildAndReset();
        if (camera->cacheLoaded) {
            FUN_002a4bac(camera->talkWork);
            asdDebugHookPtr(camera->talkWork);
            delete camera->talkWork;
            camera->talkWork = NULL;
            for (s32 i = 0; i < 10; i++) {
                if (camera->modelFiles[i] != NULL) {
                    asdMemFree(camera->modelFiles[i]);
                    camera->modelFiles[i] = NULL;
                }
            }
        }
        placeWindowStartClose();
        break;
    case 2:
        if (++camera->frame < 10) {
            break;
        }
        FUN_00233808(&camera->selectionFlags);
        FUN_0028a420(0, 0);
        camera->menuLocked = 1;
        camera->step++;
        /* Fall through to wait for the camp. */
    case 3:
        if (FUN_0017fb54() || !FUN_002b8694()) {
            if (!g_gameState.retainCampResources) {
                slotSetRequest(1, 10, 255);
            }
            camera->step++;
        }
        break;
    case 4: {
        if (FUN_002b8694()) {
            break;
        }
        if (screenFadeIsBusy()) {
            break;
        }
        CampResult *result = campGetState();
        if (result->changed) {
            if (result->startQuestEvent) {
                QuestRecord *quest = questDataGetRecord(result->questId);
                g_gameState.event.eventId = quest->eventId;
                libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.event.eventEntryName), reinterpret_cast<unsigned int *>(quest->token));
                g_gameState.event.eventState = 1;
            } else if (result->requestSecondary) {
                g_gameState.event.transitionRequest13 = 1;
            }
            gameGetMapBlock()->mapId = 0;
            clearFlags310To31F();
            naviClearObjectBlock();
            mapClearPendingEntries();
            if (result->requestPrimary) {
                g_gameState.event.transitionRequest12 = 1;
            }
            if (result->keepUi) {
                camera->keepUi = 1;
            } else {
                gameGetMapBlock()->quest = result->mapValue;
                mapUpdateLocationAvailability();
                mapUpdatePendingAvailabilityFlags();
            }
        }
        if (g_gameState.retainCampResources) {
            /* The camp stays loaded: leave the scene for wherever the pending jump points. */
            saveLoadUiRestoreBackups();
            mapSceneResetState(1);
            frameTexCampSetMode(0);
            switch (gameDataBlocksGetSaveData()[2]) {
            case 0:
            case 1:
                mapRestoreSavedSelection();
                encounterFlagsRollSlots();
                if (g_mapSelection.selection.group >= 200) {
                    camera->exitRequest[2] = 1;
                } else if (g_mapSelection.selection.group >= 100) {
                    camera->exitRequest[0] = 1;
                } else {
                    camera->exitRequest[1] = 1;
                }
                break;
            case 2:
                camera->exitRequest[3] = 1;
                break;
            }
            camera->step = 8;
        } else {
            camera->step++;
        }
        break;
    }
    case 5: {
        if (campGetState()->changed) {
            u8 kind = FUN_0022b8c0(&camera->selectionFlags)->kind;
            contentMenuRebuildGroup(camera, static_cast<s16>(camera->positionA.a), camera->group);
            listScrollToId(&camera->selectionFlags, kind);
            camera->menuTotal = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(&camera->selectionFlags));
        }
        frameTexCampSetMode(0);
        commonBgStopChildAndBeginTransition();
        objBlockInitAndMark(&camera->selectionFlags);
        FUN_0022b6c4(&camera->selectionFlags);
        camera->menuLocked = 0;
        buttonHelpSelectByProgress(camera);
        if (!campGetState()->keepSlot && !camera->keepUi) {
            titleSetSlotValueState2(1, 10);
        }
        camera->step++;
        if (camera->cacheLoaded) {
            char path[0x80];
            char altPath[0x80];
            u8 table33[4];
            ListEntry20 *current;

            camera->talkWork = new MikadoTalkWork;
            FUN_00235250(camera->talkWork);
            sprintf(path, "mikado/%s", camera->record->image);
            if ((camera->record->altFlagA != 0 && gameFlagIsSet(camera->record->altFlagA) != 0) ||
                (camera->record->altFlagB != 0 && gameFlagIsSet(camera->record->altFlagB) != 0)) {
                sprintf(altPath, "mikado/%s", camera->record->altImage);
                FUN_00234f5c(camera->talkWork, path, altPath);
            } else {
                FUN_00234f5c(camera->talkWork, path, NULL);
            }
            current = FUN_0022b8c0(&camera->selectionFlags);
            FUN_0022afc4(camera->talkWork, 0, -1);
            moverRetargetToSlot(camera->talkWork, current->cameraView, 1);
            if (camera->record->modelSet >= 0) {
                const char *names = static_cast<const char *>(dataTable33GetEntries(table33, camera->record->modelSet));

                if (names != NULL) {
                    for (s32 i = 0; i < FUN_0022afb0(table33, camera->record->modelSet); i++) {
                        sprintf(path, "mikado/%s.bam", names);
                        camera->modelFiles[i] = fileLoadSync(path, &camera->modelFileSizes[i], 1);
                        names += 0x20;
                    }
                    objModelCreateFromSource(camera->talkWork, camera->modelFiles[current->modelIndex],
                                             camera->modelFileSizes[current->modelIndex]);
                }
            }
            if ((static_cast<s16>(camera->positionA.a) == 4 || static_cast<s16>(camera->positionA.a) == 3) &&
                (current->cameraView == 0 || current->cameraView == 6)) {
                modelSetVisible(camera->talkWork, 1);
                nodeOwnerSetEnabled(camera->talkWork, 0);
            } else {
                modelSetVisible(camera->talkWork, 0);
                nodeOwnerSetEnabled(camera->talkWork, 1);
            }
        }
        if (!camera->keepUi) {
            dialogOpen(0, 0);
            infoWinSetMessage(reinterpret_cast<const void *>(camera->talkMbm), camera->record->messageId);
            placeWinStartText(camera->record->name);
            placeWinSetValue(1);
            infoWinSetShown(1);
        }
        break;
    }
    case 6:
        if (listUpdateRevealTransition(&camera->selectionFlags) && !screenFadeIsBusy()) {
            if (!camera->keepUi) {
                camera->state = 5;
                camera->step = 0;
            } else {
                eventQueueAddUnique(0x1000184);
                FUN_00275dec();
                camera->step++;
                camera->frame = 0;
            }
        }
        break;
    case 7:
        camera->frame++;
        if (camera->frame == 1) {
            frameTexApplyMode(4);
        }
        if (camera->frame >= 4) {
            camera->state = 17;
            camera->step = 0;
        }
        break;
    case 8:
        camera->state = 17;
        camera->step = 0;
        break;
    }
}

} /* extern "C" */
