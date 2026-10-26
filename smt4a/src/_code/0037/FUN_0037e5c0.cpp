/* NON_MATCHING: constant materialisation only - retail loads each layout entry id (0x576/0x577/0x578/0x579/0x57d) and the 0x598 field offset from the literal pool, while armcc here derives them from one register and folds the offset; control flow and calls are identical. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/GameDataAccess.h"

namespace {
/* A row of the status screen's demon list. */
struct StatusDownRow {
    u16 demon;      /* 0 when the row is empty */
    u8 unk02[6];
};

/* The demon list: its rows and the selection. */
struct StatusDownList {
    /* 0x00 */ StatusDownRow rows[9];
    /* 0x48 */ s32 selected;
    /* 0x4c */ u8 unk4c[4];
    /* 0x50 */ u32 compareDemon;
};

/* The status screen state (the part this row drawer reads). */
struct StatusDownView {
    /* 0x0000 */ u8 unk0000[0x544];
    /* 0x0544 */ s16 entries[0x28];        /* the record id of each row */
    /* 0x0594 */ u8 unk0594[4];
    /* 0x0598 */ s16 compareCount;         /* > 0: the rows are drawn as a comparison */
    /* 0x059a */ u8 unk059a[0x1f12];
    /* 0x24ac */ StatusDownList list;
};

/* A layout entry: the offset of one element of the row. */
struct LayoutEntry {
    u8 unk00[8];
    s16 x;
    s16 y;
};
}

extern "C" {
extern StatusDownView *g_statusDown;
void efctSetSpeed(f32 speed);
void statusDownCreatePanelEffects(s32 x, s32 y, s32 highlighted);
void FUN_00185e84(s16 demon, s32 x, s32 y, u32 slot, s32 a, s32 b);
void statDrawClampedDelta(u32 demon, s32 other, s32 x, s32 y, u32 slot, s32 a);
u32 FUN_003df57c(u32 demon, u32 flag);
u32 FUN_004bcbb4(u32 demon, u32 other);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_00180310(u32 a, s32 x, s32 y, u32 b, u32 c, u32 slot, const char *format, u32 value);

/* Draws one demon row of the status list at (x, y): its panel, name, power and level readouts. */
void FUN_0037e5c0(s32 index, s32 x, s32 y, f32 speed)
{
    StatusDownView *status = g_statusDown;
    StatusDownList *list = &status->list;
    char text[64];
    u32 color = 0x9fe7ffff;
    u16 demon = list->rows[index].demon;
    efctSetSpeed(speed);
    s32 mode = recordGetModeForId(status->entries[index]);
    s32 special = 0;
    if (mode == 1 || mode == 2 || mode == 6) {
        special = 1;
    }
    if (special) {
        color = 0xf5ff9fff;
    }
    if (list->selected == index) {
        color = 0x57d8ffff;
    }
    statusDownCreatePanelEffects(x, y, special);
    efctSetSpeed(speed);
    if (demon == 0) {
        LayoutEntry *name = reinterpret_cast<LayoutEntry *>(asdTMTexTableEntryAt(18, 0x579));
        textFormatBuffer(text, "\x81| \x81| \x81|");
        textDrawString(3, color, text, name->x + x, name->y + y, 0.2f, 0.0f, speed);
        return;
    }
    FUN_001835b4(2, 18, 0x576, x, y, 206);
    FUN_001835b4(2, 18, 0x577, x, y, 206);
    LayoutEntry *icon = reinterpret_cast<LayoutEntry *>(asdTMTexTableEntryAt(18, 0x578));
    u32 power;
    if (status->compareCount <= 0) {
        FUN_00185e84(demon, icon->x + x, icon->y + y, 211, 1, 0);
        power = FUN_003df57c(demon, 1);
    } else {
        FUN_00185e84(demon, icon->x + x, icon->y + y, 211, 0, 0);
        statDrawClampedDelta(list->compareDemon, demon, icon->x + x, icon->y + y, 211, 0);
        power = FUN_004bcbb4(list->compareDemon, demon);
    }
    LayoutEntry *name = reinterpret_cast<LayoutEntry *>(asdTMTexTableEntryAt(18, 0x579));
    textFormatBuffer(text, "%s", FUN_0014bd84(demon));
    textDrawString(3, color, text, name->x + x, name->y + y, 0.2f, 0.0f, speed);
    LayoutEntry *level = reinterpret_cast<LayoutEntry *>(asdTMTexTableEntryAt(18, 0x57d));
    FUN_00180310(1, level->x + x, level->y + y, 1, 4, 221, "%d", power);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
