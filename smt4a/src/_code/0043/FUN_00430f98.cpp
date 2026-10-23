/* NON_MATCHING: the two regional language masks load inside their cases instead of before the switch. */
#include "nn/Result.h"
extern "C" {
extern u8 DAT_0053f34c;
s32 FUN_00189738(void *value, u32 size, u32 block);
void FUN_0016e800(s32 result, u32 location);
u32 FUN_00431270(void);
}

static __inline void checkLanguageResult(s32 result, u32 location)
{
    if (nnResultIsFailure(result))
        FUN_0016e800(result, location);
}

/* Use the configured language only if it is supported by the console's region. */
extern "C" u32 FUN_00430f98(void)
{
    u8 language = DAT_0053f34c;
    s32 result = FUN_00189738(&language, 1, 0xA0002);
    checkLanguageResult(result, __current_pc());
    u8 configuredLanguage = language;
    u32 region = FUN_00431270();
    bool supported;
    switch (region) {
    case 0:
        supported = (1u << configuredLanguage) & 1;
        break;
    case 1:
        supported = ((1u << configuredLanguage) & 0x226) != 0;
        break;
    case 2:
        supported = ((1u << configuredLanguage) & 0x73e) != 0;
        break;
    case 4:
        supported = ((1u << configuredLanguage) & 0x40) >> 6;
        break;
    case 5:
        supported = ((1u << configuredLanguage) & 0x80) >> 7;
        break;
    case 6:
        supported = ((1u << configuredLanguage) & 0x800) >> 11;
        break;
    default:
        return configuredLanguage;
    }
    if (supported)
        return configuredLanguage;
    switch (region) {
    default:
        return 0;
    case 1:
    case 2:
        return 1;
    case 4:
        return 6;
    case 5:
        return 7;
    case 6:
        return 11;
    }
}
