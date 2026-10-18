/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e19c` (_code @ 0x29e19c, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_0024d9e4. */
/* Supplied declaration required: FUN_0024db60. */
/* Supplied declaration required: FUN_0026aac0. */
/* Supplied declaration required: FUN_0029df14. */
extern unsigned int FUN_002b66ec(void);


void FUN_0029e19c(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3 [1552];
  
  temp_v0 = DAT_0044e144;
  if ((int)param_1 < 0) {
    temp_v1 = FUN_002b66ec();
    FUN_0024db60(temp_v0 + 0x1300,temp_v1);
    temp_v2 = 0;
  }
  else {
    if (param_2 == 0) {
      FUN_0029df14(param_1 & 0xffff,temp_v3);
      FUN_0024d9e4(temp_v0 + 0x1300,temp_v3);
      *(unsigned char *)(temp_v0 + 0x1e66) = 1;
      *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
      return;
    }
    FUN_0026aac0();
    FUN_0024d9e4(temp_v0 + 0x1300,temp_v3);
    temp_v2 = 6;
  }
  *(unsigned char *)(temp_v0 + 0x1e66) = temp_v2;
  *(unsigned char *)(temp_v0 + 0x1eb8) = 1;
  return;
}
