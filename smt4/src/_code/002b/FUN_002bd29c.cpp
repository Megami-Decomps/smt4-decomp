#include "sound/VoiceManagerCalls.h"

extern "C" {

s32 FUN_00155e54(u8 *manager, u32 first, u32 second, u32 third);

extern u8 g_nnSndVoiceManager; /* 0x4e8568 */

s32 FUN_002bd29c(u32 first, u32 second, u32 third)
{
    return FUN_00155e54(&g_nnSndVoiceManager, first, second, third);
}

} /* extern "C" */
