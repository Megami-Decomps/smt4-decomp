/* NON_MATCHING: Thumb byte narrowing and comparison use UXTB/MOV rather than retail shifts/MOVS. */
#include "common.h"
extern "C" {
/* Find the last occurrence of a byte, including a terminating zero. */
const u8 *FUN_002522e0(const u8 *text,u32 value)
{
    const u8 *last=NULL;
    u8 byte;
    do { byte=*text++; if (byte==(u8)value) last=text-1; } while (byte!=0);
    return last;
}
}
