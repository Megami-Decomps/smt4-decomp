/* NON_MATCHING: same blocks, branches and calls as retail (the field and grid text draws are the NOPed weak
 * effMenuDebugDrawText); what differs is the callee-saved registers (retail: keyboard r4, insert r5, the text r8,
 * the character table r9, 39 in sl, where the build has r9, r4, r5, sl and r8), and retail keeps y + 24 in a
 * register from the list frame's call for the grid rows. */
#include <stdio.h>
#include "gfx/EffectKeyboard.h"
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

#define KEYBOARD_COLUMNS 13
#define KEYBOARD_ROWS 3
#define KEYBOARD_CELL_WIDTH 10
#define KEYBOARD_GRID_LEFT_PAD 4
#define KEYBOARD_CELL_BLANK 0x26
#define KEYBOARD_CELL_DELETE 0x27
#define KEYBOARD_CELL_CONFIRM 0x28
#define KEYBOARD_LAST_GRID_CELL 0x25
#define KEYBOARD_NO_INSERT (-1)
#define KEYBOARD_DELETE_MARK 0x2A
#define KEYBOARD_MODE_CONFIRMED 1
#define KEYBOARD_MODE_CANCELLED 2
#define KEYBOARD_FIELD_WIDTH 0x86
#define KEYBOARD_FIELD_HEIGHT 0x14
#define KEYBOARD_LIST_HEIGHT 0x44
#define KEYBOARD_LIST_OFFSET_Y 0x18


