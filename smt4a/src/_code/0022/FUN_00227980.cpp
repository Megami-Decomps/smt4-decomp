/* NON_MATCHING: register numbering only (retail: position r5, op r6) */
/* Runs the script instruction at the current position: looks up its handler by opcode, runs it with this script as the
 * active one and advances. Returns 1 when the instruction ran, 2 when its handler asked to wait. */
#include "common.h"

extern "C" {
struct ScriptOp {
    /* 0x0 */ s32 (*handler)(void);
    /* 0x4 */ s32 length;       /* what the instruction takes off the script's remaining count */
};

struct ScriptState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 position;
    /* 0x1C */ s32 remaining;
    /* 0x20 */ u8 unk20[0x9C];
    /* 0xBC */ u8 *code;
};

extern struct {
    u8 unk00[0x20];
    ScriptState *active;
} g_scrContext;
extern ScriptOp DAT_00533f90[];

s32 FUN_00227980(ScriptState *script)
{
    s32 position = script->position;
    u16 opcode = *(u16 *)(script->code + position * 4 + 2);
    ScriptOp *op = &DAT_00533f90[opcode];

    g_scrContext.active = script;
    if (op->handler() == 0) {
        return 2;
    }
    script->remaining -= op->length;
    if (script->position == position) {
        script->position++;
    }
    return 1;
}
}
