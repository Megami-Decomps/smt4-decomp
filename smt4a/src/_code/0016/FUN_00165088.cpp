/* NON_MATCHING: HUD panel state reset by state id (hide or reset the sprites depending on the open/lock checks); written from the decompilation, branch/tail-call layout not compared with retail */
#include "common.h"
#include "StaffRoll/StaffRollMain.h"

struct PanelSprite {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 progress;
    /* 0x24 */ u8 unk24[0x61];
    /* 0x85 */ u8 hidden;
    /* 0x86 */ u8 unk86[6];
};

struct PanelWork {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s32 cursorBusy;
    /* 0x02C */ u8 unk02C[0xB];
    /* 0x037 */ u8 rowActive[5];
    /* 0x03C */ u8 unk03C[0x1A];
    /* 0x056 */ s16 selectedRow;
    /* 0x058 */ u8 unk058[4];
    /* 0x05C */ u8 selectedRowActive;
    /* 0x05D */ u8 unk05D[0x157];
    /* 0x1B4 */ PanelSprite sprites[0x2B];   /* the panel's sprites; indices below name the ones used */
};

#define PANEL_SPRITE_MAIN 0
#define PANEL_SPRITE_SECOND 1
#define PANEL_SPRITE_SIDE 2
#define PANEL_SPRITE_FOURTH 3
#define PANEL_SPRITE_SIXTH 5
#define PANEL_SPRITE_SEVENTH 6
#define PANEL_SPRITE_ROWS 7      /* five row sprites start here */
#define PANEL_SPRITE_CURSORS 12  /* per-row cursor sprites */
#define PANEL_SPRITE_LAST 42

extern "C" {
s32 FUN_001517b4(s32 a, s32 b);
void uiSpriteSetImageKeyframe(PanelSprite *sprite, s32 keyframe, s32 flag);
void uiSpriteSelectAnim(PanelSprite *sprite, s32 animation);
void workSetStateByte(PanelSprite *sprite, s32 value);

/* Closes the panel parts that belong to the state; when the panel may stay open the sprites are
 * re-keyed instead of hidden. */
void FUN_00165088(PanelWork *panel, u32 state)
{
    PanelSprite *sprites = panel->sprites;
    switch (state) {
    default:
        return;
    case 1:
    case 10:
        if (FUN_001517b4(9, 2) != 0 || slotIsActive(6) != 0)
            workSetStateByte(&sprites[PANEL_SPRITE_MAIN], 0);
        else
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_MAIN], 2, 0);
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 0x11:
    case 0x12:
    case 0x13:
        if (FUN_001517b4(9, 2) != 0 || slotIsActive(6) != 0) {
            sprites[PANEL_SPRITE_MAIN].hidden = 0;
            sprites[PANEL_SPRITE_SIDE].hidden = 0;
        } else {
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_MAIN], 2, 0);
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_SIDE], 2, 0);
        }
        workSetStateByte(&sprites[PANEL_SPRITE_SECOND], 0);
        return;
    case 6:
        if (FUN_001517b4(9, 2) != 0 || slotIsActive(6) != 0)
            workSetStateByte(&sprites[PANEL_SPRITE_MAIN], 0);
        else if (*(s32 *)&sprites[PANEL_SPRITE_MAIN].progress == 0x3F800000)
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_MAIN], 2, 0);
        return;
    case 7:
    case 8:
    case 9:
        if (FUN_001517b4(9, 2) != 0 || slotIsActive(6) != 0) {
            sprites[PANEL_SPRITE_MAIN].hidden = 0;
            workSetStateByte(&sprites[PANEL_SPRITE_SEVENTH], 0);
        } else {
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_MAIN], 2, 0);
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_SEVENTH], 2, 0);
        }
        return;
    case 0xB:
        uiSpriteSelectAnim(&sprites[PANEL_SPRITE_MAIN], 7);
        uiSpriteSelectAnim(&sprites[PANEL_SPRITE_FOURTH], 7);
        sprites[PANEL_SPRITE_SIXTH].hidden = 0;
        uiSpriteSelectAnim(&sprites[PANEL_SPRITE_LAST], 7);
        return;
    case 0xC:
        for (s32 i = 0; i < 5; i++) {
            if (panel->rowActive[i] != 0)
                uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_ROWS + i], 5, 0);
        }
        panel->cursorBusy = 0;
        return;
    case 0xD:
        if (panel->selectedRowActive != 0)
            uiSpriteSetImageKeyframe(&sprites[PANEL_SPRITE_CURSORS + panel->selectedRow], 5, 0);
        panel->cursorBusy = 0;
        return;
    }
}

} /* extern "C" */
