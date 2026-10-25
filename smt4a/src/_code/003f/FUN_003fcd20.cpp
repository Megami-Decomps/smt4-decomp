/* NON_MATCHING: loaded-flag store scheduling and magic-comparison registers differ from retail. */
#include "gamedata/NpcPackage.h"
#include "addon/aocMain.h"
#include "quest_center/qcCtrl.h"

extern "C" {
extern const char DAT_00527250[];
extern AocSystemA* g_aocSystem;
s32 textFormatBuffer(char* buffer, const char* format, ...);
void* FUN_0046e150(AocSystemA* system, s32 id, const char* path);
void* asdLoadFileSyncDefault(const char* path);

// Load an NPC package from add-on content or the base filesystem and slice its sections.
void FUN_003fcd20(NpcPackageWork* work, s32 id)
{
    char path[64];
    textFormatBuffer(path, DAT_00527250, id);
    work->kind = 2;
    work->sourceId = id;
    NpcPackageHeader* file;
    if (FUN_004705ec(reinterpret_cast<u32>(g_aocSystem), id, 1)) {
        file = static_cast<NpcPackageHeader*>(FUN_0046e150(g_aocSystem, id, path));
    } else {
        file = static_cast<NpcPackageHeader*>(asdLoadFileSyncDefault(path));
    }
    work->fileData = file;
    work->id = -id;
    work->loaded = 1;
    work->header = file;
    if (file->magic == 0x57444B4E) {
        work->primary = reinterpret_cast<NpcPackagePrimaryRecord*>(file + 1);
        work->secondary = reinterpret_cast<NpcPackageSecondaryRecord*>(work->primary + file->primaryCount);
        work->indices = reinterpret_cast<u32*>(work->secondary + file->secondaryCount);
        work->extra = reinterpret_cast<NpcPackageExtraRecord*>(work->indices + file->indexCount);
        work->payload = work->extra + file->extraCount;
    } else {
        work->header = NULL;
    }
}
}
