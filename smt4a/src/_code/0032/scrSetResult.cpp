#include "script/ScriptVm.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Stores the script command's result and clears the waiting flag. */
void scrSetResult(s32 value)
{
    ScriptVmProcess *process = g_scrContext.active;

    process->tags[SCRIPT_VM_RESULT_SLOT] = SCRIPT_VM_TAG_INT;
    process->values[SCRIPT_VM_RESULT_SLOT].i = value;
}

} /* extern "C" */
