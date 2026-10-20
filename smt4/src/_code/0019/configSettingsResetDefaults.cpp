#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_001a1110(void);
int cecMessageIdClear(u8 *settings);
int memClear(void *ptr, int size);

void configSettingsResetDefaults(void)
{
    u8 *settings = g_gameDataBlocks.unk04 + 0x80;

    cecMessageIdClear(settings);
    settings[0] = 2;
    settings[1] = 2;
    settings[2] = 2;
    settings[3] = 1;
    settings[4] = 1;
    FUN_001a1110();
    memClear(g_gameDataBlocks.unk04, 0x80);
}

} /* extern "C" */
