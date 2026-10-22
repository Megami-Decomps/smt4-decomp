#include "common.h"

extern "C" {
s32 libc_sprintf(char *buffer, const char *format, ...);

// Write the full-width English label for a skill's target category.
void skillFormatTargetLabel(char *buffer, s32 target)
{
    if (target == 0) {
        libc_sprintf(buffer, "\x82\x50\x81\x40\x82\x85\x82\x8e\x82\x85\x82\x8d\x82\x99");
        return;
    }
    if (target == 1) {
        libc_sprintf(buffer, "\x82\x60\x82\x8c\x82\x8c\x81\x40\x82\x85\x82\x8e\x82\x85\x82\x8d\x82\x89\x82\x85\x82\x93");
        return;
    }
    if (target != 2) {
        if (target != 3) {
            if (target == 4) {
                libc_sprintf(buffer, "\x82\x72\x82\x85\x82\x8c\x82\x86");
                return;
            }
            if (target == 5) {
                libc_sprintf(buffer, "\x82\x64\x82\x96\x82\x85\x82\x92\x82\x99\x82\x8f\x82\x8e\x82\x85");
                return;
            }
            if (target == 6) {
                libc_sprintf(buffer, "\x82\x6c\x82\x95\x82\x8c\x82\x94\x82\x89\x81\x7c\x82\x85\x82\x8e\x82\x85\x82\x8d\x82\x89\x82\x85\x82\x93");
                return;
            }
            if (target == 7) {
                libc_sprintf(buffer, "\x82\x50\x81\x40\x82\x81\x82\x8c\x82\x8c\x82\x99");
                return;
            }
            if (target != 8)
                return;
        }
        libc_sprintf(buffer, "\x82\x60\x82\x8c\x82\x8c\x81\x40\x82\x81\x82\x8c\x82\x8c\x82\x89\x82\x85\x82\x93");
        return;
    }
    libc_sprintf(buffer, "\x82\x50\x81\x40\x82\x81\x82\x8c\x82\x8c\x82\x99");
}
}
