/* NON_MATCHING: retail uses ARMv5 Thumb moves and a countdown loop; current flags produce different scheduling and register allocation. */
#include "common.h"
extern "C" {
struct FormatOutput {
    u32 flags;
    void (*put)(u32 character, void *context);
    void *context;
    u8 unk0C[0x0C];
    s32 remaining;
    u32 unk1C;
    u32 written;
};
void FUN_002e31ea(FormatOutput *output);
void FUN_002e3216(FormatOutput *output);
/* Emits an infinity or NaN spelling with the requested case and sign. */
void FUN_002e4374(FormatOutput *output, u32 unused, s32 kind, u32 sign)
{
    const char *text;
    if (kind >= 7)
        text = (output->flags & 0x800) ? "NAN" : "nan";
    else
        text = (output->flags & 0x800) ? "INF" : "inf";
    output->flags &= ~0x10;
    output->remaining -= 3;
    if (sign != 0) --output->remaining;
    FUN_002e31ea(output);
    if (sign != 0) {
        output->put(sign, output->context);
        ++output->written;
    }
    output->written += 3;
    for (u32 index = 0; index < 3; ++index)
        output->put(*text++, output->context);
    FUN_002e3216(output);
}
}
