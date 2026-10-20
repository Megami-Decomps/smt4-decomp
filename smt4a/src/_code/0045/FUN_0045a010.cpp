/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045a010` (_code @ 0x45a010, 0x3f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_0055b444; /* 0x55b444 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif


/* WARNING: Removing unreachable block (ram,0x0045a3cc) */
/* WARNING: Removing unreachable block (ram,0x0045a3c8) */
/* WARNING: Removing unreachable block (ram,0x0045a3d4) */

int FUN_0045a010(int param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 3 unstructured edge(s); 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  int *temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  
  temp_v4 = 0;
  temp_v5 = *(char *)(param_1 + 0x3d) != '\0';
  if (temp_v5) {
    param_4 = *(int *)(param_1 + 8);
  }
  if (temp_v5 && param_4 != 0) {
    temp_v2 = *(unsigned int *)(param_4 + 0x28);
    if (temp_v2 != 0) {
      param_3 = 0;
    }
    if (0 < (int)temp_v2) {
      do {
        if (*(int *)(param_4 + 0x2c) != 0) {
          temp_v0 = param_4 + 0x2c + *(int *)(param_4 + 0x2c);
        }
        else {
          temp_v0 = 0;
        }
        temp_v1 = 0;
        if (temp_v0 != 0) {
          piVar2 = (int *)(temp_v0 + param_3 * 0x10 + 0x28);
          temp_v1 = *piVar2;
          if (temp_v1 == 0) {
            temp_v1 = 0;
          }
          else {
            temp_v1 = (int)piVar2 + temp_v1;
          }
        }
        if (0 < *(int *)(temp_v1 + 0x10)) {
          temp_v0 = *(int *)(param_1 + 0x48);
          piVar2 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x2c,4);
          if (piVar2 != (int *)0x0) {
            *piVar2 = (int)&DAT_0055b444;
            piVar2[1] = (int)param_2;
            temp_v3 = temp_v2 * temp_v0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
            piVar2[10] = temp_v0;
            temp_v1 = 0;
            temp_v0 = (**(romwright_code **)(*(int *)piVar2[1] + 8))((int *)piVar2[1],temp_v2 << 2,4);
            if (temp_v0 == 0) {
              temp_v1 = -0x80000000;
            }
            if (-1 < temp_v1) {
              piVar4 = piVar2 + 2;
              temp_v6 = (int *)piVar2[1];
              temp_v7 = temp_v0;
              temp_v9 = temp_v2 & 0x3fffffff;
              if ((int **)piVar4 != &temp_v6) {
                temp_v7 = piVar2[3];
                temp_v9 = piVar2[5];
                temp_v6 = (int *)*piVar4;
                piVar2[4] = temp_v0;
                piVar2[5] = temp_v2 & 0x3fffffff;
                *piVar4 = piVar2[1];
                piVar2[3] = temp_v0;
              }
              temp_v8 = temp_v7;
              temp_v0 = 0;
              if (temp_v6 != (int *)0x0) {
                temp_v0 = temp_v7;
              }
              if (temp_v6 != (int *)0x0 && temp_v0 != 0) {
                (**(romwright_code **)(*temp_v6 + 0xc))(temp_v6,temp_v7);
              }
              temp_v0 = (**(romwright_code **)(*(int *)piVar2[1] + 8))((int *)piVar2[1],temp_v3 * 4,4);
              if (temp_v0 == 0) {
                temp_v1 = -0x80000000;
              }
              if (-1 < temp_v1) {
                piVar4 = piVar2 + 6;
                temp_v6 = (int *)piVar2[1];
                temp_v7 = temp_v0;
                temp_v9 = temp_v3 & 0x3fffffff;
                if ((int **)piVar4 != &temp_v6) {
                  temp_v7 = piVar2[7];
                  temp_v9 = piVar2[9];
                  temp_v6 = (int *)*piVar4;
                  *piVar4 = piVar2[1];
                  piVar2[7] = temp_v0;
                  piVar2[8] = temp_v0;
                  piVar2[9] = temp_v3 & 0x3fffffff;
                }
                temp_v8 = temp_v7;
                temp_v0 = 0;
                if (temp_v6 != (int *)0x0) {
                  temp_v0 = temp_v7;
                }
                if (temp_v6 != (int *)0x0 && temp_v0 != 0) {
                  (**(romwright_code **)(*temp_v6 + 0xc))(temp_v6,temp_v7);
                }
                temp_v0 = 0;
                if (temp_v0 < (int)temp_v2) {
                  do {
                    puVar3 = (unsigned int *)piVar2[4];
                    temp_v0 = temp_v0 + 1;
                    piVar2[4] = (int)(puVar3 + 1);
                    if (puVar3 != (unsigned int *)0x0) {
                      *puVar3 = 0;
                    }
                  } while (temp_v0 < (int)temp_v2);
                }
                temp_v0 = 0;
                if (temp_v0 < (int)temp_v3) {
                  do {
                    puVar3 = (unsigned int *)piVar2[8];
                    temp_v0 = temp_v0 + 1;
                    piVar2[8] = (int)(puVar3 + 1);
                    if (puVar3 != (unsigned int *)0x0) {
                      *puVar3 = 0;
                    }
                  } while (temp_v0 < (int)temp_v3);
                }
              }
            }
            if (temp_v1 >= 0) {
              if (piVar2 == (int *)0x0) {
                temp_v4 = -0x80000000;
              }
            }
            else {
              if (piVar2 != (int *)0x0) {
                (**(romwright_code **)*piVar2)(piVar2);
                (**(romwright_code **)(*(int *)piVar2[1] + 0xc))((int *)piVar2[1],piVar2);
              }
              piVar2 = (int *)0x0;
              temp_v4 = -0x80000000;
            }
          }
          else {
            piVar2 = (int *)0x0;
            temp_v4 = -0x80000000;
          }
          if (temp_v4 < 0) {
            return temp_v4;
          }
          puVar3 = (unsigned int *)(param_1 + 0x28);
          temp_v7 = romwright_piece_3_1((((unsigned int)(temp_v7) >> 8) & 0xffffffU),1);
          temp_v6 = piVar2;
          if ((int **)puVar3 != &temp_v6) {
            temp_v6 = (int *)*puVar3;
            temp_v7 = romwright_piece_3_1((((unsigned int)(temp_v7) >> 8) & 0xffffffU),*(unsigned char *)(param_1 + 0x2c));
            *(unsigned char *)(param_1 + 0x2c) = 1;
            *puVar3 = (unsigned int)piVar2;
          }
          piVar2 = temp_v6;
          if (temp_v6 != (int *)0x0) {
            if ((char)temp_v7 != '\0') {
              (**(romwright_code **)*temp_v6)(temp_v6);
              piVar4 = (int *)piVar2[1];
              (**(romwright_code **)(*piVar4 + 0xc))(piVar4,piVar2);
              return temp_v4;
            }
            return temp_v4;
          }
          return temp_v4;
        }
        param_3 = param_3 + 1;
      } while (param_3 < (int)temp_v2);
    }
  }
  return 0;
}

} /* extern "C" */
