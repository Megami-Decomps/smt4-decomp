/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372e84` (_code @ 0x372e84, 0x55c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int FUN_0036fb88(); /* 0x36fb88 */

/* Supplied declaration required: FUN_00101208. */
/* Supplied declaration required: FUN_002bcd68. */
extern int FUN_0036f0c8(romwright_code **, int *);
/* Supplied declaration required: FUN_00373930. */


void FUN_00372e84(unsigned int *param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int *piVar3;
  int temp_v1;
  int *piVar5;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar10;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar13;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  romwright_code *temp_v13;
  int temp_v14;
  unsigned int *temp_v15;
  int temp_v16;
  int *temp_v17;
  unsigned int temp_v18;
  
  temp_v8 = *(int *)(param_2 + 8);
  temp_v15 = param_1;
  temp_v16 = param_2;
  temp_v17 = param_3;
  temp_v18 = param_4;
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_3 + 8))(param_3,0x2d8,4);
  if (puVar1 == (unsigned int *)0x0) {
    *temp_v15 = 0;
    temp_v15[1] = 0x80000000;
    return;
  }
  puVar10 = *(unsigned int **)(temp_v16 + 8);
  temp_v2 = puVar10[1];
  temp_v4 = puVar10[2];
  temp_v7 = puVar10[3];
  temp_v9 = puVar10[4];
  temp_v10 = puVar10[5];
  *puVar1 = *puVar10;
  puVar1[1] = temp_v2;
  puVar1[2] = temp_v4;
  puVar1[3] = temp_v7;
  puVar1[4] = temp_v9;
  puVar1[5] = temp_v10;
  puVar1[6] = puVar10[6];
  puVar1[7] = puVar10[7];
  puVar1[8] = puVar10[8];
  FUN_002bcd68(puVar1 + 9,puVar10 + 9,0xe0);
  temp_v2 = puVar10[0x42];
  temp_v4 = puVar10[0x43];
  temp_v7 = puVar10[0x44];
  temp_v9 = puVar10[0x45];
  puVar1[0x41] = puVar10[0x41];
  puVar1[0x42] = temp_v2;
  puVar1[0x43] = temp_v4;
  puVar1[0x44] = temp_v7;
  puVar1[0x45] = temp_v9;
  FUN_002bcd68(puVar1 + 0x46,puVar10 + 0x46,0x50);
  puVar1[0x5a] = puVar10[0x5a];
  temp_v13 = FUN_0036fb88;
  puVar1 = puVar1 + 0x5b;
  FUN_00101208(puVar1,puVar10 + 0x5b,0x58,3);
  temp_v2 = puVar10[0x9e];
  temp_v4 = puVar10[0x9f];
  puVar13 = puVar1 + -0x5b;
  puVar1[0x42] = puVar10[0x9d];
  puVar1[0x43] = temp_v2;
  puVar1[0x44] = temp_v4;
  puVar1[0x45] = puVar10[0xa0];
  puVar1[0x46] = puVar10[0xa1];
  puVar1[0x47] = puVar10[0xa2];
  puVar1[0x48] = puVar10[0xa3];
  puVar1[0x49] = puVar10[0xa4];
  puVar1[0x4a] = puVar10[0xa5];
  puVar1[0x4b] = puVar10[0xa6];
  puVar1[0x4c] = puVar10[0xa7];
  puVar1[0x4d] = puVar10[0xa8];
  puVar1[0x4e] = puVar10[0xa9];
  puVar1[0x4f] = puVar10[0xaa];
  puVar1[0x50] = puVar10[0xab];
  puVar1[0x51] = puVar10[0xac];
  puVar1[0x52] = puVar10[0xad];
  puVar1[0x53] = puVar10[0xae];
  puVar1[0x54] = puVar10[0xaf];
  puVar1[0x55] = puVar10[0xb0];
  puVar1[0x56] = puVar10[0xb1];
  puVar1[0x57] = puVar10[0xb2];
  puVar1[0x58] = puVar10[0xb3];
  puVar1[0x59] = puVar10[0xb4];
  puVar1[0x5a] = puVar10[0xb5];
  puVar1[-0x58] = 0;
  puVar1[0x46] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x47] = 0;
  puVar1[-0x57] = 0;
  puVar1[-0x56] = 0;
  puVar1[0x58] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x59] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x57] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x51] = 0;
  puVar1[0x50] = 0;
  if ((~temp_v18 & 1) == 0) {
    temp_v6 = *(int *)(temp_v8 + 0x290);
    temp_v1 = 0;
    puVar1[0x49] = temp_v6;
    if (temp_v6 != 0) {
      temp_v1 = (**(romwright_code **)(*temp_v17 + 8))(temp_v17,*(int *)(temp_v8 + 0x290) << 2,4);
      if (temp_v1 == 0) {
        temp_v15[1] = 0x80000000;
        *temp_v15 = (unsigned int)puVar13;
        return;
      }
      puVar1[0x4a] = temp_v1 - (int)(puVar1 + 0x4a);
    }
    temp_v6 = 0;
    if (temp_v6 < *(int *)(temp_v8 + 0x290)) {
      do {
        *(unsigned int *)(temp_v1 + temp_v6 * 4) = 0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(temp_v8 + 0x290));
    }
    temp_v6 = 0;
    if (temp_v6 < *(int *)(temp_v8 + 0x290)) {
      do {
        if (*(int *)(temp_v8 + 0x294) != 0) {
          temp_v0 = temp_v8 + 0x294 + *(int *)(temp_v8 + 0x294);
        }
        else {
          temp_v0 = 0;
        }
        piVar5 = (int *)(temp_v0 + temp_v6 * 4);
        temp_v0 = *piVar5;
        if (temp_v0 != 0) {
          piVar5 = (int *)(temp_v0 + (int)piVar5);
        }
        else {
          piVar5 = (int *)0x0;
        }
        switch(piVar5[2] & 0xff) {
        case 0:
        case 1:
          temp_v0 = 1;
          break;
        case 2:
          temp_v0 = 2;
          break;
        case 3:
          temp_v0 = 3;
          break;
        case 4:
          temp_v0 = 4;
          break;
        default:
          temp_v0 = 0;
        }
        piVar3 = (int *)(**(romwright_code **)(*temp_v17 + 8))(temp_v17,temp_v0 * 4 + 0xc,4);
        if (piVar3 == (int *)0x0) {
          temp_v15[1] = 0x80000000;
          *temp_v15 = (unsigned int)puVar13;
          return;
        }
        temp_v3 = piVar5[1];
        temp_v5 = piVar5[2];
        temp_v11 = piVar5[3];
        *piVar3 = *piVar5;
        piVar3[1] = temp_v3;
        piVar3[2] = temp_v5;
        piVar3[3] = temp_v11;
        temp_v3 = 0;
        if (temp_v0 != 0) {
          do {
            temp_v5 = temp_v3 + 1;
            piVar3[temp_v3 + 3] = piVar5[temp_v3 + 3];
            temp_v3 = temp_v5;
          } while (temp_v5 < temp_v0);
        }
        temp_v0 = *piVar5;
        temp_v12 = temp_v0 == 0;
        if (!temp_v12) {
          temp_v0 = temp_v0 + (int)piVar5;
          temp_v12 = temp_v0 == 0;
        }
        if (!temp_v12) {
          *piVar3 = temp_v0 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        piVar5 = (int *)(temp_v1 + temp_v6 * 4);
        if (piVar3 == (int *)0x0) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = (int)piVar3 - (int)piVar5;
        }
        *piVar5 = temp_v0;
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(temp_v8 + 0x290));
    }
  }
  if ((~temp_v18 & 0x20) == 0) {
    temp_v6 = 0;
    do {
      piVar5 = (int *)(temp_v8 + temp_v6 * 4 + 0x274);
      temp_v1 = *piVar5;
      if (temp_v1 != 0) {
        temp_v13 = (romwright_code *)(temp_v1 + (int)piVar5);
      }
      else {
        temp_v13 = (romwright_code *)0x0;
      }
      if (temp_v13 != (romwright_code *)0x0) {
        temp_v1 = FUN_0036f0c8(&temp_v13,temp_v17);
        if (temp_v1 == 0) {
          temp_v15[1] = 0x80000000;
          *temp_v15 = (unsigned int)puVar13;
          return;
        }
        puVar13[temp_v6 + 0x9d] = temp_v1 - (int)(puVar13 + temp_v6 + 0x9d);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
  }
  if ((~temp_v18 & 0x40) == 0) {
    if (*(int *)(temp_v8 + 0x280) != 0) {
      temp_v13 = (romwright_code *)(temp_v8 + 0x280 + *(int *)(temp_v8 + 0x280));
    }
    else {
      temp_v13 = (romwright_code *)0x0;
    }
    if (temp_v13 != (romwright_code *)0x0) {
      temp_v6 = FUN_0036f0c8(&temp_v13,temp_v17);
      if (temp_v6 == 0) {
        temp_v15[1] = 0x80000000;
        *temp_v15 = (unsigned int)puVar13;
        return;
      }
      puVar1[0x45] = temp_v6 - (int)(puVar1 + 0x45);
    }
  }
  if ((temp_v18 & 0x780) != 0) {
    temp_v6 = *(int *)(temp_v8 + 0x288);
    if (temp_v6 != 0) {
      temp_v6 = temp_v6 + temp_v8 + 0x288;
    }
    else {
      temp_v6 = 0;
    }
    if (temp_v6 != 0) {
      temp_v8 = (**(romwright_code **)(*temp_v17 + 8))(temp_v17,0xf4,4);
      if (temp_v8 == 0) {
        temp_v15[1] = 0x80000000;
        *temp_v15 = (unsigned int)puVar13;
        return;
      }
      FUN_002bcd68(temp_v8,temp_v6,0xf4);
      puVar1[0x47] = temp_v8 - (int)(puVar1 + 0x47);
      *(unsigned int *)(temp_v8 + 0x28) = 0;
      if ((~temp_v18 & 0x100) == 0) {
        temp_v1 = *(int *)(temp_v6 + 0x28);
        if (temp_v1 != 0) {
          temp_v1 = temp_v1 + temp_v6 + 0x28;
        }
        else {
          temp_v1 = 0;
        }
        if (temp_v1 != 0) {
          FUN_00373930(&temp_v13,temp_v16,temp_v17);
          piVar5 = (int *)(temp_v8 + 0x28);
          if (temp_v13 != (romwright_code *)0x0) {
            *piVar5 = (int)temp_v13 - (int)piVar5;
          }
          else {
            *piVar5 = 0;
          }
          if (temp_v14 < 0) {
            temp_v15[1] = 0x80000000;
            *temp_v15 = (unsigned int)puVar13;
            return;
          }
        }
      }
    }
  }
  *temp_v15 = (unsigned int)puVar13;
  temp_v15[1] = 0;
  return;
}
