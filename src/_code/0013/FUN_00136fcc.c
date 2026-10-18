/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00136fcc` (_code @ 0x136fcc, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004655c0; /* 0x4655c0 */
extern unsigned int *DAT_004655e8; /* 0x4655e8 */

/* Supplied declaration required: FUN_00142bf0. */
/* Supplied declaration required: FUN_00143b98. */


void FUN_00136fcc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = DAT_004655c0;
  temp_v0 = 0;
  if ((*(unsigned int *)(DAT_004655c0 + 8) & 0x80) == 0) {
    temp_v3 = 0;
    temp_v4 = DAT_004655c0 + 0x58;
    do {
      if ((*(unsigned int *)(param_1 + ((int)(temp_v3 + 10U) >> 5) * 4) & (1 << ((temp_v3 + 10U) & 0x1f))) != 0)
      {
        temp_v2 = temp_v4 + temp_v3 * 4;
        if (*(char *)(temp_v4 + temp_v3 + 0xaf) != '\0') {
          if (*(int *)(temp_v2 + 0x10) != 0) {
            if ((unsigned int *)DAT_004655e8[temp_v3 + 0x207] != (unsigned int *)0x0) {
              FUN_00143b98(*(unsigned int *)DAT_004655e8[temp_v3 + 0x207],temp_v3);
            }
          }
          else {
            FUN_00143b98(DAT_004655e8[1],temp_v3);
          }
        }
        else {
          puVar4 = DAT_004655e8;
          if ((*(int *)(temp_v2 + 4) == 0) ||
             (puVar4 = (unsigned int *)DAT_004655e8[temp_v3 + 0x204], puVar4 != (unsigned int *)0x0)) {
            FUN_00142bf0(*puVar4,temp_v3);
          }
        }
        temp_v0 = 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    if ((temp_v0) && (temp_v5 = *(unsigned int *)(temp_v1 + 0x770), (temp_v5 & 7) != 0)) {
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0x10080;
        *DAT_004652a0 = temp_v5;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
      if (DAT_004652a0 < DAT_004652a4) {
        DAT_004652a0[1] = 0x50080;
        *DAT_004652a0 = 0x10000;
        DAT_004652a0 = DAT_004652a0 + 2;
      }
    }
  }
  return;
}
