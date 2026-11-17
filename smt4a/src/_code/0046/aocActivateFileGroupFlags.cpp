#include "gamedata/GameFlags.h"
#include "gamedata/FlagValueIsPositive.h"
#include "addon/AocSystemA.h"

extern "C" {
s32 gameFlagIsSet(u32);

void flagValueAdd(u32, s32);
void *jyoucyuGetTableEntry(u32);

// Activate flag requests attached to loaded file groups.
void aocActivateFileGroupFlags(AocSystemA *owner)
{
    for (s32 groupIndex = 0; groupIndex < owner->packageCount; ++groupIndex) {
        AocPackage *group = &owner->packages[groupIndex];
        if (packageEntryIsLoaded(group) == 0)
            continue;
        AocPackageDirectoryEntry *records = packageEntryGetDirectory(group);
        u32 count = packageEntryGetFileCount(group);
        for (u32 index = 0; index < count; ++index) {
            AocPackageDirectoryEntry *record = &records[index];
            if (record->kind != '0') {
                if (record->kind != '1')
                    continue;
                if (gameFlagIsSet(record->value))
                    break;
                gameFlagSetValue(record->value, 1, 1);
                jyoucyuGetTableEntry(0);
            } else {
                u32 flag = record->value;
                if (!flagValueIsPositive(flag)) {
                    flagValueAdd(flag, 1);
                    jyoucyuGetTableEntry(0);
                }
            }
        }
    }
}
}
