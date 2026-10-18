/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004630d0` (_code @ 0x4630d0, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a08d0. */
/* Supplied declaration required: FUN_001af214. */
extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001b6660. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001d0b28. */
/* Supplied declaration required: FUN_001d2384. */
/* Supplied declaration required: FUN_001d239c. */
/* Supplied declaration required: FUN_0045b96c. */
/* Supplied declaration required: FUN_00462b74. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_004630d0(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned char *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0xa2) != '\0') {
    temp_v0 = FUN_001b1f04();
    FUN_001d0b28(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xa2) = 0;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v0 = FUN_001c35d8();
    FUN_001b6660(temp_v0,param_1 + 0x44);
    if (*(int *)(param_1 + 0x9c) != 0) {
      if (*(char *)(*(int *)(param_1 + 0x9c) + 0x139) != '\0') {
        FUN_00462b74(param_1);
        FUN_001d239c(*(unsigned int *)(param_1 + 0x9c));
        if (*(int *)(param_1 + 0x9c) != 0) {
          FUN_001d2384(*(unsigned int *)(param_1 + 0x9c));
          *(unsigned int *)(param_1 + 0x9c) = 0;
        }
      }
      else {
        FUN_001d2384(*(unsigned int *)(param_1 + 0x9c));
        *(unsigned int *)(param_1 + 0x9c) = 0;
      }
    }
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0xa1) != '\0') {
    FUN_001a08d0(param_1);
    *(unsigned char *)(param_1 + 0xa1) = 0;
  }
  temp_v2 = *(int *)(param_1 + 0xa8);
  if (temp_v2 != 0) {
    temp_v3 = *(int *)(param_1 + 0xa4);
    temp_v1 = temp_v2 + 0xc;
    FUN_001af214();
    if (temp_v1 != 0) {
      if (*(int *)(temp_v2 + 0x3c) != 0) {
        FUN_0045b96c();
      }
      nw_ut_internal_LinkListImpl_insert(temp_v3 + 0x14,temp_v3 + 0x18,temp_v2 + 0x44);
    }
    else {
      nw_ut_internal_LinkListImpl_insert(temp_v3 + 0x20,temp_v3 + 0x24,temp_v2 + 0x44);
    }
    *(unsigned int *)(param_1 + 0xa8) = 0;
  }
  return;
}
