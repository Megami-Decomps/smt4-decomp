/* NON_MATCHING: the signed id test (ldrsh; cmp #0; blt) is now present; retail keeps the id-list offset 8 and the data offset 0x164 in registers (register-offset ldrsh, `mov r0,#356`), the build folds them into immediates (28 vs 31 rows). */
#include "common.h"
#include "battle/BtlGlobals.h"

struct UnitMember {
    u8 unk00[8];        // 0x00
    s16 ids[50];        // 0x08
    u8 unk6C[0xF8];     // 0x6C
    u8 data[0x2A4];     // 0x164
};

extern "C" {

/* Finds the unit (of 109) whose id list contains `id` and returns its data block (offset 0x164); NULL when none does. */
BtlUnitDataA *btlFindEntryBlockByMemberId(BtlMainStateA *state, s32 id)
{
    UnitMember *units = reinterpret_cast<UnitMember *>(state->entries);
    for (s32 unit = 0; unit < 109; unit++) {
        for (s32 i = 0; i < 50; i++) {
            s32 entry = units[unit].ids[i];

            if (entry < 0) {
                break;
            }
            if (entry == id) {
                return reinterpret_cast<BtlUnitDataA *>(units[unit].data);
            }
        }
    }
    return NULL;
}

} /* extern "C" */
