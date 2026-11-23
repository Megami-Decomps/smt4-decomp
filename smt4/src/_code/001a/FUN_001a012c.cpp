/* NON_MATCHING: complete (523 raw / 383 shape lines), every call, constant and the jump table as retail. Retail lays the equipment panel out in line after the id test (`bne` past it) and the build moves it behind the unit bar (a `switch` on the id keeps it in line but tests a range, where retail compares each id); the work is in r6 (build r9), which shifts the panel's x, y and item registers, and the panel's text sums load the slot point before the name point. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "camp/CampMenuEntry.h"
#include "camp/CampState.h"
#include "gamedata/GamePlayerData.h"
#include "text/TextDraw.h"
#include "ui/AnimatedMessage.h"
#include "ui/UiSpriteApi.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon_VariantA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The camp states (CampState::state) drawn here. */
enum {
    CAMP_MENU_SUB = 0x35 /* a sub-menu over the previous state */
};

/* The equipment panel's texture table and its entries. */
enum {
    EQUIP_PANEL_TABLE = 26,
    EQUIP_PANEL_SLOT_FRAME = 13,       /* composite sprite behind each slot */
    EQUIP_PANEL_BADGE_POINT = 0xA0,
    EQUIP_PANEL_NAME_POINT = 0xA1,
    EQUIP_PANEL_BACK_FIRST = 0x52D,    /* six background pieces */
    EQUIP_PANEL_SLOT_POINT_FIRST = 0x533,
    EQUIP_PANEL_SLOT_COUNT = 7,
    EQUIP_PANEL_LAYER = 191,
    EQUIP_PANEL_BADGE_LAYER = 196
};

