#include "common.h"

extern "C" {

int FUN_00252190(int obj, int arg1, int arg2);
int eventTexRegisterAndSortTask(int obj);
int eventTexSetJobParam(void);
int scrSetResult(int obj);
int scrGetArg(int index);

/* Script command: takes two script arguments, runs FUN_00252190 on the first, then finishes the resulting object. */
int FUN_00222020(void)
{
    int obj = scrGetArg(0);
    int value = scrGetArg(1);

    obj = FUN_00252190(obj, 0, value);
    eventTexSetJobParam();
    eventTexRegisterAndSortTask(obj);
    scrSetResult(obj);
    return 1;
}

} /* extern "C" */
