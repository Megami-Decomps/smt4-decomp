/* NON_MATCHING: typed rebuild from the IV twin FUN_0025ee64 (raw 80 / shape 26 of 354 rows, from the 481-line
 * draft): retail's calls, frame and stack slots. What differs is inside the inlined command lookup, as in
 * btlCommandMenuKindAt: the kind-3 arm (retail branches `cmp #3; bne; b`, tests the unit index and the unit in two
 * branches and tests the kind again before the flag, this build `beq; b`, one `cmpne` and no second test), the
 * vacant test's branch sense, and in the selected row retail keeps x in r6 and y in r5, this build the reverse. */
#include "battle/BattleContextCommandsA.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "code/Code002a.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The command menu's texture table and its entries. */
enum {
    COMMAND_MENU_TABLE = 13,
    COMMAND_MENU_PLATE = 0xDB,              /* two plate images */
    COMMAND_MENU_ROW_POINTS_ODD = 0xFF,     /* row positions of a menu with an odd number of commands */
    COMMAND_MENU_ROW_POINTS_EVEN = 0x106,
    COMMAND_MENU_CURSOR_POINTS_ODD = 0x182, /* the same for the selected row */
    COMMAND_MENU_CURSOR_POINTS_EVEN = 0x189
};

extern "C" {

s32 widgetSubCallIfVisible(GridNavigation *grid);
void FUN_002fa1b0(ActorCardAnimationsA *scene, u32 kind, s32 x, s32 y, f32 alpha, s32 alternate);

/* Draws the battle command menu: its plate, each listed command's icon at its row sprite, and the
 * selected command's highlighted icon last (not while the menu's state hides the cursor). */
void btlCommandMenuDraw(ActorCardAnimationsA *scene)
{
    s32 x;
    s32 y;
    f32 alpha = 1.0f;
    bool showCursor = true;
    if (scene->state == 16 || scene->state == 17 || scene->state == 41 || scene->state == 45) {
        showCursor = false;
    }

    x = vec2GetXInt(&scene->backdrop) + vec2GetXInt(&scene->slide);
    y = vec2GetYInt(&scene->backdrop) + vec2GetYInt(&scene->slide);
    efctSetSpeed(vec2GetSpeed(&scene->backdrop) * vec2GetSpeed(&scene->slide));
    texDrawTableEntryAtStoredOrigin(2, COMMAND_MENU_TABLE, COMMAND_MENU_PLATE, x, y, 41);
    texDrawTableEntryAtStoredOrigin(2, COMMAND_MENU_TABLE, COMMAND_MENU_PLATE + 1, x, y, 41);
    efctSetSpeed(alpha);

    s32 selected = listCursorGetRowOfChildIfUnblocked(&scene->commandBoxes[scene->page]);
    s32 count = widgetSubCallIfVisible(&scene->commandBoxes[scene->page]);
    for (s32 row = 0; row < count; ++row) {
        if (showCursor && row == selected) {
            continue;
        }
        x = vec2GetXInt(&scene->commandItems[row]) + vec2GetXInt(&scene->slide);
        y = vec2GetYInt(&scene->commandItems[row]) + vec2GetYInt(&scene->slide);
        alpha = vec2GetSpeed(&scene->commandItems[row]) * vec2GetSpeed(&scene->slide);
        TextureTableEntryIV *point;
        if ((count & 1) == 0) {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE, row + (8 - count) / 2 + COMMAND_MENU_ROW_POINTS_EVEN);
        } else {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE, row + (7 - count) / 2 + COMMAND_MENU_ROW_POINTS_ODD);
        }
        FUN_002fa1b0(scene, actorCardContextCommandKind(scene, row), point->x + x, y + point->y, alpha, 0);
    }

    if (showCursor) {
        x = vec2GetXInt(&scene->commandItems[selected]) + vec2GetXInt(&scene->slide);
        y = vec2GetYInt(&scene->commandItems[selected]) + vec2GetYInt(&scene->slide);
        alpha = vec2GetSpeed(&scene->commandItems[selected]) * vec2GetSpeed(&scene->slide);
        TextureTableEntryIV *point;
        if ((count & 1) == 0) {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE,
                                         selected + (8 - count) / 2 + COMMAND_MENU_CURSOR_POINTS_EVEN);
        } else {
            point = asdTMTexTableEntryAt(COMMAND_MENU_TABLE,
                                         selected + (7 - count) / 2 + COMMAND_MENU_CURSOR_POINTS_ODD);
        }
        FUN_002fa1b0(scene, btlCommandMenuKindAt(scene, selected), point->x + x, point->y + y, alpha, 1);
    }
}

} /* extern "C" */
