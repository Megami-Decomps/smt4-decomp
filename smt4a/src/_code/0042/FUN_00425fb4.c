/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00425fb4` (_code @ 0x425fb4, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_13: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_13_stack;

extern int DAT_00589538; /* 0x589538 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_0043a31c. */
/* Supplied declaration required: FUN_0043a338. */
/* Supplied declaration required: FUN_0043a3f0. */
/* Supplied declaration required: FUN_0043a4a8. */
/* Supplied declaration required: FUN_0043a59c. */
/* Supplied declaration required: FUN_0043a654. */
/* Supplied declaration required: FUN_0043a718. */
/* Supplied declaration required: FUN_0043a734. */
/* Supplied declaration required: FUN_0043a750. */
/* Supplied declaration required: FUN_0043a76c. */
/* Supplied declaration required: FUN_0043a794. */
/* Supplied declaration required: FUN_0043a7b0. */
/* Supplied declaration required: FUN_0043a7cc. */
/* Supplied declaration required: FUN_0043a828. */
/* Supplied declaration required: FUN_0043a844. */
/* Supplied declaration required: FUN_0043ad24. */


void FUN_00425fb4(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9,
                 unsigned int param_10,unsigned int param_11,unsigned int param_12,unsigned int param_13)

{
/* irregular: 18 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  
  temp_v5 = param_13;
  temp_v4 = param_11;
  temp_v3 = param_10;
  temp_v2 = param_9;
  puVar7 = (unsigned int *)&param_9;
  FUN_0043a734();
  do {
    FUN_0043a794();
  } while (puVar7 != (unsigned int *)0x0);
  software_interrupt(0x19);
  if (DAT_00589538 < 0) {
    FUN_002e3140(DAT_00589538);
  }
  FUN_0043a718(1);
  FUN_0043a750(param_3);
  FUN_0043a31c(0);
  FUN_0043a7b0(param_5);
  FUN_0043a844(1);
  temp_v0 = (short)param_1;
  FUN_0043a7cc((int)temp_v0);
  FUN_0043a654((int)(short)param_2);
  FUN_0043a828(param_4);
  FUN_0043ad24(0xff);
  FUN_0043a4a8(param_6,param_1 * param_2,(int)temp_v0,(int)(short)temp_v2);
  temp_v1 = (short)(param_1 / 2);
  temp_v6 = (param_1 / 2) * (param_2 / 2);
  FUN_0043a338(param_7,temp_v6,(int)temp_v1,(int)(short)temp_v3);
  FUN_0043a3f0(param_8,temp_v6,(int)temp_v1,(int)(short)temp_v4);
  if (param_3 == 0) {
    temp_v6 = 4;
  }
  else if (param_3 == 1) {
    temp_v6 = 3;
  }
  else if (param_3 == 2 || param_3 == 3) {
    temp_v6 = 2;
  }
  else {
    temp_v6 = 0;
  }
  FUN_0043a59c(param_12,param_1 * param_2 * temp_v6,(int)(short)(temp_v0 * (short)temp_v6 * 8),
               (int)(short)((short)temp_v5 * (short)temp_v6 * 8));
  FUN_0043a76c();
  return;
}
