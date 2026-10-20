/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358014` (_code @ 0x358014, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238d3c(int, int);
int FUN_00358e10(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

extern unsigned char DAT_004656d1; /* 0x4656d1 */

/* Supplied declaration required: FUN_00238d3c. */
/* Supplied declaration required: FUN_00358e10. */


void FUN_00358014(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  FUN_00358e10(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((temp_v0 < 0) && (temp_v0 == -0x375ef410)) {
    FUN_00238d3c(1,0);
    DAT_004656d1 = 1;
    FUN_00358e10(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

} /* extern "C" */
