#include "common.h"

extern "C" {

u8 FUN_003d3738(void);
int FUN_00208b68(void);
int FUN_002deb84(void);
void FUN_002ef750(int arg);

/* Runs FUN_003d3738 if FUN_002deb84 reports 0; returns true (after calling FUN_002ef750) when FUN_00208b68 reports 0. */
bool FUN_00237930(void)
{
    if (FUN_002deb84() == 0) {
        FUN_003d3738();
    }
    int result = FUN_00208b68();
    if (result == 0) {
        FUN_002ef750(result);
    }
    return result == 0;
}

} /* extern "C" */
