/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf140` (_code @ 0x3bf140, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);


void FUN_003bf140(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002a8a08();
  temp_v3 = 0;
  if (*(char *)(temp_v0 + 0x910b) != '\0') {
    do {
      if (-1 < *(char *)(temp_v0 + temp_v3 + 0x90f0)) {
        temp_v1 = FUN_002a89e4();
        temp_v2 = FUN_0029ee4c(temp_v1,10);
        if (temp_v2 == 0) {
          *(unsigned char *)(temp_v1 + 0x600) = 0;
        }
        else {
          *(char *)(temp_v1 + 0x600) = *(char *)(temp_v1 + 0x600) + '\x01';
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x910b));
  }
  return;
}
