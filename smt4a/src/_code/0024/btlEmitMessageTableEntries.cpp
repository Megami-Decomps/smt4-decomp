#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BattleHelpers.h"
#include <string.h>

struct BattleMessageEntry {
    char text[0x10]; /* 0x00 */
    s16 value;      /* 0x10 */
    u16 type;       /* 0x12 */
    u16 unk14;      /* 0x14 */
};
struct BattleMessageTable {
    u8 unk00[0x58];
    BattleMessageEntry entries[4]; /* 0x58 */
};
struct BattleMessageMask {
    u8 unk00[0x10];
    u64 mask; /* 0x10: battle flags that let a type-12 entry through */
};

extern "C" {
extern void *g_btlAux;
extern BattleMessageMask g_btlMessageFlagMasks;
s32 libc_strlen(const char *);
u64 *btlMainFindEntryByListedId(void *battle, s32 target);
void btlQueueMessageTableReflectAction(s32 value, s32, u32, s32, s32, u32, u16, const char *);

// Emit the supported entries, filtering type 12 against the target's battle flags.
void btlEmitMessageTableEntries(s32 actor, u32 unused, BattleMessageTable *table, s32 multiplier,
                  u32 message, s32 target)
{
    void *battle = btlGetMainState();
    for (s32 index = 0; index < 4; ++index) {
        const char *text = table->entries[index].text;
        if (libc_strlen(text) != 0 && strcmp(text, "0") != 0) {
            u16 type = table->entries[index].type;
            s32 value = btlUnitGetSkillValue(g_btlAux) * multiplier;
            u32 side = 1;
            if (actor < 0) {
                side = 2;
            }
            switch (type) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 12:
                if (type == 12 && target >= 0) {
                    u64 *flags = btlMainFindEntryByListedId(battle, target);
                    if (flags != NULL && (*flags & g_btlMessageFlagMasks.mask) == 0) {
                        break;
                    }
                }
                btlQueueMessageTableReflectAction(table->entries[index].value + value, 0, message, target, 5, side,
                             type, table->entries[index].text);
                break;
            }
        }
    }
}
}
