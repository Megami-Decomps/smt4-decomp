#include "nn/swkbd/SoftwareKeyboardConfig.h"
#include "nn/Result.h"
#include "shard/systemKeyboardReadUtf8.h"

extern "C" {
void nn_swkbd_CTR_InitializeConfig(SoftwareKeyboardConfig *);
u32 nn_swkbd_CTR_GetSharedMemorySize(const SoftwareKeyboardConfig *, u32, u32);
void FUN_002e98ea(u16 *, const u16 *, u32);
void FUN_001a1f5c(void);
void FUN_0043c958(void);
void FUN_0043c988(void);
s32 FUN_0043c808(u32 *, SoftwareKeyboardConfig *, void *, u32, u32, u32, u32, u32, u32);
s32 FUN_00431594(char *, s32 *, const u16 *, s32 *);
void sysFatalBreak(void);
void rt_memclr(void *, u32);
extern u8 DAT_005c5000[4096];

u32 systemKeyboardReadUtf8(u32 unused, char *output, const u16 *hint, u32 capacity,
                 s32 password, s32 filter, u32 requestOption)
{
    SoftwareKeyboardConfig config;
    nn_swkbd_CTR_InitializeConfig(&config);
    config.maximumLength = capacity;
    config.options[0] = 0;
    config.options[2] = 0;
    if (password)
        config.passwordMode = 1;
    config.type = 1;
    config.validation = 4;
    config.options[1] = 1;
    if (filter)
        config.filterFlags |= 1;
    FUN_002e98ea(config.hintText, hint, 65);
    u32 sharedSize = nn_swkbd_CTR_GetSharedMemorySize(&config, 0, 0);
    FUN_001a1f5c();
    FUN_0043c958();
    FUN_0043c988();
    DAT_005c5000[4095] = 0;
    u32 result;
    if (FUN_0043c808(&result, &config, DAT_005c5000, sharedSize, requestOption, 0, 0, 0, 0)
        && config.response == 2) {
        s32 remaining = -1;
        s32 written; // The count-only query writes the required UTF-8 byte count.
        if (nnResultIsFailure(FUN_00431594(NULL, &written,
                reinterpret_cast<const u16 *>(DAT_005c5000) + config.textOffset, &remaining)))
            sysFatalBreak();
        rt_memclr(output, capacity);
        if (nnResultIsFailure(FUN_00431594(output, &written,
                reinterpret_cast<const u16 *>(DAT_005c5000) + config.textOffset, &remaining)))
            sysFatalBreak();
        return 1;
    }
    return 0;
}
}
