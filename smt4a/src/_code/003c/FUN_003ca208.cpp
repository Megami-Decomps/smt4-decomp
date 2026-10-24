#include "common.h"

struct AocJob {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u8 buffer[0x40];
    /* 0x7C */ u8 flag;
};

extern "C" {
extern AocJob *g_aocJob;
int rt_aeabi_memclr(void *block, int size);
}

extern "C" void FUN_003ca208(void)
{
    if (g_aocJob != NULL) {
        g_aocJob->flag = 0;
        rt_aeabi_memclr(g_aocJob->buffer, sizeof(g_aocJob->buffer));
    }
}
