#include "romwright_types.h"

extern "C" {

int FUN_00297f1c(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_00297f1c. */


void FUN_00229c5c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7e38) = 7;
  FUN_00297f1c(temp_v0 + 0x2460,param_2,0xffffffff,param_3);
  return;
}

} /* extern "C" */
