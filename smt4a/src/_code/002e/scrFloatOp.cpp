/* NON_MATCHING: integer arm now first (retail's case-body layout: int bodies, then float bodies), compare results written as `if (cond) result = 1; else result = 0;` (shared mov #1/#0 tails), `(l | r) != 0` for the integer or, `l > r`/`l >= r` unswapped; remaining: retail does not if-convert the float `or` (bne/b to the shared 1/0 tails), keeps one `vstr` per mul/div case with the quotient in s2 (vdiv s2,s0,s1), and loads the depth once for the two tag reads (ldr r1,[r0,#28]!). */
#include "script/ScriptVm.h"

extern "C" {

s32 __aeabi_idivmod(s32 a, s32 b);

/* Pops two values and pushes the result of operation `op`: 0 add, 1 subtract, 2 multiply, 3 divide
 * (modulo for integers), 4 or, 5 and, 6 equal, 7 not equal, 8 less, 9 greater, 10 less or equal,
 * 11 greater or equal. The comparison and logic results are integers. */
void scrFloatOp(ScriptVmProcess *process, u32 op)
{
    g_scrContext.topTag = process->tags[process->depth - 1];
    g_scrContext.belowTag = process->tags[process->depth - 2];
    if ((g_scrContext.topTag == SCRIPT_VM_TAG_INT || g_scrContext.topTag == SCRIPT_VM_TAG_INT_VAR) &&
        (g_scrContext.belowTag == SCRIPT_VM_TAG_INT || g_scrContext.belowTag == SCRIPT_VM_TAG_INT_VAR)) {
        g_scrContext.leftInt = scrPopInt(process);
        g_scrContext.rightInt = scrPopInt(process);
        switch (op) {
        case 0:
            g_scrContext.intResult = g_scrContext.leftInt + g_scrContext.rightInt;
            break;
        case 1:
            g_scrContext.intResult = g_scrContext.leftInt - g_scrContext.rightInt;
            break;
        case 2:
            g_scrContext.intResult = g_scrContext.leftInt * g_scrContext.rightInt;
            break;
        case 3:
            g_scrContext.intResult = __aeabi_idivmod(g_scrContext.leftInt, g_scrContext.rightInt);
            break;
        case 4:
            if ((g_scrContext.leftInt | g_scrContext.rightInt) != 0) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 5:
            if (g_scrContext.leftInt != 0 && g_scrContext.rightInt != 0) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 6:
            if (g_scrContext.leftInt == g_scrContext.rightInt) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 7:
            if (g_scrContext.leftInt != g_scrContext.rightInt) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 8:
            if (g_scrContext.leftInt < g_scrContext.rightInt) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 9:
            if (g_scrContext.leftInt > g_scrContext.rightInt) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 10:
            if (g_scrContext.leftInt <= g_scrContext.rightInt) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        case 11:
            if (g_scrContext.leftInt >= g_scrContext.rightInt) {
                g_scrContext.intResult = 1;
            } else {
                g_scrContext.intResult = 0;
            }
            break;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    }
    g_scrContext.leftFloat = scrPopFloat(process);
    g_scrContext.rightFloat = scrPopFloat(process);
    switch (op) {
    case 0:
        g_scrContext.floatResult = g_scrContext.leftFloat + g_scrContext.rightFloat;
        break;
    case 1:
        g_scrContext.floatResult = g_scrContext.leftFloat - g_scrContext.rightFloat;
        break;
    case 2:
        g_scrContext.floatResult = g_scrContext.leftFloat * g_scrContext.rightFloat;
        break;
    case 3:
        g_scrContext.floatResult = g_scrContext.leftFloat / g_scrContext.rightFloat;
        break;
    case 4:
        if (g_scrContext.leftFloat == 0.0f && g_scrContext.rightFloat == 0.0f) {
            g_scrContext.intResult = 0;
        } else {
            g_scrContext.intResult = 1;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 5:
        if (g_scrContext.leftFloat != 0.0f && g_scrContext.rightFloat != 0.0f) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 6:
        if (g_scrContext.leftFloat == g_scrContext.rightFloat) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 7:
        if (g_scrContext.leftFloat != g_scrContext.rightFloat) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 8:
        if (g_scrContext.leftFloat < g_scrContext.rightFloat) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 9:
        if (g_scrContext.leftFloat > g_scrContext.rightFloat) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 10:
        if (g_scrContext.leftFloat <= g_scrContext.rightFloat) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    case 11:
        if (g_scrContext.leftFloat >= g_scrContext.rightFloat) {
            g_scrContext.intResult = 1;
        } else {
            g_scrContext.intResult = 0;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
        return;
    }
    scriptVmPush(process, SCRIPT_VM_TAG_FLOAT, *(u32 *)&g_scrContext.floatResult);
    return;

}

} /* extern "C" */
