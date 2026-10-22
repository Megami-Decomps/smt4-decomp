/* NON_MATCHING: The composite hex loop is pair-unrolled; the default locale name uses a literal relocation instead of retail's ADR. */
#include "common.h"

extern "C" {
u8 *FUN_002e2ec0(void);
extern u8 LAB_002e3064;

/* Returns a category name, or formats all five encoded references for a composite request. */
u8 *FUN_002e2ecc(u8 *buffer, u32 categories)
{
    if ((categories & ~(0u - categories)) != 0) {
        u8 *cursor = buffer + 1;
        *buffer = '*';
        const u32 *references = reinterpret_cast<const u32 *>(FUN_002e2ec0());
        for (s32 category = 0; category < 5; ++category) {
            u32 reference = references[category];
            for (s32 digitIndex = 0; digitIndex < 8; ++digitIndex) {
                u32 digit = reference >> 28;
                reference <<= 4;
                *cursor++ = static_cast<u8>(digit > 9 ? digit + ('a' - 10) : digit + '0');
            }
        }
        *cursor = 0;
        return buffer;
    }
    u32 reference;
    switch (categories) {
    case 1: reference = reinterpret_cast<const u32 *>(FUN_002e2ec0())[0]; break;
    case 2: reference = reinterpret_cast<const u32 *>(FUN_002e2ec0())[1]; break;
    case 4: reference = reinterpret_cast<const u32 *>(FUN_002e2ec0())[2]; break;
    case 8: reference = reinterpret_cast<const u32 *>(FUN_002e2ec0())[3]; break;
    case 16: reference = reinterpret_cast<const u32 *>(FUN_002e2ec0())[4]; break;
    default: return NULL;
    }
    if (reference == 0) {
        return &LAB_002e3064;
    }
    u32 address = reference & ~3u;
    return reinterpret_cast<u8 *>(address + *reinterpret_cast<const s32 *>(address - 4));
}
}
