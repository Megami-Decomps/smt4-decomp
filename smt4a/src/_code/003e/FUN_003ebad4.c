/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ebad4` (_code @ 0x3ebad4, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004d8638. */
/* Supplied declaration required: FUN_004d8650. */
/* Supplied declaration required: FUN_004d87bc. */
/* Supplied declaration required: FUN_004d8804. */


void FUN_003ebad4(int param_1)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v1 = param_1 + 0x2200;
  temp_v7 = *(char *)(param_1 + 0x22cc) != '\0';
  if (temp_v7) {
    temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x22cd);
  }
  if (temp_v7 && temp_v1 != 0) {
    temp_v2 = 4;
    do {
      temp_v6 = *(int *)(param_1 + 0x1ffc) + temp_v2 * 0x408;
      if (*(char *)(temp_v6 + 0x23a) != '\0') {
        temp_v2 = *(int *)(param_1 + 0x1ed4) + *(short *)(temp_v6 + 8) * 0x1d0;
        goto LAB_003ebb40;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x36);
    temp_v2 = 0;
LAB_003ebb40:
    temp_v6 = 0;
    do {
      temp_v3 = param_1 + temp_v6 * 4;
      temp_v4 = *(int *)(temp_v3 + 0x22bc);
      if (temp_v4 != 0) {
        if (*(char *)(param_1 + temp_v6 + 0x2340) != '\0') {
          if (temp_v2 != 0) {
            temp_v0 = *(unsigned short *)(temp_v2 + 0x60);
            if (((temp_v0 & 0x800) == 0) || ((*(unsigned int *)(temp_v2 + 0x50) & 0x4000) != 0))
            goto LAB_003ebb8c;
            temp_v5 = temp_v0 & 0x2000;
            if ((temp_v0 & 0x2000) != 0) {
              temp_v5 = 1;
            }
          }
          else {
            temp_v5 = 1;
          }
          FUN_004d87bc(temp_v4,temp_v5);
        }
        else {
LAB_003ebb8c:
          FUN_004d87bc(temp_v4,1);
        }
        FUN_004d8638(*(unsigned int *)(temp_v3 + 0x22bc));
        FUN_004d8650(*(unsigned int *)(temp_v3 + 0x22bc));
        FUN_004d8804(*(unsigned int *)(temp_v3 + 0x22bc));
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
  }
  return;
}
