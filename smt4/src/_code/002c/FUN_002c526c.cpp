/* NON_MATCHING: retail has a real frame (push {r4, lr}) and passes the caller address read back from the saved lr slot ([sp, #4]); the signed level test, the development-unit byte at 0x1FF80014 and the call structure are as written, but armcc folds the level compares and tail-calls with lr directly */
/* Reports a failed result: in a development environment (or with the debug flag set) results at level -7 and 1 are
 * ignored and any other is reported with the caller's address; otherwise only level -1 is reported before the fatal
 * error handler runs. */
#include "common.h"

extern "C" {
/* A result code split into its fields (level is signed). */
union ResultFields {
    u32 value;
    struct {
        u32 description : 10;
        u32 module : 8;
        u32 reserved : 3;
        u32 summary : 6;
        s32 level : 5;
    } fields;
};

extern s8 DAT_0044e7a8;
void FUN_00128584(u32 result, u32 flag, u32 callerAddress);
void asdFatalError(void);

void FUN_002c526c(u32 result, bool failed)
{
    ResultFields code;
    code.value = result;
    u8 developmentUnit = *(volatile u8 *)0x1FF80014 & 1;

    if ((developmentUnit | DAT_0044e7a8) == 0) {
        if (code.fields.level == -1) {
            FUN_00128584(result, 0, (u32)__return_address());
        }
        asdFatalError();
        return;
    }
    if (code.fields.level != -7 && code.fields.level != 1) {
        FUN_00128584(result, 0, (u32)__return_address());
    }
}
}
