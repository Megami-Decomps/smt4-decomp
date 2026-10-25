#include "gamedata/GroupedFileTables.h"
#include "gamedata/GameFlags.h"
#include "gamedata/FlagValueIsPositive.h"
#include "shard/aocActivateFileGroupFlags.h"

extern "C" {
s32 FUN_001b315c(FileTableGroup *);
FileTableKindRecord *FUN_001b31ac(FileTableGroup *);
u32 FUN_001b31e0(FileTableGroup *);
s32 gameFlagIsSet(u32);

void flagValueAdd(u32, s32);
void *jyoucyuGetTableEntry(u32);

// Activate flag requests attached to loaded file groups.
void aocActivateFileGroupFlags(GroupedFileTables *owner)
{
    // The flag word cannot be added to the shared record's byte-aligned padding.
    struct FileFlagView {
        s8 kind;
        u8 unk01[0x3b];
        u32 flag;
    };
    for (s32 groupIndex = 0; groupIndex < owner->count; ++groupIndex) {
        FileTableGroup *group = &owner->groups[groupIndex];
        if (FUN_001b315c(group) == 0)
            continue;
        FileFlagView *records = reinterpret_cast<FileFlagView *>(FUN_001b31ac(group));
        u32 count = FUN_001b31e0(group);
        for (u32 index = 0; index < count; ++index) {
            FileFlagView *record = &records[index];
            if (record->kind != '0') {
                if (record->kind != '1')
                    continue;
                if (gameFlagIsSet(record->flag))
                    break;
                gameFlagSetValue(record->flag, 1, 1);
                jyoucyuGetTableEntry(0);
            } else {
                u32 flag = record->flag;
                if (!flagValueIsPositive(flag)) {
                    flagValueAdd(flag, 1);
                    jyoucyuGetTableEntry(0);
                }
            }
        }
    }
}
}
