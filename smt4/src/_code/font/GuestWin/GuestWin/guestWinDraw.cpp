#include "font/GuestWin/GuestWin.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/StereoParallax.h"
#include "gamedata/SupportUnitRecord.h"
#include "shard/GameOptions.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "util/BitsAndBytes.h"
#include "runtime/Stdio.h"
#include "code/Code002b_Smt4.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The guest window's texture table and its entries. */
enum {
    GUEST_WIN_TABLE = 14,
    GUEST_WIN_BACK = 0xC9,
    GUEST_WIN_FRAME_FIRST = 0xCA,       /* four frame pieces, then two overlays */
    GUEST_WIN_GAUGE_FRAME = 0xD0,
    GUEST_WIN_GAUGE_CHANGE = 0xD1,
    GUEST_WIN_GAUGE_LOW = 0xD2,
    GUEST_WIN_GAUGE_FILL = 0xD3,
    GUEST_WIN_NAME_POINT = 0xD8,
    GUEST_WIN_ICON_POINT = 0xD9,
    GUEST_WIN_ORIGIN = 0xDA,
    GUEST_WIN_ORIGIN_WITH_INFO = 0xDB   /* where the window sits while the info window is active */
};

extern "C" {

extern GuestWinWork *g_guestWin;

GameOptions *gameGetSupportUnitData(void); // declcheck: local (GameDataAccess.h returns it as an int)
SupportUnitRecord *supportUnitGetEntry(s32 kind, u32 index);
void FUN_002be90c(s32 value, s32 max, s32 change, u32 base, u32 table, u32 frame, u32 fill, u32 gain, u32 loss,
                  s32 x, s32 y, u32 layer, u32 flags);
void FUN_002b6940(s32 icon, s32 x, s32 y, s32 z);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);

/* Draws the guest window: its frame, the guest's HP gauge, icon and name, at the window sprite's position
 * and opacity. Returns 0. */
u32 guestWinDraw(void)
{
    GuestWinWork *guest = g_guestWin;
    if (guest->state == 0) {
        return 0;
    }
    u32 status = gameGetOptionProgressStatus();
    if (status == 0) {
        return 0;
    }
    if (status == 1) {
        return 0;
    }
    GameOptions *options = gameGetSupportUnitData();
    if (options->guestId == 0) {
        return 0;
    }

    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    s32 passFlags = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(context->stacks + RENDER_STACK_A, passFlags);

    s32 x = vec2GetXInt(&guest->sprite) + (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.27f);
    s32 y = vec2GetYInt(&guest->sprite);
    f32 alpha = vec2GetSpeed(&guest->sprite);
    efctSetSpeed(alpha);

    TextureTableEntryIV *origin = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_ORIGIN);
    if (infoWindowIsActive() != 0) {
        origin = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_ORIGIN_WITH_INFO);
    }
    x += origin->x;
    y += origin->y;

    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_BACK, x, y, 21);
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 1, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 2, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 3, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 4, x, y, 31);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 5, x, y, 31);

    FUN_002be90c(options->guest.hp, options->guest.maxHp, 0, 0, GUEST_WIN_TABLE,
                 GUEST_WIN_GAUGE_FRAME, GUEST_WIN_GAUGE_FILL, GUEST_WIN_GAUGE_LOW, GUEST_WIN_GAUGE_CHANGE, x, y, 36, 0);

    char name[32];
    TextureTableEntryIV *iconPoint = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_ICON_POINT);
    if (FUN_002b6ad0() != 0) {
        /* A guest with its own support entry: that entry's demon icon and the support kind's name. */
        u16 supportIndex = gameGetSupportUnitData()->supportIndex;
        SupportUnitRecord *entry = supportUnitGetEntry((s16)gameGetSupportUnitData()->supportKind, supportIndex);
        FUN_002b6940(entry->demon.id, iconPoint->x + x, iconPoint->y + y, 36);
        __2sprintf(name, FUN_002bcf4c(gameGetSupportUnitData()->supportKind)->name);
    } else {
        uiDrawDemonIcon((s16)options->guestId, iconPoint->x + x, iconPoint->y + y, 36, 0);
        __2sprintf(name, FUN_002bd068(options->guestId));
    }

    TextureTableEntryIV *namePoint = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_NAME_POINT);
    textDrawString((f32)(namePoint->x + x), (f32)(namePoint->y + y), 0.85f, 2, 0.0f, 0xFF, alpha, name);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    return 0;
}

} /* extern "C" */
