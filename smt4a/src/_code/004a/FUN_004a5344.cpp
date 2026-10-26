/* NON_MATCHING: scoped visibility and linker speed getter recover frame and tail call; reset-speed constant lifetime and row pointer schedule differ. */
#include "common.h"
#include "code/Code002a.h"

extern "C" {

typedef struct PanelPair {
    f32 x, y;
} PanelPair;

/* One list row (0x20 bytes): a short at 4 is its id. */
typedef struct PanelRow {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[0x1A];
} PanelRow;

/* One scale record (0x8C bytes, starting at 0xFC): the float at 0x20 is the row scale. */
typedef struct PanelScale {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 scale;
    /* 0x24 */ u8 unk24[0x68];
} PanelScale;

/* The panel's work block (only the fields this update touches). */
typedef struct PanelWork {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 mode;               /* 2: a row is selected */
    /* 0x018 */ u8 unk018[8];
    /* 0x020 */ u8 list[8];             /* the scroll list state */
    /* 0x028 */ s32 count;
    /* 0x02C */ u8 unk02c[0x9C];
    /* 0x0C8 */ u8 panel[0xD4];         /* the panel the positions and sizes are read from */
} PanelWork;

typedef struct PanelWorkView {
    u8 unk0000[0x850];
    u32 style;
    u8 unk854[0x10];
    PanelRow rows[1];
} PanelWorkView;

void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);
void words2Copy(void *panel, PanelPair *out);
void pairAt8Get(void *panel, PanelPair *out);
void FUN_004935c8(void *panel, s32 id, s32 a, s32 b, u32 style, f32 scale);
void FUN_00493518(void *panel, s32 id, s32 a, s32 b, u32 style, f32 scale);
s32 rangeGetMinimumLimit(void *list);
s32 FUN_0031d174(void *list);
s32 flaggedValueHolderGetTotal(void *list);
void FUN_004a5ea0(PanelWork *work, s32 index, s32 selected, s32 id, f32 scale);
void owner4ASetSizeAndCall(PanelWork *work, u32 style);

static __inline bool panelIntersectsHorizontalView(PanelWork *work)
{
    PanelPair position;
    PanelPair size;
    words2Copy(work->panel, &position);
    pairAt8Get(work->panel, &size);
    f32 right = position.x + size.x;
    return right < 320.0f && right > -320.0f;
}

/* Draws the panel's rows when it is on screen: sets its six frame parts from the shared style,
 * then each visible list row (the selected one drawn last when a row is selected). */
void FUN_004a5344(PanelWork *work)
{
    if (!panelIntersectsHorizontalView(work)) {
        return;
    }
    struct PanelScaleBank { u8 prefix[0xFC]; PanelScale entries[1]; };
    struct PanelSelection { u8 prefix[0xA872]; s16 index; };
    const PanelSelection *selection = reinterpret_cast<const PanelSelection *>(work);
    const PanelScaleBank *bank = reinterpret_cast<const PanelScaleBank *>(work);
    f32 scale = vec2GetSpeed(&bank->entries[selection->index]);
    u32 style = ((PanelWorkView *)work)->style;

    FUN_004935c8(work->panel, 1, 0, 0, style, scale);
    FUN_00493518(work->panel, 0x47C, 0, 0, style, scale);
    FUN_00493518(work->panel, 0x47D, 0, 0, style, scale);
    FUN_00493518(work->panel, 0x47E, 0, 0, style, scale);
    FUN_00493518(work->panel, 0x47F, 0, 0, style, scale);
    FUN_00493518(work->panel, 0x480, 0, 0, style, scale);
    FUN_00493518(work->panel, 0x481, 0, 0, style, scale);
    if (work->count == 0) {
        return;
    }
    efctSetSpeed(scale);
    s32 first = FUN_002a482c(work->list);
    s32 visible = rangeGetMinimumLimit(work->list);
    PanelRow *rows = ((PanelWorkView *)work)->rows;

    for (s32 i = 0; i < visible; i++) {
        if (work->mode != 2 || FUN_0031d174(work->list) != i) {
            FUN_004a5ea0(work, i, 0, rows[first + i].id, scale);
        }
    }
    if (work->count > 0 && work->mode == 2) {
        s32 id = rows[flaggedValueHolderGetTotal(work->list)].id;

        FUN_004a5ea0(work, FUN_0031d174(work->list), 1, id, scale);
    }
    owner4ASetSizeAndCall(work, style);
    efctSetSpeed(1.0f);
}

}
