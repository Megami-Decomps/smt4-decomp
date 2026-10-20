#include "common.h"

extern "C" {

void FUN_001654d8(u8 *member);

typedef struct Object {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 member34[1];
} Object;
extern Object *DAT_0057f578;

/* Calls FUN_001654d8 on the member at 0x34 of the object at 0x57F578, if there is one. */
void FUN_00284f50(void)
{
    if (DAT_0057f578 != NULL) {
        FUN_001654d8(DAT_0057f578->member34);
        return;
    }
}

} /* extern "C" */
