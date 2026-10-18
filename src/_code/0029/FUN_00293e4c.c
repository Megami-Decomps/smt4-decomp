/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293e4c` (_code @ 0x293e4c, 0x1f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00292f44. */


void FUN_00293e4c(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = DAT_0044e144;
  *(unsigned int *)(DAT_0044e144 + 0x14) = 0;
  *(unsigned char *)(temp_v1 + 0x1e63) = 1;
  temp_v2 = DAT_0044e144;
  temp_v0 = *(char *)(temp_v1 + 0x1e66);
  if (temp_v0 == '\0') {
    if (*(int *)(DAT_0044e144 + 0x12e4) == 0) {
      FUN_00292f44(0);
    }
    if (*(int *)(temp_v2 + 0x12e4) == 1) {
      FUN_00292f44(1);
    }
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x12f1);
    temp_v4 = temp_v3 == 0;
    if (temp_v4) {
      temp_v3 = *(unsigned int *)(temp_v2 + 0x12e4);
    }
    if (!temp_v4 || temp_v3 != 2) {
      return;
    }
    FUN_00292f44(2);
    return;
  }
  if (temp_v0 != '\x06') {
    if ((!(temp_v0 == '\b' || temp_v0 == '\t')) &&
       (!((temp_v0 == '\n' || temp_v0 == '\v') || temp_v0 == '\a'))) {
      if (temp_v0 == '\x0e') {
        if (*(int *)(DAT_0044e144 + 0x12e4) != 0) {
          return;
        }
        FUN_00292f44(0);
        return;
      }
      if (temp_v0 != '\r') {
        if (*(char *)(temp_v1 + 0x1e67) == '\x06') {
          if (*(int *)(DAT_0044e144 + 0x12e4) != 0) {
            return;
          }
          FUN_00292f44(1);
          return;
        }
        if (*(int *)(DAT_0044e144 + 0x12e4) == 0) {
          FUN_00292f44(0);
        }
        if (*(int *)(temp_v2 + 0x12e4) == 1) {
          FUN_00292f44(1);
        }
        if (*(char *)(temp_v1 + 0x12f1) != '\0') {
          return;
        }
        if (*(int *)(temp_v2 + 0x12e4) == 2) {
          FUN_00292f44(4);
        }
        if (*(int *)(temp_v2 + 0x12e4) != 3) {
          return;
        }
      }
      else {
        if (*(int *)(DAT_0044e144 + 0x12e4) == 0) {
          FUN_00292f44(0);
        }
        if (*(int *)(temp_v2 + 0x12e4) == 1) {
          FUN_00292f44(1);
        }
        if (*(char *)(temp_v1 + 0x12f1) != '\0') {
          return;
        }
        if (*(int *)(temp_v2 + 0x12e4) == 2) {
          FUN_00292f44(4);
        }
        if (*(int *)(temp_v2 + 0x12e4) != 3) {
          return;
        }
      }
    }
    else {
      if (*(int *)(DAT_0044e144 + 0x12e4) == 0) {
        FUN_00292f44(1);
      }
      if (*(int *)(temp_v2 + 0x12e4) == 1) {
        FUN_00292f44(4);
      }
      if (*(int *)(temp_v2 + 0x12e4) != 2) {
        return;
      }
    }
  }
  else {
    if (*(int *)(DAT_0044e144 + 0x12e4) == 0) {
      FUN_00292f44(0);
    }
    if (*(int *)(temp_v2 + 0x12e4) == 1) {
      FUN_00292f44(1);
    }
    if (*(int *)(temp_v2 + 0x12e4) != 2) {
      return;
    }
  }
  FUN_00292f44(5);
  return;
}
