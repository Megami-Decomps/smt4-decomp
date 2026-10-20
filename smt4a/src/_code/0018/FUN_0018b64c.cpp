#include "common.h"

extern "C" {

typedef struct Global5891b0 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Global5891b0;
extern Global5891b0 DAT_005891b0;

void FUN_001a0a48(u32 value);

/* Passes the word at 0x8 of the global at 0x5891B0 to FUN_001a0a48. */
void FUN_0018b64c(void)
{
    FUN_001a0a48(DAT_005891b0.value);
}

} /* extern "C" */
