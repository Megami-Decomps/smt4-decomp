/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d848c` (_code @ 0x2d848c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249e54. */
extern int FUN_0024a6b0(int);
extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c415c. */
extern char *FUN_002c5c04(unsigned int);


int FUN_002d848c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  char *pcVar4;
  unsigned char temp_v3;
  
  temp_v1 = FUN_002522e0(param_1,0x2f);
  temp_v2 = FUN_0024a808(temp_v1 + 1);
  if (temp_v2 != 0xff) {
    return temp_v2;
  }
  pcVar4 = (char *)FUN_002c5c04(param_1);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == 'V')) {
    temp_v0 = pcVar4[1];
    temp_v3 = temp_v0 == 'E';
    if (temp_v3) {
      temp_v0 = pcVar4[2];
    }
    if (temp_v3 && temp_v0 == 'R') {
      temp_v1 = FUN_0024a6b0(temp_v1 + 1);
      FUN_00249e54(temp_v1,pcVar4);
      FUN_002c415c(pcVar4);
      return temp_v1;
    }
  }
  return 0xff;
}
