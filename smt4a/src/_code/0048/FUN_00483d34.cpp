/* NON_MATCHING: readable rewrite from retail disassembly compiles (211 vs ~208 rows); the 15-column glyph table DAT_00532b5c is referenced as an external array, retail inlines the type/advance sequence at two places and pushes r3 differently */
#include "common.h"

// Two-character slot of the name being typed (high byte first).
struct NameSlot {
    u8 high;
    s8 low;
};

// Name-entry screen: only the members used by the per-frame input handler.
struct NameEntryScreen {
    u8 unk000[0x10];
    s32 column;                 // 0x010
    s32 row;                    // 0x014
    u8 unk018[8];
    s8 page;                    // 0x020
    u8 unk021;
    s8 cursor;                  // 0x022
    u8 unk023[5];
    u8 kanaShift;               // 0x028
    u8 unk029[0xb0 - 0x29];
    NameSlot name[8];           // 0x0b0 (0xb0..0xc0)
    u8 unk0c0[0x198 - 0xc0];
    u8 gridCursor[0x64];        // 0x198: flagged entry of the grid cursor (value A = row, B = column)
    u8 pageCursor[4];           // 0x1fc: flagged entry of the page tabs
    u8 unk200[0x260 - 0x200];
    u8 tabsActive;              // 0x260
    u8 unk261[0x26c - 0x261];
    u32 process;                // 0x26c: script process
    u8 unk270[0x294 - 0x270];
    u8 tabBar[0x40];            // 0x294
    u8 unk2d4[0x560 - 0x2d4];
    u16 mode;                   // 0x560
    u8 finished;                // 0x562
    u8 unk563[5];
    s32 touchResult;            // 0x568
};

extern "C" {

extern const s16 DAT_00532b5c[];

void scrRunOpcodesStub(u32 process);
void FUN_00163aa4(void* tabBar, f32 amount);
s32 largeGridHandleTouchSelection(NameEntryScreen* screen);
s32 inputIsQuestConfirmPressed(void);
s32 inputIsQuestMenuPressed(void);
s32 FUN_004d0584(void);
s32 FUN_0048408c(NameEntryScreen* screen, s32 page, s32 column, s32 row);
s32 flaggedEntryGetValueA(void* entry);
s32 flaggedEntryGetValueB(void* entry);
void flaggedEntrySetValueB(void* entry, s32 value);
s32 FUN_00228b04(void* entry, s32 direction);
void nameFormSetCharacter(NameEntryScreen* screen, s32 position, s32 character);
void FUN_00484be0(NameEntryScreen* screen);
void sendEvent100020E(void);
void sendEvent100020F(void);
void stateSetterEnterState(NameEntryScreen* screen, s32 state);
s32 eventQueueAddUniqueIfValid(u32 event);

// Types the chosen character (or the blank cell) at the cursor and advances it.
static inline void typeCharacter(NameEntryScreen* screen, s32 character)
{
    nameFormSetCharacter(screen, screen->cursor, character);
    FUN_00484be0(screen);
    if (screen->cursor < 7) screen->cursor++;
    sendEvent100020E();
}

// Per-frame input of the name-entry grid: confirm types the highlighted character, the menu
// button deletes the character before the cursor (compacting the name), and the d-pad moves
// between the grid and the page tabs.
void FUN_00483d34(NameEntryScreen* screen)
{
    scrRunOpcodesStub(screen->process);
    FUN_00163aa4(screen->tabBar, 1.0f);
    s32 touch = largeGridHandleTouchSelection(screen);
    screen->touchResult = touch;
    if (touch == 1 || touch == 2) return;
    if (inputIsQuestConfirmPressed() != 0) return;

    if (touch == 6 || FUN_004d0584() != 0) {
        s32 page = screen->page;
        if (screen->kanaShift != 0) page = (s8)(page + 4);
        s32 character = FUN_0048408c(screen, page, screen->column, screen->row);
        if (screen->tabsActive != 0 && flaggedEntryGetValueB(screen->pageCursor) == 0) {
            typeCharacter(screen, -0x7ec0);
        } else if (character == 0) {
            s16 symbol = DAT_00532b5c[screen->row * 15 + screen->column];
            if (symbol == -0x7ec0) {
                screen->finished = 1;
                sendEvent100020F();
            } else {
                typeCharacter(screen, symbol);
            }
        }
        if (touch == 6) screen->mode = 3;
        return;
    }

    if (inputIsQuestMenuPressed() != 0) {
        s32 slot;
        for (slot = 0; slot < 8; slot++) {
            if (((screen->name[slot].high << 8) + screen->name[slot].low) != 0) break;
        }
        if (slot == 8) {
            stateSetterEnterState(screen, 5);
            return;
        }
        nameFormSetCharacter(screen, screen->cursor, 0);
        if (screen->cursor > 0) screen->cursor--;
        for (s32 pass = 0; pass < 7; pass++) {
            for (s32 k = 0; k < 7; k++) {
                if (screen->name[k].high == 0 && screen->name[k].low == 0) {
                    NameSlot next = screen->name[k + 1];
                    screen->name[k + 1] = screen->name[k];
                    screen->name[k] = next;
                }
            }
        }
        sendEvent100020F();
        return;
    }

    if (screen->tabsActive != 0) {
        s32 tab = FUN_00228b04(screen->pageCursor, 0);
        FUN_00228b04(screen->gridCursor, 0);
        if (flaggedEntryGetValueA(screen->gridCursor) != 6) {
            screen->tabsActive = 0;
            s32 value = flaggedEntryGetValueB(screen->pageCursor) * 5;
            if (value >= 15) value = 14;
            flaggedEntrySetValueB(screen->gridCursor, value);
            eventQueueAddUniqueIfValid(0x0100020d);
        } else if (tab != 0) {
            eventQueueAddUniqueIfValid(0x0100020d);
        }
        screen->column = flaggedEntryGetValueB(screen->gridCursor);
        screen->row = flaggedEntryGetValueA(screen->gridCursor);
        return;
    }
    FUN_00228b04(screen->gridCursor, 1);
    screen->column = flaggedEntryGetValueB(screen->gridCursor);
    screen->row = flaggedEntryGetValueA(screen->gridCursor);
    if (screen->row == 6) {
        screen->tabsActive = 1;
        flaggedEntrySetValueB(screen->pageCursor, screen->column / 5);
    }
}

} /* extern "C" */
