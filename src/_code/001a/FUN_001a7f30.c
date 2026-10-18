/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a7f30` (_code @ 0x1a7f30, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

extern int FUN_002c583c(unsigned int);


void FUN_001a7f30(unsigned int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x0;
    if (DAT_0044e09c == 0) {
      puVar2 = &DAT_004c53c4;
    }
    else if (DAT_0044e09c == 1) {
      puVar2 = &DAT_004c53e4;
    }
    if ((puVar2[7] & 2) != 0) {
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[2] = param_1;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0x13;
    }
  }
  return;
}
