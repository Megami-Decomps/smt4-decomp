/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049325c` (_code @ 0x49325c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00492c98. */


void FUN_0049325c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  
  temp_v0 = FUN_001834a4(0x13,param_1);
  psVar3 = *(short **)(temp_v0 + 0xc);
  if ((psVar3 != (short *)0x0) && (psVar3[2] == 1)) {
    temp_v2 = (unsigned int)*psVar3;
    temp_v1 = (unsigned int)psVar3[1];
  }
  else {
    temp_v2 = *(unsigned short *)(temp_v0 + 4) & 0xffff7fff;
    temp_v1 = *(unsigned short *)(temp_v0 + 6) & 0xffff7fff;
  }
  FUN_00492c98(2,0x13,param_1,param_2,param_3,temp_v2,temp_v1,param_4,param_5);
  return;
}
