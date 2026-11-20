#include "common.h"

extern "C" {

int nodeCollectionReleaseAll(int value);
int asdMemFree(int *ptr);
extern int *scrGetArg(u32 index);
extern int eventIsSkipping(void);

u32 scrCommReleaseJobBlock(void)
{
    int *block = scrGetArg(0);
    u32 result;

    if (block == NULL) {
        result = 1;
    } else {
        if (*block == 0) {
            asdMemFree(block);
            return 1;
        }
        if (eventIsSkipping() != 0) {
            nodeCollectionReleaseAll(block[1]);
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
