/* NON_MATCHING: failure-exit sharing and package-call argument scheduling differ. */
#include "addon/aocMain.h"
#include "addon/AocPackage.h"

extern "C" {
s32 libc_strlen(const char *text);
s32 libc_strcmp(const char *left, const char *right);
void FUN_0015e6f4(void *output, AocSystem *system, const char *mountName,
                  u32 archive, u32 flags, u32 id);
void FUN_002a1130(void *output, u32 found);

// Resolve an aoc-prefixed path to the mounted content package's archive.
void FUN_0015dc2c(void *output, AocSystem *system, const char *path)
{
    if (system->packages.count != 0 && system->packages.entries != NULL) {
        char mountName[16] = {};
        s32 length = libc_strlen(path);
        if (length > 8) {
            length = 8;
        } else if (length <= 0) {
            FUN_002a1130(output, 0);
            return;
        }
        for (s32 index = 0; index < length; ++index) {
            s8 character = static_cast<s8>(path[index]);
            mountName[index] = character;
            if (character == ':') {
                if (mountName[0] == 'a' && mountName[1] == 'o' && mountName[2] == 'c') {
                    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
                        AocPackage *package = &system->packages.entries[packageIndex];
                        if (libc_strcmp(mountName, package->mountName) == 0) {
                            FUN_0015e6f4(output, system, package->mountName, package->archive,
                                          package->flags, package->id);
                            return;
                        }
                    }
                }
                break;
            }
        }
    }
    FUN_002a1130(output, 0);
}
}
