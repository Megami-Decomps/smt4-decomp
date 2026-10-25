/* NON_MATCHING: text base and mode setup recovered; record/index saved registers r4/r5 are exchanged. */
#include "battle/BtlMainAccess.h"

extern "C" {
void FUN_00282820(s32 position, u32 first, u32 second, s32 listedId, s32 layer, u32 mode, u32 kind, const char *text);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, s32 id);
s32 FUN_0028299c(u32 context);
s32 libc_strcmp(const char *first, const char *second);
u32 libc_strlen(const char *text);
extern const char DAT_00400440[];
extern u32 DAT_00435d18;

// Spawn configured battle text effects, suppressing conditional labels for inactive entries.
void FUN_001b1a48(s32 side, u32 first, const void *configuration, s32 spacing, u32 second, s32 listedId)
{
    struct TextEntry {
        char text[16];
        s16 position;
        u16 kind;
        u8 unk14[2];
    };
    struct TextConfigurationView { u8 unk00[0x58]; TextEntry entries[4]; };
    const TextConfigurationView *config = static_cast<const TextConfigurationView *>(configuration);
    BtlMainState *battle = btlGetMainState();
    for (s32 index = 0; index < 4; ++index) {
        const char *text = config->entries[index].text;
        if (libc_strlen(text) && libc_strcmp(text, DAT_00400440)) {
            u32 kind = config->entries[index].kind;
            s32 offset = FUN_0028299c(DAT_00435d18) * spacing;
            u32 mode = 2;
            if (side < 0)
                mode = 3;
            switch (kind) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 12:
                if (kind == 12 && listedId >= 0) {
                    BtlEntry *target = btlMainFindEntryByListedId(battle, listedId);
                    if (target != NULL && (target->flags & 2) == 0)
                        break;
                }
                FUN_00282820(config->entries[index].position + offset, first, second, listedId, 6, mode, kind, config->entries[index].text);
                break;
            }
        }
    }
}
}
