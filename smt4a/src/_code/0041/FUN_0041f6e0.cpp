#include "common.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/scrScriptProcess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SavedUnitSelection.h"
#include "Model/MoriModelContent.h"
#include <string.h>

extern "C" {

enum { SLOT_COUNT = 5 };

extern s32 byteTripleGetV0(void);
extern s32 byteArr5Get3(void);
extern void *configGetSettings(void);
extern void *gameDataBlocksGetSaveData(void);
extern void __aeabi_memcpy4(void *dest, const void *src, u32 size);
extern void sysMemClear(void *block, s32 size);
extern void __ARM_common_memcpy4_8(void *dest, void *src);
extern void saveLoadStartLoad(s32 step, s32 arg);
extern void statusPanelSetOpen(s32 arg);
extern void FUN_0023b45c(s32 arg);
extern void statusCameraRestore(s32 arg);

/* Reads each slot's profile, then restores the session after the editor's resources load. */
void FUN_0041f6e0(SavedUnitSelection *task)
{
    u32 index;

    switch (task->editor.frame) {
    case 0:
        if (byteTripleGetV0() == 0) {
            return;
        }
        index = task->slotIndex;
        if (index < SLOT_COUNT) {
            if (byteTripleGetV0() == 0) {
                return;
            }
            if (byteArr5Get3() != 0) {
                task->choices[index] = *(const SavedUnitChoice *)gameDataBlocksGetTable();
                task->changes[index] = 1;
            } else {
                sysMemClear(&task->choices[index], sizeof(task->choices[index]));
                task->changes[index] = 0;
            }
        }
        if (++task->slotIndex < 1) {
            saveLoadStartLoad(task->slotIndex + 1, 1);
            return;
        }
        if (task->editor.waitScript == 0) {
            task->editor.frame = 2;
            return;
        }
        saveLoadStartLoad(task->slotIndex + 1, 1);
        ++task->editor.frame;
        /* fall through */
    case 1:
        if (byteTripleGetV0() == 0) {
            return;
        }
        index = task->slotIndex;
        if (index < SLOT_COUNT) {
            if (byteTripleGetV0() == 0) {
                return;
            }
            if (byteArr5Get3() != 0) {
                task->choices[index] = *(const SavedUnitChoice *)gameDataBlocksGetTable();
                task->changes[index] = 1;
            } else {
                sysMemClear(&task->choices[index], sizeof(task->choices[index]));
                task->changes[index] = 0;
            }
        }
        ++task->slotIndex;
        if (task->slotIndex < SLOT_COUNT) {
            saveLoadStartLoad(task->slotIndex + 1, 1);
            return;
        }
        task->editor.slotHeadersReady = 1;
        ++task->editor.frame;
        /* fall through */
    case 2:
        if (moriModelContentIsLoaded((MoriModelContent *)task->resource) != 0) {
            if (asdTMTexTableNodeIsLoaded(0x2B, 0) != 0 && task->editor.scriptFile != NULL && task->editor.scriptOwner != NULL) {
                if (task->editor.script == NULL) {
                    task->editor.script = scrScriptProcessCreate(task->editor.scriptFile, task->editor.scriptOwner);
                }
                __aeabi_memcpy4((void *)gameDataBlocksGetTable(), task->editor.tableSnapshot, sizeof(((GameSaveDataA *)0)->header));
                __ARM_common_memcpy4_8(configGetSettings(), task->editor.settingsSnapshot);
                __aeabi_memcpy4(gameDataBlocksGetSaveData(), task->editor.saveSnapshot, sizeof(GameSaveBodyA));
                for (s32 i = 0; i < SLOT_COUNT; i++) {
                    if (task->changes[i] == 0) {
                        memcpy(&task->choices[i].base, &gameGetPlayerData()->equipped, sizeof(task->choices[i].base));
                    }
                }
                FUN_0041eb94(task);
                __aeabi_memcpy4(&gameGetPlayerData()->equipped, task->unit, sizeof(PlayerEquipment));
                statusPanelSetOpen(1);
                task->active = 1;
                if (task->changes[task->selected] == 0) {
                    FUN_0023b45c(0);
                    gameGlobalsSetOverlayActive(1);
                    statusCameraRestore(0);
                    task->changed = 0;
                }
                savedUnitEditorEnter(task, 3);
                task->editor.pending = 0;
            }
        }
        break;
    }
}

} /* extern "C" */
