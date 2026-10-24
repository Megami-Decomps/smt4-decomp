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
extern s32 DAT_0044de9c;       /* right integer operand */
extern s32 DAT_0044dea0;       /* integer result */
extern f32 DAT_0044dea4;       /* left float operand */
extern f32 DAT_0044dea8;       /* right float operand */
extern f32 DAT_0044deac;       /* float result */
extern u32 DAT_0044deb0;       /* type of the top of the stack */
extern u32 DAT_0044deb4;       /* type of the one below */

f32 scrPopFloat(ScrContext *context);
s32 scrPopInt(ScrContext *context);
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
    DAT_0044deb0 = context->types[context->sp - 1];
    DAT_0044deb4 = context->types[context->sp - 2];
    if ((DAT_0044deb0 != SCR_TYPE_INT && DAT_0044deb0 != SCR_TYPE_ADDRESS) ||
        (DAT_0044deb4 != SCR_TYPE_INT && DAT_0044deb4 != SCR_TYPE_ADDRESS)) {
        DAT_0044dea4 = scrPopFloat(context);
        DAT_0044dea8 = scrPopFloat(context);
        switch (op) {
        case 0:
            DAT_0044deac = DAT_0044dea4 + DAT_0044dea8;
            break;
        case 1:
            DAT_0044deac = DAT_0044dea4 - DAT_0044dea8;
            break;
        case 2:
            DAT_0044deac = DAT_0044dea4 * DAT_0044dea8;
            break;
        case 3:
            DAT_0044deac = DAT_0044dea4 / DAT_0044dea8;
            break;
        case 4:
            DAT_0044dea0 = DAT_0044dea4 != 0.0f || DAT_0044dea8 != 0.0f;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 5:
            DAT_0044dea0 = DAT_0044dea4 != 0.0f && DAT_0044dea8 != 0.0f;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 6:
            DAT_0044dea0 = DAT_0044dea4 == DAT_0044dea8;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 7:
            DAT_0044dea0 = DAT_0044dea4 != DAT_0044dea8;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 8:
            DAT_0044dea0 = DAT_0044dea4 < DAT_0044dea8;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 9:
            DAT_0044dea0 = DAT_0044dea8 < DAT_0044dea4;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 10:
            DAT_0044dea0 = DAT_0044dea4 <= DAT_0044dea8;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        case 11:
            DAT_0044dea0 = DAT_0044dea8 <= DAT_0044dea4;
            scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
            return;
        }
        scrPush(context, SCR_TYPE_FLOAT, *(u32 *)&DAT_0044deac);
        return;
    }
    g_scrContext = scrPopInt(context);
    DAT_0044de9c = scrPopInt(context);
    switch (op) {
    case 0:
        DAT_0044dea0 = g_scrContext + DAT_0044de9c;
        break;
    case 1:
        DAT_0044dea0 = g_scrContext - DAT_0044de9c;
        break;
    case 2:
        DAT_0044dea0 = g_scrContext * DAT_0044de9c;
        break;
    case 3:
        DAT_0044dea0 = __aeabi_idivmod(g_scrContext, DAT_0044de9c);
        break;
    case 4:
        DAT_0044dea0 = g_scrContext != 0 || DAT_0044de9c != 0;
        break;
    case 5:
        DAT_0044dea0 = g_scrContext != 0 && DAT_0044de9c != 0;
        break;
    case 6:
        DAT_0044dea0 = g_scrContext == DAT_0044de9c;
        break;
    case 7:
        DAT_0044dea0 = g_scrContext != DAT_0044de9c;
        break;
    case 8:
        DAT_0044dea0 = g_scrContext < DAT_0044de9c;
        break;
    case 9:
        DAT_0044dea0 = DAT_0044de9c < g_scrContext;
        break;
    case 10:
        DAT_0044dea0 = g_scrContext <= DAT_0044de9c;
        break;
    case 11:
        DAT_0044dea0 = DAT_0044de9c <= g_scrContext;
        break;
    }
    scrPush(context, SCR_TYPE_INT, DAT_0044dea0);
}

} /* extern "C" */
