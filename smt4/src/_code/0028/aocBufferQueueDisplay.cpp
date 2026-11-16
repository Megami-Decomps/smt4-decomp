#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int fileQueueRequestAndWait(u32 a, u8 *buffer, u32 b, int c, int d, int e, int f);
extern u32 g_aocDisplay; /* 0x433130 */
extern int packageFindFileByTypeAndId(u32 a, u32 b, u32 c, u8 *buffer);

void aocBufferQueueDisplay(u32 a, u32 b, u32 c)
{
    int result;
    u8 buffer[128];

    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(buffer), 0x80));
    result = packageFindFileByTypeAndId(a, 8, b, buffer);
    if (result != 0) {
        fileQueueRequestAndWait(g_aocDisplay, buffer, c, result + 8, 1, 0x80, 0);
    }
}

} /* extern "C" */
