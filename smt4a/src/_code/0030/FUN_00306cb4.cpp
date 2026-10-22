/* NON_MATCHING: the reference-based flag/size reset is recovered; the zero test uses LDRB and the Thumb stack/register allocation differs. */
#include "shard/Reader.h"

extern "C" {
u8 *byteRefMin(u8 *first, u8 *second);
void bufferAssignByteAlias(Reader *reader, const u8 *value);
void strHolderAssignU32Alias(Reader *reader, const u32 *value);
}

// Reset a reader's leading flag and size unless it is headerless.
extern "C" void FUN_00306cb4(Reader *reader, const Reader *source)
{
    if (!reader->headerless) {
        u8 error = source->error;
        u8 zero = 0;
        bufferAssignByteAlias(reader, byteRefMin(&error, &zero));
        u32 size = 0;
        strHolderAssignU32Alias(reader, &size);
    }
}
