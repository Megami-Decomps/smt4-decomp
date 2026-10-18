/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399d60` (_code @ 0x399d60, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00220888. */
extern int FUN_002931cc(unsigned int);
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_0039af30. */
/* Supplied declaration required: FUN_0039b58c. */
/* Supplied declaration required: FUN_0039c944. */


void FUN_00399d60(int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(unsigned char *)(param_1 + 0xc) != 0xff) {
    temp_v1 = *(unsigned int *)(param_1 + 0x10);
    temp_v2 = FUN_002c0ba8(0x400);
    if (temp_v2 != 0) {
      temp_v2 = FUN_002931cc(0x76);
      temp_v0 = '\0';
      if (temp_v2 != 0) {
        temp_v0 = *(char *)(param_1 + 0xc);
      }
      if (temp_v2 != 0 && temp_v0 != '\0') {
        FUN_0039c944(param_1);
      }
    }
    if ((temp_v1 & 0x1000) == 0) {
      FUN_00220888();
      temp_v2 = param_1;
      if (*(char *)(param_1 + 0xc) != '\0') {
        FUN_0039af30();
      }
      else {
        temp_v3 = FUN_002c0ba8(0x400);
        if (temp_v3 == 0) {
          return;
        }
        temp_v3 = FUN_002931cc(0x76);
        if (temp_v3 == 0) {
          return;
        }
        FUN_0039b58c();
      }
      if (temp_v2 != 0) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 1;
      }
    }
  }
  return;
}
