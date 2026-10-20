/* Passes the handle at +0x1c of the global state to FUN_0018b47c (a tail call). */
#include "common.h"

extern "C" {

struct State005c0aa0 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 handle;
};

extern State005c0aa0 DAT_005c0aa0;

void FUN_0018b47c(u32 handle);

void FUN_00170188(void)
{
    FUN_0018b47c(DAT_005c0aa0.handle);
}

}
