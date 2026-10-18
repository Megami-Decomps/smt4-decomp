/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399290` (_code @ 0x399290, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580238; /* 0x580238 */

/* Supplied declaration required: FUN_0040619c. */


void FUN_00399290(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = DAT_00580238;
  if (DAT_00580238 != 0) {
    temp_v3 = DAT_00580238 + param_1 * 0x88;
    temp_v0 = *(char *)(temp_v3 + 0xb79);
    if (param_2 != 0) {
      if (temp_v0 != '\0') {
        return;
      }
      if (*(char *)(temp_v3 + 0xb78) == '\0') {
        return;
      }
      *(unsigned char *)(temp_v3 + 0xb79) = 1;
      temp_v4 = *(int *)(*(int *)(temp_v4 + 0xae4) + 8);
      FUN_0040619c(temp_v4,param_1);
      temp_v2 = *(unsigned int *)(temp_v4 + 4) & 0xfffffffc;
    }
    else {
      temp_v1 = '\0';
      if (temp_v0 != '\0') {
        temp_v1 = *(char *)(temp_v3 + 0xb78);
      }
      if (temp_v0 == '\0' || temp_v1 == '\0') {
        return;
      }
      *(unsigned char *)(temp_v3 + 0xb79) = 0;
      temp_v4 = *(int *)(*(int *)(temp_v4 + 0xae4) + 8);
      FUN_0040619c(temp_v4,param_1);
      temp_v2 = *(unsigned int *)(temp_v4 + 4) | 3;
    }
    *(unsigned int *)(temp_v4 + 4) = temp_v2;
  }
  return;
}
