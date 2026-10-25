/* NON_MATCHING: byte-mask materialization, zero-result return sharing and saved registers differ. */
#include "map/mapDepart.h"
#include <stddef.h>

struct InteractionVariantFlags { s8 bits[8]; };
struct InteractionFlagBankView {
    u8 unk000[0x2F0];
    InteractionVariantFlags extended[320];
    InteractionVariantFlags normal[1];
};
typedef char InteractionFlagBankOffsets[offsetof(InteractionFlagBankView, normal) == 0xCF0 ? 1 : -1];
extern "C" {
extern GameStateA g_gameState;
InteractionFlagBankView *FUN_002c2710();
s32 gameFlagIsSet(u32);

bool FUN_004083a8(s32 id, u32 variant)
{
    InteractionFlagBankView *save = FUN_002c2710();
    InteractionVariantFlags *flags = id > 191 ? &save->extended[id] : &save->normal[id];
    if (id == 0x93) {
        if (gameFlagIsSet(0x9D))
            return false;
    } else if (id == 0xBB || id == 0xBC || id == 0xBD) {
        return true;
    } else if (id == 0xBE) {
        if (variant != 2)
            return true;
    } else if (id == 0x79) {
        if (variant == 3)
            return g_gameState.mode == 0x17 && g_gameState.submode == 6 && (flags->bits[0] & 8);
    } else if (id == 0x7A) {
        if (variant == 2)
            return g_gameState.mode == 0x17 && g_gameState.submode == 1 && (flags->bits[0] & 4);
    } else if (id == 0xB3) {
        if (variant == 0x2D || variant == 0x2E)
            return true;
        if (variant == 0x2F || variant == 0x30)
            return true;
        if (variant == 0x31 || variant == 0x32)
            return true;
        if (variant == 0x33 || variant == 0x34)
            return true;
        if (variant == 0x2A || variant == 0x2B || variant == 0x2C)
            return true;
    }
    return (flags->bits[variant >> 3] & static_cast<u8>(1 << (variant & 7))) != 0;
}
}
