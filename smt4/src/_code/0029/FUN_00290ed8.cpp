/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290ed8` (_code @ 0x290ed8, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

extern int FUN_002c564c(unsigned int);


void FUN_00290ed8(unsigned int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x0;
    if (DAT_0044e09c == 0) {
      puVar2 = &DAT_004c53c4;
    }
    else if (DAT_0044e09c == 1) {
      puVar2 = &DAT_004c53e4;
    }
    temp_v1 = puVar2[7];
    if (((temp_v1 & 2) != 0) && ((temp_v1 & 0x3c) == 0)) {
      temp_v2 = (temp_v1 & 0x40) != 0;
      if (temp_v2) {
        temp_v1 = temp_v1 | 0x200;
      }
      puVar2[2] = param_1;
      if (!temp_v2) {
        temp_v1 = temp_v1 | 0x10;
      }
      puVar2[7] = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
