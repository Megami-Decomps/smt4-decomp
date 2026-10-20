#include "common.h"

extern "C" {

typedef struct NetState {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 dataSize;   /* bytes of valid data in DAT_006302d0, 0 = none */
} NetState;

extern NetState DAT_005949d8;
extern u8 DAT_006302d0[0x20];

void *rt_memcpy(void *dst, const void *src, u32 size);

/* Stores `size` (8..0x20) bytes of `data` in DAT_006302d0, or clears the stored data when `size` is 0. */
void netSetPayload(const void *data, u32 size)
{
    if (size == 0) {
        DAT_005949d8.dataSize = 0;
        return;
    }
    if (data != NULL && size >= 8 && size <= 0x20) {
        DAT_005949d8.dataSize = size;
        rt_memcpy(DAT_006302d0, data, size);
    }
}

} /* extern "C" */
