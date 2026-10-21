#include "shard/W6_W6Match3_AppletMessageConfig.h"

extern "C" {
void textNormalizeFullwidthAscii(const u16* source, u16* destination, s32 capacity);
void FUN_0013c584(AppletMessageConfig* config);
void FUN_0013c5f4(u8* result, AppletMessageConfig* config);
void FUN_0013c684(void);
void FUN_0013c6b4(void);
void FUN_00147390(void);

void appletShowTextMessage(const u16* text)
{
    AppletMessageConfig config;
    FUN_0013c584(&config);
    textNormalizeFullwidthAscii(text, config.message, 0x76c);
    config.unk00 = 1;
    config.enabled = 0;
    FUN_00147390();
    FUN_0013c684();
    FUN_0013c6b4();
    u8 result;
    FUN_0013c5f4(&result, &config);
}

} /* extern "C" */
