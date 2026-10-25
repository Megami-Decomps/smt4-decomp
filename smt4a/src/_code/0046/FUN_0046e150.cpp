/* NON_MATCHING: the real 128-byte path and pointer-returning synchronous load contract are restored; retail retains kind 12 across the clear and aligns the path at sp+16. */
#include "common.h"
#include "addon/aocMain.h"

struct FileQueue;

extern "C" {

void sysMemClear(void *buffer, s32 size);
u8 *FUN_001b2bd8(AocSystemA *system, s32 kind, s32 variant, char *path);
u32 FUN_001b2ebc(FileQueue *queue, const char *path, const char *secondPath,
                u32 *transferredBytes, u32 mode, u32 bytes, void *context);
extern FileQueue *g_aocDisplay;

// Resolve the kind-12 add-on path and synchronously load it, optionally paired with a second path.
void *FUN_0046e150(AocSystemA *system, s32 variant, const char *secondPath)
{
    char path[128];
    sysMemClear(path, sizeof(path));
    u8 *entry = FUN_001b2bd8(system, 12, variant, path);
    if (entry != NULL) {
        return reinterpret_cast<void *>(FUN_001b2ebc(g_aocDisplay, path, secondPath,
            reinterpret_cast<u32 *>(entry + 8), 1, sizeof(path), entry));
    }
    return NULL;
}

} /* extern "C" */
