#include "common.h"

extern "C" s32 libc_sprintf(char *out, const char *format, ...);

// The UI labels are full-width Latin text encoded in Shift-JIS.
extern "C" s32 battleAttributeFormatName(char *out, s32 kind)
{
    s32 result = 0;
    if (kind == 0)
        result = libc_sprintf(out, "\x82\x6f\x82\x88\x82\x99\x82\x93"); // Phys
    else if (kind == 1)
        result = libc_sprintf(out, "\x82\x66\x82\x95\x82\x8e"); // Gun
    else if (kind == 2)
        result = libc_sprintf(out, "\x82\x65\x82\x89\x82\x92\x82\x85"); // Fire
    else if (kind == 3)
        result = libc_sprintf(out, "\x82\x68\x82\x83\x82\x85"); // Ice
    else if (kind == 4)
        result = libc_sprintf(out, "\x82\x64\x82\x8c\x82\x85\x82\x83"); // Elec
    else if (kind == 5)
        result = libc_sprintf(out, "\x82\x65\x82\x8f\x82\x92\x82\x83\x82\x85"); // Force
    else if (kind == 6)
        result = libc_sprintf(out, "\x82\x6b\x82\x89\x82\x87\x82\x88\x82\x94"); // Light
    else if (kind == 7)
        result = libc_sprintf(out, "\x82\x63\x82\x81\x82\x92\x82\x8b"); // Dark
    else if (kind == 11)
        result = libc_sprintf(out, "\x82\x6f\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e"); // Poison
    else if (kind == 12)
        result = libc_sprintf(out, "\x82\x6f\x82\x81\x82\x8e\x82\x89\x82\x83"); // Panic
    else if (kind == 13)
        result = libc_sprintf(out, "\x82\x72\x82\x8c\x82\x85\x82\x85\x82\x90"); // Sleep
    else if (kind == 14)
        result = libc_sprintf(out, "\x82\x61\x82\x89\x82\x8e\x82\x84"); // Bind
    else if (kind == 15)
        result = libc_sprintf(out, "\x82\x72\x82\x89\x82\x83\x82\x8b"); // Sick
    else if (kind == 16)
        result = libc_sprintf(out, "\x82\x6b\x82\x8f\x82\x93\x82\x94"); // Lost
    else if (kind == 17)
        result = libc_sprintf(out, "\x82\x62\x82\x88\x82\x81\x82\x92\x82\x8d"); // Charm
    else if (kind == 18)
        result = libc_sprintf(out, "\x82\x63\x82\x81\x82\x9a\x82\x85"); // Daze
    else if (kind == 19)
        result = libc_sprintf(out, "\x82\x6c\x82\x95\x82\x94\x82\x85"); // Mute
    else if (kind == 20)
        result = libc_sprintf(out, "\x82\x60\x82\x8c\x82\x8d\x82\x89\x82\x87\x82\x88\x82\x94\x82\x99"); // Almighty
    else if (kind == 25)
        result = libc_sprintf(out, "\x82\x67\x82\x85\x82\x81\x82\x8c"); // Heal
    return result;
}
