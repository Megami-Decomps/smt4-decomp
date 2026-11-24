/* Reads item `id`'s info through FUN_00508ffc on the wrapper's archive reference and, when an extension reader is attached
 * and enabled, merges in the extension's own answer (slot 0x28) for the same item. */
#include "shard/SoundArchiveWrapper.h"

extern "C" {

u32 FUN_00508ffc(SoundArchiveRef *reader, u32 id, void *info);

u32 FUN_00507acc(SoundArchiveWrapperA *archive, u32 id, void *info)
{
    u32 result = FUN_00508ffc(archive->ref, id, info);

    if (archive->extension != NULL) {
        result |= archive->extension->readInfo28IfEnabled(id, info);
    }
    return result;
}

} /* extern "C" */
