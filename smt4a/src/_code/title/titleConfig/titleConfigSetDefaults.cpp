#include "common.h"

struct TitleConfigBytes {
    u8 unk00; // 0x00
    u8 unk01; // 0x01
    u8 unk02; // 0x02
    u8 unk03; // 0x03
};

extern "C" {
extern TitleConfigBytes DAT_00588fc0;

void titleConfigSetDefaults(void)
{
    DAT_00588fc0.unk00 = 0x32;
    DAT_00588fc0.unk01 = 0x50;
    DAT_00588fc0.unk02 = 0x32;
    DAT_00588fc0.unk03 = 0x30;
}
}
