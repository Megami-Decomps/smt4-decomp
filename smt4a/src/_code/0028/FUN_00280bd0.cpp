/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280bd0` (_code @ 0x280bd0, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00193038(int *, int *);
int FUN_002e59f8(int, unsigned int *, int);
int FUN_002e6dd0(unsigned int *, int);
int FUN_0030fc80(int *);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

/* Supplied declaration required: FUN_00193038. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_0030fc80. */


void FUN_00280bd0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned long long param_5,int param_6)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_34;
  int temp_v2;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  FUN_002e6dd0(param_1,0x80);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = (int)param_5;
  FUN_0030fc80(&temp_v2);
  temp_v0 = (unsigned int)((unsigned long long)param_5 >> 0x20);
  temp_v1 = temp_v2;
  uStack_34 = uStack_2c;
  FUN_00193038(&temp_v2,&temp_v1);
  param_1[4] = temp_v2;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_28;
  param_1[0x10] = temp_v0;
  if (param_6 != 0) {
    FUN_002e59f8(param_6,param_1 + 0x11,0x3c);
  }
  return;
}

} /* extern "C" */
