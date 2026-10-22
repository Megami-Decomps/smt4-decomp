/* NON_MATCHING: category-mask branch layout and shared suffix placement differ. */
#include "common.h"

extern "C" {
// Return the enabled channels selected by an effect's channel category.
u32 FUN_0032b278(const void *effect, u32 enabled)
{
    // The category follows the end of the shared selection-template view.
    struct EffectChannelsView {
        u8 unk00[0x38];
        u32 category;
    };
    const EffectChannelsView *channels = static_cast<const EffectChannelsView *>(effect);
    u32 result = 0;
    if ((channels->category & 0x7f) != 0 && enabled != 0) {
        u32 category = channels->category & 0x7f;
        if (category == 12) {
            if (enabled & 0x20) result = 0x20;
            if (enabled & 0x40) result |= 0x40;
            if (enabled & 0x80) result |= 0x80;
            if (enabled & 0x100) result |= 0x100;
            if (enabled & 0x200) result |= 0x200;
        } else if (category == 13) {
            if (enabled & 0x80) result = 0x80;
        } else if (category == 18) {
            if (enabled & 0x40) result = 0x40;
            if (enabled & 0x80) result |= 0x80;
            if (enabled & 0x100) result |= 0x100;
        } else if (category == 14) {
            result = enabled;
        } else if (category == 21) {
            if (enabled & 0x20) result = 0x20;
            if (enabled & 0x200) result |= 0x200;
        } else {
            u32 bit = 1u << category;
            if (enabled & bit) result = bit;
        }
    }
    return result;
}
}
