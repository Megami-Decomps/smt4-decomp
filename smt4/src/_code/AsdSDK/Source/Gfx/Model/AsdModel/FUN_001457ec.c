/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001457ec` (_code @ 0x1457ec, 0x260 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_002c1870(int, char *, unsigned int);
/* Supplied declaration required: FUN_002c498c. */


void FUN_001457ec(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  unsigned short *unaff_r7;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar11;
  int *piVar12;
  unsigned char temp_v8;
  unsigned int temp_v9 [2];
  int temp_v10;
  int iStack_2c;
  int temp_v11;
  
  temp_v4 = 0;
  piVar12 = (int *)(param_1 + 0x94);
  iStack_2c = param_1;
  temp_v11 = param_2;
  temp_v0 = FUN_002c1870(param_2,"ATBC",4);
  if (temp_v0 == 0) {
    temp_v4 = *(int *)(param_2 + 8);
  }
  temp_v0 = 0;
  *piVar12 = temp_v4;
  temp_v7 = 0;
  temp_v5 = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  if (0 < temp_v4) {
    do {
      temp_v0 = temp_v11;
      temp_v4 = FUN_002c1870(temp_v11,"ATBC",4);
      if (temp_v4 == 0) {
        temp_v6 = *(int *)(temp_v0 + 8);
        temp_v8 = temp_v6 == 0;
        temp_v4 = temp_v6;
        if (0 < temp_v6) {
          temp_v4 = temp_v6 - temp_v5;
          temp_v8 = temp_v6 == temp_v5;
        }
        if (!temp_v8 && temp_v4 < 0 == (0 < temp_v6 && SBORROW4(temp_v6,temp_v5))) {
          temp_v4 = 0;
          temp_v0 = temp_v0 + *(int *)(temp_v0 + 0x10);
          do {
            temp_v1 = FUN_002c1870(temp_v0,"EPLSIGN",7);
            if (temp_v1 != 0) break;
            FUN_002bd420(temp_v0,temp_v9,0x10);
            unaff_r7 = (unsigned short *)(temp_v0 + 0x10);
            if (temp_v5 == temp_v4) break;
            temp_v4 = temp_v4 + 1;
            temp_v0 = temp_v0 + temp_v10;
          } while (temp_v6 != 0);
        }
      }
      if ((*(unsigned int *)(unaff_r7 + 6) & 1) != 0) {
        temp_v7 = ((unsigned int)unaff_r7[1] - (unsigned int)*unaff_r7) + temp_v7 + 1;
      }
      temp_v0 = *piVar12;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v0);
  }
  if (temp_v7 == 0) {
    temp_v0 = 0;
  }
  *(int *)(param_1 + 0x98) = temp_v7;
  if (temp_v7 == 0) {
    *(int *)(param_1 + 0x9c) = temp_v0;
  }
  else {
    temp_v9[0] = 1;
    temp_v2 = 0x100;
    FUN_002c498c(0x100,0x100,0,*(int *)(param_1 + 0x98) * 0xc);
    *(unsigned int *)(param_1 + 0x9c) = temp_v2;
    temp_v0 = 0;
    temp_v4 = 0;
    if (temp_v4 < *piVar12) {
      do {
        temp_v5 = temp_v11;
        temp_v7 = FUN_002c1870(temp_v11,"ATBC",4);
        if (temp_v7 == 0) {
          temp_v6 = *(int *)(temp_v5 + 8);
          temp_v8 = temp_v6 == 0;
          temp_v7 = temp_v6;
          if (0 < temp_v6) {
            temp_v7 = temp_v6 - temp_v4;
            temp_v8 = temp_v6 == temp_v4;
          }
          if (!temp_v8 && temp_v7 < 0 == (0 < temp_v6 && SBORROW4(temp_v6,temp_v4))) {
            temp_v7 = 0;
            temp_v5 = temp_v5 + *(int *)(temp_v5 + 0x10);
            do {
              temp_v1 = FUN_002c1870(temp_v5,"EPLSIGN",7);
              if (temp_v1 != 0) break;
              FUN_002bd420(temp_v5,temp_v9,0x10);
              unaff_r7 = (unsigned short *)(temp_v5 + 0x10);
              if (temp_v4 == temp_v7) break;
              temp_v7 = temp_v7 + 1;
              temp_v5 = temp_v5 + temp_v10;
            } while (temp_v6 != 0);
          }
        }
        puVar11 = (unsigned short *)0x0;
        if (unaff_r7 != (unsigned short *)0x0) {
          puVar11 = unaff_r7 + 10;
        }
        if (((*(unsigned int *)(unaff_r7 + 6) & 1) != 0) && (temp_v3 = (unsigned int)*unaff_r7, temp_v3 <= unaff_r7[1]))
        {
          do {
            puVar7 = (unsigned int *)(*(int *)(param_1 + 0x9c) + temp_v0 * 0xc);
            puVar4 = puVar11;
            FUN_002a4e98();
            puVar7[1] = temp_v3;
            puVar7[2] = (unsigned int)puVar4;
            temp_v3 = temp_v3 + 1;
            temp_v0 = temp_v0 + 1;
            *puVar7 = *(unsigned int *)(unaff_r7 + 6);
          } while ((int)temp_v3 <= (int)(unsigned int)unaff_r7[1]);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *piVar12);
    }
  }
  return;
}
