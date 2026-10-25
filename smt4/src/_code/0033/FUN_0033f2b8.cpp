/* NON_MATCHING: named magic operand restores comparison registers; loaded-flag constant uses r2 instead of retail r3. */
#include "gamedata/NpcPackage.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern const char DAT_003ff7c8[];
extern AocSystem* g_aocSystem;
s32 textFormatBuffer(char* buffer, const char* format, ...);
void* FUN_00387a08(AocSystem* system, s32 id, const char* path);
void* asdLoadFileSyncDefault(const char* path);

// Load an NPC package from add-on content or the base filesystem and slice its sections.
void FUN_0033f2b8(NpcPackageWork* work, s32 id)
{
    char path[64];
    textFormatBuffer(path, DAT_003ff7c8, id);
    work->kind = 4;
    work->sourceId = id;
    NpcPackageHeader* file;
    if (FUN_0023e330(reinterpret_cast<u32>(g_aocSystem), id, 1)) {
        file = static_cast<NpcPackageHeader*>(FUN_00387a08(g_aocSystem, id, path));
    } else {
        file = static_cast<NpcPackageHeader*>(asdLoadFileSyncDefault(path));
    }
    work->fileData = file;
    work->id = -id;
    work->loaded = 1;
    work->header = file;
    u32 magic = file->magic;
    if (magic == 0x57444B4E) {
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
