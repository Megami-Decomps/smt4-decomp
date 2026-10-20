/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5f2c` (_code @ 0x4e5f2c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(void);

extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_005712c8; /* 0x5712c8 */
extern unsigned int DAT_005712cc; /* 0x5712cc */

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_003f0e20. */


unsigned char FUN_004e5f2c(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)*param_1;
  if ((DAT_005712cc & puVar1[0x116b]) == 0 && (DAT_005712c8 & puVar1[0x116a]) == 0) {
    param_2 = param_2 + param_3 * 0x10;
    temp_v1 = *(int *)(param_2 + 0x9e4) + param_4;
    FUN_003f0e20();
    if ((puVar1 != (unsigned int *)0x0) && (0 < (int)puVar1[0x57])) {
      temp_v0 = (int)(puVar1[0x97] * puVar1[0x57]) / 100;
      if (temp_v0 < 1) {
        temp_v0 = 1;
      }
      if (temp_v1 < temp_v0) {
        temp_v1 = temp_v0;
      }
    }
    temp_v0 = gameFlagIsSet(0x591);
    if (((temp_v0 == 0 || puVar1 == (unsigned int *)0x0) ||
        ((puVar1[1] & DAT_0057116c) != 0 || (*puVar1 & DAT_00571168) != 0)) || (-1 < param_4)) {
      if (-1 < temp_v1) {
        *(int *)(param_2 + 0x9e4) = temp_v1;
      }
      else {
        *(unsigned int *)(param_2 + 0x9e4) = 0;
      }
      return -1 >= temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
