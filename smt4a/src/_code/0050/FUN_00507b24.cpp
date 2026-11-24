/* Reads item `id`'s info through FUN_00509088 on the wrapper's archive reference and, when an extension reader is attached
 * and enabled, merges in the extension's own answer (slot 0x38) for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_00509088(SoundArchiveRef *reader, u32 id, void *info);

u32 FUN_00507b24(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = FUN_00509088(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readInfo38IfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
