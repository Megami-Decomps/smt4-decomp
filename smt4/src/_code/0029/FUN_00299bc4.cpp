#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/FUN_00299bc4.h"

extern "C" {
extern CampHelpPrefixIV *g_camp;
s32 FUN_0029ee54(const void *unit);
s32 FUN_0029d644(const void *unit);
u32 FUN_002b8584(u32 group, u32 resource);

void FUN_00299bc4(const void *unit, s32 mode)
{
    // This label cache lies beyond the shared IV camp prefix.
    struct LabelsView {
        u8 unk000[0xe02];
        u16 headings[3];
        u16 extras[2];
        u16 entries[1];
    };
    typedef char LabelsOffsets[offsetof(LabelsView, headings) == 0xe02 &&
        offsetof(LabelsView, extras) == 0xe08 && offsetof(LabelsView, entries) == 0xe0c ? 1 : -1];
    LabelsView *labels = reinterpret_cast<LabelsView *>(g_camp);
    if (FUN_0029ee54(unit) > FUN_0029d644(unit)) {
        if (mode == 0) {
            labels->headings[0] = FUN_002b8584(0x1d, 0x572);
            labels->headings[1] = FUN_002b8584(0x1d, 0x570);
            labels->headings[2] = FUN_002b8584(0x1d, 0x571);
        } else {
            labels->headings[0] = FUN_002b8584(0x1d, 0x56d);
            labels->headings[1] = FUN_002b8584(0x1d, 0x56e);
            labels->headings[2] = FUN_002b8584(0x1d, 0x56f);
        }
    }
    if (mode == 0) {
        for (s32 i = 0; i < FUN_0029d644(unit); ++i) {
            if (FUN_0029ee54(unit) <= i) {
                break;
            }
            labels->entries[i] = FUN_002b8584(0x1d, i + 0x40f);
        }
        labels->extras[0] = FUN_002b8584(0x1d, 0x576);
        labels->extras[1] = FUN_002b8584(0x1d, 0x577);
    } else {
        for (s32 i = 0; i < FUN_0029d644(unit); ++i) {
            if (FUN_0029ee54(unit) <= i) {
                return;
            }
            labels->entries[i] = FUN_002b8584(0x1d, i + 0x40d);
        }
    }
}
}
