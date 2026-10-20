/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00195af0` (_code @ 0x195af0, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a2634(...);
int FUN_001aa030(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_005b4400; /* 0x5b4400 */
extern int DAT_005b4430; /* 0x5b4430 */

/* Supplied declaration required: FUN_001a2634. */
/* Supplied declaration required: FUN_001aa030. */


void FUN_00195af0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  unsigned int *puVar7;
  int temp_v4;
  unsigned int *puVar9;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = DAT_005b4400;
  piVar5 = (int *)(DAT_005b4400 + 0x5d8);
  temp_v5 = DAT_005b4400 + 0x458;
  temp_v6 = DAT_005b4400 + 0x298;
  puVar9 = (unsigned int *)(DAT_005b4400 + 0x6a0);
  if ((*(unsigned int *)(DAT_005b4400 + 8) & 0x200) != 0) {
    *(unsigned char *)(DAT_005b4400 + 0x81c) = *(int *)(DAT_005b4400 + 0x5dc) != 0;
  }
  *(unsigned char *)(temp_v0 + 0x76c) = 0;
  if (*piVar5 != 0) {
    if (*(int *)(DAT_005b4430 + 0x80c) != 0) {
      puVar7 = *(unsigned int **)(*(int *)(DAT_005b4430 + 0x80c) + 8);
      temp_v1 = FUN_001a2634(*puVar7);
      *puVar9 = temp_v1;
      *(unsigned int *)(temp_v0 + 0x6e8) = puVar7[2];
    }
    else {
      *(unsigned char *)(temp_v0 + 0x76c) = 1;
      FUN_001aa030(0x10);
    }
  }
  else {
    FUN_001aa030(0x10);
  }
  temp_v4 = 0;
  do {
    temp_v2 = DAT_005b4400;
    temp_v3 = temp_v5 + temp_v4 * 0x18;
    if (*(char *)(temp_v3 + 0x15) != '\0') {
      if (*(int *)(temp_v3 + 0x10) != 0) {
        temp_v3 = *(int *)(DAT_005b4430 + temp_v4 * 4 + 0x810);
        if (temp_v3 != 0) {
          piVar5 = *(int **)(temp_v3 + 8);
          puVar7 = (unsigned int *)(DAT_005b4400 + 0x6a0);
          if (temp_v4 == 0x10) {
            temp_v1 = FUN_001a2634(*piVar5);
            *puVar7 = temp_v1;
            *(int *)(temp_v2 + 0x6e8) = piVar5[2];
            return;
          }
          piVar3 = (int *)(DAT_005b4400 + 0x458 + temp_v4 * 0x18);
          temp_v1 = FUN_001a2634(*piVar5 + *piVar3);
          puVar7[temp_v4 + 1] = temp_v1;
          puVar7[temp_v4 + 0x13] = *piVar3 + piVar5[2];
          temp_v2 = piVar3[2];
          temp_v7 = temp_v2 == 0x1400;
          if (!temp_v7) {
            temp_v2 = temp_v2 - 0x1401;
            temp_v7 = temp_v2 == 0;
          }
          if (temp_v7) {
            temp_v2 = 1;
          }
          else if (temp_v2 == 1) {
            temp_v2 = 2;
          }
          else if (temp_v2 == 5) {
            temp_v2 = 4;
          }
          else {
            temp_v2 = 0;
          }
          temp_v3 = piVar3[3];
          if (temp_v3 == 0) {
            temp_v3 = piVar3[1] * temp_v2;
          }
          puVar7[temp_v4 + 0x23] = temp_v3;
        }
        else {
          *(unsigned char *)(temp_v0 + 0x76c) = 1;
          FUN_001aa030(temp_v4);
        }
      }
      else {
        FUN_001aa030(temp_v4);
      }
    }
    else {
      puVar9[temp_v4 + 0x13] = temp_v6 + temp_v4 * 0x10;
      puVar9[temp_v4 + 0x23] = 0;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x10);
  return;
}

} /* extern "C" */
