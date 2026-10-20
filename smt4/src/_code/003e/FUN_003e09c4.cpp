/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e09c4` (_code @ 0x3e09c4, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238d3c(int, int);
int FUN_003599c0(int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

extern unsigned char DAT_004656d1; /* 0x4656d1 */

/* Supplied declaration required: FUN_00238d3c. */
/* Supplied declaration required: FUN_003599c0. */


void FUN_003e09c4(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  FUN_003599c0(param_2,param_3,param_4,param_5,param_6);
  if ((temp_v0 < 0) && (temp_v0 == -0x375ef410)) {
    FUN_00238d3c(1,0);
    DAT_004656d1 = 1;
    FUN_003599c0(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

} /* extern "C" */
