#include "shard/W6_W6Match2_HelpResources.h"

extern "C" void campButtonHelpRelease();

// Release the owned help buffers and script, then release the shared help system.
extern "C" void helpResourcesRelease(HelpResources* resources)
{
    resources->state = 0;
    if (resources->first != NULL) {
        asdMemFree(resources->first);
        resources->first = NULL;
    }
    if (resources->second != NULL) {
        asdMemFree(resources->second);
        resources->second = NULL;
    }
    if (resources->script != NULL) {
        scrScriptProcessDestroy(resources->script);
        resources->script = NULL;
    }
    campButtonHelpRelease();
}
