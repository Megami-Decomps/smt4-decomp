/* NON_MATCHING: The compiler shares the output-store tail and assigns the selected ids to opposite registers. */
#include "common.h"

/* Selects the foreground and background sprite ids for a status kind and highlighted variant. */
extern "C" void FUN_00224ce0(u32 kind, u32 *foreground, u32 *background, s32 highlighted)
{
    u32 first;
    u32 second;
    switch (kind) {
    default:
        return;
    case 1:
        if (highlighted) {
            first = 247;
            second = 231;
        } else {
            first = 239;
            second = 223;
        }
        *foreground = first;
        *background = second;
        return;
    case 2:
        if (highlighted) {
            first = 248;
            second = 232;
        } else {
            first = 240;
            second = 224;
        }
        *foreground = first;
        *background = second;
        return;
    case 3:
        if (highlighted) {
            first = 249;
            second = 233;
        } else {
            first = 241;
            second = 225;
        }
        *foreground = first;
        *background = second;
        return;
    case 4:
        if (highlighted) {
            first = 250;
            second = 234;
        } else {
            first = 242;
            second = 226;
        }
        *foreground = first;
        *background = second;
        return;
    case 5:
        if (highlighted) {
            first = 251;
            second = 235;
        } else {
            first = 243;
            second = 227;
        }
        *foreground = first;
        *background = second;
        return;
    case 6:
        if (highlighted) {
            first = 252;
            second = 236;
        } else {
            first = 244;
            second = 228;
        }
        *foreground = first;
        *background = second;
        return;
    case 8:
        if (highlighted) {
            first = 253;
            second = 237;
        } else {
            first = 245;
            second = 229;
        }
        *foreground = first;
        *background = second;
        return;
    case 7:
        if (highlighted) {
            first = 254;
            second = 238;
        } else {
            first = 246;
            second = 230;
        }
        *foreground = first;
        *background = second;
        return;
    }
}
