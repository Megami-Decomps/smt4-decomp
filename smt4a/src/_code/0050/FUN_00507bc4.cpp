/* Reads item `id`'s info through FUN_00509110 on the wrapper's archive reference and, when an extension reader is attached
 * and enabled, merges in the extension's own answer (slot 0x40) for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_00509110(SoundArchiveRef *reader, u32 id, void *info);

u32 FUN_00507bc4(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = FUN_00509110(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readInfo40IfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
