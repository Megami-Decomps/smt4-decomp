#include "common.h"

extern "C" {

int FUN_00133094(int obj);
int FUN_00133568(int obj);
int FUN_00137080(void);
int FUN_00142a50(int obj);

extern int DAT_0044e32c;

u32 vldtr_initializeStateValidator(int validator)
{
    DAT_0044e32c = validator;
    FUN_00137080();
    FUN_00133094(DAT_0044e32c + 4);
    FUN_00142a50(DAT_0044e32c + 8);
    FUN_00133568(DAT_0044e32c + 0xc);
    return 0;
}

} /* extern "C" */
