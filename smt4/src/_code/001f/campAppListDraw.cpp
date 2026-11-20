/* NON_MATCHING: same instructions, branches and block layout as retail; what differs is where armcc keeps the
 * loop's spilled values. Retail's frame is 88 bytes (here 104): it keeps the row's name part, name and colour in
 * the outgoing-argument words [sp,#0..8], the grid at [sp,#12] and the row's skill above the text buffer at
 * [sp,#80]; this build puts the skill at [sp,#12] and the part, name and grid above the buffer. In the cursor row
 * retail holds the name part in r5 and the colour in r8 (here swapped), and three x/y sums schedule their loads
 * differently. A separate variable for each part moves the name part to [sp] as in retail but scores worse. */
#include <stdio.h>
#include "camp/CampState.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"
#include "code/Code0028.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gfx/SpritePartDraw.h"
#include "text/TextDraw.h"
#include "gamedata/SaveSlotTableIV.h"

extern "C" {

s32 statusGetAvailableChoiceCount(void);
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
u16 table8Type5GetValue(u16 id);
void FUN_0028f870(u32 list, s32 x, s32 y, s32 wide);
s32 FUN_00298848(u32 skill, s32 unit);
void FUN_002b6c34(s32 skill, s32 x, s32 y, s32 depth, s32 player, s32 highlight);
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *text);

enum {
    APP_LIST_SPRITES = 0x1d,    /* the camp list sprite file */
    APP_COLOR_DISABLED = 0x5a5a5aff
};

/* Draws the app list at (x, y): the eight rows (name, cost and icon of each registered app, a
 * "new registration possible" notice for a free slot, a locked plate for a slot not yet
 * available), the scroll bar and, when `drawCursor` is set, the enlarged selected row. */
void campAppListDraw(s32 x, s32 y, s32 drawCursor)
{
    char text[64];
    CampState *camp = g_camp;
    GridNavigation *grid = &camp->grids[4];
    s32 i;

    texDrawCompositeSprite(2, APP_LIST_SPRITES, 0xb, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x44e, x, y, 0x6a);
    for (i = 0; i < 8; i++) {
        if (statusGetAvailableChoiceCount() <= i) {
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, i + 0x5a8, x, y, 0x6a);
        } else {
            u16 app = camp->gridIds4[resourceRunOperationIfUnblocked(grid) + i];
            TextureTableEntryIV *row = asdTMTexTableEntryAt(APP_LIST_SPRITES, i + 0x40d);
            TextureTableEntryIV *part;

            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x44f, row->x + x, row->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x450, row->x + x, row->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x451, row->x + x, row->y + y, 0x6a);
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x452, row->x + x, row->y + y, 0x6f);

            u32 skill = 0;
            if (app != 0) {
                skill = table8Type5GetValue(app);
            }
            if (skill == 0) {
                part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x454);
                /* "New registration possible!" in full-width characters */
                sprintf(text, "\x82\x6d\x82\x85\x82\x97\x81\x40\x82\x92\x82\x85\x82\x87\x82\x89\x82\x93\x82\x94\x82\x92\x82\x81\x82\x94"
                              "\x82\x89\x82\x8f\x82\x8e\x81\x40\x82\x90\x82\x8f\x82\x93\x82\x93\x82\x89\x82\x82\x82\x8c\x82\x85\x81\x49");
                textDrawString(row->x + part->x + x, row->y + part->y + y, 0.55f, 2, 0.0f, APP_COLOR_DISABLED, 1.0f, text);

                part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x45c);
                sprintf(text, "---");
                FUN_002bdf94(0, row->x + part->x + x, part->y + row->y + y, 1, 8, 0x6f, text);
            } else {
                part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x454);
                const char *name = (const char *)aocIndexValueOrDefault(skill);
                if (name != NULL) {
                    u32 color = 0xff;
                    if (FUN_00298848(skill, -1)) {
                        if (FUN_0028d1f4(skill) > gameGetSlotTable()->money) {
                            color = APP_COLOR_DISABLED;
                        }
                    } else {
                        color = APP_COLOR_DISABLED;
                    }
                    textDrawString(row->x + part->x + x, row->y + part->y + y, 0.55f, 2, 0.0f, color, 1.0f, name);
                }

                part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x45c);
                sprintf(text, "%d", FUN_0028d1f4(skill));
                FUN_002bdf94(0, row->x + part->x + x, row->y + part->y + y, 1, 8, 0x6f, text);

                part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x453);
                FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0x6f, 0, 0);
            }
        }
    }
    FUN_0028f870((u32)grid, x, y, 1);

    if (drawCursor) {
        u16 app = camp->gridIds4[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)];
        TextureTableEntryIV *row = asdTMTexTableEntryAt(APP_LIST_SPRITES, listCursorGetRowIfUnblocked(grid) + 0x42e);
        TextureTableEntryIV *part;

        FUN_0028f694(row->x + x, row->y + y, camp->touch.rowRegions[listCursorGetRowIfUnblocked(grid)]);

        u32 skill = 0;
        if (app != 0) {
            skill = table8Type5GetValue(app);
        }
        if (skill == 0) {
            part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x460);
            sprintf(text, "\x82\x6d\x82\x85\x82\x97\x81\x40\x82\x92\x82\x85\x82\x87\x82\x89\x82\x93\x82\x94\x82\x92\x82\x81\x82\x94"
                          "\x82\x89\x82\x8f\x82\x8e\x81\x40\x82\x90\x82\x8f\x82\x93\x82\x93\x82\x89\x82\x82\x82\x8c\x82\x85\x81\x49");
            textDrawString(part->x + row->x + x, row->y + part->y + y, 0.5f, 3, 0.0f, APP_COLOR_DISABLED, 1.0f, text);
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x45e, row->x + x, row->y + y, 0x83);

            part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x468);
            sprintf(text, "---");
            FUN_002bdf94(0, row->x + part->x + x, row->y + part->y + y, 1, 8, 0x83, text);
        } else {
            part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x460);
            const char *name = (const char *)aocIndexValueOrDefault(skill);
            if (name != NULL) {
                u32 color = 0xffffffff;
                if (FUN_00298848(skill, -1)) {
                    if (FUN_0028d1f4(skill) > gameGetSlotTable()->money) {
                        color = APP_COLOR_DISABLED;
                    }
                } else {
                    color = APP_COLOR_DISABLED;
                }
                textDrawString(row->x + part->x + x, row->y + part->y + y, 0.5f, 3, 0.0f, color, 1.0f, name);
            }
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x45e, row->x + x, row->y + y, 0x83);

            part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x468);
            sprintf(text, "%d", FUN_0028d1f4(skill));
            FUN_002bdf94(0, row->x + part->x + x, part->y + row->y + y, 1, 8, 0x83, text);
            texDrawTableEntryAtStoredOrigin(2, APP_LIST_SPRITES, 0x45d, row->x + x, row->y + y, 0x83);

            part = asdTMTexTableEntryAt(APP_LIST_SPRITES, 0x45f);
            FUN_002b6c34((s16)skill, part->x + row->x + x, row->y + part->y + y, 0x88, 0, 0);
        }
    }
}

} /* extern "C" */
