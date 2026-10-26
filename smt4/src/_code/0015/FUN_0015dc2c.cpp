/* NON_MATCHING: failure exit is duplicated after the scan loop (armcc tail-duplicates the 0-result tail call); retail branches every failure path to one shared exit. */
#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "classes/WindowOperation.h"

extern "C" {
s32 libc_strlen(const char *text);
s32 libc_strcmp(const char *left, const char *right);
WindowOperationResult FUN_0015e6f4(AocSystem *system, const char *mountName,
                                   u32 archive, u32 flags, u32 id);

// Resolve an aoc-prefixed path to the mounted content package's archive.
WindowOperationResult FUN_0015dc2c(AocSystem *system, const char *path)
{
    if (system->packages.count != 0 && system->packages.entries != NULL) {
        char mountName[16] = {};
        s32 length = libc_strlen(path);
        if (length > 8) {
            length = 8;
        }
        for (s32 index = 0; index < length; ++index) {
            s8 character = static_cast<s8>(path[index]);
            mountName[index] = character;
            if (character == ':') {
                if (mountName[0] == 'a' && mountName[1] == 'o' && mountName[2] == 'c') {
                    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
                        AocPackage *package = &system->packages.entries[packageIndex];
                        if (libc_strcmp(mountName, package->mountName) == 0) {
                            return FUN_0015e6f4(system, package->mountName, package->archive,
                                                package->flags, package->id);
                        }
                    }
                }
                break;
            }
        }
    }
    return WindowOperationResult(0);
}
}
