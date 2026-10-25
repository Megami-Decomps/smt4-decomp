#include "common.h"

extern "C" {

/* One entry of the party panel's slot grid: the party word it shows. */
typedef struct PanelSlot {
    s32 key;
    s32 unk04;
} PanelSlot;

/* The party panel block (Apocalypse); only the fields this function touches are named. */
typedef struct PartyPanelView {
    /* 0x000 */ u8 unk000[0x2C];
    /* 0x02C */ s32 expanded;
    /* 0x030 */ u8 unk030[0x12];
    /* 0x042 */ u8 cursorOnly;
    /* 0x043 */ u8 unk043[0x13D];
    /* 0x180 */ u8 sprite[0x838];
    /* 0x9B8 */ s32 count;
    /* 0x9BC */ u8 unk9BC[0x54];
    /* 0xA10 */ u32 headerHandles[4];
    /* 0xA20 */ u32 rowHandles[0x18];
    /* 0xA80 */ PanelSlot slots[0x18];
    /* 0xB40 */ u8 unkB40[0x148];
    /* 0xC88 */ u8 cursor[0x64];
    /* 0xCEC */ u8 cursorAlt[1];
} PartyPanelView;

s32 uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 frame);
s32 FUN_0026fa30(void);
s32 scrollOwnerSelectIndex(void *cursor, s32 column);
s32 FUN_002a4964(void *cursor, s32 row);
s32 FUN_003f5220(u32 handle, s32 expanded);
s8 *gameGetSlotTable(void);

extern PartyPanelView *g_partyPanel;

/* Flips the expanded flag, shows keyframe 5 and refreshes every header and row handle. */
static void partyPanelCollapse(void)
{
    PartyPanelView *panel = g_partyPanel;
    s32 i;

    panel->expanded ^= 1;
    uiSpriteSetKeyframe(panel->sprite, 5, 0);
    for (i = 0; i < 4; i++) {
        FUN_003f5220(panel->headerHandles[i], panel->expanded);
    }
    for (i = 0; i < 0x18; i++) {
        FUN_003f5220(panel->rowHandles[i], panel->expanded);
    }
    FUN_0026fa30();
}

/* Flips the expanded flag, shows keyframe 4 and refreshes every header and row handle. */
static void partyPanelExpand(void)
{
    PartyPanelView *panel = g_partyPanel;
    s32 i;

    panel->expanded ^= 1;
    uiSpriteSetKeyframe(panel->sprite, 4, 0);
    for (i = 0; i < 4; i++) {
        FUN_003f5220(panel->headerHandles[i], panel->expanded);
    }
    for (i = 0; i < 0x18; i++) {
        FUN_003f5220(panel->rowHandles[i], panel->expanded);
    }
    FUN_0026fa30();
}

u32 FUN_00372570(s32 force)
{
    PartyPanelView *panel = g_partyPanel;
    s8 *table = gameGetSlotTable();
    u32 changed = 0;

    if (panel->count > 0) {
        s32 key = table[panel->count + 0x1C9F];
        if (key >= 0) {
            s32 i;
            for (i = 0; i < 0x18; i++) {
                s32 slotKey = panel->slots[i].key;
                if (key == slotKey) {
                    s32 state;
                    if (panel->cursorOnly != 0) {
                        scrollOwnerSelectIndex(panel->cursorAlt, i % 4);
                        FUN_002a4964(panel->cursorAlt, i / 4);
                        break;
                    }
                    if (i < 0xC) {
                        if (force == 0) {
                            state = panel->expanded;
                        } else {
                            state = 0;
                            panel->expanded = 0;
                        }
                        if (force == 0 && state == 1) {
                            changed = 1;
                            partyPanelCollapse();
                        }
                        scrollOwnerSelectIndex(panel->cursor, i % 4);
                        FUN_002a4964(panel->cursor, i / 4);
                        break;
                    }
                    if (force == 0) {
                        state = panel->expanded;
                    } else {
                        panel->expanded = 1;
                        state = panel->expanded;
                    }
                    if (force == 0) {
                        if (state == 0) {
                            changed = 1;
                            partyPanelExpand();
                        }
                    }
                    i -= 0xC;
                    scrollOwnerSelectIndex(panel->cursor, i % 4);
                    FUN_002a4964(panel->cursor, i / 4);
                    break;
                }
            }
        }
    }
    return changed;
}

} /* extern "C" */
