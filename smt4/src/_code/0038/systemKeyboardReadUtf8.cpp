#include "nn/swkbd/SoftwareKeyboardConfig.h"
#include "nn/Result.h"
#include "shard/W6_W6Match3_MapMarkerModels.h"

extern "C" {
void nn_swkbd_CTR_InitializeConfig(SoftwareKeyboardConfig *);
u32 nn_swkbd_CTR_GetSharedMemorySize(const SoftwareKeyboardConfig *, u32, u32);
void FUN_00100c74(u16 *, const u16 *, u32);
void FUN_00147390(void);
void FUN_003617bc(void);
void FUN_003617ec(void);
s32 FUN_00361678(u32 *, SoftwareKeyboardConfig *, void *, u32, u32, u32, u32, u32, u32);
s32 FUN_0035a404(char *, s32 *, const u16 *, s32 *);
void asdFatalError(void);
void rt_memclr(void *, u32);
extern u8 DAT_00477000[4096];

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
    FUN_00100c74(config.hintText, hint, 65);
    u32 sharedSize = nn_swkbd_CTR_GetSharedMemorySize(&config, 0, 0);
    FUN_00147390();
    FUN_003617bc();
    FUN_003617ec();
    DAT_00477000[4095] = 0;
    u32 result;
    if (FUN_00361678(&result, &config, DAT_00477000, sharedSize, requestOption, 0, 0, 0, 0)
        && config.response == 2) {
        s32 remaining = -1;
        s32 written; // The count-only query writes the required UTF-8 byte count.
        if (nnResultIsFailure(FUN_0035a404(NULL, &written,
                reinterpret_cast<const u16 *>(DAT_00477000) + config.textOffset, &remaining)))
            asdFatalError();
        rt_memclr(output, capacity);
        if (nnResultIsFailure(FUN_0035a404(output, &written,
                reinterpret_cast<const u16 *>(DAT_00477000) + config.textOffset, &remaining)))
            asdFatalError();
        return 1;
    }
    return 0;
}
}
