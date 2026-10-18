/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020118c` (_code @ 0x20118c, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002546c4(void);
/* Supplied declaration required: FUN_002b49d8. */
extern unsigned int FUN_002c0e4c(unsigned int);
/* Supplied declaration required: FUN_002c0e9c. */
/* Supplied declaration required: FUN_002c0ec4. */


void FUN_0020118c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_002b49d8(0x19);
  temp_v0 = FUN_002546c4();
  temp_v1 = FUN_002c0ec4(0x19,0);
  temp_v2 = FUN_002c0e9c();
  temp_v3 = FUN_002c0e4c(temp_v1);
  temp_v5 = 0;
  if (temp_v5 < temp_v3) {
    do {
      if ((*(char *)(temp_v2 + 0x2a) != '\0') && (temp_v4 = 1, temp_v0 >= 2)) {
        do {
          FUN_002c0ec4(0x19,temp_v4);
          piVar5 = (int *)FUN_002c0e9c();
          if (*piVar5 == (int)*(short *)(temp_v2 + 0x20)) {
            *(char *)(temp_v2 + 0x2a) = (char)temp_v4;
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v0);
      }
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + 0x2c;
    } while (temp_v5 < temp_v3);
  }
  return;
}
