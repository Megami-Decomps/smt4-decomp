/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00455e7c` (_code @ 0x455e7c, 0x550 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00124db0(...);
int nw_gfx_Material_CopyResFragmentLightingTable(...);
int __aeabi_memcpy4(...);

typedef int romwright_code(...);
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int nw_gfx_res_ResTextureCoordinatorData_ResTextureCoordinatorData(...); /* 0x452300 */

/* Supplied declaration required: FUN_00124db0. */
extern int FUN_004515e4(romwright_code **, int *);
/* Supplied declaration required: nw_gfx_Material_CopyResFragmentLightingTable. */
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_00455e7c(unsigned int *param_1,int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar11;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar14;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  romwright_code *temp_v13;
  int temp_v14;
  unsigned int *temp_v15;
  int temp_v16;
  int *temp_v17;
  unsigned int temp_v18;
  
  temp_v9 = *(int *)(param_2 + 8);
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
  puVar11 = *(unsigned int **)(temp_v16 + 8);
  temp_v1 = puVar11[1];
  temp_v3 = puVar11[2];
  temp_v5 = puVar11[3];
  temp_v8 = puVar11[4];
  temp_v10 = puVar11[5];
  *puVar1 = *puVar11;
  puVar1[1] = temp_v1;
  puVar1[2] = temp_v3;
  puVar1[3] = temp_v5;
  puVar1[4] = temp_v8;
  puVar1[5] = temp_v10;
  puVar1[6] = puVar11[6];
  puVar1[7] = puVar11[7];
  puVar1[8] = puVar11[8];
  __aeabi_memcpy4(puVar1 + 9,puVar11 + 9,0xe0);
  temp_v1 = puVar11[0x42];
  temp_v3 = puVar11[0x43];
  temp_v5 = puVar11[0x44];
  temp_v8 = puVar11[0x45];
  puVar1[0x41] = puVar11[0x41];
  puVar1[0x42] = temp_v1;
  puVar1[0x43] = temp_v3;
  puVar1[0x44] = temp_v5;
  puVar1[0x45] = temp_v8;
  __aeabi_memcpy4(puVar1 + 0x46,puVar11 + 0x46,0x50);
  puVar1[0x5a] = puVar11[0x5a];
  temp_v13 = nw_gfx_res_ResTextureCoordinatorData_ResTextureCoordinatorData;
  puVar1 = puVar1 + 0x5b;
  FUN_00124db0(puVar1,puVar11 + 0x5b,0x58,3);
  puVar14 = puVar1 + -0x5b;
  temp_v1 = puVar11[0x9e];
  temp_v3 = puVar11[0x9f];
  puVar1[0x42] = puVar11[0x9d];
  puVar1[0x43] = temp_v1;
  puVar1[0x44] = temp_v3;
  puVar1[0x45] = puVar11[0xa0];
  puVar1[0x46] = puVar11[0xa1];
  puVar1[0x47] = puVar11[0xa2];
  puVar1[0x48] = puVar11[0xa3];
  puVar1[0x49] = puVar11[0xa4];
  puVar1[0x4a] = puVar11[0xa5];
  puVar1[0x4b] = puVar11[0xa6];
  puVar1[0x4c] = puVar11[0xa7];
  puVar1[0x4d] = puVar11[0xa8];
  puVar1[0x4e] = puVar11[0xa9];
  puVar1[0x4f] = puVar11[0xaa];
  puVar1[0x50] = puVar11[0xab];
  puVar1[0x51] = puVar11[0xac];
  puVar1[0x52] = puVar11[0xad];
  puVar1[0x53] = puVar11[0xae];
  puVar1[0x54] = puVar11[0xaf];
  puVar1[0x55] = puVar11[0xb0];
  puVar1[0x56] = puVar11[0xb1];
  puVar1[0x57] = puVar11[0xb2];
  puVar1[0x58] = puVar11[0xb3];
  puVar1[0x59] = puVar11[0xb4];
  puVar1[0x5a] = puVar11[0xb5];
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
    temp_v7 = *(int *)(temp_v9 + 0x290);
    temp_v2 = 0;
    puVar1[0x49] = temp_v7;
    if (temp_v7 != 0) {
      temp_v2 = (**(romwright_code **)(*temp_v17 + 8))(temp_v17,*(int *)(temp_v9 + 0x290) << 2);
      if (temp_v2 == 0) {
        temp_v15[1] = 0x80000000;
        *temp_v15 = (unsigned int)puVar14;
        return;
      }
      puVar1[0x4a] = temp_v2 - (int)(puVar1 + 0x4a);
    }
    temp_v7 = 0;
    if (temp_v7 < *(int *)(temp_v9 + 0x290)) {
      do {
        *(unsigned int *)(temp_v2 + temp_v7 * 4) = 0;
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < *(int *)(temp_v9 + 0x290));
    }
    temp_v7 = 0;
    if (temp_v7 < *(int *)(temp_v9 + 0x290)) {
      do {
        if (*(int *)(temp_v9 + 0x294) != 0) {
          temp_v0 = temp_v9 + 0x294 + *(int *)(temp_v9 + 0x294);
        }
        else {
          temp_v0 = 0;
        }
        piVar4 = (int *)(temp_v0 + temp_v7 * 4);
        temp_v0 = *piVar4;
        if (temp_v0 != 0) {
          piVar4 = (int *)(temp_v0 + (int)piVar4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        switch(piVar4[2] & 0xff) {
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
          *temp_v15 = (unsigned int)puVar14;
          return;
        }
        temp_v4 = piVar4[1];
        temp_v6 = piVar4[2];
        temp_v11 = piVar4[3];
        *piVar3 = *piVar4;
        piVar3[1] = temp_v4;
        piVar3[2] = temp_v6;
        piVar3[3] = temp_v11;
        temp_v4 = 0;
        if (temp_v0 != 0) {
          do {
            temp_v6 = temp_v4 + 1;
            piVar3[temp_v4 + 3] = piVar4[temp_v4 + 3];
            temp_v4 = temp_v6;
          } while (temp_v6 < temp_v0);
        }
        temp_v0 = *piVar4;
        temp_v12 = temp_v0 == 0;
        if (!temp_v12) {
          temp_v0 = temp_v0 + (int)piVar4;
          temp_v12 = temp_v0 == 0;
        }
        if (!temp_v12) {
          *piVar3 = temp_v0 - (int)piVar3;
        }
        else {
          *piVar3 = 0;
        }
        piVar4 = (int *)(temp_v2 + temp_v7 * 4);
        if (piVar3 == (int *)0x0) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = (int)piVar3 - (int)piVar4;
        }
        *piVar4 = temp_v0;
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < *(int *)(temp_v9 + 0x290));
    }
  }
  if ((~temp_v18 & 0x20) == 0) {
    temp_v7 = 0;
    do {
      piVar4 = (int *)(temp_v7 * 4 + 0x274 + temp_v9);
      temp_v2 = *piVar4;
      if (temp_v2 != 0) {
        temp_v13 = (romwright_code *)((int)piVar4 + temp_v2);
      }
      else {
        temp_v13 = (romwright_code *)0x0;
      }
      if (temp_v13 != (romwright_code *)0x0) {
        temp_v2 = FUN_004515e4(&temp_v13,temp_v17);
        if (temp_v2 == 0) {
          temp_v15[1] = 0x80000000;
          *temp_v15 = (unsigned int)puVar14;
          return;
        }
        puVar14[temp_v7 + 0x9d] = temp_v2 - (int)(puVar14 + temp_v7 + 0x9d);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 3);
  }
  if ((~temp_v18 & 0x40) == 0) {
    if (*(int *)(temp_v9 + 0x280) != 0) {
      temp_v13 = (romwright_code *)(temp_v9 + 0x280 + *(int *)(temp_v9 + 0x280));
    }
    else {
      temp_v13 = (romwright_code *)0x0;
    }
    if (temp_v13 != (romwright_code *)0x0) {
      temp_v7 = FUN_004515e4(&temp_v13,temp_v17);
      if (temp_v7 == 0) {
        temp_v15[1] = 0x80000000;
        *temp_v15 = (unsigned int)puVar14;
        return;
      }
      puVar1[0x45] = temp_v7 - (int)(puVar1 + 0x45);
    }
  }
  if ((temp_v18 & 0x780) != 0) {
    temp_v7 = *(int *)(temp_v9 + 0x288);
    if (temp_v7 != 0) {
      temp_v7 = temp_v7 + temp_v9 + 0x288;
    }
    else {
      temp_v7 = 0;
    }
    if (temp_v7 != 0) {
      temp_v9 = (**(romwright_code **)(*temp_v17 + 8))(temp_v17,0xf4,4);
      if (temp_v9 == 0) {
        temp_v15[1] = 0x80000000;
        *temp_v15 = (unsigned int)puVar14;
        return;
      }
      __aeabi_memcpy4(temp_v9,temp_v7,0xf4);
      puVar1[0x47] = temp_v9 - (int)(puVar1 + 0x47);
      *(unsigned int *)(temp_v9 + 0x28) = 0;
      if ((~temp_v18 & 0x100) == 0) {
        temp_v2 = *(int *)(temp_v7 + 0x28);
        if (temp_v2 != 0) {
          temp_v2 = temp_v2 + temp_v7 + 0x28;
        }
        else {
          temp_v2 = 0;
        }
        if (temp_v2 != 0) {
          nw_gfx_Material_CopyResFragmentLightingTable(&temp_v13,temp_v16,temp_v17);
          piVar4 = (int *)(temp_v9 + 0x28);
          if (temp_v13 != (romwright_code *)0x0) {
            *piVar4 = (int)temp_v13 - (int)piVar4;
          }
          else {
            *piVar4 = 0;
          }
          if (temp_v14 < 0) {
            temp_v15[1] = 0x80000000;
            *temp_v15 = (unsigned int)puVar14;
            return;
          }
        }
      }
    }
  }
  *temp_v15 = (unsigned int)puVar14;
  temp_v15[1] = 0;
  return;
}

} /* extern "C" */
