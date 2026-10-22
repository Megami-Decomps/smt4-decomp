/* NON_MATCHING: retail places the "return 0" exit after the copy and assigns r4-r6 in a different
 * order; the loop body otherwise matches. */
#include "common.h"

/* One recorded move (0x10 bytes). */
struct BoardHistoryEntry {
    /* 0x00 */ s32 kind;
    /* 0x04 */ s32 unit;
    /* 0x08 */ s32 first;
    /* 0x0c */ s32 second;
};

/* A unit definition (0x288 bytes). */
struct BoardUnitDef {
    /* 0x000 */ u8 unk000[0x1c6];
    /* 0x1c6 */ u16 flags; /* 0x1c0: not undoable */
    /* 0x1c8 */ u8 unk1c8[0xc0];
};

struct BoardState {
    /* 0x0000 */ u8 unk0000[0x88];
    /* 0x0088 */ s32 replay;
    /* 0x008c */ u8 unk008c[0x1f34];
    /* 0x1fc0 */ BoardUnitDef *units;
    /* 0x1fc4 */ u8 unk1fc4[0x34c];
    /* 0x2310 */ BoardHistoryEntry *history;
    /* 0x2314 */ s32 historyCount;
};

extern "C" {
/* Pops recorded moves until one can be taken back (kind 5 when replaying; otherwise anything but
 * a kind-4 move of a unit flagged 0x1c0) and copies it out; 0 when the history runs out. */
s32 FUN_0033b3c4(BoardState *board, BoardHistoryEntry *out)
{
    for (;;) {
        if (board->historyCount <= 0) {
            return 0;
        }
        board->historyCount--;
        if (board->replay != 0) {
            if (board->history[board->historyCount].kind == 5) {
                break;
            }
        } else if (board->history[board->historyCount].kind != 4 ||
                   !(board->units[board->history[board->historyCount].unit].flags & 0x1c0)) {
            break;
        }
    }
    out->kind = board->history[board->historyCount].kind;
    out->unit = board->history[board->historyCount].unit;
    out->first = board->history[board->historyCount].first;
    out->second = board->history[board->historyCount].second;
    return 1;
}
}
