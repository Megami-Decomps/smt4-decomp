#include "shard/Shard0050.h"

extern "C" {

extern s32 nn_cec_CTR_MessageBox_GetMessHeader(u32 box, s32 index, u32 flags);
extern u32 releaseOrCopyHandle(u8 *buffer, s32 source);
extern void FUN_001a9110(u32 *dest, u32 src);

u32 nn_cec_CTR_MessageBox_GetMessageId(u32 box, u32 *out, s32 index, u32 flags)
{
    s32 header;
    u32 id;
    u8 buffer[8];

    header = nn_cec_CTR_MessageBox_GetMessHeader(box, index, flags);
    if (header == 0 || header == -0x20) {
        id = 0xC8810BEF;
    } else {
        if (out != 0) {
            id = releaseOrCopyHandle(buffer, header + 0x20);
            FUN_001a9110(out, id);
        }
        id = 0;
    }
    return id;
}

} /* extern "C" */
