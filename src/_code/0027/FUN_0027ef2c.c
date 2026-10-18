/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ef2c` (_code @ 0x27ef2c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00448c20; /* 0x448c20 */

extern unsigned int FUN_00291e40(void);


void FUN_0027ef2c(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v1 = 0;
  do {
    temp_v2 = DAT_00448c20 + temp_v1 * 0x20;
    if (*(char *)(temp_v2 + 0xc) == '\0') {
      *(char *)(temp_v2 + 0xc) = '\x01';
      *(short *)(temp_v2 + 0x1c) = (short)param_2;
      *(unsigned short *)(temp_v2 + 0x1e) = 0;
      *(unsigned int *)(temp_v2 + 0x20) = in_s0;
      *(unsigned int *)(temp_v2 + 0x24) = in_s1;
      *(unsigned int *)(temp_v2 + 0x28) = in_s2;
      *(unsigned int *)(temp_v2 + 0x10) = param_1;
      if (param_2 != 0) {
        *(unsigned int *)(temp_v2 + 0x14) = 0;
        *(unsigned int *)(temp_v2 + 0x18) = 0;
      }
      else {
        temp_v0 = FUN_00291e40();
        *(unsigned int *)(temp_v2 + 0x14) = temp_v0;
        *(unsigned int *)(temp_v2 + 0x18) = 1;
      }
      *(int *)(DAT_00448c20 + 4) = *(int *)(DAT_00448c20 + 4) + 1;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  return;
}
