#include "script/ScriptVm.h"
#include "script/ScriptArgs.h"

extern "C" {

void scrSetResult(s32 result)
{
    ScriptProcess *process = g_scrContext.active;

    process->tags[SCRIPT_VM_RESULT_SLOT] = SCRIPT_VM_TAG_INT;
    process->values[SCRIPT_VM_RESULT_SLOT].i = result;
}

} /* extern "C" */
