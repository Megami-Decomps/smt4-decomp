/* NON_MATCHING: readable switch rewrite (171 vs 168 rows); register numbering and case-body ordering differ from retail */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "util/FUN_0029efa8.h"

struct MenuList;

// Battle command menu: only the members read here.
struct CommandMenu {
    u8 unk0000[0x305c];
    s32 hasPlayerList;      // 0x305c
    u8 unk3060[8];
    s32 cursorDefault;      // 0x3068
    u8 unk306c[0x3218 - 0x306c];
    u8 itemList[0x32e0 - 0x3218];   // 0x3218
    u8 targetList[0x3344 - 0x32e0]; // 0x32e0
    u8 skillList[0x3480 - 0x3344];  // 0x3344
    s16 targetIds[1];       // 0x3480
};

struct PlayerData {
    u8 unk00[2];
    s16 enabled;            // 0x02
    u16 value;              // 0x04
};


extern "C" {

u32 FUN_00297ca4(CommandMenu* menu, u32 arg);
s32 FUN_0029efc0(void* list);
s32 flagBitIsSet(s32 bit);
s32 gameFlagIsSet(u32 flag);
PlayerData* gameGetPlayerData(void);

// Maps the active command menu page to the screen layout `*layout` and the cursor index `*cursor`.
void FUN_0028cb40(CommandMenu* menu, u16* layout, s16* cursor)
{
    s32 index = 0;
    if ((btlGetMainState()->battleFlags & 0x200) != 0) {
        *layout = 7;
        *cursor = 7;
        return;
    }
    s16 result;
    switch (FUN_00297ca4(menu, 1)) {
    case 0:
    case 6:
        result = 0;
        *layout = 1;
        break;
    case 1: {
        s32 base = FUN_0029efc0(menu->itemList);
        index = FUN_0029efa8(menu->itemList) + base;
        u16 page;
        if (menu->hasPlayerList != 0) {
            page = (index != 0) ? 2 : 1;
        } else if (index == 0) {
            page = 1;
        } else {
            page = 2;
            if (index == 1 && gameFlagIsSet(0x410)) {
                PlayerData* player = gameGetPlayerData();
                if (player->enabled != 0 && player->value != 0) page = 1;
            }
        }
        *layout = page;
        result = menu->cursorDefault;
        break;
    }
    case 2:
        *layout = 3;
        result = menu->cursorDefault;
        break;
    case 3:
        *layout = 7;
        if ((btlGetMainState()->editorControl.flags & 0x1000) == 0) {
            s32 slotIds[6] = { 0, 1, 2, 3, 4, 5 };
            for (s32 i = 0; i < 6; i++) {
                if (flagBitIsSet(i + 0x2e)) {
                    s32 selected = FUN_0029efc0(menu->skillList) + FUN_0029efa8(menu->skillList);
                    if (selected == index) {
                        *cursor = slotIds[i];
                        return;
                    }
                    index++;
                }
            }
            return;
        }
        result = FUN_0029efc0(menu) + FUN_0029efa8(menu->skillList);
        break;
    case 4:
        result = 0;
        *layout = 0xd;
        break;
    case 5:
        result = 0;
        *layout = 6;
        break;
    case 7:
        *layout = 8;
        result = menu->targetIds[FUN_0029efc0(menu->targetList) + FUN_0029efa8(menu->targetList)];
        break;
    case 9:
        result = 0;
        *layout = 4;
        break;
    case 10:
        result = 0;
        *layout = 9;
        break;
    case 11:
        *layout = 0xe;
        *cursor = 0;
        return;
    case 0xffffffff:
    case 8:
        result = 0;
        *layout = 5;
        break;
    default:
        return;
    }
    *cursor = result;
}

} /* extern "C" */
