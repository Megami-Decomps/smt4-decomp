#include "shard/W6_W6Match3_FormatBuffer.h"

extern "C" {

void* asdOperatorNewC(u32 size);
void asdOperatorDeleteB(void* buffer);
s32 FUN_00100df4(char* buffer, s32 capacity, const char* format, va_list arguments);

char* asdStringFormatGrow(char* buffer, s32 capacity, const char* format, va_list arguments)
{
    s32 size;
    if (capacity != 0) {
        size = capacity;
    } else {
        size = 64;
    }
    if (buffer == 0) {
        buffer = (char*)asdOperatorNewC(size);
    }
    for (;;) {
        s32 result = FUN_00100df4(buffer, size, format, arguments);
        if (result < 0) {
            buffer[0] = '\0';
            break;
        }
        if (size < result) {
            size = result + 1;
        } else if (size == result) {
            size *= 2;
        } else {
            break;
        }
        if (capacity != 0) {
            return 0;
        }
        asdOperatorDeleteB(buffer);
        buffer = (char*)asdOperatorNewC(size);
    }
    return buffer;
}

} // extern "C"
