/* NON_MATCHING: memory-clear and metadata-copy argument scheduling differ; mount-name setup is not conditional. */
#include "addon/aocMain.h"
#include "addon/AocPackage.h"
#include "shard/W8X15_PackageList.h"

extern "C" {
extern AocDisplay *g_aocDisplay;
extern const char DAT_005265ac[];
void sysMemClear(void *destination, u32 size);
s32 FUN_001b315c(AocPackage *package);
AocPackageFileDescription *FUN_001b31ac(AocPackage *package);
u32 FUN_001b31e0(AocPackage *package);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 textFormatBuffer(char *destination, const char *format, ...);
void aocQueueFileLoad(AocDisplay *display, const char *path, void *destination, s32 kind, u32 flags, void *work);

// Queue matching files from enabled add-on packages into a bounded output list.
void FUN_00471468(AocSystemA *system, s32 kind, s32 capacity, PackageFileRef *output)
{
    char path[128];
    sysMemClear(path, sizeof(path));
    s32 written = 0;
    for (s32 packageIndex = 0; packageIndex < system->packages.count; ++packageIndex) {
        AocPackage *package = &system->packages.entries[packageIndex];
        if (FUN_001b315c(package)) {
            AocPackageFileDescription *descriptions = FUN_001b31ac(package);
            u32 count = FUN_001b31e0(package);
            const char *mount = package->mountName;
            for (u32 index = 0; index < count; ++index) {
                const AocPackageFileDescription *description = &descriptions[index];
                if ((s8)description->kind == kind) {
                    if (written >= capacity || output == NULL)
                        return;
                    PackageFileRef *file = &output[written];
                    __aeabi_memcpy4(file, &package->fileTable.files[index], 14);
                    textFormatBuffer(path, DAT_005265ac, mount, description->name);
                    aocQueueFileLoad(g_aocDisplay, path, file, 1, 0x80, file);
                    ++written;
                    file->state.loaded = 1;
                }
            }
        }
    }
}
}
