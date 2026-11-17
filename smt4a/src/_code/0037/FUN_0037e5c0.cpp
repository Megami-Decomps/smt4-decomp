/* NON_MATCHING: constant materialisation only - retail loads each layout entry id (0x576/0x577/0x578/0x579/0x57d) and the 0x598 field offset from the literal pool, while armcc here derives them from one register and folds the offset; control flow and calls are identical. */
#include "status/StatusDownA.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
void efctSetSpeed(f32 speed);
void statusDownCreatePanelEffects(s32 x, s32 y, s32 highlighted);
void FUN_00185e84(s16 demon, s32 x, s32 y, u32 slot, s32 a, s32 b);
void statDrawClampedDelta(PlayerDataA *source, s32 other, s32 x, s32 y, u32 slot, s32 a);
u32 FUN_003df57c(u32 demon, u32 flag);
u32 skillGetAdjustedCost(PlayerDataA *source, u32 other);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_00180310(u32 a, s32 x, s32 y, u32 b, u32 c, u32 slot, const char *format, u32 value);

/* Draws one demon row of the status list at (x, y): its panel, name, power and level readouts. */
void FUN_0037e5c0(s32 index, s32 x, s32 y, f32 speed)
{
    StatusDownStateA *status = g_statusDown;
    StatusDownSkillMenuA *list = &status->menu;
    char text[64];
    u32 color = 0x9fe7ffff;
    u16 demon = list->rows[index].id;
    efctSetSpeed(speed);
    s32 mode = recordGetModeForId(status->slots[index]);
    s32 special = 0;
    if (mode == 1 || mode == 2 || mode == 6) {
        special = 1;
    }
    if (special) {
        color = 0xf5ff9fff;
    }
    if (list->selection[0] == index) {
        color = 0x57d8ffff;
    }
    statusDownCreatePanelEffects(x, y, special);
    efctSetSpeed(speed);
    if (demon == 0) {
        TextureTableEntryIV *name = asdTMTexTableEntryAt(18, 0x579);
        textFormatBuffer(text, "\x81| \x81| \x81|");
        textDrawString(3, color, text, name->x + x, name->y + y, 0.2f, 0.0f, speed);
        return;
    }
    texDrawTableEntryAtStoredOrigin(2, 18, 0x576, x, y, 206);
    texDrawTableEntryAtStoredOrigin(2, 18, 0x577, x, y, 206);
    TextureTableEntryIV *icon = asdTMTexTableEntryAt(18, 0x578);
    u32 power;
    if ((s16)status->selectedEntry <= 0) {
        FUN_00185e84(demon, icon->x + x, icon->y + y, 211, 1, 0);
        power = FUN_003df57c(demon, 1);
    } else {
        FUN_00185e84(demon, icon->x + x, icon->y + y, 211, 0, 0);
        statDrawClampedDelta(list->source, demon, icon->x + x, icon->y + y, 211, 0);
        power = skillGetAdjustedCost(list->source, demon);
    }
    TextureTableEntryIV *name = asdTMTexTableEntryAt(18, 0x579);
    textFormatBuffer(text, "%s", FUN_0014bd84(demon));
    textDrawString(3, color, text, name->x + x, name->y + y, 0.2f, 0.0f, speed);
    TextureTableEntryIV *level = asdTMTexTableEntryAt(18, 0x57d);
    FUN_00180310(1, level->x + x, level->y + y, 1, 4, 221, "%d", power);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