extern "C" {
/* The grid's characters, and one of them as a string for drawing (two effMenu.c objects nothing else uses). */
extern const char g_effMenuCharTable[KEYBOARD_CELL_BLANK];
extern char g_effMenuCellText[2];

s32 padIsButtonRepeat(u32 button);
s32 padIsButtonPressed(u32 button);
void effMenuAppendDefaultColorRect(s32 x, s32 y, s32 width, s32 height);

/* One step of the effect menu's text entry: moves the cursor over the 13 x 3 character grid and its delete and
 * confirm cells (wrapping), appends or deletes a character, confirms or cancels, then draws the entry field and,
 * while no result is set, the grid with the cursor's cell highlighted. */
void effMenuTextEntryStep(KeyboardState *keyboard)
{
    s32 x = keyboard->x;
    s32 y = keyboard->y;
    s32 insert = KEYBOARD_NO_INSERT;

    if (keyboard->mode != KEYBOARD_MODE_CONFIRMED) {
        if (padIsButtonRepeat(5) || padIsButtonRepeat(0x10)) {
            if (keyboard->cursor == KEYBOARD_CELL_DELETE) {
                keyboard->cursor = KEYBOARD_LAST_GRID_CELL;
            } else if (keyboard->cursor == KEYBOARD_CELL_CONFIRM) {
                keyboard->cursor = KEYBOARD_CELL_DELETE;
            } else {
                keyboard->cursor -= KEYBOARD_COLUMNS;
                if (keyboard->cursor < 0)
                    keyboard->cursor = KEYBOARD_CELL_CONFIRM;
            }
        } else if (padIsButtonRepeat(6) || padIsButtonRepeat(0x1D)) {
            if (keyboard->cursor == KEYBOARD_CELL_DELETE) {
                keyboard->cursor = KEYBOARD_CELL_CONFIRM;
            } else if (keyboard->cursor == KEYBOARD_CELL_CONFIRM) {
                keyboard->cursor = KEYBOARD_COLUMNS - 1;
            } else {
                keyboard->cursor += KEYBOARD_COLUMNS;
                if ((u32)keyboard->cursor > KEYBOARD_CELL_BLANK)
                    keyboard->cursor = KEYBOARD_CELL_DELETE;
            }
        } else if (padIsButtonRepeat(4) || padIsButtonRepeat(0x11)) {
            if (keyboard->cursor != KEYBOARD_CELL_DELETE && keyboard->cursor != KEYBOARD_CELL_CONFIRM) {
                if (keyboard->cursor % KEYBOARD_COLUMNS == 0)
                    keyboard->cursor += KEYBOARD_COLUMNS - 1;
                else
                    keyboard->cursor -= 1;
            }
        } else if (padIsButtonRepeat(3) || padIsButtonRepeat(0x1E)) {
            if (keyboard->cursor != KEYBOARD_CELL_DELETE && keyboard->cursor != KEYBOARD_CELL_CONFIRM) {
                if (keyboard->cursor % KEYBOARD_COLUMNS == KEYBOARD_COLUMNS - 1)
                    keyboard->cursor -= KEYBOARD_COLUMNS - 1;
                else
                    keyboard->cursor += 1;
            }
        } else if (padIsButtonPressed(0) || padIsButtonPressed(0x14)) {
            if (keyboard->cursor == KEYBOARD_CELL_CONFIRM) {
                if (keyboard->length > 0)
                    keyboard->mode = KEYBOARD_MODE_CONFIRMED;
            } else if (keyboard->cursor == KEYBOARD_CELL_DELETE) {
                insert = KEYBOARD_DELETE_MARK;
            } else if (keyboard->cursor != KEYBOARD_CELL_BLANK) {
                insert = keyboard->cursor;
            }
        } else if (padIsButtonPressed(1) || padIsButtonPressed(0x16)) {
            keyboard->mode = KEYBOARD_MODE_CANCELLED;
        }

        /* The blank cell is skipped onto the delete cell. */
        if (keyboard->cursor == KEYBOARD_CELL_BLANK)
            keyboard->cursor = KEYBOARD_CELL_DELETE;
        if (insert > 41 && keyboard->length > 0) { /* the delete mark (42) */
            keyboard->length--;
        } else if (insert != KEYBOARD_NO_INSERT && (u32)insert < KEYBOARD_CELL_BLANK) {
            keyboard->text[keyboard->length] = g_effMenuCharTable[insert];
            if (keyboard->length < keyboard->maxLength)
                keyboard->length++;
        }
        keyboard->text[keyboard->length] = 0;
    }

    char formatted[20];
    effMenuAppendDefaultColorRect(x, y, KEYBOARD_FIELD_WIDTH, KEYBOARD_FIELD_HEIGHT);
    sprintf(formatted, "%s%s", keyboard->text, &keyboard->formatArg);
    effMenuDebugDrawText(x + 4, y + 4, 0, formatted);
    effMenuAppendDefaultColorRect(x, y + KEYBOARD_LIST_OFFSET_Y, KEYBOARD_FIELD_WIDTH, KEYBOARD_LIST_HEIGHT);
    if (keyboard->result != 0)
        return;

    s32 drawX = x + 4;
    s32 drawY = y + KEYBOARD_LIST_OFFSET_Y + 4;
    u32 cell = 0;
    for (s32 row = 0; row < KEYBOARD_ROWS; row++) {
        for (s32 column = 0; column < KEYBOARD_COLUMNS; column++) {
            if (cell < KEYBOARD_CELL_BLANK) {
                g_effMenuCellText[0] = g_effMenuCharTable[cell];
                effMenuDebugDrawText(drawX, drawY, keyboard->cursor == cell ? 4 : 0, g_effMenuCellText);
            }
            cell++;
            drawX += KEYBOARD_CELL_WIDTH;
        }
        drawX -= KEYBOARD_COLUMNS * KEYBOARD_CELL_WIDTH;
        drawY += 12;
    }
    drawX += 11 * KEYBOARD_CELL_WIDTH;
    effMenuDebugDrawText(drawX, drawY, keyboard->cursor == cell ? 4 : 0, "BS");
    effMenuDebugDrawText(drawX, drawY + 12, keyboard->cursor == cell + 1 ? 4 : 0, "OK");
}

} /* extern "C" */
