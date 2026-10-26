/* NON_MATCHING: buffer-bound arithmetic, loop registers, archive setter and request scheduling differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "classes/Obj421aa4Requests.h"

extern "C" {
u32 FUN_00141fb4(void *archive);

/* Bind caller-owned file slots to the archive, then queue the data-manager setup. */
u32 FUN_00121030(AsdSndDataManagerView *manager, void *archive, void *buffer, u32 bufferSize)
{
    u32 bufferEnd = reinterpret_cast<u32>(buffer) + bufferSize;
    u32 required = sizeof(u32) + FUN_00141fb4(archive) * sizeof(void *);
    u32 alignedEnd = (reinterpret_cast<u32>(buffer) + required + 3) & ~3u;
    if (static_cast<s32>(alignedEnd - bufferEnd) > 0)
        return 0;

    manager->tableState.fileTable = static_cast<SoundDataFileTable *>(buffer);
    manager->tableState.fileTable->count = FUN_00141fb4(archive);
    for (u32 i = 0; i < manager->tableState.fileTable->count; ++i)
        manager->tableState.fileTable->files[i] = NULL;
    manager->loader.archive = archive;

    Obj421aa4Manager *queue = FUN_002baed8();
    Obj421aa4Node *command = soundRequestBegin(queue, 5);
    command->type = 0x31;
    command->id = reinterpret_cast<u32>(manager); /* this command's payload is a manager pointer */
    listAppendNode(queue, command);
    return 1;
}
}
