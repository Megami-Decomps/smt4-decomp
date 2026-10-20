#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0017ffa8. */


void FUN_00167860(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  FUN_0017ffa8(2,0xb,param_1,param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
