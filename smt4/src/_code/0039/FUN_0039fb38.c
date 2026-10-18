/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039fb38` (_code @ 0x39fb38, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

/* Supplied declaration required: FUN_00230fe4. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_0039fb38(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  short *psVar3;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002bf4f8(0x1c,param_1);
  psVar3 = *(short **)(temp_v0 + 0xc);
  if ((psVar3 != (short *)0x0) && (psVar3[2] == 1)) {
    temp_v2 = (unsigned int)*psVar3;
    temp_v1 = (unsigned int)psVar3[1];
  }
  else {
    temp_v2 = *(unsigned short *)(temp_v0 + 4) & 0xffff7fff;
    temp_v1 = *(unsigned short *)(temp_v0 + 6) & 0xffff7fff;
  }
  FUN_00230fe4(2,0x1c,param_1,param_2,param_3,temp_v2,temp_v1,param_4,param_5);
  return;
}
