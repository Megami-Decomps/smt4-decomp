/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a9acc` (_code @ 0x2a9acc, 0x754 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 16 slot(s), 61 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
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
} param_4_stack;

extern signed char DAT_00464af3; /* 0x464af3 */
extern int DAT_00464b30; /* 0x464b30 */
extern unsigned int DAT_00464b6c; /* 0x464b6c */
extern unsigned int DAT_00464b8c; /* 0x464b8c */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: while (PTRADD). */
/* Supplied declaration required: FUN_0014e9f4. */
/* Supplied declaration required: FUN_00150158. */
/* Supplied declaration required: FUN_001524d0. */
/* Supplied declaration required: FUN_002a65a8. */
/* Supplied declaration required: FUN_002a671c. */
/* Supplied declaration required: FUN_002a691c. */
/* Supplied declaration required: FUN_002af528. */
/* Supplied declaration required: FUN_002af604. */
extern int *FUN_002b3cb0(int *, unsigned int, int, unsigned int);
extern int FUN_002b45f8(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c2cf0. */
/* Supplied declaration required: FUN_002c3188. */
/* Supplied declaration required: FUN_002c31bc. */
extern unsigned int FUN_002c31d8(void);
extern int FUN_002c31e8(int *, int, unsigned int);
/* Supplied declaration required: FUN_002c3290. */
/* Supplied declaration required: FUN_002c54f0. */


void FUN_002a9acc(int *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 goto(s); 14 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar7;
  unsigned int temp_v4;
  int *piVar9;
  unsigned int *puVar10;
  int temp_v5;
  int *piVar12;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  int temp_v11;
  int temp_v12;
  int *temp_v13;
  int *temp_v14;
  int *temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned char temp_v26;
  
  temp_v10 = 0;
  if ((param_3 & 8) != 0) {
    FUN_002a691c(param_1,0x2020000);
  }
  else if ((param_3 & 0x40) != 0) {
    FUN_002a691c(param_1,0x2030000);
  }
  if ((param_3 & 0x20) != 0) {
    FUN_002a671c(param_1,0x2020000);
  }
  else if ((param_3 & 0x100) != 0) {
    FUN_002a671c(param_1,0x2030000);
  }
  if ((param_3 & 0x10) != 0) {
    FUN_002a65a8(param_1,0x2020000);
  }
  else if ((param_3 & 0x80) != 0) {
    FUN_002a65a8(param_1,0x2030000);
  }
  temp_v1 = FUN_002c31bc();
  temp_v2 = FUN_002c2cf0(param_1,temp_v1,*param_1);
  temp_v3 = DAT_00464b6c;
  if (((int)temp_v2 < 0) && ((temp_v2 & 2) != 0)) {
    temp_v1 = FUN_002c31bc();
    FUN_002c2cf0(param_1,temp_v1,temp_v3);
    param_3 = temp_v3;
  }
  temp_v13 = (int *)FUN_002c31bc();
  temp_v14 = (int *)0x0;
  temp_v8 = 0;
  temp_v15 = (int *)0x0;
  temp_v16 = 0x40000000;
  temp_v12 = 0;
  param_2[10] = *(unsigned int *)(*param_1 + 0x1c);
  temp_v11 = 1;
  temp_v3 = 0x100;
  FUN_002c54f0(0x100,0x100,0,param_2[10] << 2);
  param_2[9] = temp_v3;
  temp_v6 = *(int *)(*param_1 + 0x20);
  if (temp_v6 != 0) {
    temp_v6 = *param_1 + 0x20 + temp_v6;
  }
  else {
    temp_v6 = 0;
  }
  if (temp_v6 != 0) {
    param_3 = temp_v6 + 0x1c;
  }
  if (temp_v6 == 0) {
    param_3 = 0;
  }
  temp_v3 = param_3 + *(int *)(*param_1 + 0x1c) * 0x10;
  if (param_3 != temp_v3) {
    do {
      if (param_4 != 0) {
        temp_v6 = *(int *)(param_4 + 0x2c);
        if (*(int *)(param_3 + 0xc) == 0) {
          temp_v7 = 0;
        }
        else {
          temp_v7 = *(int *)(param_3 + 0xc) + param_3 + 0xc;
        }
        temp_v1 = FUN_002c31d8();
        temp_v17 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v17 + 2)),0x101);
        temp_v20 = 1;
        temp_v21 = 0;
        temp_v22 = 0;
        temp_v23 = 0;
        temp_v18 = 4;
        temp_v19 = 8;
        temp_v24 = *(unsigned int *)(temp_v6 + 0x220);
        piVar7 = (int *)FUN_002b3cb0(&temp_v17,0,temp_v7,temp_v1);
      }
      else {
        if (*(int *)(param_3 + 0xc) != 0) {
          temp_v6 = *(int *)(param_3 + 0xc) + param_3 + 0xc;
        }
        else {
          temp_v6 = 0;
        }
        temp_v1 = FUN_002c31bc();
        temp_v4 = FUN_002c31d8();
        temp_v20 = 4;
        temp_v19 = 8;
        temp_v26 = 1;
        temp_v18 = romwright_piece_3_1(temp_v18._1_3_,1);
        temp_v22 = 0;
        temp_v21 = 4;
        temp_v24 = 4;
        piVar7 = &temp_v17;
        temp_v23 = 0;
        temp_v25 = 0;
        temp_v17 = temp_v6;
        FUN_002c3188(piVar7,temp_v1,temp_v4);
        if (piVar7 != (int *)0x0) {
          piVar9 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
          do {
            if (piVar9 == (int *)0x44e858) goto LAB_002a9d90;
            piVar9 = (int *)*piVar9;
          } while (piVar9 != (int *)0x0);
        }
        piVar7 = (int *)0x0;
      }
LAB_002a9d90:
      piVar9 = piVar7;
      FUN_0014e9f4();
      if (piVar9 != (int *)0x0) {
        temp_v12 = 1;
        *param_2 = *param_2 | 2;
      }
      temp_v2 = temp_v16 & 0x3fffffff;
      if (((int)temp_v15 - (int)temp_v14) >> 2 >= (int)temp_v2) {
        if (temp_v2 != 0) {
          temp_v6 = temp_v2 << 1;
        }
        else {
          temp_v6 = 1;
        }
        temp_v6 = FUN_002af528(&temp_v13,temp_v6);
        if (temp_v6 != 0) {
          if (temp_v15 != (int *)0x0) {
            *temp_v15 = (int)piVar7;
          }
          temp_v15 = temp_v15 + 1;
        }
      }
      else {
        if (temp_v15 != (int *)0x0) {
          *temp_v15 = (int)piVar7;
        }
        temp_v15 = temp_v15 + 1;
      }
      if (piVar7 != (int *)0x0) {
        piVar9 = (int *)(**(romwright_code **)(*piVar7 + 8))(piVar7);
        do {
          if (piVar9 == (int *)0x472288) goto LAB_002a9e44;
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
      }
      piVar7 = (int *)0x0;
LAB_002a9e44:
      param_3 = param_3 + 0x10;
      temp_v10 = 1;
      *(int **)(param_2[9] + temp_v8 * 4) = piVar7;
      temp_v8 = temp_v8 + 1;
    } while (param_3 != temp_v3);
    if (temp_v12 != 0) {
      DAT_00464b30 = DAT_00464b30 + 1;
    }
  }
  temp_v3 = *(unsigned int *)param_2[9];
  param_2[0xb] = temp_v3;
  if (temp_v10) {
    puVar10 = *(unsigned int **)(temp_v3 + 8);
    if ((puVar10 != (unsigned int *)0x0) && ((~*puVar10 & 0x40000092) != 0)) {
      puVar10 = (unsigned int *)0x0;
    }
    temp_v3 = puVar10[0x38];
    if (temp_v3 != 0) {
      temp_v6 = temp_v3 + (int)(puVar10 + 0x38);
    }
    else {
      temp_v6 = 0;
    }
    FUN_001524d0(param_2 + 7,0xffffffff);
    temp_v8 = 0;
    if (temp_v8 < *(int *)(temp_v6 + 0x18)) {
      do {
        if (*(int *)(temp_v6 + 0x1c) != 0) {
          temp_v7 = temp_v6 + 0x1c + *(int *)(temp_v6 + 0x1c);
        }
        else {
          temp_v7 = 0;
        }
        piVar7 = (int *)0x0;
        if (temp_v7 != 0) {
          piVar7 = (int *)(temp_v7 + temp_v8 * 0x10 + 0x28);
          temp_v7 = *piVar7;
          if (temp_v7 == 0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)(temp_v7 + (int)piVar7);
          }
        }
        temp_v7 = 0;
        if (*piVar7 != 0) {
          temp_v9 = *piVar7 + (int)piVar7;
        }
        else {
          temp_v9 = 0;
        }
        do {
          temp_v1 = FUN_002c3290(*(unsigned int *)(temp_v7 * 4 + 0x464bd8));
          temp_v5 = FUN_002b45f8(temp_v9,*(unsigned int *)(temp_v7 * 4 + 0x464bd8),temp_v1);
          if (temp_v5 == 0) {
            temp_v9 = *(int *)(temp_v7 * 4 + 0x464bd8);
            if (*(int *)(temp_v6 + 0x1c) != 0) {
              temp_v11 = *(int *)(temp_v6 + 0x1c) + temp_v6 + 0x1c;
            }
            else {
              temp_v11 = 0;
            }
            if (!(temp_v11 == 0 || temp_v9 == 0)) {
              temp_v1 = FUN_002c3290(temp_v9);
              temp_v9 = FUN_002c31e8(&temp_v11,temp_v9,temp_v1);
              if (temp_v9 == 0) {
                temp_v0 = 0xffff;
                *(unsigned short *)((int)param_2 + temp_v7 * 2 + 0x1c) = temp_v0;
                break;
              }
              temp_v0 = (unsigned short)(((temp_v9 - temp_v11) - 0x1c) >> 4);
            }
            else {
              temp_v0 = 0xffff;
            }
            *(unsigned short *)((int)param_2 + temp_v7 * 2 + 0x1c) = temp_v0;
            break;
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 3);
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < *(int *)(temp_v6 + 0x18));
    }
  }
  piVar2 = temp_v15;
  piVar1 = temp_v14;
  piVar7 = temp_v14;
  piVar9 = temp_v15;
  if (DAT_00464af3 != '\0') {
    temp_v6 = (*(int *)(param_2[0xb] + 0x168) - *(int *)(param_2[0xb] + 0x164)) >> 2;
    temp_v8 = *(int *)(DAT_00464b6c + 0x40);
    if (temp_v8 != 0) {
      temp_v8 = (int)(DAT_00464b6c + 0x40) + temp_v8;
    }
    else {
      temp_v8 = 0;
    }
    temp_v7 = 0;
    if (temp_v8 != 0) {
      temp_v7 = *(int *)(temp_v8 + 0x28);
      if (temp_v7 == 0) {
        temp_v7 = 0;
      }
      else {
        temp_v7 = temp_v8 + 0x28 + temp_v7;
      }
    }
    temp_v8 = *(int *)(temp_v7 + 0x2c);
    if (temp_v8 != 0) {
      piVar12 = (int *)(temp_v7 + 0x2c + temp_v8);
    }
    else {
      piVar12 = (int *)0x0;
    }
    if (*piVar12 != 0) {
      temp_v8 = *piVar12 + (int)piVar12;
    }
    else {
      temp_v8 = 0;
    }
    temp_v7 = 0;
    if (temp_v7 < temp_v6) {
      do {
        temp_v9 = *(int *)(*(int *)(param_2[0xb] + 0x164) + temp_v7 * 4);
        temp_v7 = temp_v7 + 1;
        *(int *)(temp_v9 + 0x20) = temp_v8;
        *(unsigned int *)(*(int *)(temp_v9 + 8) + 0x2a4) = 0;
      } while (temp_v7 < temp_v6);
    }
  }
  for (; piVar12 = piVar1, temp_v15 = piVar9, piVar7 != piVar2; piVar7 = piVar7 + 1) {
    for (; piVar12 != piVar2; piVar12 = piVar12 + 1) {
      FUN_00150158(*piVar7,*piVar12);
    }
    piVar9 = temp_v15;
  }
  temp_v6 = (&DAT_00464b8c)[(unsigned char)param_2[0x24]];
  piVar7 = temp_v14;
  do {
    if (piVar7 == piVar9) {
      piVar7 = (int *)0x0;
      if (temp_v13 != (int *)0x0) {
        piVar7 = temp_v14;
      }
      if (temp_v13 != (int *)0x0 && piVar7 != (int *)0x0) {
        temp_v15 = temp_v14;
        (**(romwright_code **)(*temp_v13 + 0xc))(temp_v13,temp_v14);
      }
      return;
    }
    temp_v8 = *piVar7;
    if ((*(int *)(temp_v8 + 0xc) == 0) &&
       (((temp_v7 = *(int *)(temp_v6 + 0xc), temp_v7 == 0 ||
         ((temp_v7 != temp_v8 && (FUN_002af604(), temp_v7 == 0)))) && (*(int *)(temp_v8 + 0xc) == 0))))
    {
      temp_v7 = 1;
      temp_v3 = *(unsigned int *)(temp_v6 + 0x20) & 0x3fffffff;
      if ((int)temp_v3 <= (*(int *)(temp_v6 + 0x1c) - *(int *)(temp_v6 + 0x18)) >> 2) {
        if (temp_v3 == 0) {
          temp_v7 = 1;
        }
        else {
          temp_v7 = temp_v3 << 1;
        }
        temp_v7 = FUN_002af528(temp_v6 + 0x14,temp_v7);
        if (temp_v7 == 0) {
          piVar7 = piVar7 + 1;
          continue;
        }
      }
      if (*(int **)(temp_v6 + 0x1c) != (int *)0x0) {
        **(int **)(temp_v6 + 0x1c) = temp_v8;
      }
      *(int *)(temp_v6 + 0x1c) = *(int *)(temp_v6 + 0x1c) + 4;
      if (temp_v7 != 0) {
        *(unsigned int *)(temp_v8 + 0xc) = *(unsigned int *)(temp_v6 + 0x10);
      }
    }
    piVar7 = piVar7 + 1;
  } while( 1 );
}
