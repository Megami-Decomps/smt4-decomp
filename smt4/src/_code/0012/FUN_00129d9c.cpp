/* Returns the value at +0x0C of the global state. */
#include "common.h"

extern "C" {

typedef struct State00471a70 {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0C */ u32 value;
} State00471a70;

extern State00471a70 DAT_00471a70;

u32 FUN_00129d9c(void)
{
    return DAT_00471a70.value;
}

}
