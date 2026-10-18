/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e69e8` (_code @ 0x4e69e8, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571210; /* 0x571210 */
extern unsigned int DAT_00571214; /* 0x571214 */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_005712c0; /* 0x5712c0 */
extern unsigned int DAT_005712c4; /* 0x5712c4 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */


void FUN_004e69e8(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned char temp_v7;
  
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0x594) = 1;
  }
  else {
    *(unsigned int *)(param_2 + 0x594) = 0;
    temp_v6 = *param_1;
    if ((*(unsigned int *)(temp_v6 + 0x10c) & 0x4000000) != 0) {
      *(unsigned int *)(param_2 + 0x594) = 0x16;
    }
    else {
      temp_v3 = *(unsigned int *)(temp_v6 + 0x45a0);
      temp_v5 = *(unsigned int *)(temp_v6 + 0x45a4);
      if ((((DAT_00571210 & temp_v3) == 0 && (DAT_00571214 & temp_v5) == 0) ||
          ((DAT_005712c0 & temp_v3) != 0 || (DAT_005712c4 & temp_v5) != 0)) &&
         ((temp_v5 & DAT_0057121c) == 0 && (temp_v3 & DAT_00571218) == 0)) {
        temp_v1 = (temp_v3 & DAT_00571228) == 0;
        temp_v2 = (temp_v5 & DAT_0057122c) == 0;
        temp_v7 = temp_v1 && temp_v2;
        if (temp_v1 && temp_v2) {
          temp_v7 = (*(unsigned int *)(temp_v6 + 0x10c) & 0x8000000) == 0;
        }
        if (temp_v7) {
          temp_v4 = 4;
          do {
            puVar7 = (unsigned int *)(*(int *)(temp_v6 + 0x1ffc) + temp_v4 * 0x408);
            if (puVar7 != (unsigned int *)0x0) {
              if ((((*puVar7 & DAT_00571148) != 0 || (puVar7[1] & DAT_0057114c) != 0) &&
                  ((*puVar7 & DAT_00571178) == 0 && (puVar7[1] & DAT_0057117c) == 0)) &&
                 (*(char *)((int)puVar7 + 0x23a) != '\0')) {
                return;
              }
            }
            temp_v4 = (int)(short)((short)temp_v4 + 1);
          } while (temp_v4 < 0x36);
          temp_v6 = *(int *)(param_2 + 0x28);
          temp_v0 = *(short *)(temp_v6 + 0x1be);
          if (temp_v0 == 2 || temp_v0 == 3) {
            temp_v3 = (unsigned int)*(short *)(temp_v6 + 0x1c0);
          }
          else {
            if (temp_v0 != 8) {
              return;
            }
            temp_v6 = (int)*(short *)(temp_v6 + 0x1c0);
            FUN_00192550();
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v6 + 0x32);
            if (temp_v3 == 0) {
              return;
            }
          }
          if (0 < (int)temp_v3) {
            FUN_001aba54();
            temp_v5 = 0;
            if (temp_v3 != 0) {
              temp_v5 = (unsigned int)*(unsigned char *)(temp_v3 + 0x61);
            }
            if ((temp_v3 != 0 && temp_v5 != 1) && (temp_v5 != 0)) {
              *(unsigned int *)(param_2 + 0x594) = temp_v5;
            }
          }
        }
      }
    }
  }
  return;
}
