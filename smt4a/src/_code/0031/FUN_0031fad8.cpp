/* Stores the FUN_004dad8c result for the global object's first word into its field at +0x90A4 (if the object exists). */
#include "common.h"

extern "C" {

typedef struct Global {
    /* 0x0000 */ u32 key;
    /* 0x0004 */ u8 unk0004[0x90A0];
    /* 0x90A4 */ u32 value;
} Global;

extern Global *DAT_0057f290;

extern u32 FUN_004dad8c(u32 key);

void FUN_0031fad8(void)
{
    Global *global = DAT_0057f290;

    if (global != NULL) {
        global->value = FUN_004dad8c(global->key);
    }
}

}
