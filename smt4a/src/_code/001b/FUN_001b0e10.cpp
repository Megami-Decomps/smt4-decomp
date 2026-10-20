#include "romwright_types.h"

extern "C" {

int FUN_001bad18(unsigned int *, int, int, int, unsigned int, unsigned int, unsigned int, int, int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_001bad18. */


void FUN_001b0e10(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_001bad18(param_1,0,0,0,*param_1,param_2,param_3,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
