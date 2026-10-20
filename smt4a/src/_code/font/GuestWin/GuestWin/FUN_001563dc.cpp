/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001563dc` (_code @ 0x1563dc, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f570; /* 0x57f570 */

extern int FUN_00163aa4(int);
extern int FUN_0019a7dc(void);


unsigned short FUN_001563dc(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_0019a7dc();
  temp_v0 = DAT_0057f570;
  if (*(short *)(temp_v1 + 0x62) != 0) {
    temp_v1 = *(int *)(DAT_0057f570 + 8);
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (((temp_v1 != 2) && (temp_v1 == 3)) &&
           (temp_v1 = FUN_00163aa4(DAT_0057f570 + 0x30), temp_v1 != 0)) {
          *(unsigned int *)(temp_v0 + 8) = 0;
        }
      }
      else {
        temp_v1 = FUN_00163aa4(DAT_0057f570 + 0x30);
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
