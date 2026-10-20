/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303088` (_code @ 0x303088, 0xbe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fc80(int *);

/* Supplied declaration required: FUN_0030fc80. */
extern unsigned int FUN_005020c0(unsigned int *);
extern unsigned int FUN_005021d8(unsigned int *);
extern unsigned int FUN_00502244(unsigned int *);
extern int nn_fnd_DateTime_GetDay(unsigned int);
extern int nn_fnd_DateTime_GetMonth(unsigned int);
extern int nn_fnd_DateTime_GetYear(unsigned int);


void FUN_00303088(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_0030fc80(&uStack_18);
  temp_v0 = nn_fnd_DateTime_GetYear((unsigned int)&uStack_18);
  param_1[1] = ((temp_v0 >> 6) & 0xff) | (param_1[1] & 0xffffff00);
  *param_1 = (temp_v0 << 0x1a) | (*param_1 & 0x3ffffff);
  temp_v0 = nn_fnd_DateTime_GetMonth((unsigned int)&uStack_18);
  param_1[1] = param_1[1];
  *param_1 = ((temp_v0 & 0xf) << 0x16) | (*param_1 & 0xfc3fffff);
  temp_v0 = nn_fnd_DateTime_GetDay((unsigned int)&uStack_18);
  param_1[1] = param_1[1];
  *param_1 = ((temp_v0 & 0x1f) << 0x11) | (*param_1 & 0xffc1ffff);
  temp_v0 = FUN_005020c0((unsigned int *)&uStack_18);
  param_1[1] = param_1[1];
  *param_1 = ((temp_v0 & 0x1f) << 0xc) | (*param_1 & 0xfffe0fff);
  temp_v0 = FUN_005021d8((unsigned int *)&uStack_18);
  param_1[1] = param_1[1];
  *param_1 = ((temp_v0 & 0x3f) << 6) | (*param_1 & 0xfffff03f);
  temp_v0 = FUN_00502244((unsigned int *)&uStack_18);
  *param_1 = (temp_v0 & 0x3f) | (*param_1 & 0xffffffc0);
  param_1[1] = param_1[1];
  return;
}

} /* extern "C" */
