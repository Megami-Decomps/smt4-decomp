/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f794c` (_code @ 0x3f794c, 0x8cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_10: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
} param_10_stack;

/* Supplied declaration required: FUN_00225750. */
/* Supplied declaration required: FUN_00225824. */
/* Supplied declaration required: FUN_00225a74. */
/* Supplied declaration required: FUN_00225b20. */
/* Supplied declaration required: FUN_00225ba4. */
/* Supplied declaration required: FUN_002c0014. */
/* Supplied declaration required: FUN_003fdb04. */


/* WARNING: Type propagation algorithm not settling */

void FUN_003f794c(int *******param_1,int ****param_2,int param_3,int param_4,int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9,unsigned int *param_10)

{
/* irregular: 2 goto(s); irregular input(s): in_lr; 9 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int *piVar3;
  int temp_v2;
  int *piVar5;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar10;
  int temp_v7;
  int temp_v8;
  int ****ppppiVar13;
  int *****pppppiVar14;
  int *******pppppppiVar15;
  int ******ppppppiVar16;
  int ******ppppppiVar17;
  int *piVar18;
  int *****pppppiVar19;
  int *piVar20;
  unsigned int *puVar21;
  unsigned int in_lr;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int ******temp_v12;
  int *******temp_v13;
  int *******temp_v14;
  int *****temp_v15;
  int temp_v16;
  int temp_v17;
  int ******temp_v18;
  int temp_v19;
  int ****temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned int *temp_v23;
  
  if (param_9 != 1) {
    if (param_8 != 1) {
      puVar21 = *(unsigned int **)(param_4 + 0x2c);
      puVar10 = *(unsigned int **)(param_4 + 0x30);
      temp_v19 = param_5;
      temp_v21 = ((param_6 | (in_lr & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
      temp_v23 = param_10;
      temp_v13 = param_1;
      temp_v20 = param_2;
      temp_v22 = param_3;
      if (puVar21 == puVar10) {
        return;
      }
      do {
        ppppppiVar16 = (int ******)*puVar21;
        if (ppppppiVar16 != (int ******)0x0) {
          piVar3 = (int *)(*(romwright_code *)(*ppppppiVar16)[2])(ppppppiVar16);
          do {
            if (piVar3 == (int *)0x472288) {
              ppppppiVar17 = ppppppiVar16;
              if (ppppppiVar16 != (int ******)0x0) {
                *(unsigned char *)(ppppppiVar16[0x88] + 6) = 0;
              }
              goto LAB_003f7a0c;
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)0x0);
        }
        ppppppiVar17 = (int ******)0x0;
LAB_003f7a0c:
        temp_v2 = (**(romwright_code **)*temp_v23)(temp_v23,ppppppiVar16);
        if (temp_v2 != 0) {
          if (ppppppiVar17 != (int ******)0x0) {
            if (*(char *)(ppppppiVar17 + 0x8c) == '\0') {
              FUN_00225ba4(temp_v13,ppppppiVar17[0x88],temp_v20,temp_v19);
            }
            FUN_002c0014(ppppppiVar16,temp_v19 + 0x148);
            pppppiVar14 = ppppppiVar17[0x5c];
            pppppiVar19 = ppppppiVar17[0x5d];
            if (pppppiVar14 == pppppiVar19) {
              pppppiVar19 = ppppppiVar17[2];
              if (pppppiVar19[0x2e] != (int ****)0x0) {
                pppppiVar14 = (int *****)((int)pppppiVar19 + (int)(pppppiVar19[0x2e] + 0x2e));
              }
              else {
                pppppiVar14 = (int *****)0x0;
              }
              pppppiVar19 = pppppiVar14 + (int)pppppiVar19[0x2d];
            }
            temp_v15 = ppppppiVar17[2];
            temp_v18 = (int ******)
                       ((temp_v21 & 0xff) | (unsigned int)*(unsigned char *)(ppppppiVar16 + 0x7d) |
                       ((unsigned int)param_1 & 0xffffff00));
            temp_v17 = temp_v19;
            temp_v16 = temp_v22;
            temp_v14 = (int *******)ppppppiVar17;
            if (pppppiVar14 != pppppiVar19) {
              do {
                param_1 = (int *******)&temp_v14;
                temp_v2 = 0;
                if (*pppppiVar14 != (int ****)0x0) {
                  temp_v2 = (int)*pppppiVar14 + (int)pppppiVar14;
                }
                temp_v4 = FUN_00225b20(temp_v14);
                if (temp_v4 != 0) {
                  FUN_00225750(param_1,temp_v2,temp_v17);
                  param_1 = (int *******)0x0;
                  temp_v9 = 0;
                  temp_v10 = 0;
                  temp_v12 = (int ******)temp_v14;
                  temp_v11 = temp_v2;
                  FUN_00225824(temp_v16,&temp_v9,
                               (unsigned int)temp_v14[0x59][*(int *)(temp_v2 + 0x1c)][0xb][8] & 0xff,
                               (unsigned int)temp_v18 & 0xff);
                }
                pppppiVar14 = pppppiVar14 + 1;
              } while (pppppiVar14 != pppppiVar19);
            }
          }
          else {
            FUN_002c0014(ppppppiVar16,temp_v19 + 0x148,0);
            if ((ppppppiVar16 != (int ******)0x0) &&
               (temp_v2 = (*(romwright_code *)(*ppppppiVar16)[2])(), temp_v2 == 0x4721e0)) {
              temp_v5 = (temp_v21 & 0xffff) >> 8;
            }
            else {
              temp_v5 = temp_v21 & 0xff;
            }
            temp_v4 = temp_v22;
            temp_v2 = temp_v19;
            pppppppiVar15 = (int *******)ppppppiVar16[0x5c];
            param_1 = (int *******)ppppppiVar16[0x5d];
            temp_v5 = temp_v5 | *(unsigned char *)(ppppppiVar16 + 0x7d);
            if (pppppppiVar15 == param_1) {
              pppppiVar14 = ppppppiVar16[2];
              if (pppppiVar14[0x2e] != (int ****)0x0) {
                pppppppiVar15 = (int *******)((int)pppppiVar14 + (int)(pppppiVar14[0x2e] + 0x2e));
              }
              else {
                pppppppiVar15 = (int *******)0x0;
              }
              param_1 = pppppppiVar15 + (int)pppppiVar14[0x2d];
            }
            pppppiVar14 = ppppppiVar16[2];
            for (; pppppppiVar15 != param_1; pppppppiVar15 = pppppppiVar15 + 1) {
              if (*pppppppiVar15 != (int ******)0x0) {
                temp_v7 = (int)*pppppppiVar15 + (int)pppppppiVar15;
              }
              else {
                temp_v7 = 0;
              }
              temp_v6 = FUN_00225b20(ppppppiVar16);
              if (temp_v6 != 0) {
                ppppiVar13 = pppppiVar14[0x32];
                if (ppppiVar13 != (int ****)0x0) {
                  temp_v6 = (int)pppppiVar14 + (int)(ppppiVar13 + 0x32);
                }
                else {
                  temp_v6 = 0;
                }
                piVar3 = (int *)(temp_v6 + *(int *)(temp_v7 + 0x18) * 4);
                temp_v6 = *piVar3;
                if (temp_v6 != 0) {
                  temp_v6 = (int)piVar3 + temp_v6;
                }
                else {
                  temp_v6 = 0;
                }
                temp_v8 = *(int *)(temp_v6 + 0x1c);
                if (temp_v8 != 0) {
                  temp_v8 = temp_v6 + 0x1c + temp_v8;
                }
                else {
                  temp_v8 = 0;
                }
                FUN_00225a74(temp_v8 + 4,ppppppiVar16 + 0x23,temp_v2);
                temp_v15 = (int *****)0x0;
                temp_v16 = 0;
                temp_v17 = temp_v7;
                temp_v18 = ppppppiVar16;
                FUN_00225824(temp_v4,&temp_v15,
                             (unsigned int)ppppppiVar16[0x59][*(int *)(temp_v7 + 0x1c)][0xb][8] & 0xff,temp_v5)
                ;
              }
            }
          }
        }
        puVar21 = puVar21 + 1;
        if (puVar21 == puVar10) {
          return;
        }
      } while( 1 );
    }
  }
  else if (param_8 != 1) {
    puVar21 = *(unsigned int **)(param_4 + 0x2c);
    puVar10 = *(unsigned int **)(param_4 + 0x30);
    temp_v11 = param_5;
    temp_v12 = (int ******)
               (((param_6 | (in_lr & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8));
    temp_v13 = (int *******)param_3;
    temp_v14 = param_1;
    temp_v15 = (int *****)param_2;
    if (puVar21 == puVar10) {
      return;
    }
    do {
      piVar18 = (int *)*puVar21;
      piVar3 = piVar18;
      if (piVar18 != (int *)0x0) {
        piVar5 = (int *)(**(romwright_code **)(*piVar18 + 8))(piVar18);
        do {
          if (piVar5 == (int *)0x472288) {
            if (piVar18 != (int *)0x0) {
              *(unsigned char *)(piVar18[0x88] + 0x18) = 0;
            }
            goto LAB_003f7ad4;
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
        piVar3 = (int *)0x0;
      }
LAB_003f7ad4:
      temp_v2 = (**(romwright_code **)*param_10)(param_10,piVar18);
      if (temp_v2 != 0) {
        if (piVar3 != (int *)0x0) {
          if ((char)piVar3[0x8c] == '\0') {
            FUN_00225ba4(temp_v14,piVar3[0x88],temp_v15);
          }
          FUN_002c0014(piVar18,temp_v11 + 0x148);
          pppppppiVar15 = temp_v13;
          temp_v2 = temp_v11;
          piVar5 = (int *)piVar3[0x5c];
          piVar20 = (int *)piVar3[0x5d];
          temp_v5 = ((unsigned int)temp_v12 & 0xff) | (unsigned int)*(unsigned char *)(piVar18 + 0x7d);
          if (piVar5 == piVar20) {
            temp_v4 = piVar3[2];
            if (*(int *)(temp_v4 + 0xb8) != 0) {
              piVar5 = (int *)(*(int *)(temp_v4 + 0xb8) + temp_v4 + 0xb8);
            }
            else {
              piVar5 = (int *)0x0;
            }
            piVar20 = piVar5 + *(int *)(temp_v4 + 0xb4);
          }
          temp_v16 = piVar3[2];
          for (; piVar5 != piVar20; piVar5 = piVar5 + 1) {
            if (*piVar5 != 0) {
              temp_v4 = *piVar5 + (int)piVar5;
            }
            else {
              temp_v4 = 0;
            }
            temp_v7 = FUN_00225b20(piVar3);
            if (temp_v7 != 0) {
              temp_v3 = *(unsigned int *)(*(int *)(*(int *)(piVar3[0x59] + *(int *)(temp_v4 + 0x1c) * 4) + 0x2c)
                               + 0x20);
              temp_v1 = (char)temp_v3;
              if ((temp_v3 & 0xff) != 1) {
                temp_v1 = '\0';
              }
              if (temp_v1 != '\0') {
                temp_v7 = *(int *)(temp_v16 + 200);
                if (temp_v7 != 0) {
                  temp_v7 = temp_v16 + 200 + temp_v7;
                }
                else {
                  temp_v7 = 0;
                }
                piVar18 = (int *)(temp_v7 + *(int *)(temp_v4 + 0x18) * 4);
                temp_v7 = *piVar18;
                if (temp_v7 != 0) {
                  temp_v7 = temp_v7 + (int)piVar18;
                }
                else {
                  temp_v7 = 0;
                }
                if (*(int *)(temp_v7 + 0x2c) != 1) {
                  temp_v6 = *(int *)(temp_v7 + 0x1c);
                  piVar18 = piVar3 + 0x23;
                  if (temp_v6 != 0) {
                    temp_v6 = temp_v6 + temp_v7 + 0x1c;
                  }
                }
                else {
                  piVar18 = *(int **)(temp_v7 + 0x30);
                  if (piVar18 != (int *)0x0) {
                    piVar18 = (int *)((int)piVar18 + temp_v7 + 0x30);
                  }
                  temp_v6 = *piVar18;
                  if (temp_v6 != 0) {
                    temp_v6 = temp_v6 + (int)piVar18;
                  }
                  temp_v8 = *(int *)(temp_v6 + 4);
                  if (temp_v8 != 0) {
                    piVar18 = (int *)(temp_v6 + 4 + temp_v8);
                  }
                  else {
                    piVar18 = (int *)0x0;
                  }
                  temp_v23 = (unsigned int *)*piVar18;
                  temp_v6 = (**(romwright_code **)(*(int *)piVar3[0x88] + 0x1c))();
                  piVar18 = (int *)(*(int *)(temp_v6 + 4) + (int)temp_v23 * 0x30);
                  temp_v6 = *(int *)(temp_v7 + 0x1c);
                  if (temp_v6 != 0) {
                    temp_v6 = temp_v6 + temp_v7 + 0x1c;
                  }
                }
                FUN_00225a74(temp_v6 + 4,piVar18,temp_v2);
              }
              temp_v17 = 0;
              temp_v18 = (int ******)0x0;
              temp_v19 = temp_v4;
              temp_v20 = (int ****)piVar3;
              FUN_00225824(pppppppiVar15,&temp_v17,
                           *(unsigned int *)(*(int *)(*(int *)(piVar3[0x59] + *(int *)(temp_v4 + 0x1c) * 4) +
                                             0x2c) + 0x20) & 0xff,temp_v5);
            }
          }
        }
        else {
          FUN_002c0014(piVar18,temp_v11 + 0x148,0);
          if ((piVar18 != (int *)0x0) && (temp_v2 = (**(romwright_code **)(*piVar18 + 8))(), temp_v2 == 0x4721e0))
          {
            temp_v5 = ((unsigned int)temp_v12 & 0xffff) >> 8;
          }
          else {
            temp_v5 = (unsigned int)temp_v12 & 0xff;
          }
          pppppppiVar15 = temp_v13;
          temp_v2 = temp_v11;
          temp_v0 = *(unsigned char *)(piVar18 + 0x7d);
          piVar3 = (int *)piVar18[0x5c];
          piVar5 = (int *)piVar18[0x5d];
          if (piVar3 == piVar5) {
            temp_v4 = piVar18[2];
            if (*(int *)(temp_v4 + 0xb8) != 0) {
              piVar3 = (int *)(*(int *)(temp_v4 + 0xb8) + temp_v4 + 0xb8);
            }
            else {
              piVar3 = (int *)0x0;
            }
            piVar5 = piVar3 + *(int *)(temp_v4 + 0xb4);
          }
          temp_v16 = piVar18[2];
          for (; piVar3 != piVar5; piVar3 = piVar3 + 1) {
            if (*piVar3 != 0) {
              temp_v4 = *piVar3 + (int)piVar3;
            }
            else {
              temp_v4 = 0;
            }
            temp_v7 = FUN_00225b20(piVar18);
            if (temp_v7 != 0) {
              temp_v3 = *(unsigned int *)(*(int *)(*(int *)(piVar18[0x59] + *(int *)(temp_v4 + 0x1c) * 4) + 0x2c
                                        ) + 0x20);
              temp_v1 = (char)temp_v3;
              if ((temp_v3 & 0xff) != 1) {
                temp_v1 = '\0';
              }
              if (temp_v1 != '\0') {
                temp_v7 = *(int *)(temp_v16 + 200);
                if (temp_v7 != 0) {
                  temp_v7 = temp_v16 + 200 + temp_v7;
                }
                else {
                  temp_v7 = 0;
                }
                piVar20 = (int *)(temp_v7 + *(int *)(temp_v4 + 0x18) * 4);
                temp_v7 = *piVar20;
                if (temp_v7 != 0) {
                  temp_v7 = (int)piVar20 + temp_v7;
                }
                else {
                  temp_v7 = 0;
                }
                temp_v6 = *(int *)(temp_v7 + 0x1c);
                if (temp_v6 != 0) {
                  temp_v6 = temp_v7 + 0x1c + temp_v6;
                }
                else {
                  temp_v6 = 0;
                }
                FUN_00225a74(temp_v6 + 4,piVar18 + 0x23,temp_v2);
              }
              temp_v17 = 0;
              temp_v18 = (int ******)0x0;
              temp_v19 = temp_v4;
              temp_v20 = (int ****)piVar18;
              FUN_00225824(pppppppiVar15,&temp_v17,
                           *(unsigned int *)(*(int *)(*(int *)(piVar18[0x59] + *(int *)(temp_v4 + 0x1c) * 4) +
                                             0x2c) + 0x20) & 0xff,temp_v5 | temp_v0);
            }
          }
        }
      }
      puVar21 = puVar21 + 1;
      if (puVar21 == puVar10) {
        return;
      }
    } while( 1 );
  }
  FUN_003fdb04(&temp_v9,*(unsigned int *)(param_4 + 0x2c),*(unsigned int *)(param_4 + 0x30),param_1,
               param_2,param_3,param_5,
               ((param_6 | (param_8 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8),param_10)
  ;
  return;
}
