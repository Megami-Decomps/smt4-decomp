/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003356c0` (_code @ 0x3356c0, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296f4c(int, int);
int FUN_00297060(int, int);
int FUN_00297468(int *, int *, int);
int FUN_002a7218(void);
int FUN_002c415c(void);
int FUN_00388054(int, int, int *, int *);

extern int DAT_00433158; /* 0x433158 */

extern int FUN_0019e0c0(int);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_00388054. */


unsigned int FUN_003356c0(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  switch(param_1[3]) {
  case 1:
    if (*(int *)(DAT_00433158 + 0x444) != -1) {
      FUN_00388054(DAT_00433158,*(int *)(DAT_00433158 + 0x444),param_1,param_1 + 4);
      *(unsigned int *)(DAT_00433158 + 0x444) = 0xffffffff;
    }
    else {
      FUN_00297468(param_1 + 4,param_1,0);
    }
    param_1[3] = 2;
    break;
  case 2:
    temp_v0 = *param_1;
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_00297060(temp_v0,0);
    param_1[1] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    FUN_00296f4c(param_1[1],0);
    temp_v0 = 3;
    param_1[3] = temp_v0;
    break;
  case 3:
    temp_v0 = FUN_0019e0c0(param_1[1]);
    if (temp_v0 != 2) {
      return 0;
    }
    temp_v0 = 4;
    param_1[3] = temp_v0;
    break;
  case 4:
    if (param_1[1] != 0) {
      FUN_002a7218();
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      FUN_002c415c();
      *param_1 = 0;
    }
  }
  return 0;
}

} /* extern "C" */
