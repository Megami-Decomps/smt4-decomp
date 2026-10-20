/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270028` (_code @ 0x270028, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e278; /* 0x43e278 */


void FUN_00270028(int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e278;
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0043e278 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
    *(unsigned char *)(temp_v0 + 0xf60) = 0;
    *(unsigned char *)(temp_v0 + 0xf63) = 0;
    *(unsigned char *)(temp_v0 + 0xf64) = 0;
    *(unsigned char *)(temp_v0 + 0xf65) = 0;
    *(unsigned char *)(temp_v0 + 0xf98) = 0;
    return;
  }
  if (param_1 == 1) {
    *(unsigned char *)(DAT_0043e278 + 0xc) = 1;
    *(unsigned char *)(temp_v0 + 0xf98) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 1;
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 3) {
      *(unsigned char *)(DAT_0043e278 + 0xc) = 1;
      *(unsigned int *)(temp_v0 + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x14) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      return;
    }
    if (param_1 == 4) {
      *(unsigned char *)(DAT_0043e278 + 0xc) = 1;
      *(unsigned int *)(temp_v0 + 0x10) = 1;
      *(unsigned char *)(temp_v0 + 0xf98) = 1;
    }
  }
  else {
    if (*(char *)(DAT_0043e278 + 0xc) == '\0') {
      *(unsigned int *)(temp_v0 + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x14) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      return;
    }
    *(unsigned int *)(DAT_0043e278 + 0x14) = 1;
  }
  return;
}

} /* extern "C" */
