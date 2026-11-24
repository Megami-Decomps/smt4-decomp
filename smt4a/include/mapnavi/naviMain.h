#pragma once
#include "common.h"

enum {
    PLAYER_FLAG_POISON = 5,
    PLAYER_FLAG_SICK = 9,
};

extern "C" {

u8 playerHasFlagBit(u32 bit);

} /* extern "C" */

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_0022fcb8(void);

#ifdef __cplusplus
}
#endif
