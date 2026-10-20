#include "common.h"

extern "C" {

int FUN_002958f8(int a, int b);
int FUN_002a780c(u32 value);
int asdMemFree(u32 *ptr);

/* Releases the object's 7 + 3 + 8 + 3 owned resources (word indices 2-8, 1, 0, 0xD, 0x12-0x19, 0xE, 0x10, 0x23), then the object. */
void FUN_0031b978(u32 *obj)
{
    int i = 0;

    do {
        FUN_002a780c(obj[i + 2]);
        i = i + 1;
    } while (i < 7);
    FUN_002a780c(obj[1]);
    FUN_002a780c(*obj);
    FUN_002a780c(obj[0xd]);
    i = 0;
    do {
        FUN_002a780c(obj[i + 0x12]);
        i = i + 1;
    } while (i < 8);
    FUN_002a780c(obj[0xe]);
    FUN_002a780c(obj[0x10]);
    FUN_002a780c(obj[0x23]);
    FUN_002958f8((int)*(s16 *)(obj + 0x22), 1);
    asdMemFree(obj);
}

} /* extern "C" */
