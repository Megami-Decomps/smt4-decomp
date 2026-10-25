#include "common.h"

extern "C" {

typedef struct NpcData {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x50];
    /* 0x52 */ u8 variant;
} NpcData;

typedef struct NpcSlot {
    /* 0x0 */ u32 state;
    /* 0x4 */ u32 timer;
    /* 0x8 */ u32 kind;
} NpcSlot;

typedef struct NpcRoom {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ NpcData *npcs[8];
    /* 0x048 */ u8 unk048[0xC0];
    /* 0x108 */ NpcSlot slots[8];
} NpcRoom;

extern NpcRoom *g_npcRoom; /* 0x588124 */

extern int scrGetArg(int index);
extern int gameSaveTestFlag(u32 id, u32 variant);
extern int saveWorkClearFlagMask(u32 id, u32 variant);

/* Script command: starts effect `kind` for the room's NPC with the given id and variant; an unknown NPC falls back to kind 5. */
u32 scrComm_NpcRoomStartEffect(void)
{
    u32 id = scrGetArg(0);
    u32 variant = scrGetArg(1);
    u32 timer = scrGetArg(2);
    u32 kind = 0;
    int i;

    if (gameSaveTestFlag(id, variant & 0xFF) == 0) {
        timer = 0;
        kind = 5;
    }
    saveWorkClearFlagMask(id, variant & 0xFF);
    if (g_npcRoom != NULL) {
        for (i = 0; i < 8; i++) {
            NpcData *npc = g_npcRoom->npcs[i];

            if (npc->id == id && npc->variant == variant) {
                g_npcRoom->slots[i].kind = kind;
                g_npcRoom->slots[i].state = 0;
                g_npcRoom->slots[i].timer = timer;
                break;
            }
        }
    }
    return 1;
}

} /* extern "C" */
