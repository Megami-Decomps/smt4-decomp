/* NON_MATCHING: readable rebuild of the script VM's binary arithmetic/compare opcode (integer or float, picked by the operand types); the operand registers now address the real g_scrContext fields from one base, but retail pushes each case's result at its own tail and tests the compare cases separately, where this build shares one push per path and the stack-tag loads reuse the depth differently. */
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
    if ((g_scrContext.topTag != SCRIPT_VM_TAG_INT && g_scrContext.topTag != SCRIPT_VM_TAG_INT_VAR) ||
        (g_scrContext.belowTag != SCRIPT_VM_TAG_INT && g_scrContext.belowTag != SCRIPT_VM_TAG_INT_VAR)) {
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
            g_scrContext.intResult = g_scrContext.leftFloat != 0.0f || g_scrContext.rightFloat != 0.0f;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 5:
            g_scrContext.intResult = g_scrContext.leftFloat != 0.0f && g_scrContext.rightFloat != 0.0f;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 6:
            g_scrContext.intResult = g_scrContext.leftFloat == g_scrContext.rightFloat;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 7:
            g_scrContext.intResult = g_scrContext.leftFloat != g_scrContext.rightFloat;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 8:
            g_scrContext.intResult = g_scrContext.leftFloat < g_scrContext.rightFloat;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 9:
            g_scrContext.intResult = g_scrContext.rightFloat < g_scrContext.leftFloat;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 10:
            g_scrContext.intResult = g_scrContext.leftFloat <= g_scrContext.rightFloat;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        case 11:
            g_scrContext.intResult = g_scrContext.rightFloat <= g_scrContext.leftFloat;
            scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
            return;
        }
        scriptVmPush(process, SCRIPT_VM_TAG_FLOAT, *(u32 *)&g_scrContext.floatResult);
        return;
    }
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
        g_scrContext.intResult = g_scrContext.leftInt != 0 || g_scrContext.rightInt != 0;
        break;
    case 5:
        g_scrContext.intResult = g_scrContext.leftInt != 0 && g_scrContext.rightInt != 0;
        break;
    case 6:
        g_scrContext.intResult = g_scrContext.leftInt == g_scrContext.rightInt;
        break;
    case 7:
        g_scrContext.intResult = g_scrContext.leftInt != g_scrContext.rightInt;
        break;
    case 8:
        g_scrContext.intResult = g_scrContext.leftInt < g_scrContext.rightInt;
        break;
    case 9:
        g_scrContext.intResult = g_scrContext.rightInt < g_scrContext.leftInt;
        break;
    case 10:
        g_scrContext.intResult = g_scrContext.leftInt <= g_scrContext.rightInt;
        break;
    case 11:
        g_scrContext.intResult = g_scrContext.rightInt <= g_scrContext.leftInt;
        break;
    }
    scriptVmPush(process, SCRIPT_VM_TAG_INT, g_scrContext.intResult);
}

} /* extern "C" */
