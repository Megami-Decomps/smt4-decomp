/* Tail call into the function that follows; the linker removes the branch. */
#include "addon/QuestScriptLoader.h"
extern "C" u32 questSysUpdateLoad(AocScriptHolder *holder)
{
    return questSysLoadStep(holder);
}
