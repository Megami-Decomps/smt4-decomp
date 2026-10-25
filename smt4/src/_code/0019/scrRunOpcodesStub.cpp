#include "script/ScriptVm.h"

extern "C" {

u32 scrRunOpcodes(ScriptVmProcess *process);

/* Forwards to scrRunOpcodes, the function that follows it. */
u32 scrRunOpcodesStub(ScriptVmProcess *process)
{
    return scrRunOpcodes(process);
}

} /* extern "C" */
