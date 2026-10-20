/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280d2c` (_code @ 0x280d2c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018cfe4(unsigned int, unsigned int);
int FUN_0018e9d8(unsigned int, int);
int FUN_0034103c(unsigned int);

extern unsigned int DAT_005b3c80; /* 0x5b3c80 */
extern unsigned int DAT_005b3c84; /* 0x5b3c84 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c8c; /* 0x5b3c8c */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern int DAT_005b3c94; /* 0x5b3c94 */
extern int DAT_005b3c98; /* 0x5b3c98 */
extern int DAT_005b3c9c; /* 0x5b3c9c */
extern int DAT_00636e00; /* 0x636e00 */
extern unsigned char DAT_00636e04; /* 0x636e04 */
extern unsigned char DAT_00636e05; /* 0x636e05 */
extern int DAT_00636e18; /* 0x636e18 */

/* Supplied declaration required: FUN_0018cfe4. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_0034103c. */


void FUN_00280d2c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int *piVar8;
  int temp_v5;
  int *piVar10;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  *param_1 = *param_1 | 0x200000;
  temp_v0 = param_1[2];
  piVar2 = *(int **)(temp_v0 + 0x14);
  if (piVar2 == (int *)0x0) {
    temp_v4 = *(int *)(temp_v0 + 0xc);
    piVar2 = (int *)&DAT_005b3c90;
    if (temp_v4 != 1) {
      if (temp_v4 == 2) {
        temp_v1 = 0;
        temp_v6 = DAT_005b3c98;
        FUN_0034103c(temp_v1);
      }
      else {
        temp_v6 = DAT_005b3c94;
        if (temp_v4 != 4) {
          if (temp_v4 != 5) {
            return;
          }
          temp_v1 = 1;
          temp_v6 = DAT_005b3c9c;
          FUN_0034103c(temp_v1);
        }
      }
    }
    else {
      temp_v6 = *piVar2;
    }
  }
  else {
    temp_v6 = *piVar2;
  }
  if (temp_v6 == 0) {
    return;
  }
  temp_v4 = -1;
  temp_v6 = *(int *)(**(int **)(temp_v0 + 0x24) + 0xc);
  if (DAT_005b3c98 == temp_v6) {
    temp_v4 = 0;
  }
  else if (DAT_005b3c9c == temp_v6) {
    temp_v4 = 1;
  }
  temp_v8 = 0;
  if (temp_v8 < *(int *)(temp_v0 + 0x28)) {
    do {
      temp_v5 = *(int *)(*(int *)(temp_v0 + 0x24) + temp_v8 * 4);
      temp_v2 = *(int *)(temp_v5 + 0xc);
      if (temp_v2 != 0) {
        piVar2 = *(int **)(temp_v2 + 0x18);
        piVar10 = *(int **)(temp_v2 + 0x1c);
        temp_v3 = temp_v2;
        while( 1 ) {
          if (piVar2 != piVar10) {
            temp_v3 = *piVar2;
          }
          if (piVar2 == piVar10 || temp_v3 == temp_v5) break;
          piVar2 = piVar2 + 1;
        }
        if (piVar2 != piVar10) {
          piVar7 = piVar2 + 1;
          temp_v3 = (int)piVar10 - (int)piVar7;
          if (0 < temp_v3 >> 2) {
            piVar10 = piVar2;
            if (temp_v3 * 0x20000000 < 0) {
              temp_v7 = *piVar7;
              piVar7 = piVar2 + 2;
              if (temp_v7 != temp_v5) {
                piVar10 = piVar2 + 1;
                *piVar2 = temp_v7;
              }
            }
            piVar2 = piVar10;
            for (temp_v3 = temp_v3 >> 3; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
              piVar10 = piVar2;
              if (*piVar7 != temp_v5) {
                piVar10 = piVar2 + 1;
                *piVar2 = *piVar7;
              }
              piVar8 = piVar7 + 1;
              piVar7 = piVar7 + 2;
              piVar2 = piVar10;
              if (*piVar8 != temp_v5) {
                piVar2 = piVar10 + 1;
                *piVar10 = *piVar8;
              }
            }
          }
        }
        piVar10 = *(int **)(temp_v2 + 0x1c);
        *(int **)(temp_v2 + 0x1c) = piVar2;
        if (piVar10 != piVar2) {
          *(unsigned int *)(temp_v5 + 0xc) = 0;
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < *(int *)(temp_v0 + 0x28));
  }
  if ((-1 < temp_v4) && (*(int *)(temp_v6 + 0x18) == *(int *)(temp_v6 + 0x1c))) {
    (&DAT_00636e04)[temp_v4 * 0x18] = 0;
    (&DAT_00636e05)[temp_v4 * 0x18] = 0;
    FUN_0018e9d8((&DAT_005b3c88)[temp_v4],(&DAT_005b3c98)[temp_v4]);
    FUN_0018cfe4((&DAT_005b3c80)[temp_v4],(&DAT_005b3c88)[temp_v4]);
  }
  if (*(int *)(temp_v0 + 0x14) != 0) {
    if (*(int *)(*(int *)(temp_v0 + 0x14) + 8) == 0) {
      FUN_0018cfe4(DAT_005b3c80,DAT_005b3c88);
      DAT_00636e00 = DAT_00636e00 - 1;
    }
    else {
      FUN_0018cfe4(DAT_005b3c84,DAT_005b3c8c);
      DAT_00636e18 = DAT_00636e18 - 1;
    }
  }
  else if (*(int *)(temp_v0 + 0xc) < 3) {
    FUN_0018cfe4(DAT_005b3c80,DAT_005b3c88);
    DAT_00636e00 = DAT_00636e00 - 1;
  }
  else {
    FUN_0018cfe4(DAT_005b3c84,DAT_005b3c8c);
    DAT_00636e18 = DAT_00636e18 - 1;
  }
  temp_v4 = *(int *)(temp_v0 + 0x14);
  if (temp_v4 != 0) {
    *(unsigned int *)(temp_v0 + 0x10) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = 0xffffffff;
    *(int *)(temp_v0 + 0x18) = temp_v4;
    return;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0xc);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x10) = temp_v1;
  return;
}

} /* extern "C" */
