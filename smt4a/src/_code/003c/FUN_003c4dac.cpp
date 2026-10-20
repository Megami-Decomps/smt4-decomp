/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4dac` (_code @ 0x3c4dac, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(...);
int FUN_003e503c(void);

extern unsigned char DAT_00588c40; /* 0x588c40 */

extern unsigned int gameGetSlotRecord(void);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
extern unsigned int FUN_0032fac0(void);
extern int flagAt4IsClearOrMissing(void);
/* Supplied declaration required: FUN_003e503c. */


unsigned int FUN_003c4dac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg();
  if ((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) != 0) {
    temp_v1 = (*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + *(int *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x74c0) * 0x150;
    if (temp_v0 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x4492);
    }
    else {
      temp_v0 = (int)*(char *)(temp_v1 + 0x442c);
      if (temp_v0 >= 0x19) {
        temp_v2 = temp_v0 - 0x19;
        if ((int)temp_v2 < 0) {
          temp_v2 = 0;
        }
        temp_v2 = temp_v2 & 0xffff;
        FUN_003e503c();
      }
      else {
        temp_v2 = gameGetSlotRecord();
      }
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
    }
  }
  else {
    temp_v0 = flagAt4IsClearOrMissing();
    if (temp_v0 != 0) {
      scrSetResult(0);
      return 1;
    }
    temp_v2 = FUN_0032fac0();
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
