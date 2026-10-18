/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00487124` (_code @ 0x487124, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5c; /* 0x5f1a5c */

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00485d1c. */
/* Supplied declaration required: FUN_0048c394. */
extern int FUN_0048e40c(int);


void FUN_00487124(int param_1)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  
  if (*(unsigned char *)(param_1 + 0xc) == 0xff) {
    return;
  }
  if (DAT_005f1a5c != '\0') {
    DAT_005f1614 = 0;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x10);
  temp_v2 = FUN_0048e40c(param_1);
  temp_v0 = '\0';
  if (temp_v2 != 0) {
    temp_v0 = *(char *)(param_1 + 0xc);
  }
  if (!(temp_v2 == 0 || temp_v0 == '\0')) {
    if (DAT_005f161d != '\0') {
      FUN_0048c394(param_1);
      goto LAB_0048718c;
    }
  }
  else {
LAB_0048718c:
    if (DAT_005f161d != '\0') {
      FUN_00163aa4();
      if (*(char *)(param_1 + 0x1242) != '\0') {
        if (*(short *)(param_1 + 0x1214) != 3) {
          FUN_00184c00(param_1 + 0x11b8,3,0);
        }
        else {
          FUN_00184c00(param_1 + 0x11b8,4,0);
        }
      }
      FUN_00163aa4();
      if (*(char *)(param_1 + 0x12ce) != '\0') {
        if (*(short *)(param_1 + 0x12a0) != 5) {
          FUN_00184c00(param_1 + 0x1244,5,0);
        }
        else {
          FUN_00184c00(param_1 + 0x1244,6,0);
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x4c0) != 0) {
    if ((*(int *)(param_1 + 0x4c0) == 1) &&
       (temp_v2 = *(int *)(param_1 + 0x4bc) + 1, *(int *)(param_1 + 0x4bc) = temp_v2, temp_v2 >= 11)) {
      *(unsigned int *)(param_1 + 0x4bc) = 0;
      *(unsigned int *)(param_1 + 0x4c0) = 0;
    }
  }
  else {
    temp_v2 = *(int *)(param_1 + 0x4bc) + 1;
    *(int *)(param_1 + 0x4bc) = temp_v2;
    if (temp_v2 >= 11) {
      *(unsigned int *)(param_1 + 0x4c0) = 1;
      *(unsigned int *)(param_1 + 0x4bc) = 0;
    }
  }
  temp_v2 = *(int *)(param_1 + 0x4c8);
  piVar4 = (int *)(param_1 + 0x4c4);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if ((temp_v2 == 2) && (*piVar4 = *(int *)(param_1 + 0x4c4) + 1, *(int *)(param_1 + 0x4bc) >= 10)
         ) {
        *(unsigned int *)(param_1 + 0x4c8) = 0;
        *(unsigned int *)(param_1 + 0x4c4) = 0;
      }
    }
    else {
      *piVar4 = *(int *)(param_1 + 0x4c4) + 1;
      if (*(int *)(param_1 + 0x4bc) >= 10) {
        *(unsigned int *)(param_1 + 0x4c8) = 2;
        *(unsigned int *)(param_1 + 0x4c4) = 0;
      }
    }
  }
  else {
    *piVar4 = *(int *)(param_1 + 0x4c4) + 1;
    if (*(int *)(param_1 + 0x4bc) >= 10) {
      *(unsigned int *)(param_1 + 0x4c8) = 1;
      *(unsigned int *)(param_1 + 0x4c4) = 0;
    }
  }
  if ((temp_v1 & 0x1000) == 0) {
    temp_v2 = param_1;
    FUN_00485d1c();
    if (temp_v2 != 0) {
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 1;
    }
    if (DAT_005f1a5c != '\0') {
      DAT_005f1614 = 1;
    }
  }
  return;
}
