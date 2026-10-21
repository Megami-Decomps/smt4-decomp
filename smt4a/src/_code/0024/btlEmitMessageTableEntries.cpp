/* NON_MATCHING: flag-pair load selection and loop register allocation differ from retail. */
#include "common.h"

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
struct BattleMessageFlags {
    u32 low;
    u32 high;
};
struct BattleMessageMask {
    u8 unk00[0x10];
    u32 low;  /* 0x10 */
    u32 high; /* 0x14 */
};

extern "C" {
extern void *g_btlAux;
extern BattleMessageMask g_btlMessageFlagMasks;
void *btlGetMainState();
s32 wstrlen(const char *);
s32 libc_strcmp(const char *, const char *);
BattleMessageFlags *FUN_003f0e20(void *battle, s32 target);
s32 btlUnitGetSkillValue(void *unit);
void FUN_004fdcd8(s32 value, s32, u32, s32, s32, u32, u16, const char *);

// Emit the supported entries, filtering type 12 against the target's battle flags.
void btlEmitMessageTableEntries(s32 actor, u32 unused, BattleMessageTable *table, s32 multiplier,
                  u32 message, s32 target)
{
    void *battle = btlGetMainState();
    for (s32 index = 0; index < 4; ++index) {
        const char *text = table->entries[index].text;
        if (wstrlen(text) != 0 && libc_strcmp(text, "0") != 0) {
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
                    BattleMessageFlags *flags = FUN_003f0e20(battle, target);
                    if (flags != NULL &&
                        ((flags->low & g_btlMessageFlagMasks.low) | (flags->high & g_btlMessageFlagMasks.high)) == 0) {
                        break;
                    }
                }
                FUN_004fdcd8(table->entries[index].value + value, 0, message, target, 5, side,
                             type, table->entries[index].text);
                break;
            }
        }
    }
}
}
