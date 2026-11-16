#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "classes/WindowOperation.h"
#include <string.h>

extern "C" {
s32 libc_strlen(const char *text);
/* One-instruction getter (armlink inlines it): the package's content index. */
u16 contentIndexGetValue(const u16 *index);
WindowOperationResult FUN_0015e6f4(AocSystem *system, const char *mountName,
                                   u32 archive, u32 flags, u32 id);

// Resolve an aoc-prefixed path to the mounted content package's archive.
WindowOperationResult aocResolveMountPath(AocSystem *system, const char *path)
{
    s8 mountName[16]; /* the device name ("aocN:"), compared as signed bytes */
    if (system->packages.count != 0 && system->packages.entries != NULL) {
        memset(mountName, 0, sizeof(mountName));
        bool hasDevice = false;
        s32 length = libc_strlen(path);
        if (length > 8) {
            length = 8;
        }
        for (s32 index = 0; index < length; ++index) {
            mountName[index] = path[index];
            if (mountName[index] == ':') {
                hasDevice = true;
                break;
            }
        }
        if (hasDevice && mountName[0] == 'a' && mountName[1] == 'o' && mountName[2] == 'c') {
            for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
                AocPackage *package = &system->packages.entries[packageIndex];
                if (strcmp(reinterpret_cast<const char *>(mountName), package->mountName) == 0) {
                    return FUN_0015e6f4(system, package->mountName, package->archive,
                                        package->flags, contentIndexGetValue(&package->id));
                }
            }
        }
    }
    return WindowOperationResult(0);
}
}
