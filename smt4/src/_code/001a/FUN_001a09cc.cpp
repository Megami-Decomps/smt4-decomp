#include "common.h"

extern "C" {

int smokeFadeInitialize(u32 a, u32 b);
int FUN_002efd64(void);
extern int FUN_001ca720(void);
extern int scrGetCommandFrame(void);
extern u32 scrGetArg(u32 index);

u8 FUN_001a09cc(void)
{
    int result;
    u32 a;
    u32 b;

    if (scrGetCommandFrame() != 0) {
        result = FUN_001ca720();
        if (result != 0) {
            FUN_002efd64();
        }
        return result != 0;
    }
    a = scrGetArg(0);
    b = scrGetArg(1);
    smokeFadeInitialize(a, b);
    return 0;
}

} /* extern "C" */
