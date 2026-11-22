#include "font/GuestWin/GuestWin.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "gamedata/UnitStatInitialization.h"
#include "gamedata/DataTable25Apocalypse.h"
#include "addon/LookupRecord.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "util/BitsAndBytes.h"
#include "runtime/Stdio.h"
#include "Model/MoriModelResource.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* The guest window's texture table and its entries. */
enum {
    GUEST_WIN_TABLE = 8,
    GUEST_WIN_BACK = 0xC9,
    GUEST_WIN_FRAME_FIRST = 0xCA,       /* four frame pieces, then two overlays */
    GUEST_WIN_GAUGE_FRAME = 0xD0,
    GUEST_WIN_GAUGE_CHANGE = 0xD1,
    GUEST_WIN_GAUGE_LOW = 0xD2,
    GUEST_WIN_GAUGE_FILL = 0xD3,
    GUEST_WIN_NAME_POINT = 0xD8,
    GUEST_WIN_ICON_POINT = 0xD9,
    GUEST_WIN_ORIGIN = 0xDA,
    GUEST_WIN_ORIGIN_WITH_INFO = 0xDB   /* where the window sits while the info window shows a value */
};

/* The category entry of a guest (only the field read here). */
/* unit-local: the other users of dataTableGetCategoryEntry read other fields of the 0x68-byte entry */
struct GuestCategoryEntry {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u16 icon;
};

extern "C" {

extern GuestWinWorkA *g_guestWin;

u32 gameOptionsClassifyMode();
PartySlotA *gameGetOptions(void); // declcheck: local (the shared prototype returns int; the block is the guest's party slot)
u8 infoWinHasValue(void);
void FUN_00183788(s32 value, s32 maximum, s32 shown, s32 mode, u32 table, u32 frame, u32 fill, u32 low, u32 change,
                  s32 x, s32 y, s32 z, s32 flags);
void FUN_00169a1c(s32 icon, s32 x, s32 y, s32 z);
void uiDrawItemOrStatusIcon(s32 id, s32 x, s32 y, s32 z, s32 tint);

/* Draws the guest window: its frame, the guest's HP gauge, icon and name, at the window sprite's position
 * and opacity. Returns 0. */
u32 guestWinDraw(void)
{
    GuestWinWorkA *guest = g_guestWin;
    if (guest->state == 0) {
        return 0;
    }
    u32 mode = gameOptionsClassifyMode();
    if (mode == 0) {
        return 0;
    }
    if (mode == 1) {
        return 0;
    }
    PartySlotA *unit = gameGetOptions();
    if (unit->record.id == 0) {
        return 0;
    }

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 passFlags = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(context->stacks + RENDER_STACK_A, passFlags);

    s32 x = vec2GetXInt(&guest->sprite) + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 y = vec2GetYInt(&guest->sprite);
    f32 alpha = vec2GetSpeed(&guest->sprite);
    efctSetSpeed(alpha);

    TextureTableEntryIV *origin = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_ORIGIN);
    if (infoWinHasValue() != 0) {
        origin = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_ORIGIN_WITH_INFO);
    }
    x += origin->x;
    y += origin->y;

    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_BACK, x, y, 21);
    renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 1, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 2, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 3, x, y, 26);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 4, x, y, 31);
    texDrawTableEntryAtStoredOrigin(2, GUEST_WIN_TABLE, GUEST_WIN_FRAME_FIRST + 5, x, y, 31);

    FUN_00183788(unit->record.hp, recordGetScaledMaximum(&unit->record), 0, 0, GUEST_WIN_TABLE, GUEST_WIN_GAUGE_FRAME,
                 GUEST_WIN_GAUGE_FILL, GUEST_WIN_GAUGE_LOW, GUEST_WIN_GAUGE_CHANGE, x, y, 36, 0);

    char name[32];
    TextureTableEntryIV *iconPoint = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_ICON_POINT);
    if (FUN_00177654() != 0) {
        /* A guest with its own category entry: that entry's icon and the category's name. */
        u16 slotIndex = gameGetOptions()->slotIndex;
        GuestCategoryEntry *entry = (GuestCategoryEntry *)dataTableGetCategoryEntry((s16)gameGetOptions()->id, slotIndex);
        FUN_00169a1c(entry->icon, iconPoint->x + x, iconPoint->y + y, 36);
        __2sprintf(name, dataTable25FindById(gameGetOptions()->id)->name);
    } else {
        uiDrawItemOrStatusIcon((s16)unit->record.id, iconPoint->x + x, iconPoint->y + y, 36, 0);
        __2sprintf(name, (const char *)table01RecordLookupForContent(unit->record.id));
    }

    TextureTableEntryIV *namePoint = asdTMTexTableEntryAt(GUEST_WIN_TABLE, GUEST_WIN_NAME_POINT);
    textDrawString((f32)(namePoint->x + x), (f32)(namePoint->y + y), 0.85f, 2, 0.0f, 0xFF, alpha, name);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);
    return 0;
}

} /* extern "C" */
