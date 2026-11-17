#include "util/MemoryHelpers_VariantB.h"
/* Resets the quest loader to entry 11, releasing its owned script resources. */
#include "addon/QuestScriptLoader.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern void buttonHelpCreate(u8 flag);

void scrLoaderResetWithFlag(AocScriptHolder *obj, u8 flag)
{
    obj->showButtonHelp = flag;
    obj->entry = 11;
    obj->state = 0;
    if (obj->script != NULL) {
        asdMemFree(obj->script);
        obj->script = NULL;
    }
    if (obj->messages != NULL) {
        asdMemFree(obj->messages);
        obj->messages = NULL;
    }
    if (obj->process != NULL) {
        scrScriptProcessDestroy(obj->process);
        obj->process = NULL;
    }
    if (obj->showButtonHelp != 0) {
        buttonHelpCreate(obj->showButtonHelp);
    }
}

}
