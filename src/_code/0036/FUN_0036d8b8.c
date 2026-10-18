/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036d8b8` (_code @ 0x36d8b8, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420c4c; /* 0x420c4c */
extern unsigned char DAT_00420fd4; /* 0x420fd4 */


unsigned int * FUN_0036d8b8(unsigned int *param_1)

{
  int temp_v0;
  int *piVar2;
  
  *param_1 = (unsigned int)&DAT_00420fd4;
  temp_v0 = param_1[0xd];
  param_1[0xe] = temp_v0;
  piVar2 = (int *)param_1[0xc];
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[0xd];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2);
  }
  temp_v0 = param_1[9];
  piVar2 = (int *)param_1[8];
  param_1[10] = temp_v0;
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[9];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2);
  }
  *param_1 = (unsigned int)&DAT_00420c4c;
  temp_v0 = param_1[5];
  param_1[6] = temp_v0;
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    temp_v0 = param_1[5];
  }
  if (piVar2 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar2 + 0xc))(piVar2);
  }
  return param_1;
}
