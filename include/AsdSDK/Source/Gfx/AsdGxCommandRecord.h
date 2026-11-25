#ifndef ASDSDK_SOURCE_GFX_ASDGXCOMMANDRECORD_H
#define ASDSDK_SOURCE_GFX_ASDGXCOMMANDRECORD_H

#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

/* Initializes the pending command-list record without publishing it to the submitter. */
static __inline AsdCmdRecord *asdGxDescribeCommandSegment(AsdCmdBuffer *buffer)
{
    enum { COMMAND_RECORD_GPU_LIST = 1 };
    AsdCmdRecord *record = &buffer->entries[buffer->listCount];
    record->kind = COMMAND_RECORD_GPU_LIST;
    record->commands = buffer->start + buffer->committedOffset;
    record->byteCount = buffer->writeOffset - buffer->committedOffset;
    return record;
}

#endif
