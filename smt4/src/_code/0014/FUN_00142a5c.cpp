/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142a5c` (_code @ 0x142a5c, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00147a7c(...);
int FUN_002a688c(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_004655c0; /* 0x4655c0 */
extern int DAT_004655f0; /* 0x4655f0 */

/* Supplied declaration required: FUN_00147a7c. */
/* Supplied declaration required: FUN_002a688c. */


void FUN_00142a5c(void)

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
  
  temp_v0 = DAT_004655c0;
  piVar5 = (int *)(DAT_004655c0 + 0x5d8);
  temp_v5 = DAT_004655c0 + 0x458;
  temp_v6 = DAT_004655c0 + 0x298;
  puVar9 = (unsigned int *)(DAT_004655c0 + 0x6a0);
  if ((*(unsigned int *)(DAT_004655c0 + 8) & 0x200) != 0) {
    *(unsigned char *)(DAT_004655c0 + 0x81c) = *(int *)(DAT_004655c0 + 0x5dc) != 0;
  }
  *(unsigned char *)(temp_v0 + 0x76c) = 0;
  if (*piVar5 != 0) {
    if (*(int *)(DAT_004655f0 + 0x80c) != 0) {
      puVar7 = *(unsigned int **)(*(int *)(DAT_004655f0 + 0x80c) + 8);
      temp_v1 = FUN_00147a7c(*puVar7);
      *puVar9 = temp_v1;
      *(unsigned int *)(temp_v0 + 0x6e8) = puVar7[2];
    }
    else {
      *(unsigned char *)(temp_v0 + 0x76c) = 1;
      FUN_002a688c(0x10);
    }
  }
  else {
    FUN_002a688c(0x10);
  }
  temp_v4 = 0;
  do {
    temp_v2 = DAT_004655c0;
    temp_v3 = temp_v5 + temp_v4 * 0x18;
    if (*(char *)(temp_v3 + 0x15) != '\0') {
      if (*(int *)(temp_v3 + 0x10) != 0) {
        temp_v3 = *(int *)(DAT_004655f0 + temp_v4 * 4 + 0x810);
        if (temp_v3 != 0) {
          piVar5 = *(int **)(temp_v3 + 8);
          puVar7 = (unsigned int *)(DAT_004655c0 + 0x6a0);
          if (temp_v4 == 0x10) {
            temp_v1 = FUN_00147a7c(*piVar5);
            *puVar7 = temp_v1;
            *(int *)(temp_v2 + 0x6e8) = piVar5[2];
            return;
          }
          piVar3 = (int *)(DAT_004655c0 + 0x458 + temp_v4 * 0x18);
          temp_v1 = FUN_00147a7c(*piVar5 + *piVar3);
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
          FUN_002a688c(temp_v4);
        }
      }
      else {
        FUN_002a688c(temp_v4);
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
