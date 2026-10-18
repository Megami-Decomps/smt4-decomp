/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f61c4` (_code @ 0x2f61c4, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e18c; /* 0x43e18c */
extern unsigned int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_002b8d24. */
/* Supplied declaration required: FUN_002b9008. */
extern unsigned int FUN_002bc210(void);
extern int FUN_002bc26c(void);


void FUN_002f61c4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_0043e190;
  if (DAT_0043e190 != 0) {
    param_2 = (unsigned int)*(unsigned char *)(DAT_0043e190 + 8);
  }
  if (DAT_0043e190 != 0 && param_2 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x30) = 0;
    *(unsigned char *)(temp_v1 + 0x31) = 0;
    temp_v2 = 0;
    if (0 < *(int *)(temp_v1 + 0x20)) {
      do {
        FUN_002b9008();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(DAT_0043e190 + 0x20));
    }
    temp_v1 = DAT_0043e190;
    *(unsigned char *)(DAT_0043e190 + 0x2f) = 0;
    *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
    temp_v2 = FUN_002bc26c();
    temp_v1 = 0;
    if (temp_v2 != 0) {
      temp_v1 = FUN_002bc210();
    }
    temp_v0 = DAT_0043e190;
    if (DAT_0043e190 != 0) {
      temp_v1 = (unsigned int)*(unsigned char *)(DAT_0043e190 + 8);
    }
    if (DAT_0043e190 != 0 && temp_v1 != 0) {
      temp_v1 = DAT_0043e190;
      FUN_002b8d24(DAT_0043e190,*(unsigned char *)(DAT_0043e190 + 9));
      *(unsigned char *)(temp_v0 + 8) = 3;
      *(unsigned char *)(temp_v0 + 0x35) = 0;
    }
    temp_v2 = DAT_0043e18c;
    if (DAT_0043e18c != 0) {
      temp_v1 = (unsigned int)*(unsigned char *)(DAT_0043e18c + 8);
    }
    if (DAT_0043e18c != 0 && temp_v1 != 0) {
      FUN_002b8d24(DAT_0043e18c,*(unsigned char *)(DAT_0043e18c + 9));
      *(unsigned char *)(temp_v2 + 8) = 3;
      *(unsigned char *)(temp_v2 + 0x35) = 0;
    }
  }
  return;
}
