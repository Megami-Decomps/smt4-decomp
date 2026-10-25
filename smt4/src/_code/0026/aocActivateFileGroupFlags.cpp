#include "gamedata/GroupedFileTables.h"
#include "gamedata/GameFlags.h"
#include "shard/aocActivateFileGroupFlags.h"

extern "C" {
s32 FUN_002ac12c(FileTableGroup *);
FileTableKindRecord *FUN_002ac0f8(FileTableGroup *);
u32 FUN_002ac0c4(FileTableGroup *);
s32 gameFlagIsSet(u32);

s32 flagValueIsPositive(u32);
void FUN_00295a18(u32, s32);
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
        if (FUN_002ac12c(group) == 0)
            continue;
        FileFlagView *records = reinterpret_cast<FileFlagView *>(FUN_002ac0f8(group));
        u32 count = FUN_002ac0c4(group);
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
                    FUN_00295a18(flag, 1);
                    jyoucyuGetTableEntry(0);
                }
            }
        }
    }
}
}
