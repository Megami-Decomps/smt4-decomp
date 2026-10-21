/* Returns the signed byte flag at g_saveLoadUIBase. */
#include "common.h"

extern "C" {

extern s8 g_saveLoadUIBase;

s32 saveLoadUIGetFlag(void)
{
    return g_saveLoadUIBase;
}

}
