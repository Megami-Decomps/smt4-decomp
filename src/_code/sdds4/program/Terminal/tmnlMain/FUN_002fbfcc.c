/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbfcc` (_code @ 0x2fbfcc, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_00432cf8; /* 0x432cf8 */

extern int FUN_00263778(void);


void FUN_002fbfcc(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x5e4);
  temp_v2 = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x5e4) = 0;
  do {
    temp_v3 = temp_v2 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned int *)(param_1 + temp_v2 * 4 + 0x594) = 0;
    temp_v2 = temp_v2 + 2;
    *(unsigned int *)(param_1 + temp_v3 * 4 + 0x594) = 0;
  } while (temp_v1 < 0x14);
  if (*(char *)(param_1 + 5) == '\0') {
    temp_v0 = 0;
    do {
      if (((*(unsigned char *)(param_1 + 9) != temp_v0) &&
          (*(char *)((unsigned int)*(unsigned char *)(param_1 + 9) * 0x24 + 0x432cfc) ==
           *(char *)(temp_v0 * 0x24 + 0x432cfc))) &&
         ((temp_v0 == 0 || (temp_v1 = FUN_00263778(), temp_v1 != 0)))) {
        *(unsigned short **)(param_1 + *(int *)(param_1 + 0x5e4) * 4 + 0x594) =
             &DAT_00432cf8 + temp_v0 * 0x12;
        *piVar5 = *piVar5 + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x14);
    return;
  }
  temp_v0 = 0;
  do {
    if ((*(unsigned char *)(param_1 + 9) != temp_v0) &&
       (*(char *)((unsigned int)*(unsigned char *)(param_1 + 9) * 0x24 + 0x432cfc) ==
        *(char *)(temp_v0 * 0x24 + 0x432cfc))) {
      *(unsigned short **)(param_1 + *(int *)(param_1 + 0x5e4) * 4 + 0x594) =
           &DAT_00432cf8 + temp_v0 * 0x12;
      *piVar5 = *piVar5 + 1;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0x14);
  return;
}
