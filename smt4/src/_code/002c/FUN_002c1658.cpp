/* NON_MATCHING: input/help switch ordering, shared mode-query register allocation and zero-result return paths differ; native active-kind helper boundary restored. */
#include "common.h"

extern "C" {
bool FUN_00124fe8(u32);
u32 padIsButtonRepeat(u32);
u32 padIsButtonPressed(u32);
u8 FUN_002c15fc(u32);
s32 buttonHelpKindIsTriggered(s8);
s32 buttonHelpKindIsPressed(s8);
}

static inline u32 queryPadButton(u32 button, s32 mode)
{
    switch (mode) {
    case 0: return padIsButtonRepeat(button);
    case 1: return padIsButtonPressed(button);
    case 2: return FUN_002c15fc(button);
    default: return 0;
    }
}

extern "C" s32 FUN_002c1658(s32 button, s32 mode)
{
    s8 helpKind = 0;
    switch (button) {
    case 0: helpKind = 1; break;
    case 1: helpKind = 2; break;
    case 7: helpKind = 6; break;
    case 8: helpKind = 5; break;
    case 9: helpKind = 3; break;
    case 10: helpKind = 4; break;
    }
    u32 result = queryPadButton(button, mode);
    if (result)
        return result;
    switch (button) {
    case 3: result = queryPadButton(12, mode); break;
    case 4: result = queryPadButton(13, mode); break;
    case 5: result = queryPadButton(14, mode); break;
    case 6: result = queryPadButton(15, mode); break;
    }
    if (result)
        return result;
    if (!helpKind)
        return 0;
    if (mode == 0)
        return buttonHelpKindIsPressed(helpKind);
    if (mode == 1)
        return buttonHelpKindIsTriggered(helpKind);
    if (mode == 2)
        return FUN_00124fe8(helpKind);
    return 0;
}
