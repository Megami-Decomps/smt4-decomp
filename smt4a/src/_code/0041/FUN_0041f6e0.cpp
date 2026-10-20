/* NON_MATCHING: in state 0 retail builds the slot address (add r0,r4,r5 lsl #7; add r0,#108) after moving the table pointer into r1; built forms it first in r3 (state 1 matches). */
#include "common.h"

extern "C" {

#define SLOT_COUNT 5

typedef struct PlayerData {
    /* 0x0 */ u32 a;
    /* 0x4 */ u32 b;
    /* 0x8 */ u32 c;
    /* 0xC */ u16 d;
} PlayerData; /* 0xE bytes */

typedef struct SaveSlot {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 player[0xE];
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
    /* 0x38 */ u32 handleA;
    /* 0x3C */ u32 handleB;
    /* 0x40 */ u32 handleC;
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
extern PlayerData *gameGetPlayerData(void);
extern void rt_memcpy_w(void *dest, const void *src, u32 size);
extern void sysMemClear(void *block, s32 size);
extern void wordPairCopy(void *dest, void *src);
extern s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
extern s32 FUN_0040ab8c(u32 request);
extern void FUN_003c12d8(s32 step, s32 arg);
extern void FUN_00275bc8(void);
extern void FUN_002a7324(s32 arg);
extern void FUN_0023b45c(s32 arg);
extern void FUN_002c8538(s32 arg);
extern void FUN_002f0384(s32 arg);
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
                rt_memcpy_w(&task->slots[index], gameDataBlocksGetTable(), 0x80);
                task->slotValid[index] = 1;
            } else {
                sysMemClear(&task->slots[index], 0x80);
                task->slotValid[index] = 0;
            }
        }
        task->slotIndex = task->slotIndex + 1;
        if ((s32)task->slotIndex < 1) {
            FUN_003c12d8(task->slotIndex + 1, 1);
            return;
        }
        if (task->hasNextStage == 0) {
            task->state = 2;
            return;
        }
        FUN_003c12d8(task->slotIndex + 1, 1);
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
                rt_memcpy_w(&task->slots[index], gameDataBlocksGetTable(), 0x80);
                task->slotValid[index] = 1;
            } else {
                sysMemClear(&task->slots[index], 0x80);
                task->slotValid[index] = 0;
            }
        }
        task->slotIndex = task->slotIndex + 1;
        if ((s32)task->slotIndex < SLOT_COUNT) {
            FUN_003c12d8(task->slotIndex + 1, 1);
            return;
        }
        task->slotsDone = 1;
        task->state = task->state + 1;
        /* fall through */
    case 2:
        if (FUN_0040ab8c(task->request) != 0) {
            s32 loaded = asdTMTexTableNodeIsLoaded(0x2B, 0);
            u32 handle = 0;

            if (loaded != 0) {
                handle = task->handleA;
            }
            if (loaded != 0 && handle != 0 && task->handleB != 0) {
                s32 i;
                u8 previous;

                if (task->handleC == 0) {
                    FUN_00275bc8();
                    task->handleC = handle;
                }
                rt_memcpy_w(gameDataBlocksGetTable(), task->snapshotTable, 0x80);
                wordPairCopy(configGetSettings(), task->snapshotConfig);
                rt_memcpy_w(gameDataBlocksGetSaveData(), task->snapshotSave, 0x2A71C);
                for (i = 0; i < SLOT_COUNT; i++) {
                    if (task->slotValid[i] == 0) {
                        PlayerData *player = gameGetPlayerData();
                        PlayerData *dest = (PlayerData *)task->slots[i].player;

                        dest->a = player->a;
                        dest->b = player->b;
                        dest->c = player->c;
                        dest->d = player->d;
                    }
                }
                FUN_0041eb94(task);
                rt_memcpy_w(gameGetPlayerData(), task->snapshotPlayer, 0xE);
                FUN_002a7324(1);
                task->applied = 1;
                if (task->slotValid[task->selectedSlot] == 0) {
                    FUN_0023b45c(0);
                    FUN_002c8538(1);
                    FUN_002f0384(0);
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
