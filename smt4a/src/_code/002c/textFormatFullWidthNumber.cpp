#include "common.h"
#include <stdio.h>

extern "C" {
s32 libc_sprintf(char* destination, const char* format, ...);

void textFormatFullWidthNumber(char* output, s32 value)
{
    s32 offset = 0;
    s32 remaining = value;
    if (value == 0) {
        libc_sprintf(output, "\x82\x4F");
        return;
    }
    for (s32 place = 100000000; place > 0; place /= 10) {
        if (place <= value) {
            s32 digit = remaining / place;
            if (digit == 0) {
                offset += sprintf(output + offset, "\x82\x4F");
            } else if (digit == 1) {
                offset += sprintf(output + offset, "\x82\x50");
            } else if (digit == 2) {
                offset += sprintf(output + offset, "\x82\x51");
            } else if (digit == 3) {
                offset += sprintf(output + offset, "\x82\x52");
            } else if (digit == 4) {
                offset += sprintf(output + offset, "\x82\x53");
            } else if (digit == 5) {
                offset += sprintf(output + offset, "\x82\x54");
            } else if (digit == 6) {
                offset += sprintf(output + offset, "\x82\x55");
            } else if (digit == 7) {
                offset += sprintf(output + offset, "\x82\x56");
            } else if (digit == 8) {
                offset += sprintf(output + offset, "\x82\x57");
            } else if (digit == 9) {
                offset += sprintf(output + offset, "\x82\x58");
            }
            remaining -= place * digit;
        }
    }
}
}
