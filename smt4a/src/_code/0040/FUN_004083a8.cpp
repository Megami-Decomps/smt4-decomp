#include "map/InteractionFlags.h"
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include <stddef.h>

struct InteractionVariantFlags { u8 bits[8]; };
struct InteractionFlagBankView {
    u8 unk000[0x2F0];
    InteractionVariantFlags extended[320];
    InteractionVariantFlags normal[1];
};
typedef char InteractionFlagBankOffsets[offsetof(InteractionFlagBankView, normal) == 0xCF0 ? 1 : -1];
extern "C" {
InteractionFlagBankView *saveGetFlagRowTable();
s32 gameFlagIsSet(u32);

/* Whether interaction `id` has variant `variant` enabled: fixed answers for a few ids, the scene
 * state for ids 0x79/0x7A, else the variant's bit in the id's flag row. */
bool FUN_004083a8(s32 id, u32 variant)
{
    InteractionFlagBankView *save = saveGetFlagRowTable();
    InteractionVariantFlags *flags = id > 191 ? &save->extended[id] : &save->normal[id];
    u32 bit = 1; /* variant bit 0, shifted to the variant below */
    if (id == 0x93) {
        if (gameFlagIsSet(0x9D))
            return false;
    } else if (id == 0xBB || id == 0xBC || id == 0xBD) {
        return true;
    } else if (id == 0xBE) {
        if (variant != 2)
            return true;
    } else if (id == 0x79) {
        if (variant == 3) {
            if (g_gameState.mapId != 0x17 || g_gameState.areaId != 6)
                return false;
            if (flags->bits[0] & 8)
                return true;
            return false;
        }
    } else if (id == 0x7A) {
        if (variant == 2) {
            if (g_gameState.mapId != 0x17 || g_gameState.areaId != 1)
                return false;
            if (flags->bits[0] & 4)
                return true;
            return false;
        }
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
    u8 mask = bit << (variant & 7);
    return (flags->bits[variant >> 3] & mask) != 0;
}
}
