/* NON_MATCHING: branch layout and the action-block addressing (block at +0x300, kind at +42/+58) now match retail; the 64-bit mask tests differ in register choice (retail uses ldrd for the second mask, the build ldr/ldr). */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/Table04Record.h"

/* The combatant's action block from offset 0x300: the single action and the ten available ones. */
struct ActionBlock {
    u8 unk00[0x28];
    BtlCombatantActionA single;
    u8 unk30[8];
    BtlCombatantActionA available[10];
};

extern "C" {
s32 FUN_002a6a38(const void *);
}

/* Test applicable skill records, using the single action for restricted combatants. */
extern "C" u32 FUN_003248e4(const BtlCombatantEntryA *entry)
{
    if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 ||
        (entry->flags & g_btlCandidateMasks.singleAction) != 0) {
        const ActionBlock *list = reinterpret_cast<const ActionBlock *>(reinterpret_cast<const u8 *>(entry) + 0x300);
        if (list->single.kind == 2 || list->single.kind == 3) {
            void *record = dataTable04FindById(list->single.id);
            if (record != NULL && FUN_002a6a38(record) != 0) {
                return 1;
            }
        }
    } else {
        for (s32 i = 0; i < 10; ++i) {
            const ActionBlock *list = reinterpret_cast<const ActionBlock *>(reinterpret_cast<const u8 *>(entry) + 0x300);
            if (list->available[i].kind == 2 || list->available[i].kind == 3) {
                void *record = dataTable04FindById(list->available[i].id);
                if (record != NULL && FUN_002a6a38(record) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
