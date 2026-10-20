/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b208` (_code @ 0x11b208, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e110; /* 0x43e110 */

extern int FUN_002b6b20(void);
extern int FUN_002bf818(int);


unsigned short FUN_0011b208(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002b6b20();
  temp_v0 = DAT_0043e110;
  if (*(short *)(temp_v1 + 0x46) != 0) {
    temp_v1 = *(int *)(DAT_0043e110 + 8);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (((temp_v1 != 2) && (temp_v1 == 3)) &&
           (temp_v1 = FUN_002bf818(DAT_0043e110 + 0x30), temp_v1 != 0)) {
          *(unsigned int *)(temp_v0 + 8) = 0;
        }
      }
      else {
        temp_v1 = FUN_002bf818(DAT_0043e110 + 0x30);
        if (temp_v1 != 0) {
          *(unsigned int *)(temp_v0 + 8) = 2;
          *(unsigned int *)(temp_v0 + 0xc) = 0;
        }
      }
    }
    *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  }
  return 0;
}

} /* extern "C" */
