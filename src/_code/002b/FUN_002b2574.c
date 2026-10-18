/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2574` (_code @ 0x2b2574, 0x32 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_001008b9; /* 0x1008b9 */

/* Supplied declaration required: FUN_002c6a1a. */
/* Supplied declaration required: FUN_002c6a2e. */


unsigned int FUN_002b2574(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    temp_v1 = (param_1 + param_2) - 1;
  }
  temp_v0 = param_1;
  FUN_002c6a2e(param_3,&temp_v0,param_4,&LAB_001008b9);
  if (param_2 != 0) {
    FUN_002c6a1a(0,&temp_v0);
  }
  return param_3;
}
