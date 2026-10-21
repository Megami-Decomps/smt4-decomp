#include "shard/W6_W6Match3_AppletMessageConfig.h"

extern "C" {
void textNormalizeFullwidthAscii(const u16* source, u16* destination, s32 capacity);
void FUN_0018c740(AppletMessageConfig* config);
void FUN_0018c7b0(u8* result, AppletMessageConfig* config);
void FUN_0018c840(void);
void FUN_0018c870(void);
void FUN_001a1f5c(void);

void appletShowTextMessage(const u16* text)
{
    AppletMessageConfig config;
    FUN_0018c740(&config);
    textNormalizeFullwidthAscii(text, config.message, 0x76c);
    config.unk00 = 1;
    config.enabled = 0;
    FUN_001a1f5c();
    FUN_0018c840();
    FUN_0018c870();
    u8 result;
    FUN_0018c7b0(&result, &config);
}

} /* extern "C" */
