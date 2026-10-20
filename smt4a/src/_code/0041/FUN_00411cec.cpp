/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00411cec` (_code @ 0x411cec, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int lcgRandomRange(...);
int FUN_001b4a90(int [5], int, unsigned int);
int FUN_004fdb18(int, int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_00573c58; /* 0x573c58 */
extern unsigned int DAT_00573c5c; /* 0x573c5c */
extern unsigned int DAT_00573c60; /* 0x573c60 */
extern unsigned int DAT_00573c64; /* 0x573c64 */

extern int btlGetMainState(void);
/* Supplied declaration required: lcgRandomRange. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_004fdb18. */


void FUN_00411cec(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned int *puVar9;
  int aiStack_38 [5];
  
  temp_v0 = btlGetMainState();
  FUN_001b4a90(aiStack_38,0x10,0xffffffff);
  piVar7 = (int *)(temp_v0 + 0x1ffc);
  temp_v5 = 0;
  temp_v3 = 0;
  temp_v6 = *piVar7;
  do {
    puVar9 = (unsigned int *)(temp_v6 + temp_v3 * 0x408);
    if (((((puVar9[1] & DAT_00573c5c) != 0 || (*puVar9 & DAT_00573c58) != 0) &&
         ((*puVar9 & DAT_00573c60) == 0 && (puVar9[1] & DAT_00573c64) == 0)) && (puVar9[0x96] != 0))
       && ((short)puVar9[0x9d] == 0 || (short)puVar9[0x9d] == 4)) {
      aiStack_38[temp_v5] = temp_v3;
      temp_v5 = temp_v5 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  if (temp_v5 != 0) {
    temp_v3 = 0;
    if (0 < temp_v5) {
      temp_v6 = temp_v3;
      do {
        temp_v1 = aiStack_38[temp_v3];
        if (-1 < temp_v1) {
          temp_v4 = *piVar7;
          temp_v2 = lcgRandomRange(99);
          if (temp_v2 < 0x3d) {
            FUN_004fdb18(0,0,*(int *)(temp_v0 + 0x1ed4) +
                             *(short *)(temp_v4 + temp_v1 * 0x408 + 8) * 0x1d0,0x10,0);
            temp_v6 = temp_v6 + 1;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < temp_v5);
      if (temp_v6 != 0) {
        return;
      }
    }
    temp_v3 = lcgRandomRange((temp_v5 - 1U) & 0xffff);
    FUN_004fdb18(0,0,*(int *)(temp_v0 + 0x1ed4) +
                     *(short *)(*piVar7 + aiStack_38[temp_v3] * 0x408 + 8) * 0x1d0,0x10,0);
  }
  return;
}

} /* extern "C" */
