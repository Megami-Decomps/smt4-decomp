/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0a10` (_code @ 0x3b0a10, 0x2e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_0022c0a4. */
/* Supplied declaration required: FUN_0022c100. */


unsigned int FUN_003b0a10(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  
  temp_v11 = param_1 + 0x1414;
  temp_v6 = 1;
  temp_v2 = *(int *)(*(int *)(param_1 + 0x1428) + 8);
  if (temp_v2 != *(int *)(param_1 + 0x1428)) {
    do {
      temp_v0 = *(int *)(temp_v2 + 0x18);
      temp_v4 = *(int *)(temp_v0 + 0x10);
      temp_v3 = *(int *)(temp_v4 + 0x50);
      if (temp_v3 != 0) {
        temp_v0 = *(int *)(temp_v3 + 8);
      }
      if (temp_v3 != 0 && temp_v0 != 0) {
        puVar2 = (unsigned int *)(temp_v4 + 0x4c);
        temp_v0 = temp_v4 + 0x30;
        temp_v1 = *(int *)(temp_v4 + 0x48) + 1;
        *(unsigned int *)(temp_v4 + 0x48) = temp_v1;
        if (*(unsigned int *)(temp_v4 + 0x3c) < temp_v1) {
          temp_v7 = *puVar2;
          temp_v8 = *(unsigned int *)(temp_v4 + 0x50);
          temp_v10 = *(int *)(temp_v4 + 0x58);
          *(unsigned int **)(temp_v10 + 8) = (unsigned int *)&temp_v7;
          *(unsigned int **)(temp_v4 + 0x58) = (unsigned int *)&temp_v7;
          temp_v12 = *(int *)(temp_v4 + 0x3c);
          temp_v9 = puVar2;
          if (*(unsigned int *)(temp_v4 + 0x40) >= *(unsigned int *)(temp_v4 + 0x44)) {
            FUN_0022c100(temp_v0,temp_v1 + *(unsigned int *)(temp_v4 + 0x40));
            temp_v5 = temp_v0 != 0;
            temp_v0 = 0;
            if (temp_v5) {
              if (*(int *)(temp_v4 + 0x44) != 0) {
                puVar5 = *(unsigned int **)(temp_v4 + 0x34);
                puVar8 = puVar5 + *(int *)(temp_v4 + 0x44) * 4;
                puVar7 = puVar5 + temp_v12 * 4;
                for (; puVar5 != puVar8; puVar5 = puVar5 + 4) {
                  if (puVar7 != puVar5) {
                    puVar3 = (unsigned int *)puVar7[2];
                    if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar7) {
                      if (puVar7[1] != 0) {
                        (**(romwright_code **)(*(int *)*puVar7 + 4))();
                      }
                    }
                    else {
                      puVar3[3] = puVar7[3];
                      *(unsigned int *)(puVar7[3] + 8) = puVar7[2];
                      puVar7[2] = 0;
                      puVar7[3] = 0;
                    }
                    puVar7[1] = 0;
                    puVar7[1] = puVar5[1];
                    temp_v0 = puVar5[3];
                    puVar7[3] = temp_v0;
                    *(unsigned int **)(temp_v0 + 8) = puVar7;
                    puVar7[2] = (unsigned int)puVar5;
                    puVar5[3] = (unsigned int)puVar7;
                  }
                  puVar7 = puVar7 + 4;
                }
              }
              temp_v0 = 1;
              *(int *)(temp_v4 + 0x44) = *(int *)(temp_v4 + 0x44) + temp_v12;
            }
          }
          else {
            FUN_0022c100();
          }
          FUN_0022c0a4(&temp_v7);
          if (temp_v0 == 1) goto LAB_003b0bc8;
          temp_v6 = 0;
        }
        else {
LAB_003b0bc8:
          temp_v0 = *(int *)(temp_v4 + 0x44);
          temp_v5 = temp_v0 == *(int *)(temp_v4 + 0x3c);
          if (temp_v5) {
            temp_v0 = 0;
          }
          if (temp_v5) {
            *(int *)(temp_v4 + 0x44) = temp_v0;
          }
          *(int *)(temp_v4 + 0x44) = temp_v0 + 1;
          puVar5 = (unsigned int *)(*(int *)(temp_v4 + 0x34) + temp_v0 * 0x10);
          if (puVar5 != puVar2) {
            FUN_0022c0a4(puVar5);
            puVar5[1] = *(unsigned int *)(temp_v4 + 0x50);
            temp_v0 = *(int *)(temp_v4 + 0x58);
            puVar5[3] = temp_v0;
            *(unsigned int **)(temp_v0 + 8) = puVar5;
            puVar5[2] = (unsigned int)puVar2;
            *(unsigned int **)(temp_v4 + 0x58) = puVar5;
          }
        }
        puVar2 = *(unsigned int **)(temp_v4 + 0x54);
        puVar5 = (unsigned int *)(temp_v4 + 0x4c);
        if (puVar2 == (unsigned int *)0x0 || puVar2 == puVar5) {
          if (*(int *)(temp_v4 + 0x50) != 0) {
            (**(romwright_code **)(*(int *)*puVar5 + 4))();
          }
        }
        else {
          puVar2[3] = *(unsigned int *)(temp_v4 + 0x58);
          *(unsigned int *)(*(int *)(temp_v4 + 0x58) + 8) = *(unsigned int *)(temp_v4 + 0x54);
          *(unsigned int *)(temp_v4 + 0x54) = 0;
          *(unsigned int *)(temp_v4 + 0x58) = 0;
        }
        *(unsigned int *)(temp_v4 + 0x50) = 0;
        *(unsigned int **)(temp_v4 + 0x58) = puVar5;
        *(unsigned int **)(temp_v4 + 0x54) = puVar5;
        *(unsigned char *)(temp_v3 + 0x14) = 1;
      }
      temp_v0 = *(int *)(temp_v2 + 0xc);
      if (*(int *)(temp_v2 + 0xc) != 0) {
        do {
          temp_v2 = temp_v0;
          temp_v0 = *(int *)(temp_v2 + 8);
        } while (*(int *)(temp_v2 + 8) != 0);
      }
      else {
        temp_v0 = *(int *)(temp_v2 + 4);
        if (temp_v2 == *(int *)(temp_v0 + 0xc)) {
          do {
            temp_v2 = temp_v0;
            temp_v0 = *(int *)(temp_v2 + 4);
          } while (temp_v2 == *(int *)(temp_v0 + 0xc));
        }
        if (*(int *)(temp_v2 + 0xc) != temp_v0) {
          temp_v2 = temp_v0;
        }
      }
    } while (temp_v2 != *(int *)(temp_v11 + 0x14));
  }
  return temp_v6;
}
