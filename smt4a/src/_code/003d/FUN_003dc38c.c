/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc38c` (_code @ 0x3dc38c, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f28c; /* 0x57f28c */

extern int FUN_0019f18c(int);
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_002ae320. */
extern int FUN_002f7730(int, int);
/* Supplied declaration required: FUN_003defe0. */
extern int FUN_004185ec(int);
extern int FUN_00418858(int);


void FUN_003dc38c(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v1 = DAT_0057f28c;
  if (param_1 == 0) {
    return;
  }
  *(unsigned char *)(DAT_0057f28c + 0x944) = 0;
  *(unsigned int *)(temp_v1 + 0x918) = 1;
  piVar5 = (int *)(temp_v1 + 0x918);
  if (*(char *)(temp_v1 + 0x90c) != '\0') {
    temp_v2 = param_1;
    FUN_001ad9b4();
    if ((*(unsigned char *)(temp_v2 + 7) & 0x20) != 0) {
      *piVar5 = *(int *)(temp_v1 + 0x918) + 1;
    }
    temp_v2 = FUN_00418858(param_1);
    if (0 < temp_v2) {
      *piVar5 = *(int *)(temp_v1 + 0x918) + 1;
    }
    if (*(char *)(temp_v1 + 0x90c) != '\0') goto LAB_003dc4c8;
  }
  temp_v0 = 0;
  temp_v2 = FUN_0019f18c(param_1);
  if ((temp_v2 != 0) && (temp_v2 = param_1, FUN_001ad9b4(), *(char *)(temp_v2 + 6) == '\0')) {
    temp_v0 = 1;
  }
  temp_v2 = FUN_004185ec(param_1);
  if (temp_v2 != 0 || temp_v0) {
    temp_v2 = param_1;
    FUN_001ad9b4();
    if ((*(unsigned char *)(temp_v2 + 7) & 0x20) != 0) {
      *piVar5 = *(int *)(temp_v1 + 0x918) + 1;
    }
    temp_v2 = FUN_00418858(param_1);
    if (0 < temp_v2) {
      *piVar5 = *(int *)(temp_v1 + 0x918) + 1;
    }
  }
  temp_v2 = param_1;
  FUN_003defe0();
  if (temp_v2 != 0) {
    *piVar5 = *(int *)(temp_v1 + 0x918) + 1;
    *(unsigned char *)(temp_v1 + 0x944) = 1;
    if (*(short *)(temp_v1 + 0xcd0) >= 3) {
      FUN_002ae320();
    }
  }
LAB_003dc4c8:
  if (*(char *)(temp_v1 + 0x944) == '\0') {
    *(unsigned int *)(temp_v1 + 0x910) = 0;
  }
  else {
    temp_v2 = 0;
    if (temp_v2 < *(int *)(temp_v1 + 0x918)) {
      do {
        temp_v3 = FUN_002f7730(temp_v2,param_1);
        if (temp_v3 == 3) {
          *(int *)(temp_v1 + 0x910) = temp_v2;
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v1 + 0x918));
    }
  }
  if (*(int *)(temp_v1 + 0x918) <= *(int *)(temp_v1 + 0x910)) {
    *(unsigned int *)(temp_v1 + 0x910) = 0;
  }
  return;
}
