/* NON_MATCHING: readable rebuild of the script VM's binary arithmetic/compare opcode (integer or float, picked by the operand types); the draft's shared push tails are one helper here, and armcc orders the global temporaries (the VM keeps its operands and result in file statics) and the compare branches differently. */
#include "common.h"

#define SCR_TYPE_INT 0
#define SCR_TYPE_FLOAT 1
#define SCR_TYPE_ADDRESS 2

/* The script VM context: a typed value stack. */
struct ScrContext {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 sp;
    /* 0x20 */ u8 types[0x1C];
    /* 0x3C */ u32 values[1];
};

extern "C" {
extern s32 g_scrContext;       /* left integer operand */
extern s32 DAT_00588e40;       /* right integer operand */
extern s32 DAT_00588e44;       /* integer result */
extern f32 DAT_00588e48;       /* left float operand */
extern f32 DAT_00588e4c;       /* right float operand */
extern f32 DAT_00588e50;       /* float result */
extern u32 DAT_00588e54;       /* type of the top of the stack */
extern u32 DAT_00588e58;       /* type of the one below */

f32 scrPopFloat(ScrContext *context);
s32 FUN_003d2004(ScrContext *context);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Pushes a typed value. */
static void scrPush(ScrContext *context, u8 type, u32 value)
{
    context->types[context->sp] = type;
    context->values[context->sp] = value;
    context->sp++;
}

/* Pops two values and pushes the result of operation `op`: 0 add, 1 subtract, 2 multiply, 3 divide
 * (modulo for integers), 4 or, 5 and, 6 equal, 7 not equal, 8 less, 9 greater, 10 less or equal,
 * 11 greater or equal. The comparison and logic results are integers. */
void scrFloatOp(ScrContext *context, u32 op)
{
    DAT_00588e54 = context->types[context->sp - 1];
    DAT_00588e58 = context->types[context->sp - 2];
    if ((DAT_00588e54 != SCR_TYPE_INT && DAT_00588e54 != SCR_TYPE_ADDRESS) ||
        (DAT_00588e58 != SCR_TYPE_INT && DAT_00588e58 != SCR_TYPE_ADDRESS)) {
        DAT_00588e48 = scrPopFloat(context);
        DAT_00588e4c = scrPopFloat(context);
        switch (op) {
        case 0:
            DAT_00588e50 = DAT_00588e48 + DAT_00588e4c;
            break;
        case 1:
            DAT_00588e50 = DAT_00588e48 - DAT_00588e4c;
            break;
        case 2:
            DAT_00588e50 = DAT_00588e48 * DAT_00588e4c;
            break;
        case 3:
            DAT_00588e50 = DAT_00588e48 / DAT_00588e4c;
            break;
        case 4:
            DAT_00588e44 = DAT_00588e48 != 0.0f || DAT_00588e4c != 0.0f;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 5:
            DAT_00588e44 = DAT_00588e48 != 0.0f && DAT_00588e4c != 0.0f;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 6:
            DAT_00588e44 = DAT_00588e48 == DAT_00588e4c;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 7:
            DAT_00588e44 = DAT_00588e48 != DAT_00588e4c;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 8:
            DAT_00588e44 = DAT_00588e48 < DAT_00588e4c;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 9:
            DAT_00588e44 = DAT_00588e4c < DAT_00588e48;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 10:
            DAT_00588e44 = DAT_00588e48 <= DAT_00588e4c;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        case 11:
            DAT_00588e44 = DAT_00588e4c <= DAT_00588e48;
            scrPush(context, SCR_TYPE_INT, DAT_00588e44);
            return;
        }
        scrPush(context, SCR_TYPE_FLOAT, *(u32 *)&DAT_00588e50);
        return;
    }
    g_scrContext = FUN_003d2004(context);
    DAT_00588e40 = FUN_003d2004(context);
    switch (op) {
    case 0:
        DAT_00588e44 = g_scrContext + DAT_00588e40;
        break;
    case 1:
        DAT_00588e44 = g_scrContext - DAT_00588e40;
        break;
    case 2:
        DAT_00588e44 = g_scrContext * DAT_00588e40;
        break;
    case 3:
        DAT_00588e44 = __aeabi_idivmod(g_scrContext, DAT_00588e40);
        break;
    case 4:
        DAT_00588e44 = g_scrContext != 0 || DAT_00588e40 != 0;
        break;
    case 5:
        DAT_00588e44 = g_scrContext != 0 && DAT_00588e40 != 0;
        break;
    case 6:
        DAT_00588e44 = g_scrContext == DAT_00588e40;
        break;
    case 7:
        DAT_00588e44 = g_scrContext != DAT_00588e40;
        break;
    case 8:
        DAT_00588e44 = g_scrContext < DAT_00588e40;
        break;
    case 9:
        DAT_00588e44 = DAT_00588e40 < g_scrContext;
        break;
    case 10:
        DAT_00588e44 = g_scrContext <= DAT_00588e40;
        break;
    case 11:
        DAT_00588e44 = DAT_00588e40 <= g_scrContext;
        break;
    }
    scrPush(context, SCR_TYPE_INT, DAT_00588e44);
}

} /* extern "C" */
