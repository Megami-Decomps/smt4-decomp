#include "common.h"

extern "C" u8 g_indexedByteValues[];

// Values above the table's range map to the default value.
extern "C" u32 indexedByteLookup(u32 index)
{
    return index < 11 ? g_indexedByteValues[index] : 50;
}
