/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de02c` (_code @ 0x3de02c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fac; /* 0x588fac */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_0061953c; /* 0x61953c */

extern int jyoucyuGetTableEntry(unsigned int);


void FUN_003de02c(unsigned int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x0;
    if ((*(int *)((unsigned char *)&DAT_00588fac + 0x4)) == 0) {
      puVar2 = &DAT_0061951c;
    }
    else if ((*(int *)((unsigned char *)&DAT_00588fac + 0x4)) == 1) {
      puVar2 = &DAT_0061953c;
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
