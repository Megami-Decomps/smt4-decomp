/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003358f4` (_code @ 0x3358f4, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern int FUN_0019dfbc(int);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_00388264. */


unsigned int FUN_003358f4(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  switch(param_1[3]) {
  case 1:
    if (*(int *)(DAT_00433158 + 0x444) != -1) {
      FUN_00388264(DAT_00433158,*(int *)(DAT_00433158 + 0x444),param_1,param_1 + 4);
      *(unsigned int *)(DAT_00433158 + 0x444) = 0xffffffff;
    }
    else {
      FUN_00297704(param_1 + 4,param_1,0);
    }
    param_1[3] = 2;
    break;
  case 2:
    temp_v0 = *param_1;
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_002972f8(temp_v0,0);
    param_1[1] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    FUN_002971e4(param_1[1],0);
    temp_v0 = 3;
    param_1[3] = temp_v0;
    break;
  case 3:
    temp_v0 = FUN_0019dfbc(param_1[1]);
    if (temp_v0 != 2) {
      return 0;
    }
    temp_v0 = 4;
    param_1[3] = temp_v0;
    break;
  case 4:
    if (param_1[1] != 0) {
      FUN_002a755c();
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      FUN_002c4360();
      *param_1 = 0;
    }
  }
  return 0;
}
