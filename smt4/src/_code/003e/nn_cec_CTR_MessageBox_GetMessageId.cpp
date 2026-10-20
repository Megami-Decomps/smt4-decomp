#include "common.h"

extern "C" {

int FUN_002ad8b4(int dst, u32 value);
extern u32 FUN_00238c80(u8 *buffer, int source);
extern u32 nn_cec_CTR_MessageBox_GetMessHeader(u32 box, int a, u32 b);

u32 nn_cec_CTR_MessageBox_GetMessageId(u32 box, int out, int a, u32 b)
{
    int header;
    u32 result;
    u8 buffer[8];

    header = nn_cec_CTR_MessageBox_GetMessHeader(box, a, b);
    if (header == 0 || header == -0x20) {
        result = 0xc8810bef;
    } else {
        if (out != 0) {
            result = FUN_00238c80(buffer, header + 0x20);
            FUN_002ad8b4(out, result);
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
