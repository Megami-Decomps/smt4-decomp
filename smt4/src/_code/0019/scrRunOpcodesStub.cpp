#include "script/ScriptVm.h"

extern "C" {

u32 scrRunOpcodes(ScriptProcess *process);

/* Forwards to scrRunOpcodes, the function that follows it. */
u32 scrRunOpcodesStub(ScriptProcess *process)
{
    return scrRunOpcodes(process);
}

} /* extern "C" */
