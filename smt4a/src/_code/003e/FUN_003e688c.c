/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e688c` (_code @ 0x3e688c, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
extern int FUN_00224880(int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
extern int FUN_003efb18(void);
/* Supplied declaration required: FUN_0046ec30. */


unsigned int FUN_003e688c(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  switch(param_1[3]) {
  case 1:
    if (*(int *)(DAT_00570280 + 0x460) != -1) {
      FUN_0046ec30(DAT_00570280,*(int *)(DAT_00570280 + 0x460),param_1,param_1 + 4);
      *(unsigned int *)(DAT_00570280 + 0x460) = 0xffffffff;
    }
    else {
      FUN_002804b0(param_1 + 4,param_1,0);
    }
    FUN_0014aa78();
    temp_v0 = FUN_003efb18();
    if (temp_v0 == 0) {
      temp_v0 = 2;
      param_1[3] = temp_v0;
      break;
    }
    param_1[3] = 4;
    break;
  case 2:
    temp_v0 = *param_1;
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_00275bc8(temp_v0,0);
    param_1[1] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    FUN_00275f44(param_1[1],0);
    temp_v0 = 3;
    param_1[3] = temp_v0;
    break;
  case 3:
    temp_v0 = FUN_00224880(param_1[1]);
    if (temp_v0 != 2) {
      return 0;
    }
    param_1[3] = 4;
    break;
  case 4:
    if (param_1[1] != 0) {
      FUN_0019c364();
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      FUN_0019a5a0();
      *param_1 = 0;
    }
  }
  return 0;
}
