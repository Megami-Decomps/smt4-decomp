#include "common.h"

extern "C" {

int nodeCollectionReleaseAll(int value);
int asdMemFree(int *ptr);
extern int *scrGetArg(void);
extern int FUN_002c1d5c(void);

u32 FUN_00323e1c(void)
{
    int *block = scrGetArg();
    u32 result;

    if (block == NULL) {
        result = 1;
    } else {
        if (*block == 0) {
            asdMemFree(block);
            return 1;
        }
        if (FUN_002c1d5c() != 0) {
            nodeCollectionReleaseAll(block[1]);
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
