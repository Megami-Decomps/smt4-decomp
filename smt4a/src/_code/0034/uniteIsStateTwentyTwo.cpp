#include "camp/Unite/UniteGlobals.h"

extern "C" {

s32 uniteIsStateTwentyTwo(void)
{
    UniteWorkA *object = g_unite;
    if (object == NULL) {
        return 0;
    }
    return object->request == 22 || object->scriptA.pendingRequest == 22;
}

} /* extern "C" */
