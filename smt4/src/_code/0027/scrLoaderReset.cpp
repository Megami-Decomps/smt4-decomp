#include "util/MemoryHelpers_VariantB.h"
#include "addon/QuestScriptLoader.h"
#include "script/scrScriptProcess.h"

extern "C" {

void scrLoaderReset(AocScriptHolder *obj)
{
    obj->entry = 0xf;
    obj->state = 0;
    if (obj->script != 0) {
        asdMemFree(obj->script);
        obj->script = 0;
    }
    if (obj->messages != 0) {
        asdMemFree(obj->messages);
        obj->messages = 0;
    }
    if (obj->process != 0) {
        scrScriptProcessDestroy(obj->process);
        obj->process = 0;
    }
}

} /* extern "C" */
