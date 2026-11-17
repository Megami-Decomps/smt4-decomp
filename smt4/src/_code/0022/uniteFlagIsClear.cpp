#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* True while the unite sub-object's flag is clear. */
u8 uniteFlagIsClear(void)
{
    UniteSubState *sub = &g_unite->preview.sub;

    return sub->flag == 0;
}

} /* extern "C" */
