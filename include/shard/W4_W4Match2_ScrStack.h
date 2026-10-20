/* The script interpreter's value stack and variable tables (script/scr*.c). */
#ifndef SHARD_W4_W4MATCH2_SCRSTACK_H
#define SHARD_W4_W4MATCH2_SCRSTACK_H

#include "common.h"

/* A stack value: the type byte in ScriptStack.types says how to read it. */
typedef union ScriptValue {
    /* 0x0 */ s32 i;
    /* 0x0 */ f32 f;
} ScriptValue;

enum {
    SCR_VALUE_INT = 0,
    SCR_VALUE_FLOAT = 1,
    SCR_VALUE_INT_VAR = 2,   /* index into g_scrIntVars */
    SCR_VALUE_FLOAT_VAR = 3, /* index into g_scrFloatVars */
    SCR_VALUE_RAW = 4
};

typedef struct ScriptStack {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 count;          /* values on the stack */
    /* 0x20 */ u8 types[0x1C];     /* per value, SCR_VALUE_* */
    /* 0x3C */ ScriptValue values[1];
} ScriptStack;

extern struct {
    u8 unk00[0x20];
    ScriptStack *stack;
} g_scrContext;

extern s32 g_scrIntVars[0x180]; /* script integer variables */
extern f32 g_scrFloatVars[0x180]; /* script float variables */

#endif
