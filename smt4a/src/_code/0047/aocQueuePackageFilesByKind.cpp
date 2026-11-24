/* NON_MATCHING: eight lines. The initial buffer-clear argument schedule differs, and the build forms the mount-name address even for an empty package. */
#include "runtime/Stdio.h"
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"
#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "shard/W8X15_PackageList.h"
#include "addon/AocSystemA.h"

extern "C" {
extern AocDisplay *g_aocDisplay;
extern const char DAT_005265ac[];
void aocQueueFileLoad(AocDisplay *display, const char *path, void *destination, s32 kind, u32 flags, void *work);

/* Queues matching files from enabled add-on packages into a bounded output list. */
void aocQueuePackageFilesByKind(AocSystemA *system, s32 kind, s32 capacity, AocPackageFile *output)
{
    char path[128];
    sysMemClear(path, sizeof(path));
    s32 written = 0;
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(package)) {
            const AocPackageDirectoryEntry *descriptions = packageEntryGetDirectory(package);
            u32 count = packageEntryGetFileCount(package);
            const char *mount = package->mountName;
            for (u32 index = 0; index < count; ++index) {
                const AocPackageDirectoryEntry *description = &descriptions[index];
                if (description->kind == kind) {
                    if (written >= capacity || output == NULL)
                        return;
                    memcpy(&output[written], &package->files[index], offsetof(AocPackageFile, unk0E));
                    __2sprintf(path, DAT_005265ac, mount, description->name);
                    aocQueueFileLoad(g_aocDisplay, path, &output[written], 1, 0x80, &output[written]);
                    output[written++].available = 1;
                }
            }
        }
    }
}
} /* extern "C" */
