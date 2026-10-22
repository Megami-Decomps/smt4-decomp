/* NON_MATCHING: The composite hex loop is pair-unrolled; the default locale name uses a literal relocation instead of retail's ADR. */
#include "common.h"

extern "C" {
u8 *libcLocaleGetTables(void);
extern u8 LAB_002c69fc;

/* Returns a category name, or formats all five encoded references for a composite request. */
u8 *FUN_002c6864(u8 *buffer, u32 categories)
{
    if ((categories & ~(0u - categories)) != 0) {
        u8 *cursor = buffer + 1;
        *buffer = '*';
        const u32 *references = reinterpret_cast<const u32 *>(libcLocaleGetTables());
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
    case 1: reference = reinterpret_cast<const u32 *>(libcLocaleGetTables())[0]; break;
    case 2: reference = reinterpret_cast<const u32 *>(libcLocaleGetTables())[1]; break;
    case 4: reference = reinterpret_cast<const u32 *>(libcLocaleGetTables())[2]; break;
    case 8: reference = reinterpret_cast<const u32 *>(libcLocaleGetTables())[3]; break;
    case 16: reference = reinterpret_cast<const u32 *>(libcLocaleGetTables())[4]; break;
    default: return NULL;
    }
    if (reference == 0) {
        return &LAB_002c69fc;
    }
    u32 address = reference & ~3u;
    return reinterpret_cast<u8 *>(address + *reinterpret_cast<const s32 *>(address - 4));
}
}
