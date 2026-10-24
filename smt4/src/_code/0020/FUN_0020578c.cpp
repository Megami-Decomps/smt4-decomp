/* NON_MATCHING: identical instruction count and flow; only the cursor pointer is built in r0 and then moved to r8/r6 by retail (`add r0,r5,#2048; add r0,r0,#620; mov r8,r0`), where armcc here computes it straight into the callee-saved register. */
#include "common.h"

/* A two-axis cursor: a column and a row value with their extents. */
struct PanelCursor {
    u8 unk00[0x64];
};

/* The party panel (only the parts the reset reads). */
struct PartyPanel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ s32 mode;               /* 4: one row, 6: grid, 8: reserve row plus grid */
    /* 0x024 */ u8 unk024[8];
    /* 0x02C */ s32 side;
    /* 0x030 */ u8 unk030[0x648];
    /* 0x678 */ s8 occupied[12];        /* members present in the first row */
    /* 0x684 */ u8 unk684[0xB8];
    /* 0x73C */ struct { s16 id; u8 unk02[6]; } grid[24];
    /* 0x7FC */ u8 unk7FC[0xE0];
    /* 0x8DC */ PanelCursor rowCursor;
    /* 0x940 */ PanelCursor mirrorCursor;
    /* 0x9A4 */ PanelCursor gridCursor;
    /* 0xA08 */ PanelCursor reserveMirror;
    /* 0xA6C */ PanelCursor reserveCursor;
};

extern "C" {
extern PartyPanel *g_partyPanel;

void flaggedEntrySetValueB(PanelCursor *cursor, s32 value);   /* column */
void flaggedEntrySetValueA(PanelCursor *cursor, s32 value);   /* row */
s32 FUN_0029e958(PanelCursor *cursor);                        /* column count */
s32 FUN_0029ee54(PanelCursor *cursor);                        /* row count */

/* Puts the panel's cursor on the first present member (mode 4 and the reserve row of mode 8) or the
 * first filled grid cell (modes 6 and 8), and mirrors it on the second cursor when the other side
 * of the panel is shown. */
void FUN_0020578c(void)
{
    PartyPanel *panel = g_partyPanel;
    if (panel->mode == 4) {
        PanelCursor *cursor = &panel->rowCursor;
        for (s32 column = 0; column < FUN_0029e958(cursor); column++) {
            if (panel->occupied[column]) {
                flaggedEntrySetValueB(cursor, column);
                return;
            }
        }
    } else if (panel->mode == 6) {
        PanelCursor *cursor = &panel->gridCursor;
        for (s32 row = 0; row < FUN_0029ee54(cursor); row++) {
            for (s32 column = 0; column < FUN_0029e958(cursor); column++) {
                s32 cell = column + row * 4;
                if (panel->grid[cell].id == 0)
                    continue;
                flaggedEntrySetValueB(cursor, column);
                flaggedEntrySetValueA(cursor, row);
                if (panel->side == 0) {
                    if (cell >= 12)
                        return;
                    flaggedEntrySetValueB(&panel->mirrorCursor, column);
                    flaggedEntrySetValueA(&panel->mirrorCursor, row);
                    return;
                }
                if (panel->side != 1 || cell < 12)
                    return;
                flaggedEntrySetValueB(&panel->mirrorCursor, column);
                flaggedEntrySetValueA(&panel->mirrorCursor, row - 4);
                return;
            }
        }
    } else if (panel->mode == 8) {
        PanelCursor *cursor = &panel->reserveCursor;
        for (s32 column = 0; column < FUN_0029e958(cursor); column++) {
            if (panel->occupied[column]) {
                flaggedEntrySetValueB(&panel->reserveMirror, column);
                flaggedEntrySetValueA(&panel->reserveMirror, 0);
                flaggedEntrySetValueB(cursor, column);
                flaggedEntrySetValueA(cursor, 0);
                return;
            }
        }
        for (s32 row = 1; row < FUN_0029ee54(cursor); row++) {
            for (s32 column = 0; column < FUN_0029e958(cursor); column++) {
                s32 cell = column + row * 4 - 4;
                if (panel->grid[cell].id == 0)
                    continue;
                flaggedEntrySetValueB(cursor, column);
                flaggedEntrySetValueA(cursor, row);
                if (panel->side == 0) {
                    if (cell >= 12)
                        return;
                    flaggedEntrySetValueB(&panel->reserveMirror, column);
                    flaggedEntrySetValueA(&panel->reserveMirror, row);
                    return;
                }
                if (panel->side != 1 || cell < 12)
                    return;
                flaggedEntrySetValueB(&panel->reserveMirror, column);
                flaggedEntrySetValueA(&panel->reserveMirror, row - 3);
                return;
            }
        }
    }
}

} /* extern "C" */
