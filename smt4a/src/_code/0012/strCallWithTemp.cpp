/* Wraps a C string in a temporary 36-byte string object, passes it to FUN_002ec964 and destroys it. */
#include "common.h"

extern "C" {

typedef struct {
    u8 storage[36]; /* 0x00 */
} TempString;

void strAssign(TempString *str, u32 chars, u32 length, u32 limit);
void strInit(TempString *str);
void FUN_002ec964(u32 arg1, u32 arg2, TempString *str, u32 arg4);
void strDestroy(TempString *str);
u32 wstrlen(u32 chars);

void strCallWithTemp(u32 arg1, u32 arg2, u32 chars, u32 arg4)
{
    TempString str;

    strInit(&str);
    strAssign(&str, chars, wstrlen(chars), 0xffffffff);
    FUN_002ec964(arg1, arg2, &str, arg4);
    strDestroy(&str);
}

} /* extern "C" */
