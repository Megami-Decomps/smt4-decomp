/* NON_MATCHING: owner/mask spills are hoisted to entry and the inner hexadecimal loop is strength-reduced; retail delays spills and keeps a count-up cursor loop. */
#include "common.h"

extern "C" {
u32 FUN_002e2ecc(u32 owner, u32 mask);
u32 FUN_002e2fce(u32 owner, u32 mask, const char *text);
u8 *FUN_002e2ec0(void);

// An asterisk introduces five hexadecimal words; the mask selects which to replace.
u32 FUN_002e2f6a(u32 owner, u32 mask, const char *text)
{
    if (mask == 0 || (mask >> 5) != 0)
        return 0;
    if (text != NULL) {
        if (*text != '*')
            return FUN_002e2fce(owner, mask, text);
        const u8 *hex = reinterpret_cast<const u8 *>(text + 1);
        for (s32 index = 0; index < 5; ++index) {
            u32 value = 0;
            for (s32 digit = 0; digit < 8; ++digit) {
                u32 character = *hex++;
                if (character <= '9')
                    character -= '0';
                else
                    character -= 'a' - 10;
                value = (value << 4) | character;
            }
            if (mask & (1u << index))
                reinterpret_cast<u32 *>(FUN_002e2ec0())[index] = value;
        }
    }
    return FUN_002e2ecc(owner, mask);
}
}
