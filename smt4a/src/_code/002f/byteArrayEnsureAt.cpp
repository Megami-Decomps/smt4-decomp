#include "common.h"

extern "C" {

/* Growable byte array: data pointer at 0xc, used size 0x10, capacity 0x14, start offset 0x18. */
typedef struct {
    u8 unk00[0xc];
    u8 *data;           /* 0x0c */
    u32 size;           /* 0x10 */
    u32 capacity;       /* 0x14 */
    u32 offset;         /* 0x18 */
} ByteArray;
int FUN_0031011e(ByteArray *array, u32 capacity);

/* Makes room for element `index` (growing capacity by 1.5x when needed), extends the size and returns the element address. */
u8 *byteArrayEnsureAt(ByteArray *array, u32 index)
{
    u32 end;

    if (array->capacity == 0) {
        FUN_0031011e(array, 5);
    }
    end = array->offset + index;
    u32 capacity = array->capacity;

    if (end >= capacity) {
        FUN_0031011e(array, (u32)((end * 15) / (10)));
    }
    if (array->size <= index) {
        array->size = index + 1;
    }
    return array->data + array->offset + index;
}

} /* extern "C" */
