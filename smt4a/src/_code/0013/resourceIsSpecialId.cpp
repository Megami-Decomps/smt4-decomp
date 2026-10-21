#include "common.h"

extern "C" s32 resourceIsSpecialId(s32 id)
{
    switch (id) {
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
    case 0xF87E:
        return 1;
    default:
        return 0;
    }
}
