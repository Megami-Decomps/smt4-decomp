/* Returns the signed flag byte at +0x20F0 of the global session object, or 1 when there is no session. */
#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

s32 FUN_0039c608(void)
{
    ObjB *session = g_gameGlobals.instance;

    if (session == NULL) {
        return 1;
    }
    return session->unk20F0;
}

}
