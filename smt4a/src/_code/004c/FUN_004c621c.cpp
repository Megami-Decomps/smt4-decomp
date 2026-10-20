/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c621c` (_code @ 0x4c621c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_004bd340(int, unsigned int);


void FUN_004c621c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_001ab888();
  temp_v3 = 0;
  if (*(unsigned char *)(temp_v0 + 0x1ca3) != 0) {
    do {
      if (-1 < *(char *)(temp_v0 + temp_v3 + 0x1c88)) {
        temp_v1 = FUN_001ab854();
        temp_v2 = FUN_004bd340(temp_v1,10);
        if (temp_v2 == 0) {
          *(unsigned char *)(temp_v1 + 0x12a) = 0;
        }
        else {
          *(char *)(temp_v1 + 0x12a) = *(char *)(temp_v1 + 0x12a) + '\x01';
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x1ca3));
  }
  return;
}

} /* extern "C" */
