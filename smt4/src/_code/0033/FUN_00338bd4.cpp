/* NON_MATCHING: armcc hoists entry-index arithmetic before the prologue and schedules the reflection arguments differently from retail. */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"

#include "shard/Shard0034.h"
struct ReflectBattleState {
    u8 unk0000[0x1e98];
    ModelParameterRecord *records; // 0x1e98
    u8 unk1e9c[0x124];
    BtlEntry *entries; // 0x1fc0
};
extern "C" void btlReflectInitKind9(u32 first, u32 second, ModelParameterRecord *record, u32 mode, u32 kind);

// Initialize the selected combatant's model reflection when both indices are valid.
extern "C" void FUN_00338bd4(ReflectBattleState *state, s32 index)
{
    if (index < 0)
        return;
    s16 model = state->entries[index].members.ids[0];
    if (model >= 0)
        btlReflectInitKind9(0, 0, &state->records[model], 8, 5);
}
