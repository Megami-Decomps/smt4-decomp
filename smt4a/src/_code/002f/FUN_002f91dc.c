/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f91dc` (_code @ 0x2f91dc, 0x16a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int DAT_00594a34; /* 0x594a34 */

extern int *FUN_0010979e(int *);
/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e995c. */
extern unsigned int FUN_002ea4bc(void);
extern unsigned int FUN_002ece14(int, int *);
/* Supplied declaration required: FUN_002f2a22. */
/* Supplied declaration required: FUN_002f2ed4. */
/* Supplied declaration required: FUN_002f2f82. */
/* Supplied declaration required: FUN_002f2faa. */
/* Supplied declaration required: FUN_002f7218. */
/* Supplied declaration required: FUN_002f8b88. */
/* Supplied declaration required: FUN_002f8d10. */
/* Supplied declaration required: FUN_002f8d6c. */
/* Supplied declaration required: FUN_002f9394. */
/* Supplied declaration required: FUN_002f9cc8. */


void FUN_002f91dc(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  int *temp_v3 [2];
  int *temp_v4;
  unsigned char temp_v5 [4];
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  temp_v9 = param_1 + 0x100;
  temp_v7 = param_1 + 0x88;
  temp_v8 = param_1 + 0x2c0;
  for (temp_v2 = *(int *)(param_1 + 0x164); *(int *)(param_1 + 0x168) != temp_v2; temp_v2 = temp_v2 + 8) {
    piVar4 = *(int **)(temp_v2 + 4);
    temp_v3[0] = piVar4 + 0x10;
    if (*(char *)((int)piVar4 + 0x41) == '\0') {
      if (*(char *)(temp_v9 + 0xe) == '\0') {
        temp_v0 = FUN_002ea4bc();
        FUN_002f7218(temp_v0,1);
      }
      *(unsigned char *)(temp_v9 + 0xe) = 1;
    }
    if (((char)*temp_v3[0] != '\0') && (*(char *)((int)temp_v3[0] + 1) != '\0')) {
      if (*(char *)(piVar4[0x11] + 0x34) == '\x02') {
        temp_v3[0] = (int *)FUN_0010979e(piVar4);
        if (temp_v3[0] != (int *)0x0) {
          if (*(char *)(temp_v7 + 4) != '\0') {
            if (*(int *)(temp_v8 + 0x10) != 0) {
              temp_v1 = FUN_002e760a(0x20);
              temp_v0 = 0;
              if (temp_v1 != 0) {
                temp_v0 = FUN_002ece14(temp_v1,temp_v3[0]);
              }
              temp_v6 = temp_v0;
              FUN_002f2faa(piVar4 + 0x32,temp_v0,piVar4 + 0x15);
              FUN_002e7232(temp_v6);
            }
            else {
              FUN_002f2faa(piVar4 + 0x32,temp_v3[0],piVar4 + 0x15);
            }
          }
          else {
            FUN_002f9394(param_1,piVar4,temp_v3[0],piVar4 + 0x15);
          }
          if (*(int *)(temp_v8 + 0x10) != 0) {
            FUN_002f2a22(*(int *)(temp_v8 + 0x10),temp_v3[0]);
          }
          else {
            FUN_002e7232(temp_v3[0]);
          }
        }
        *(int *)(temp_v8 + 0x18) = *(int *)(temp_v8 + 0x18) + 1;
        (**(romwright_code **)(*piVar4 + 0xc))(piVar4,*(unsigned int *)(param_1 + 100));
      }
      if (*(char *)(temp_v7 + 4) != '\0') {
        FUN_002e995c(temp_v5);
        temp_v4 = piVar4 + 0x32;
        while( 1 ) {
          piVar3 = temp_v4;
          FUN_002f2ed4(temp_v4,temp_v3,temp_v5);
          if (piVar3 == (int *)0x0) break;
          FUN_002f9394(param_1,piVar4,temp_v3[0],temp_v5);
          FUN_002f2f82(temp_v4,temp_v3[0]);
        }
      }
      FUN_002f8d10(param_1);
      if (*(char *)(piVar4[0x12] + 0x34) == '\x02') {
        FUN_002f9cc8(piVar4);
        FUN_002f8d6c(param_1);
      }
    }
    else if (DAT_00594a34 != 0) {
      FUN_002f8b88();
    }
  }
  return;
}
