/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ebe8` (_code @ 0x39ebe8, 0x180 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0024c500. */
extern int FUN_0034227c(unsigned int);


void FUN_0039ebe8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x121b4)) {
    do {
      temp_v1 = param_1 + temp_v2 * 0x30;
      puVar3 = (unsigned char *)(temp_v1 + 0x61b4);
      if ((int)*(short *)(temp_v1 + 0x61ba) == (int)*(char *)(param_1 + 0x60)) {
        if (*(int *)(temp_v1 + 0x61bc) != -1) {
          temp_v0 = FUN_0024c500(*(unsigned char *)(temp_v1 + 0x61b6),*(unsigned char *)(temp_v1 + 0x61b7));
          if (temp_v0 != 0) {
            temp_v3 = *(unsigned char *)(temp_v1 + 0x61b6);
            *puVar3 = 1;
            if ((*(char *)(temp_v1 + 0x61b5) != '\0') &&
               (temp_v0 = FUN_0034227c(*(unsigned int *)(temp_v1 + 0x61bc)), temp_v0 != 0)) {
              *(unsigned char *)(temp_v1 + 0x61b5) = 0;
            }
          }
          else {
            *puVar3 = 0;
          }
        }
        else {
          temp_v0 = FUN_0024c500(*(unsigned char *)(temp_v1 + 0x61b6),*(unsigned char *)(temp_v1 + 0x61b7));
          if (((temp_v0 != 0) ||
              ((*(char *)(temp_v1 + 0x61b8) != '\0' &&
               (temp_v0 = FUN_0024c500(*(unsigned char *)(temp_v1 + 0x61b6)), temp_v0 != 0)))) ||
             ((*(char *)(temp_v1 + 0x61b9) != '\0' &&
              (temp_v1 = FUN_0024c500(*(unsigned char *)(temp_v1 + 0x61b6)), temp_v1 != 0)))) {
            *puVar3 = 0;
          }
          else {
            *puVar3 = 1;
          }
        }
      }
      else {
        *puVar3 = 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x121b4));
  }
  *(unsigned int *)(param_1 + 0x121b8) = 0;
  if (temp_v3 != 0x67) {
    if (temp_v3 < 0x68) {
      if (temp_v3 != 0x2e) {
        if (temp_v3 < 0x2f) {
          if (temp_v3 != 0x11 && temp_v3 != 0x2d) {
            *(unsigned char *)(param_1 + 0x5a8e) = 0;
            return;
          }
        }
        else if (temp_v3 != 0x4f && temp_v3 != 0x58) {
          *(unsigned char *)(param_1 + 0x5a8e) = 0;
          return;
        }
      }
    }
    else if (temp_v3 != 0x9d) {
      if (temp_v3 < 0x9e) {
        if (temp_v3 != 0x89 && temp_v3 != 0x8c) {
          *(unsigned char *)(param_1 + 0x5a8e) = 0;
          return;
        }
      }
      else if (temp_v3 != 0xa1 && temp_v3 != 0xa4) {
        *(unsigned char *)(param_1 + 0x5a8e) = 0;
        return;
      }
    }
  }
  *(unsigned int *)(param_1 + 0x121b8) = 2;
  *(unsigned char *)(param_1 + 0x5a8e) = 0;
  return;
}
