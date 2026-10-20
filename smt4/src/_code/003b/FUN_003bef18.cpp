/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bef18` (_code @ 0x3bef18, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0029ebac(int, unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);


void FUN_003bef18(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002a8764();
  temp_v3 = 0;
  if (*(char *)(temp_v0 + 0x910b) != '\0') {
    do {
      if (-1 < *(char *)(temp_v0 + temp_v3 + 0x90f0)) {
        temp_v1 = FUN_002a8740();
        temp_v2 = FUN_0029ebac(temp_v1,10);
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

} /* extern "C" */
