/* Builds a temporary wide string from `text`, passes it to FUN_001114f6 together with the other arguments and destroys it again. */
#include "common.h"

extern "C" {

typedef struct WString {
    u8 data[36];
} WString;

extern void FUN_001114f6(u32 a, u32 b, WString *string, u32 c);
extern void strAssign(WString *string, u32 text, u32 length, u32 flags);
extern u32 wstrlen(u32 text);
extern void strInit(WString *string);
extern void strDestroy(WString *string);

void FUN_001113fc(u32 a, u32 b, u32 text, u32 c)
{
    WString string;

    strInit(&string);
    strAssign(&string, text, wstrlen(text), 0xFFFFFFFF);
    FUN_001114f6(a, b, &string, c);
    strDestroy(&string);
}

}
