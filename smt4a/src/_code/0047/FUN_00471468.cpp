/* NON_MATCHING: memory-clear and metadata-copy argument scheduling differ; mount-name setup is not conditional. */
#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "shard/W8X15_PackageList.h"
#include "addon/AocSystemA.h"

extern "C" {
extern AocDisplay *g_aocDisplay;
extern const char DAT_005265ac[];
void sysMemClear(void *destination, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 textFormatBuffer(char *destination, const char *format, ...);
void aocQueueFileLoad(AocDisplay *display, const char *path, void *destination, s32 kind, u32 flags, void *work);

// Queue matching files from enabled add-on packages into a bounded output list.
void FUN_00471468(AocSystemA *system, s32 kind, s32 capacity, AocPackageFile *output)
{
    char path[128];
    sysMemClear(path, sizeof(path));
    s32 written = 0;
    for (s32 packageIndex = 0; packageIndex < system->packageCount; ++packageIndex) {
        AocPackage *package = &system->packages[packageIndex];
        if (packageEntryIsLoaded(reinterpret_cast<AocPackage *>(package))) {
            AocPackageDirectoryEntry *descriptions =
                reinterpret_cast<AocPackageDirectoryEntry *>(packageEntryGetDirectory(reinterpret_cast<AocPackage *>(package)));
            u32 count = packageEntryGetFileCount(reinterpret_cast<AocPackage *>(package));
            const char *mount = package->mountName;
            for (u32 index = 0; index < count; ++index) {
                const AocPackageDirectoryEntry *description = &descriptions[index];
                if ((s8)description->kind == kind) {
                    if (written >= capacity || output == NULL)
                        return;
                    AocPackageFile *file = &output[written];
                    __aeabi_memcpy4(file, &package->files[index], 14);
                    textFormatBuffer(path, DAT_005265ac, mount, description->name);
                    aocQueueFileLoad(g_aocDisplay, path, file, 1, 0x80, file);
                    ++written;
                    file->available = 1;
                }
            }
        }
    }
}
}
