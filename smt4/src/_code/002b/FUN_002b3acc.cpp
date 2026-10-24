/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3acc` (_code @ 0x2b3acc, 0x700 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013e238(...);
int FUN_0013e900(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nw_gfx_SceneNode_IsCircularReference(...);

typedef int romwright_code(...);
/* stack frame of param_4: 9 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern unsigned char DAT_00421204; /* 0x421204 */
extern unsigned char DAT_004217ec; /* 0x4217ec */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x476634 */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0013e238. */
/* Supplied declaration required: FUN_0013e900. */
extern int *FUN_002b52b4(int, int *, int, char *);
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


/* WARNING: Removing unreachable block (ram,0x002b3e60) */
/* WARNING: Removing unreachable block (ram,0x002b3e30) */
/* WARNING: Removing unreachable block (ram,0x002b3e28) */
/* WARNING: Removing unreachable block (ram,0x002b3e20) */
/* WARNING: Removing unreachable block (ram,0x002b3e5c) */
/* WARNING: Removing unreachable block (ram,0x002b3e68) */
/* WARNING: Removing unreachable block (ram,0x002b3e48) */

int * FUN_002b3acc(char *param_1,int param_2,int param_3,int *param_4)

{
/* irregular: 2 goto(s); 12 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned char temp_v3;
  int *piVar9;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar12;
  romwright_code *pcVar13;
  unsigned int *puVar14;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int *temp_v9;
  int *temp_v10;
  int *temp_v11;
  unsigned char temp_v12;
  int *temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int *temp_v16;
  unsigned int temp_v17;
  
  temp_v11 = (int *)0x0;
  temp_v12 = 1;
  piVar9 = *(int **)(param_1 + 0x1c);
  temp_v0 = 1;
  if (piVar9 != (int *)0x0) {
    temp_v2 = (unsigned int)temp_v10 >> 8;
    temp_v10 = (int *)((unsigned int)temp_v10 & 0xffffff00);
    temp_v9 = piVar9;
    if (&temp_v11 != &temp_v9) {
      temp_v9 = (int *)0x0;
      temp_v10 = (int *)romwright_piece_3_1((int)temp_v2,1);
      temp_v11 = piVar9;
    }
    piVar9 = temp_v9;
    temp_v12 = &temp_v11 == &temp_v9;
    if ((temp_v9 != (int *)0x0) && ((char)(int)temp_v10 != '\0')) {
      (**(romwright_code **)*temp_v9)(temp_v9);
      piVar2 = (int *)piVar9[1];
      temp_v0 = 1;
      (**(romwright_code **)(*piVar2 + 0xc))(piVar2,piVar9);
    }
  }
  else {
    if (*(int *)(param_3 + 0xe0) != 0) {
      temp_v10 = (int *)(*(int *)(param_3 + 0xe0) + param_3 + 0xe0);
    }
    else {
      temp_v10 = (int *)0x0;
    }
    temp_v2 = temp_v10[6];
    if (temp_v2 == 0) {
      temp_v17 = 0;
    }
    else {
      temp_v17 = (**(romwright_code **)(*param_4 + 8))(param_4,temp_v2 << 6,0x20);
    }
    temp_v9 = (int *)(temp_v2 & 0x3fffffff);
    temp_v1 = temp_v10[7];
    if (temp_v1 != 0) {
      temp_v1 = (int)(temp_v10 + 7) + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 + 0x1c;
    }
    else {
      temp_v1 = 0;
    }
    temp_v6 = temp_v1 + temp_v10[6] * 0x10;
    piVar9 = temp_v10;
    temp_v15 = temp_v17;
    temp_v14 = temp_v17;
    for (; temp_v10 = piVar9, temp_v17 = temp_v14, temp_v1 != temp_v6; temp_v1 = temp_v1 + 0x10) {
      if (*(int *)(temp_v1 + 0xc) != 0) {
        temp_v4 = *(int *)(temp_v1 + 0xc) + temp_v1 + 0xc;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v15 != 0) {
        *(unsigned int *)(temp_v15 + 0x3c) = 0x801;
        FUN_0013e900(temp_v15,temp_v4);
      }
      piVar9 = temp_v10;
      temp_v15 = temp_v15 + 0x40;
      temp_v14 = temp_v17;
    }
    pcVar13 = (romwright_code *)(int)*param_1;
    temp_v16 = temp_v9;
    temp_v9 = param_4;
    temp_v13 = param_4;
    FUN_0013e238(piVar9,*(unsigned int *)(param_1 + 4),pcVar13,&temp_v13);
    temp_v0 = temp_v12;
    temp_v10 = (int *)romwright_piece_3_1((((unsigned int)(temp_v10) >> 8) & 0xffffffU),1);
    temp_v9 = piVar9;
    if (&temp_v11 != &temp_v9) {
      temp_v9 = temp_v11;
      pcVar13 = (romwright_code *)(unsigned int)temp_v12;
      temp_v12 = 1;
      temp_v10 = (int *)romwright_piece_3_1((((unsigned int)(temp_v10) >> 8) & 0xffffffU),temp_v0);
      temp_v11 = piVar9;
    }
    piVar9 = temp_v9;
    if ((temp_v9 != (int *)0x0) && ((char)(int)temp_v10 != '\0')) {
      (**(romwright_code **)*temp_v9)(temp_v9);
      piVar2 = (int *)piVar9[1];
      pcVar13 = *(romwright_code **)(*piVar2 + 0xc);
      (*pcVar13)(piVar2,piVar9);
    }
    if (temp_v14 < temp_v15) {
      pcVar13 = (romwright_code *)(temp_v15 - temp_v14);
    }
    if (temp_v14 < temp_v15) {
      temp_v2 = ((unsigned int)pcVar13 & 0x7f) >> 6;
    }
    else {
      temp_v2 = 0;
    }
    for (temp_v1 = temp_v2 + 1; temp_v1 < ((int)(temp_v15 - temp_v14) >> 6) + 1; temp_v1 = temp_v1 + 2) {
    }
    temp_v15 = temp_v14;
    if (temp_v13 != (int *)0x0 && temp_v14 != 0) {
      (**(romwright_code **)(*temp_v13 + 0xc))();
    }
    temp_v0 = 0;
  }
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x234,4);
  if (temp_v1 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_002b52b4(temp_v1,param_4,param_3,param_1);
    *piVar9 = (int)&DAT_004217ec;
    piVar9[0x52] = 0;
    piVar9[0x53] = 0;
    piVar9[0x54] = 0;
    piVar9[0x55] = 0;
    piVar9[0x56] = 0;
    piVar9[0x57] = 0;
    piVar9[0x58] = 0;
    piVar9[0x59] = 0;
    piVar9[0x5a] = 0;
    piVar9[0x5b] = 0;
    piVar9[0x5c] = 0;
    piVar9[0x5d] = 0;
    piVar9[0x5e] = 0;
    piVar9[0x5f] = 0;
    piVar9[0x60] = 0;
    piVar9[0x61] = 0;
    temp_v7 = 0x3f800000;
    piVar9[0x62] = *(int *)(param_1 + 0x10);
    temp_v8 = 0;
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v1 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v7;
      DAT_004efd70 = temp_v8;
      DAT_004efd74 = temp_v8;
      DAT_004efd78 = temp_v8;
      DAT_004efd7c = temp_v8;
      DAT_004efd80 = temp_v7;
      DAT_004efd84 = temp_v8;
      DAT_004efd88 = temp_v8;
      DAT_004efd8c = temp_v8;
      DAT_004efd90 = temp_v8;
      DAT_004efd94 = temp_v7;
      DAT_004efd98 = temp_v8;
    }
    nn_math_ARMv6_MTX34CopyAsm(piVar9 + 99,&_ZZN2nw4math5MTX348IdentityEvE8identity);
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v1 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v7;
      DAT_004efd70 = temp_v8;
      DAT_004efd74 = temp_v8;
      DAT_004efd78 = temp_v8;
      DAT_004efd7c = temp_v8;
      DAT_004efd80 = temp_v7;
      DAT_004efd84 = temp_v8;
      DAT_004efd88 = temp_v8;
      DAT_004efd8c = temp_v8;
      DAT_004efd90 = temp_v8;
      DAT_004efd94 = temp_v7;
      DAT_004efd98 = temp_v8;
    }
    nn_math_ARMv6_MTX34CopyAsm(piVar9 + 0x6f,&_ZZN2nw4math5MTX348IdentityEvE8identity);
    piVar9[0x7b] = 0;
    *(unsigned char *)(piVar9 + 0x7c) = 1;
    *(unsigned char *)(piVar9 + 0x7d) = 0;
    *(unsigned char *)((int)piVar9 + 0x1f5) = 1;
    *(unsigned char *)((int)piVar9 + 0x1f6) = 1;
    temp_v3 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      temp_v3 = 2;
    }
    *(unsigned char *)((int)piVar9 + 0x1f7) = (*(int *)(param_1 + 0x14) != 0) | temp_v3;
    piVar9[0x7e] = 0;
    piVar9[0x7f] = 0;
    piVar9[0x80] = 0;
    piVar9[0x81] = 0;
    piVar9[0x82] = 0;
    piVar9[0x83] = 0;
    piVar9[0x84] = 0;
    piVar9[0x85] = 0;
    piVar9[0x86] = (int)param_1;
    piVar9[0x87] = 0;
    *(unsigned char *)((int)piVar9 + 0x1f6) = *(char *)(param_3 + 0xd4) != '\0';
    *piVar9 = (int)&DAT_00421204;
    piVar9[0x88] = (int)temp_v11;
    *(unsigned char *)(piVar9 + 0x89) = temp_v12;
    temp_v11 = (int *)0x0;
    piVar9[0x8b] = -1;
    piVar9[0x8a] = 0;
    *(unsigned char *)(piVar9 + 0x8c) = temp_v0;
    *(unsigned char *)((int)piVar9 + 0x231) = 0;
    if (!temp_v0) {
      *(int **)(piVar9[0x88] + 0xc) = piVar9;
    }
  }
  (**(romwright_code **)(*piVar9 + 0x24))(piVar9,param_4);
  if ((param_2 == 0) ||
     (((piVar2 = *(int **)(param_2 + 0xc), piVar2 != (int *)0x0 &&
       ((piVar2 == piVar9 || (nw_gfx_SceneNode_IsCircularReference(), piVar2 != (int *)0x0)))) ||
      (piVar9[3] != 0)))) {
    piVar2 = temp_v11;
    if ((temp_v11 != (int *)0x0) && (temp_v12 != 0)) {
      (**(romwright_code **)*temp_v11)(temp_v11);
      piVar7 = (int *)piVar2[1];
      (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar2);
    }
    return piVar9;
  }
  temp_v5 = *(unsigned int *)(param_2 + 0x20);
  temp_v2 = temp_v5 & 0x3fffffff;
  if ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2 >= (int)temp_v2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if (temp_v2 <= (temp_v5 & 0x3fffffff)) goto LAB_002b4158;
    if ((*(int *)(param_2 + 0x14) != 0) && ((temp_v5 & 0xc0000000) == 0x40000000)) {
      puVar5 = (unsigned int *)
               (**(romwright_code **)(**(int **)(param_2 + 0x14) + 8))
                         (*(int **)(param_2 + 0x14),temp_v2 << 2,0x20);
      temp_v1 = 0;
      puVar6 = *(unsigned int **)(param_2 + 0x18);
      puVar14 = *(unsigned int **)(param_2 + 0x1c);
      puVar12 = puVar5;
      if (puVar6 != puVar14) {
        do {
          if (puVar12 != (unsigned int *)0x0) {
            *puVar12 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar12 = puVar12 + 1;
        } while (puVar6 != puVar14);
        temp_v1 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2;
      }
      if (*(int *)(param_2 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_2 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_2 + 0x1c) = puVar5 + temp_v1;
      *(unsigned int **)(param_2 + 0x18) = puVar5;
      *(unsigned int *)(param_2 + 0x20) = (*(unsigned int *)(param_2 + 0x20) & 0xc0000000) | temp_v2;
      goto LAB_002b4158;
    }
    temp_v0 = 0;
  }
  else {
LAB_002b4158:
    temp_v0 = 1;
    if (*(unsigned int **)(param_2 + 0x1c) != (unsigned int *)0x0) {
      **(unsigned int **)(param_2 + 0x1c) = (unsigned int)piVar9;
    }
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
  }
  if (temp_v0) {
    piVar9[3] = *(int *)(param_2 + 0x10);
  }
  piVar2 = temp_v11;
  if ((temp_v11 != (int *)0x0) && (temp_v12 != 0)) {
    (**(romwright_code **)*temp_v11)(temp_v11);
    piVar7 = (int *)piVar2[1];
    (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar2);
  }
  return piVar9;
}

} /* extern "C" */
