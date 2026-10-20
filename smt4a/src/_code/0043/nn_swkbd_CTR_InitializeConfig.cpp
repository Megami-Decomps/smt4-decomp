#include "shard/Shard0043.h"

extern "C" {

typedef struct SwkbdConfig {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u32 unk010;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ u32 unk018;
    /* 0x01C */ u32 unk01C;
    /* 0x020 */ u16 unk020;
    /* 0x022 */ u16 unk022;
    /* 0x024 */ u16 unk024;
    /* 0x026 */ u8 unk026[0x66];
    /* 0x08C */ u32 unk08C;
    /* 0x090 */ u8 unk090[0x82];
    /* 0x112 */ u8 unk112;
    /* 0x113 */ u8 unk113;
    /* 0x114 */ u8 unk114;
    /* 0x115 */ u8 unk115;
    /* 0x116 */ u8 unk116;
    /* 0x117 */ u8 unk117;
    /* 0x118 */ u8 unk118;
    /* 0x119 */ u8 unk119;
    /* 0x11A */ u8 unk11A;
    /* 0x11B */ u8 unk11B;
    /* 0x11C */ u8 unk11C;
    /* 0x11D */ u8 unk11D;
    /* 0x11E */ u8 unk11E[2];
    /* 0x120 */ u32 unk120;
    /* 0x124 */ u32 unk124;
    /* 0x128 */ u32 unk128;
    /* 0x12C */ u32 unk12C;
    /* 0x130 */ u32 unk130;
    /* 0x134 */ u16 unk134;
    /* 0x136 */ u8 unk136[2];
    /* 0x138 */ u32 unk138;
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ u32 unk140;
    /* 0x144 */ u32 unk144;
    /* 0x148 */ u16 unk148;
    /* 0x14A */ u8 unk14A[2];
    /* 0x14C */ u32 unk14C;
    /* 0x150 */ u8 unk150[0x204];
    /* 0x354 */ u8 unk354;
} SwkbdConfig;

extern void rt_memclr(u8 *dst, s32 size);
extern void sysMemClear(void *ptr, u32 size);

/* Fills a software keyboard config with its defaults. */
void nn_swkbd_CTR_InitializeConfig(SwkbdConfig *config)
{
    config->unk000 = 0;
    config->unk004 = 1;
    config->unk008 = 0;
    config->unk00C = 0;
    config->unk010 = 0;
    config->unk014 = 0;
    config->unk018 = 0;
    config->unk01C = 0;
    config->unk020 = 65000;
    config->unk022 = 0;
    config->unk024 = 0;
    rt_memclr(config->unk026, 0x66);
    config->unk08C = 0;
    sysMemClear(config->unk090, 0x82);
    config->unk112 = 0;
    config->unk113 = 1;
    config->unk114 = 0;
    config->unk115 = 1;
    config->unk116 = 0;
    config->unk117 = 1;
    config->unk118 = 0;
    config->unk119 = 0;
    config->unk11A = 0;
    config->unk11B = 0;
    config->unk11C = 1;
    config->unk11D = 0;
    config->unk354 = 0;
    config->unk120 = 0xFFFFFFFF;
    config->unk124 = 0xFFFFFFFF;
    config->unk128 = 0xFFFFFFFF;
    config->unk12C = 0xFFFFFFFF;
    config->unk130 = 0;
    config->unk134 = 0;
    config->unk138 = 0xFFFFFFFF;
    config->unk13C = 0xFFFFFFFF;
    config->unk140 = 0xFFFFFFFF;
    config->unk144 = 0xFFFFFFFF;
    config->unk148 = 0;
    config->unk14C = 0;
    sysMemClear(config->unk150, 0x202);
}

} /* extern "C" */
