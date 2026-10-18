/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022dcac` (_code @ 0x22dcac, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_0024ea50(short);
/* Supplied declaration required: FUN_002bf4f0. */
/* Supplied declaration required: FUN_0039fbc8. */


void FUN_0022dcac(int param_1,int param_2,short param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_5 != 0) {
    temp_v0 = FUN_002bf4f0(param_1 + 200,param_4 + 0x42f);
  }
  else {
    temp_v0 = FUN_002bf4f0(param_1 + 200,param_4 + 0x40e);
  }
  temp_v2 = (int)*(short *)(temp_v0 + 8);
  temp_v0 = (int)*(short *)(temp_v0 + 10);
  if (param_5 != 0) {
    temp_v1 = FUN_002bf4f0(param_1 + 200,0x495);
  }
  else {
    temp_v1 = FUN_002bf4f0(param_1 + 200,0x487);
  }
  FUN_0039fbc8(param_1 + 200,(int)param_3,*(short *)(temp_v1 + 8) + temp_v2,
               *(short *)(temp_v1 + 10) + temp_v0,param_6);
  if ((param_2 != 0) && (temp_v1 = FUN_0024ea50(param_3), temp_v1 != 0)) {
    if (param_5 == 0) {
      FUN_00231bcc(param_1 + 200,0x486,temp_v2,temp_v0,param_6,1);
      return;
    }
    FUN_00231bcc(param_1 + 200,0x494,temp_v2,temp_v0,param_6,1);
  }
  return;
}
