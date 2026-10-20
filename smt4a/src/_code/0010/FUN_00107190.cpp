/* NON_MATCHING: retail's function symbol excludes the string literal armcc emits right after the function; the code itself is identical and fdiff only reports the trailing literal-pool row(s) */
/* Formats the interface type flags (point-to-point, loopback, broadcast) as a wide string into `dest`, at most `count` characters. */
#include "common.h"

extern "C" {

typedef struct Interface {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 flags;       /* bit 0: point-to-point, bit 2: loopback, bit 1: broadcast */
} Interface;

extern void sysMemClear(void *buffer, s32 size);
extern void FUN_002e98ea(u16 *dest, void *buffer, s32 count);
extern void FUN_002ee7f2(void *buffer, const u16 *text);

u32 FUN_00107190(Interface *iface, u16 *dest, s32 count)
{
    u16 buffer[514];

    sysMemClear(buffer, 0x400);
    if ((iface->flags & 1) != 0) {
        FUN_002ee7f2(buffer, (const u16 *)L"POINT2POINT");
    }
    if ((s32)(iface->flags << 29) < 0) {
        FUN_002ee7f2(buffer, (const u16 *)L"LOOPBACK");
    }
    if ((s32)(iface->flags << 30) < 0) {
        FUN_002ee7f2(buffer, (const u16 *)L"BROADCAST");
    }
    FUN_002e98ea(dest, buffer, count);
    dest[count - 1] = 0;
    return 1;
}

}
