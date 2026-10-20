#include "common.h"

extern "C" {

extern u32 scrGetArg(void);
extern s32 FUN_0019e52c(u16 id);
extern void FUN_004bd410(u16 id);
extern void saveSlotFindSelected(void);
extern s32 FUN_00187168(void);
extern void FUN_003e4e4c(u16 id);

/* Script command. */
u32 FUN_00357cec(void)
{
    u32 id = scrGetArg();

    if (FUN_0019e52c(id) != 0) {
        FUN_004bd410(id);
        saveSlotFindSelected();
        if (FUN_00187168() == 0) {
            FUN_003e4e4c(id);
        }
    }
    return 1;
}

}
