/* NON_MATCHING: reader/array registers and error/return block placement differ from retail. */
#include "common.h"

struct ArrayReader {
    u32 unk00;
    u8 failed; // 0x04
};
struct SerializedArray {
    u8 unk00[0x0c];
    u8 *data; // 0x0c
    u32 count; // 0x10
    u32 unk14;
    u32 offset; // 0x18
};

extern "C" {
void streamReaderReadArray(ArrayReader *reader, void *values, u32 elementSize, u32 count);
s32 FUN_0030fba6(ArrayReader *reader, u32 bytes);
void FUN_002fa010(SerializedArray *array, u32 count);
void FUN_00310dc6(ArrayReader *reader, void *data, u32 bytes);

// Read a counted array of eight-byte elements, preserving the reader's error state.
ArrayReader *FUN_00303038(ArrayReader *reader, SerializedArray *array)
{
    u32 count;
    streamReaderReadArray(reader, &count, sizeof(count), 1);
    if (FUN_0030fba6(reader, count * 8) == 0) {
        reader->failed = 1;
        return reader;
    }
    if (reader->failed != 0) {
        return reader;
    }
    if (count != 0) {
        FUN_002fa010(array, count);
        FUN_00310dc6(reader, array->data + array->offset, count * 8);
    }
    array->count = count;
    return reader;
}
}
