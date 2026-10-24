/* NON_MATCHING: character-grid text entry step of the effect menu (13 x 3 grid plus delete/confirm cells: moves the cursor with wrap, appends/removes the selected character, finishes on confirm/cancel, then draws the entry field and returns the grid's right edge or the result); written from the decompilation, the goto ladder is rebuilt as direction/action handling and the retail grid walk at the end is folded to its two results (last cell character stored, right-edge x returned) */
#include "common.h"

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

/* Input state of the text entry (observed fields). */
struct KeyboardState {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ s32 mode;
    /* 0x0C */ s32 cursor;
    /* 0x10 */ s32 length;
    /* 0x14 */ s32 maxLength;
    /* 0x18 */ s32 result;
    /* 0x1C */ s32 formatArg;
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 text[1];
};

/* The effect menu state's tail: the last cursor character and the grid's character table. */
struct EffKeyboardView {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 cursorChar;
    /* 0x02 */ u8 unk02[0x26];
    /* 0x28 */ u8 charTable[0x27];
};

extern "C" {
extern EffKeyboardView g_effMenuState;

s32 padIsButtonRepeat(u32 button);
s32 padIsButtonPressed(u32 button);
void FUN_00282780(s32 x, s32 y, s32 width, s32 height);
void textFormatBuffer(u8 buffer[20], const char *format, const u8 *text, s32 *arg);

/* True when either of the two button ids is held/repeating. */
static __inline bool padRepeat2(u32 a, u32 b)
{
    return padIsButtonRepeat(a) != 0 || padIsButtonRepeat(b) != 0;
}

static __inline bool padPressed2(u32 a, u32 b)
{
    return padIsButtonPressed(a) != 0 || padIsButtonPressed(b) != 0;
}

s32 FUN_002f2aa8(KeyboardState *keyboard)
{
    s32 x = keyboard->x;
    s32 y = keyboard->y;

    if (keyboard->mode != KEYBOARD_MODE_CONFIRMED) {
        s32 insert = KEYBOARD_NO_INSERT;
        bool fixBlank = true;      /* the blank grid cell is skipped onto the delete cell */
        s32 cursor = keyboard->cursor;

        if (padRepeat2(5, 0x10)) {
            fixBlank = false;
            if (cursor == KEYBOARD_CELL_DELETE) {
                keyboard->cursor = KEYBOARD_LAST_GRID_CELL;
            } else if (cursor == KEYBOARD_CELL_CONFIRM) {
                keyboard->cursor = KEYBOARD_CELL_DELETE;
            } else {
                keyboard->cursor = cursor - KEYBOARD_COLUMNS;
                if (keyboard->cursor >= 0)
                    fixBlank = true;
                else
                    keyboard->cursor = KEYBOARD_CELL_CONFIRM;
            }
        } else if (padRepeat2(6, 0x1D)) {
            fixBlank = false;
            if (cursor == KEYBOARD_CELL_DELETE) {
                keyboard->cursor = KEYBOARD_CELL_CONFIRM;
            } else if (cursor == KEYBOARD_CELL_CONFIRM) {
                keyboard->cursor = KEYBOARD_COLUMNS - 1;
            } else {
                keyboard->cursor = cursor + KEYBOARD_COLUMNS;
                if ((u32)keyboard->cursor >= KEYBOARD_CELL_DELETE)
                    keyboard->cursor = KEYBOARD_CELL_DELETE;
                else
                    fixBlank = true;
            }
        } else if (padRepeat2(4, 0x11)) {
            fixBlank = false;
            if (cursor != KEYBOARD_CELL_DELETE && cursor != KEYBOARD_CELL_CONFIRM) {
                bool wrap = cursor % KEYBOARD_COLUMNS == 0;
                keyboard->cursor = wrap ? cursor + (KEYBOARD_COLUMNS - 1) : cursor - 1;
                fixBlank = wrap;
            }
        } else if (padRepeat2(3, 0x1E)) {
            fixBlank = false;
            if (cursor != KEYBOARD_CELL_DELETE && cursor != KEYBOARD_CELL_CONFIRM) {
                keyboard->cursor = cursor % KEYBOARD_COLUMNS == KEYBOARD_COLUMNS - 1 ? cursor - (KEYBOARD_COLUMNS - 1)
                                                                                      : cursor + 1;
                fixBlank = true;
            }
        } else if (padPressed2(0, 0x14)) {
            if (cursor == KEYBOARD_CELL_CONFIRM) {
                fixBlank = false;
                if (keyboard->length > 0)
                    keyboard->mode = KEYBOARD_MODE_CONFIRMED;
            } else if (cursor == KEYBOARD_CELL_DELETE) {
                fixBlank = false;
                insert = KEYBOARD_DELETE_MARK;
            } else {
                insert = cursor;
            }
        } else if (padPressed2(1, 0x16)) {
            keyboard->mode = KEYBOARD_MODE_CANCELLED;
        }

        if (fixBlank && keyboard->cursor == KEYBOARD_CELL_BLANK) {
            keyboard->cursor = KEYBOARD_CELL_DELETE;
            insert = KEYBOARD_NO_INSERT;
        }
        if (insert >= KEYBOARD_DELETE_MARK) {
            if (keyboard->length > 0)
                keyboard->length--;
        } else if (insert != KEYBOARD_NO_INSERT && insert < KEYBOARD_CELL_BLANK) {
            keyboard->text[keyboard->length] = g_effMenuState.charTable[insert];
            if (keyboard->length < keyboard->maxLength)
                keyboard->length++;
        }
        keyboard->text[keyboard->length] = 0;
    }

    u8 formatted[20];
    FUN_00282780(x, y, KEYBOARD_FIELD_WIDTH, KEYBOARD_FIELD_HEIGHT);
    textFormatBuffer(formatted, "%s%s", keyboard->text, &keyboard->formatArg);
    FUN_00282780(x, y + KEYBOARD_LIST_OFFSET_Y, KEYBOARD_FIELD_WIDTH, KEYBOARD_LIST_HEIGHT);
    if (keyboard->result != 0)
        return keyboard->result;

    /* Retail walks the 13 x 3 grid here; its only results are the last real cell's character and the
     * x of the grid's last drawn column. */
    g_effMenuState.cursorChar = g_effMenuState.charTable[KEYBOARD_LAST_GRID_CELL];
    return x + KEYBOARD_GRID_LEFT_PAD + KEYBOARD_CELL_WIDTH * (KEYBOARD_COLUMNS - 2);
}

} /* extern "C" */
