/* NON_MATCHING: Mask reads use a relocated member address and LDM, with separate state-word addresses instead of retail's shared base. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

struct ReflectionTargetValue {
    /* 0x000 */ u8 unk000[0x1CC];
    /* 0x1CC */ u16 unk1CC;
};
extern "C" {
extern BtlMainGlobalsA g_btlMain;
u32 hasFlag80Or1000(u32 id, u32 *flags);
void FUN_004fefac(s32 id, u32 options, u32 argument);

/* Writes the target value and queues its reflection action when the battle mask permits it. */
void FUN_003f2638(const BtlMainStateA *state, s32 value, ReflectionTargetValue *target, s32 force)
{
    if (force == 0) {
        ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (unit != NULL && hasFlag80Or1000(g_btlScriptUnit, reinterpret_cast<u32 *>(unit)) != 0) {
            u64 flags = static_cast<u64>(state->stateFlags.words[0]) |
                        (static_cast<u64>(state->stateFlags.words[1]) << 32);
            if ((flags & g_btlMain.suppressionMask) == 0) {
                return;
            }
        }
    }
    if (value != 0 && target != NULL) {
        target->unk1CC = static_cast<u16>(value);
        FUN_004fefac(10, 0, reinterpret_cast<u32>(target));
    }
}
}
