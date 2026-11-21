#include "camp/Unite/UniteGlobals.h"

extern "C" {

extern u32 partyFindSupportedLevel(void *value);

void FUN_00223d9c(void)
{
    UniteWork *obj = g_unite;
    u32 value;

    if (obj != NULL) {
        value = partyFindSupportedLevel(obj->context);
        obj->unk9464 = value;
    }
}

} /* extern "C" */
