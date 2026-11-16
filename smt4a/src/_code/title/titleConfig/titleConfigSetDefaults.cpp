#include "common.h"

struct TitleConfigBytes {
    u8 unk00; // 0x00
    u8 unk01; // 0x01
    u8 unk02; // 0x02
    u8 unk03; // 0x03
};

extern "C" {
extern TitleConfigBytes g_titleConfigValues;

void titleConfigSetDefaults(void)
{
    g_titleConfigValues.unk00 = 0x32;
    g_titleConfigValues.unk01 = 0x50;
    g_titleConfigValues.unk02 = 0x32;
    g_titleConfigValues.unk03 = 0x30;
}
}
