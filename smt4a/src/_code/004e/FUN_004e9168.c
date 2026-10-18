/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e9168` (_code @ 0x4e9168, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */

/* Supplied declaration required: FUN_001aba54. */


void FUN_004e9168(unsigned int param_1,unsigned int *param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_001aba54();
  if (param_3 == 0) {
    return;
  }
  temp_v1 = 1;
  temp_v0 = 0;
  switch((*(unsigned int *)(param_3 + 0x28) & 0x1ff) >> 5) {
  case 0:
    if ((DAT_0057116c & param_2[1]) != 0 || (DAT_00571168 & *param_2) != 0) {
      temp_v1 = 0;
    }
    break;
  case 1:
    *param_4 = (unsigned int)((*param_2 & DAT_00571168) == 0 && (DAT_0057116c & param_2[1]) == 0);
    *param_5 = 1;
    return;
  case 2:
    if ((param_2[1] & DAT_0057116c) != 0 || (*param_2 & DAT_00571168) != 0) {
      temp_v1 = 1;
      break;
    }
    temp_v1 = 0;
    break;
  case 3:
    *param_4 = (unsigned int)((DAT_0057116c & param_2[1]) != 0 || (DAT_00571168 & *param_2) != 0);
    *param_5 = 1;
    return;
  case 4:
    if ((*param_2 & DAT_00571168) == 0 && (DAT_0057116c & param_2[1]) == 0) {
      temp_v1 = 0;
      break;
    }
    temp_v1 = 1;
    break;
  case 5:
    temp_v0 = 2;
    *param_5 = temp_v0;
    return;
  case 6:
    if ((param_2[1] & DAT_0057116c) == 0 && (*param_2 & DAT_00571168) == 0) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
    *param_4 = temp_v1;
    *param_5 = 1;
    return;
  case 7:
    *param_4 = (unsigned int)((*param_2 & DAT_00571168) != 0 || (DAT_0057116c & param_2[1]) != 0);
    *param_5 = 0;
    return;
  case 8:
    temp_v1 = (unsigned int)((DAT_0057116c & param_2[1]) != 0 || (*param_2 & DAT_00571168) != 0);
    *param_4 = temp_v1;
    *param_5 = 1;
    return;
  default:
    return;
  }
  *param_4 = temp_v1;
  *param_5 = temp_v0;
  return;
}
