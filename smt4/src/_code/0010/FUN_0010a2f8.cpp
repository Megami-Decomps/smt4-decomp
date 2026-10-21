#include "common.h"

extern "C" {

/* Classifies the supported input-message codes. */
bool FUN_0010a2f8(s32 code)
{
    switch (code) {
    case 0xF840:
    case 0xF841:
    case 0xF842:
    case 0xF843:
    case 0xF844:
    case 0xF870:
    case 0xF871:
    case 0xF872:
    case 0xF873:
    case 0xF874:
    case 0xF875:
    case 0xF876:
    case 0xF877:
    case 0xF878:
    case 0xF879:
    case 0xF87A:
    case 0xF87B:
    case 0xF87C:
    case 0xF87D:
        return true;
    default:
        return false;
    }
}

} /* extern "C" */
