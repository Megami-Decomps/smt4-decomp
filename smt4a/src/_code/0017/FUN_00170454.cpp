#include "common.h"

extern "C" {

typedef struct Global5b4440 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Global5b4440;
extern Global5b4440 DAT_005b4440;

void FUN_0018b850(u32 value);

/* Passes the word at 0x4 of the global at 0x5B4440 to FUN_0018b850. */
void FUN_00170454(void)
{
    FUN_0018b850(DAT_005b4440.value);
}

} /* extern "C" */
