#include "shard/Shard003C.h"

extern "C" {

typedef struct ScriptObj18 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
} ScriptObj18;

extern ScriptObj18 *DAT_00573c50;
extern void *btlGetMainState(void);
extern u8 FUN_003eb1cc(void *state);
extern void scrSetResult(u32 value);

/* Script command: result is the script object's value at +0x18 while FUN_003eb1cc accepts the battle state, else 2. */
u32 FUN_003c1ffc(void)
{
    u32 value;

    if (FUN_003eb1cc(btlGetMainState()) != 0) {
        value = DAT_00573c50->unk18;
    } else {
        value = 2;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
