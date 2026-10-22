/* NON_MATCHING: error switch bounds and communication-card literal placement differ. */
#include "addon/CecCard.h"

extern "C" {
extern u32 g_resourceDispatchContext;
extern char s__SHIN_MEGAMITENSEI_4_0057f2cc[33];
extern char s_Shin_Megami_Tensei_I_0057f34a[34];
u32 FUN_0042d694(u32);
s32 FUN_003a476c(u32, u32, const char *, const void *, u32, const char *, u32, u32);
void cecSettingsSet(s32, s32, s32, s32);
s32 cecWriteMessageBoxNameAndData(u32, u32, const char *, const void *, u32);

// Initialize the card message box, translating its state to menu status bits.
u32 FUN_004bb35c(CecCardOwner *owner)
{
    u32 box = FUN_0042d694(0x19a2);
    s32 result = FUN_003a476c(box, g_resourceDispatchContext, s__SHIN_MEGAMITENSEI_4_0057f2cc,
                            owner->data, 0x1200, s_Shin_Megami_Tensei_I_0057f34a, 32, 99);
    switch (result) {
    case 2:
    case 3:
    case 5:
    case 7:
        return 0x11;
    case 4:
        return 3;
    case 6:
        return 0x81;
    default:
        cecSettingsSet(2, 3, 255, 0);
        box = FUN_0042d694(0x19a2);
        result = cecWriteMessageBoxNameAndData(box, g_resourceDispatchContext,
                                             s_Shin_Megami_Tensei_I_0057f34a, owner->data, 0x1200);
        return result == 5 ? 0x11 : 0;
    }
}
}
