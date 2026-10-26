/* Returns the signed flag byte at +0x2015 of the global session object, or 0 when there is no session. */
#include "shard/Shard0033.h"
#include "code/Code0028_Smt4a.h"

extern "C" {

extern ObjBRef g_gameGlobals;

s32 FUN_002857b8(void)
{
    ObjB *session = g_gameGlobals.instance;

    s32 value = 0;

    if (session != NULL) {
        value = session->unk2015;
    }
    return value;
}

}