extern "C" {
u8 *dataFindKindRecordWithAocOverrides(u32 id, s32 payload);
s32 uniteGetState(void);
void uniteDrawResultPanel(s32 x, s32 y, u32 selected, s32 cursorSlot, s32 region);
void campDrawCommandMenu(void);
void FUN_0019715c(s32 item, s32 mode);
void renderCtxResetColorScale(RenderCtx *context);

/* The id of the item under the cursor. */
static __inline s32 campCursorItem(CampState *camp)
{
    return dataTable15GetUnlockedEntryId(camp->menuGroup, objectPartRunUnlessLocked(&camp->menuGrid));
}

/* Draws the unit-selection bar at its sprite. */
static __inline void campDrawBar(CampState *camp)
{
    s32 x = vec2GetXInt(&camp->sprites[4]);
    s32 y = vec2GetYInt(&camp->sprites[4]);
    uniteDrawResultPanel(x, y, camp->unitSelectIndex, camp->unitSelectSource,
                         camp->touch.unitRegions[camp->unitSelectIndex]);
}

/* Draws the player's seven equipment slots: each with its category badge and the item's name, or dashes
   when the slot is empty. The two gun slots are skipped until flag 0x410 is set.
   Its own function: retail reads g_camp again at its start while the caller's copy is live, and Apocalypse
   keeps the same panel out of line (FUN_00288538 with mode 0, called from the twin FUN_00227418). */
static __inline void campDrawEquipmentPanel()
{
    CampState *camp = g_camp;
    const PlayerDataIV *player = gameGetPlayerData();
    s32 category = 0;
    s32 x = vec2GetXInt(&camp->commands.commandIcons[0]);
    s32 y = vec2GetYInt(&camp->commands.commandIcons[0]);
    texDrawTableEntryAtStoredOrigin(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_BACK_FIRST, x, y, EQUIP_PANEL_LAYER);
    texDrawTableEntryAtStoredOrigin(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_BACK_FIRST + 2, x, y, EQUIP_PANEL_LAYER);
    texDrawTableEntryAtStoredOrigin(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_BACK_FIRST + 1, x, y, EQUIP_PANEL_LAYER);
    texDrawTableEntryAtStoredOrigin(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_BACK_FIRST + 3, x, y, EQUIP_PANEL_LAYER);
    texDrawTableEntryAtStoredOrigin(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_BACK_FIRST + 5, x, y, EQUIP_PANEL_LAYER);
    texDrawTableEntryAtStoredOrigin(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_BACK_FIRST + 4, x, y, EQUIP_PANEL_LAYER);
    s32 slot = 0;
    while (slot < EQUIP_PANEL_SLOT_COUNT) {
        s32 id = 0;
        if (slot == 0) {
            category = 0x3D;
            id = player->equipment[0];
        } else if (slot == 1) {
            category = 0xB5;
            id = player->equipment[1];
            if (!gameFlagIsSet(0x410)) {
                slot = 2;
                continue;
            }
        } else if (slot == 2) {
            category = 0x30D;
            id = player->equipment[2];
            if (!gameFlagIsSet(0x410)) {
                slot = 3;
                continue;
            }
        } else if (slot == 3) {
            category = 0x12D;
            id = player->equipment[3];
        } else if (slot == 4) {
            category = 0x1A5;
            id = player->equipment[4];
        } else if (slot == 5) {
            category = 0x21D;
            id = player->equipment[5];
        } else if (slot == 6) {
            category = 0x295;
            id = player->equipment[6];
        }
        const TextureTableEntryIV *slotEntry = asdTMTexTableEntryAt(EQUIP_PANEL_TABLE, EQUIP_PANEL_SLOT_POINT_FIRST + slot);
        texDrawCompositeSprite(2, EQUIP_PANEL_TABLE, EQUIP_PANEL_SLOT_FRAME, slotEntry->x + x, slotEntry->y + y,
                               EQUIP_PANEL_LAYER);
        const TextureTableEntryIV *badgeEntry = asdTMTexTableEntryAt(EQUIP_PANEL_TABLE, EQUIP_PANEL_BADGE_POINT);
        BadgeWord equippedFlag;
        equippedFlag.i = 0;
        itemDrawCategoryBadge((s16)category, badgeEntry->x + slotEntry->x + x, slotEntry->y + badgeEntry->y + y,
                              EQUIP_PANEL_BADGE_LAYER, equippedFlag);
        const TextureTableEntryIV *nameEntry = asdTMTexTableEntryAt(EQUIP_PANEL_TABLE, EQUIP_PANEL_NAME_POINT);
        if (id > 0) {
            const char *name = reinterpret_cast<const char *>(dataFindKindRecordWithAocOverrides(id, 0));
            if (name != NULL) {
                textDrawString(nameEntry->x + slotEntry->x + x, nameEntry->y + slotEntry->y + y, 0.24f, 2, 0.0f,
                               0xFF, 1.0f, name);
            }
        } else {
            textDrawString(nameEntry->x + slotEntry->x + x, nameEntry->y + slotEntry->y + y, 0.24f, 2, 0.0f,
                           0xFF, 1.0f, "\x81\x7c\x81\x7c\x81\x7c");
        }
        slot++;
    }
}

/* Draws the camp menu's detail area for the current state: the item detail with the equipment panel,
   the unit-selection bar and the command menu, or the description area. */
u32 FUN_001a012c(void)
{
    CampState *camp = g_camp;
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushACountedDirect(g_titleScene, renderCtxPackPassFlags(1, 0));
    s32 menu = camp->state;
    if (menu == CAMP_MENU_SUB)
        menu = camp->previousState;
    switch (menu) {
    case 1: case 2: case 3: case 6: case 7: case 9:
    case 0x1B: case 0x1C: case 0x2A: case 0x30: case 0x34: {
        s32 item = campCursorItem(camp);
        if (item == 0x11 || item == 0x12 || item == 0x13 || item == 0x14 || item == 0x15 || item == 0x16 || item == 0x17)
            campDrawEquipmentPanel();
        if (camp->unitSelectActive != 0)
            campDrawBar(camp);
        campDrawCommandMenu();
        break;
    }
    case 4: case 5: case 0x28: case 0x29:
        FUN_0019715c(campCursorItem(camp), 0);
        break;
    case 10: case 0xC: case 0xD: case 0xE: case 0x10: case 0x1A: case 0x2B: case 0x2C:
        FUN_0019715c(campCursorItem(camp), 1);
        break;
    case 0x1D: case 0x1E: case 0x1F:
        if (uniteGetState() == 2 || uiSpriteGetCompletionState(&camp->sprites[0]) == 0) {
            campDrawBar(camp);
            campDrawCommandMenu();
        }
        break;
    case 0x20:
        if (camp->unitSelectActive != 0 && uiSpriteGetCompletionState(&camp->sprites[0]) == 0) {
            campDrawBar(camp);
            campDrawCommandMenu();
        }
        break;
    }
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
}
