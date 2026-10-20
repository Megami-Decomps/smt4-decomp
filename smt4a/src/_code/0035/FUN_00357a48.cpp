/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357a48` (_code @ 0x357a48, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */
extern unsigned char DAT_005f1a5e; /* 0x5f1a5e */


void FUN_00357a48(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00587f28;
  if (DAT_005f1a5c != '\0') {
    temp_v1 = *(int *)(DAT_00587f28 + 0x3c);
  }
  else {
    temp_v1 = *(int *)(DAT_00587f28 + 0xc);
  }
  if (*(int *)(DAT_00587f28 + 0x28) == temp_v1) {
    DAT_005f1a5e = 0;
    return;
  }
  *(unsigned int *)(DAT_00587f28 + 0x6c) = 0xb;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(int *)(temp_v0 + 200) = temp_v1;
  return;
}

} /* extern "C" */
