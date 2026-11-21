/* NON_MATCHING: in state 0 retail builds the slot address (add r0,r4,r5 lsl #7; add r0,#108) after moving the table
 * pointer into r1; the build forms it in r3 first (the same statements in state 1 match), which shifts every later branch. */
#include "common.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "script/scrScriptProcess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/PlayerRecordParts.h"

extern "C" {

#define SLOT_COUNT 5

typedef struct SaveSlot {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ PlayerEquipment equipment; /* the player's equipment when the slot holds no snapshot */
    /* 0x20 */ u8 unk20[0x60];
} SaveSlot; /* 0x80 bytes */

typedef struct SaveLoadTask {
    /* 0x00 */ u8 unk00[7];
    /* 0x07 */ u8 mode;
    /* 0x08 */ s32 state;
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 previousMode;
    /* 0x0E */ u8 unk0E[5];
    /* 0x13 */ u8 hasNextStage;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 slotsDone;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ void *snapshotTable;
    /* 0x20 */ void *snapshotConfig;
    /* 0x24 */ void *snapshotSave;
    /* 0x28 */ u8 unk28[0x10];
    /* 0x38 */ void *script;          /* the loaded script file */
    /* 0x3C */ void *scriptOwner;
    /* 0x40 */ ScriptProcess *process;
    /* 0x44 */ u8 unk44[0x10];
    /* 0x54 */ void *snapshotPlayer;
    /* 0x58 */ u32 request;
    /* 0x5C */ u8 applied;
    /* 0x5D */ u8 unk5D[0xB];
    /* 0x68 */ u8 unk68;
    /* 0x69 */ u8 unk69[3];
    /* 0x6C */ SaveSlot slots[SLOT_COUNT];
    /* 0x2EC */ u8 slotValid[8];
    /* 0x2F4 */ u32 slotIndex;
    /* 0x2F8 */ s32 selectedSlot;
} SaveLoadTask;

extern s32 byteTripleGetV0(void);
extern s32 byteArr5Get3(void);
extern void *gameDataBlocksGetTable(void);
extern void *configGetSettings(void);
extern void *gameDataBlocksGetSaveData(void);
extern void __aeabi_memcpy4(void *dest, const void *src, u32 size);
extern void sysMemClear(void *block, s32 size);
extern void __ARM_common_memcpy4_8(void *dest, void *src);
extern s32 moriModelContentIsLoaded(u32 request);
extern void saveLoadProcessCreate(s32 step, s32 arg);
extern void statusPanelSetOpen(s32 arg);
extern void FUN_0023b45c(s32 arg);
extern void statusCameraRestore(s32 arg);
extern void FUN_0041eb94(SaveLoadTask *task);

/* Steps the load: reads each slot's snapshot (states 0 and 1), then applies the snapshots once their resources are loaded (state 2). */
void FUN_0041f6e0(SaveLoadTask *task)
{
    u32 index;

    switch (task->state) {
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
                __aeabi_memcpy4(&task->slots[index], gameDataBlocksGetTable(), 0x80);
                task->slotValid[index] = 1;
            } else {
                sysMemClear(&task->slots[index], 0x80);
                task->slotValid[index] = 0;
            }
        }
        task->slotIndex = task->slotIndex + 1;
        if ((s32)task->slotIndex < 1) {
            saveLoadProcessCreate(task->slotIndex + 1, 1);
            return;
        }
        if (task->hasNextStage == 0) {
            task->state = 2;
            return;
        }
        saveLoadProcessCreate(task->slotIndex + 1, 1);
        task->state = task->state + 1;
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
                __aeabi_memcpy4(&task->slots[index], gameDataBlocksGetTable(), 0x80);
                task->slotValid[index] = 1;
            } else {
                sysMemClear(&task->slots[index], 0x80);
                task->slotValid[index] = 0;
            }
        }
        task->slotIndex = task->slotIndex + 1;
        if ((s32)task->slotIndex < SLOT_COUNT) {
            saveLoadProcessCreate(task->slotIndex + 1, 1);
            return;
        }
        task->slotsDone = 1;
        task->state = task->state + 1;
        /* fall through */
    case 2:
        if (moriModelContentIsLoaded(task->request) != 0) {
            if (asdTMTexTableNodeIsLoaded(0x2B, 0) != 0 && task->script != NULL && task->scriptOwner != NULL) {
                s32 i;
                u8 previous;

                if (task->process == NULL) {
                    task->process = scrScriptProcessCreate(task->script, task->scriptOwner);
                }
                __aeabi_memcpy4(gameDataBlocksGetTable(), task->snapshotTable, 0x80);
                __ARM_common_memcpy4_8(configGetSettings(), task->snapshotConfig);
                __aeabi_memcpy4(gameDataBlocksGetSaveData(), task->snapshotSave, 0x2A71C);
                for (i = 0; i < SLOT_COUNT; i++) {
                    if (task->slotValid[i] == 0) {
                        task->slots[i].equipment = gameGetPlayerData()->equipped;
                    }
                }
                FUN_0041eb94(task);
                __aeabi_memcpy4(&gameGetPlayerData()->equipped, task->snapshotPlayer, sizeof(PlayerEquipment));
                statusPanelSetOpen(1);
                task->applied = 1;
                if (task->slotValid[task->selectedSlot] == 0) {
                    FUN_0023b45c(0);
                    gameGlobalsSetOverlayActive(1);
                    statusCameraRestore(0);
                    task->unk68 = 0;
                }
                previous = task->mode;
                task->mode = 3;
                task->previousMode = previous;
                task->state = 0;
                task->unk0C = 0;
            }
        }
        break;
    }
}

} /* extern "C" */
