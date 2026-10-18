/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320834` (_code @ 0x320834, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f28c; /* 0x57f28c */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */

/* Supplied declaration required: FUN_001681cc. */


void FUN_00320834(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f28c;
  temp_v1 = *(int *)(DAT_0057f28c + 0x918);
  if (*(char *)(DAT_0057f28c + 0x90c) != '\0') {
    if (DAT_005f1a5c != '\0') {
      if (temp_v1 == 2) {
        if (*(int *)(DAT_0057f28c + 0x910) == 0) {
          FUN_001681cc(0x10f);
        }
        if (*(int *)(temp_v0 + 0x910) == 1) {
          FUN_001681cc(0x110);
          return;
        }
      }
    }
    else if (temp_v1 == 2) {
      if (*(int *)(DAT_0057f28c + 0x910) == 0) {
        FUN_001681cc(0xd7);
      }
      if (*(int *)(temp_v0 + 0x910) == 1) {
        FUN_001681cc(0xd6);
        return;
      }
    }
  }
  else {
    if (temp_v1 == 2) {
      if (*(int *)(DAT_0057f28c + 0x910) == 0) {
        FUN_001681cc(0xd7);
      }
      if (*(int *)(temp_v0 + 0x910) == 1) {
        FUN_001681cc(0xd6);
      }
    }
    if (*(int *)(temp_v0 + 0x918) == 3) {
      if (*(int *)(temp_v0 + 0x910) == 0) {
        FUN_001681cc(0xd8);
      }
      if (*(int *)(temp_v0 + 0x910) == 1) {
        FUN_001681cc(0xd9);
      }
      if (*(int *)(temp_v0 + 0x910) == 2) {
        FUN_001681cc(0xda);
        return;
      }
    }
  }
  return;
}
