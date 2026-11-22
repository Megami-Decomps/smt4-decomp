/* NON_MATCHING: retail's instructions, registers, calls and frame size (raw 24 / shape 22 of 295 rows). What differs:
 * four spill slots are numbered differently (retail keeps the row's x at [sp, #40], the inlined command lookup's
 * count at [sp, #28], its result at [sp, #72] and the party block's base at [sp, #60]; this build uses 24, 0, 64 and
 * 68), and the lookup's kind-2 test has btlCommandMenuKindAt's residue (retail `cmp #2; bne; b`, this build `beq; b`). */
#include "battle/BattleContextCommands.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The command menu's texture table and its entries. */
enum {
    COMMAND_MENU_TABLE = 21,
    COMMAND_MENU_PLATE = 0xDB,              /* two plate images */
    COMMAND_MENU_ROW_POINTS_ODD = 0xFF,     /* row positions of a menu with an odd number of commands */
    COMMAND_MENU_ROW_POINTS_EVEN = 0x106,
    COMMAND_MENU_CURSOR_POINTS_ODD = 0x182, /* the same for the selected row */
    COMMAND_MENU_CURSOR_POINTS_EVEN = 0x189
};

extern "C" {

s32 objectPartRunUnlessLocked(PlayScenePart *part); // declcheck: local (camp/CampMenuEntry.h takes a GridNavigation and redeclares gameFlagIsSet with another result type)
s32 uiGridNavigationEntryCount(PlayScenePart *part); // declcheck: local (as above)
u8 btlCommandMenuKindAt(PlayScene *scene, s32 ordinal);
void FUN_00218238(PlayScene *scene, u32 id, s32 x, s32 y, s32 shadow);

/* Draws the battle command menu: its plate, each listed command's icon at its row sprite, and the
 * selected command's highlighted icon last (not while the menu's state hides the cursor). */
void btlCommandMenuDraw(PlayScene *scene)
{
    s32 x;
    s32 y;
    bool showCursor = true;
    if (scene->state == 16 || scene->state == 17 || scene->state == 41 || scene->state == 45) {
        showCursor = false;
    }

    x = vec2GetXInt(&scene->commands.plate) + vec2GetXInt(&scene->timer);
    y = vec2GetYInt(&scene->commands.plate) + vec2GetYInt(&scene->timer);
    texDrawTableEntryAtStoredOrigin(2, COMMAND_MENU_TABLE, COMMAND_MENU_PLATE, x, y, 41);
    texDrawTableEntryAtStoredOrigin(2, COMMAND_MENU_TABLE, COMMAND_MENU_PLATE + 1, x, y, 41);

    s32 selected = objectPartRunUnlessLocked(&scene->parts[scene->commandOwner]);
    s32 count = uiGridNavigationEntryCount(&scene->parts[scene->commandOwner]);
    for (s32 row = 0; row < count; ++row) {
        if (showCursor && row == selected) {
            continue;
        }
        x = vec2GetXInt(&scene->commands.items[row]) + vec2GetXInt(&scene->timer);
        y = vec2GetYInt(&scene->commands.items[row]) + vec2GetYInt(&scene->timer);
        TextureTableEntryIV *point;
        if ((count & 1) == 0) {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE, row + (8 - count) / 2 + COMMAND_MENU_ROW_POINTS_EVEN);
        } else {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE, row + (7 - count) / 2 + COMMAND_MENU_ROW_POINTS_ODD);
        }
        FUN_00218238(scene, playSceneContextCommandKind(scene, row), point->x + x, y + point->y, 0);
    }

    if (showCursor) {
        x = vec2GetXInt(&scene->commands.items[selected]) + vec2GetXInt(&scene->timer);
        y = vec2GetYInt(&scene->commands.items[selected]) + vec2GetYInt(&scene->timer);
        TextureTableEntryIV *point;
        if ((count & 1) == 0) {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE,
                                         selected + (8 - count) / 2 + COMMAND_MENU_CURSOR_POINTS_EVEN);
        } else {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE,
                                         selected + (7 - count) / 2 + COMMAND_MENU_CURSOR_POINTS_ODD);
        }
        FUN_00218238(scene, btlCommandMenuKindAt(scene, selected), point->x + x, point->y + y, 1);
    }
}

} /* extern "C" */
