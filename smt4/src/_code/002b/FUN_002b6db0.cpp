#include "romwright_types.h"

extern "C" {

int FUN_002ae9ec(int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002ae9ec. */


void FUN_002b6db0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  FUN_002ae9ec(2,0x13,param_1,param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
