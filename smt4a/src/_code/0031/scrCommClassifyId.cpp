#include "shard/Shard0031.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void scrSetResult(u32 value);
extern u32 FUN_004d0bf0(u32 id);
extern u32 FUN_001ba514(u32 id);
extern u32 FUN_001ab854(u32 lookup);
extern s32 bitsAt60Test(u32 data, u32 flag);

/* Script command: classifies the id given as argument 0 and returns the class through scrSetResult. */
u32 scrCommClassifyId(void)
{
    u32 id = scrGetArg(0);
    u32 result = 0;
    u32 lookup;

    if (id != 0) {
        if (FUN_004d0bf0(id & 0xFFFF) == 0) {
            result = -1;
        } else {
            lookup = FUN_001ba514(id & 0xFFFF);
            if (bitsAt60Test(FUN_001ab854(lookup), 2) != 0) {
                result = 3;
            } else if (bitsAt60Test(FUN_001ab854(lookup), 1) != 0) {
                result = 1;
            } else if (bitsAt60Test(FUN_001ab854(lookup), 10) != 0) {
                result = 2;
            }
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
