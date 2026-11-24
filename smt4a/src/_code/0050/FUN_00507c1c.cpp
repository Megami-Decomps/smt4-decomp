/* Reads item `id`'s info through FUN_005093a0 on the wrapper's archive reference and, when an extension reader is attached
 * and enabled, merges in the extension's own answer (slot 0x44) for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_005093a0(SoundArchiveRef *reader, u32 id, void *info);

u32 FUN_00507c1c(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = FUN_005093a0(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readInfo44IfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
