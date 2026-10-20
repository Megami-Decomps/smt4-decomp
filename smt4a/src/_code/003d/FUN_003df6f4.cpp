/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df6f4` (_code @ 0x3df6f4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);
extern int FUN_003e46f4(unsigned int);


unsigned int FUN_003df6f4(void)

{
/* irregular: 1 unstructured edge(s) */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_001801a4();
  temp_v4 = 4;
  temp_v1 = FUN_003e46f4(0x77);
  if (temp_v1 != 0) {
    temp_v4 = 5;
  }
  temp_v1 = FUN_003e46f4(0x78);
  if (temp_v1 != 0) {
    temp_v4 = temp_v4 + 1;
  }
  temp_v1 = FUN_003e46f4(0x79);
  if (temp_v1 != 0) {
    temp_v4 = temp_v4 + 1;
  }
  temp_v1 = FUN_003e46f4(0x7a);
  if (temp_v1 != 0) {
    temp_v4 = temp_v4 + 1;
  }
  if (temp_v4 >= 9) {
    temp_v4 = 8;
  }
  if (temp_v4 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = temp_v4 & 1;
    temp_v1 = 0;
    if (temp_v2 != 0) {
      do {
        if (*(short *)(temp_v0 + temp_v1 * 2 + 0x34) == 0) {
          return 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v2);
    }
  }
  if (temp_v2 < temp_v4) {
    do {
      temp_v3 = temp_v0 + temp_v2 * 2;
      temp_v5 = *(short *)(temp_v3 + 0x34) == 0;
      if (!temp_v5) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 0x36);
      }
      if (temp_v5 || temp_v3 == 0) {
        return 1;
      }
      temp_v2 = temp_v2 + 2;
    } while ((int)temp_v2 < (int)temp_v4);
  }
  return 0;
}

} /* extern "C" */
