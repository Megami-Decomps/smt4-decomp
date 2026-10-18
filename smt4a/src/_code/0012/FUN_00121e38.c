/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121e38` (_code @ 0x121e38, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055b0ec; /* 0x55b0ec */
extern int *DAT_00594aa8; /* 0x594aa8 */

/* Supplied declaration required: FUN_00113baa. */
extern int FUN_001145a0(int);
/* Supplied declaration required: FUN_00121c48. */
extern int FUN_00129380(int);
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e9f64(int);
/* Supplied declaration required: FUN_002ea0b8. */
extern int FUN_002eac34(unsigned int);
/* Supplied declaration required: FUN_002eb624. */
/* Supplied declaration required: FUN_002ecf40. */
extern int FUN_002ed250(int);
extern int FUN_002f31cc(int);
extern int FUN_0030153c(int);


void FUN_00121e38(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055b0ec;
  FUN_00121c48();
  FUN_00113baa(param_1[0x34]);
  if ((int *)param_1[0x34] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x34] + 4))();
  }
  param_1[0x34] = 0;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x28] + 4))();
  }
  param_1[0x28] = 0;
  FUN_002ecf40();
  if (param_1[3] != 0) {
    (**(romwright_code **)(*DAT_00594aa8 + 0xc))();
    param_1[3] = 0;
  }
  if ((int *)param_1[0xc6] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0xc6] + 4))();
    param_1[0xc6] = 0;
  }
  temp_v0 = FUN_002eac34(9);
  if (*(int *)(temp_v0 + 0xa4) == param_1[200]) {
    temp_v0 = FUN_002eac34(9);
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
  }
  temp_v0 = FUN_002eac34(1);
  if (*(int *)(temp_v0 + 0xa4) == param_1[200]) {
    temp_v0 = FUN_002eac34(1);
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
  }
  temp_v0 = FUN_002eac34(8);
  if (*(int *)(temp_v0 + 0xa4) == param_1[200]) {
    temp_v0 = FUN_002eac34(8);
    *(unsigned int *)(temp_v0 + 0xa4) = 0;
  }
  if ((int *)param_1[199] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[199] + 4))();
  }
  if ((int *)param_1[200] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[200] + 4))();
  }
  temp_v1 = 0x394;
  temp_v0 = FUN_002eb624(param_1 + 0xe5);
  temp_v0 = temp_v0 - temp_v1;
  for (temp_v1 = *(int *)(temp_v0 + 0x388); temp_v1 != *(int *)(temp_v0 + 0x38c); temp_v1 = temp_v1 + 8) {
  }
  FUN_002e6e14();
  temp_v1 = 0x358;
  temp_v0 = FUN_002eb624(temp_v0 + 0x358);
  temp_v0 = FUN_002e9f64((temp_v0 - temp_v1) + 0x34c);
  temp_v0 = FUN_002f31cc(temp_v0 - 0x264);
  temp_v0 = FUN_0030153c(temp_v0 - 0x14);
  temp_v0 = FUN_001145a0(temp_v0 - 0x30);
  temp_v0 = FUN_00129380(temp_v0 - 0x50);
  temp_v0 = FUN_002ed250(temp_v0 - 0x14);
  temp_v0 = FUN_002eb624(temp_v0 - 0x30);
  FUN_002ea0b8(temp_v0 - 0x10);
  return;
}
