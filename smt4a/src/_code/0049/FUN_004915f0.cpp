/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004915f0` (_code @ 0x4915f0, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004083a8(...);

extern int FUN_00408240(unsigned int);
/* Supplied declaration required: FUN_004083a8. */


void FUN_004915f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x204f8)) {
    do {
      temp_v0 = param_1 + temp_v2 * 0x30;
      puVar3 = (unsigned char *)(temp_v0 + 0x84f8);
      if ((int)*(short *)(temp_v0 + 0x84fe) == (int)*(char *)(param_1 + 100)) {
        if (*(int *)(temp_v0 + 0x8500) != -1) {
          temp_v1 = FUN_004083a8(*(unsigned char *)(temp_v0 + 0x84fa),*(unsigned char *)(temp_v0 + 0x84fb));
          if (temp_v1 != 0) {
            temp_v3 = *(unsigned char *)(temp_v0 + 0x84fa);
            *puVar3 = 1;
            if ((*(char *)(temp_v0 + 0x84f9) != '\0') &&
               (temp_v1 = FUN_00408240(*(unsigned int *)(temp_v0 + 0x8500)), temp_v1 != 0)) {
              *(unsigned char *)(temp_v0 + 0x84f9) = 0;
            }
          }
          else {
            *puVar3 = 0;
          }
        }
        else {
          temp_v1 = FUN_004083a8(*(unsigned char *)(temp_v0 + 0x84fa),*(unsigned char *)(temp_v0 + 0x84fb));
          if (((temp_v1 != 0) ||
              ((*(char *)(temp_v0 + 0x84fc) != '\0' &&
               (temp_v1 = FUN_004083a8(*(unsigned char *)(temp_v0 + 0x84fa)), temp_v1 != 0)))) ||
             ((*(char *)(temp_v0 + 0x84fd) != '\0' &&
              (temp_v0 = FUN_004083a8(*(unsigned char *)(temp_v0 + 0x84fa)), temp_v0 != 0)))) {
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
    } while (temp_v2 < *(int *)(param_1 + 0x204f8));
  }
  *(unsigned int *)(param_1 + 0x204fc) = 0;
  if (temp_v3 != 0x67) {
    if (temp_v3 < 0x68) {
      if (temp_v3 != 0x2e) {
        if (temp_v3 < 0x2f) {
          if (temp_v3 != 0x11 && temp_v3 != 0x2d) {
            *(unsigned char *)(param_1 + 0x7b92) = 0;
            return;
          }
        }
        else if (temp_v3 != 0x4f && temp_v3 != 0x58) {
          *(unsigned char *)(param_1 + 0x7b92) = 0;
          return;
        }
      }
    }
    else if (temp_v3 != 0x9d) {
      if (temp_v3 < 0x9e) {
        if (temp_v3 != 0x89 && temp_v3 != 0x8c) {
          *(unsigned char *)(param_1 + 0x7b92) = 0;
          return;
        }
      }
      else if (temp_v3 != 0xa1 && temp_v3 != 0xa4) {
        *(unsigned char *)(param_1 + 0x7b92) = 0;
        return;
      }
    }
  }
  *(unsigned int *)(param_1 + 0x204fc) = 2;
  *(unsigned char *)(param_1 + 0x7b92) = 0;
  return;
}

} /* extern "C" */
