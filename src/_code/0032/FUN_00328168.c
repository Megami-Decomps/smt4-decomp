/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328168` (_code @ 0x328168, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */


char * FUN_00328168(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  FUN_002c0cec(0x2e,3);
  temp_v0 = FUN_002c0c74();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_002c0cec(0x2e,3);
      temp_v0 = FUN_002c0cc4();
      temp_v2 = FUN_002c0c74(temp_v1);
      pcVar4 = (char *)0x0;
      if (temp_v3 < temp_v2) {
        pcVar4 = (char *)(temp_v0 + temp_v3 * 0x14);
      }
      temp_v0 = (int)*pcVar4;
      temp_v4 = temp_v0 == param_1;
      if (temp_v4) {
        temp_v0 = (int)pcVar4[1];
      }
      if (temp_v4 && temp_v0 == param_2) {
        return pcVar4;
      }
      temp_v3 = temp_v3 + 1;
      FUN_002c0cec(0x2e,3);
      temp_v0 = FUN_002c0c74();
    } while ((int)temp_v3 < temp_v0);
  }
  return (char *)0x0;
}
