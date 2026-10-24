/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001be9f8` (_code @ 0x1be9f8, 0x67c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c8248(int *, unsigned int *, unsigned char *, int *, unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(int *, int *);
int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* stack frame of param_5: 9 slot(s), 30 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned char sp57; /* 0x57: local_57 */
    unsigned char sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

extern int nw_anim_PlayPolicy_Loop(...); /* 0x1c37f8 */
extern unsigned char DAT_0055b5ec; /* 0x55b5ec */
extern unsigned char DAT_0055bc08; /* 0x55bc08 */
extern unsigned char DAT_0055c4f0; /* 0x55c4f0 */
extern unsigned char DAT_0055c524; /* 0x55c524 */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x5c4c2c */
extern int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x64c054 */
extern int DAT_0064c058; /* 0x64c058 */
extern int DAT_0064c05c; /* 0x64c05c */
extern int DAT_0064c060; /* 0x64c060 */
extern int DAT_0064c064; /* 0x64c064 */
extern int DAT_0064c068; /* 0x64c068 */
extern int DAT_0064c06c; /* 0x64c06c */
extern int DAT_0064c070; /* 0x64c070 */
extern int DAT_0064c074; /* 0x64c074 */
extern int DAT_0064c078; /* 0x64c078 */
extern int DAT_0064c07c; /* 0x64c07c */
extern int DAT_0064c080; /* 0x64c080 */

extern int *_ZN9Obj55b680C1EP18AsdAllocatorObjectP12Obj55b680ResPv(int, int *, unsigned int *, int);
/* Supplied declaration required: FUN_001c8248. */
extern int FUN_001c940c(unsigned int *, unsigned int, int *, unsigned int);
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_001be9f8(int param_1,unsigned int *param_2,int param_3,int *param_4,unsigned int param_5)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v4;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int uStack_48;
  unsigned int temp_v12;
  int iStack_34;
  unsigned int *puStack_30;
  int iStack_2c;
  int *temp_v13;
  
  if ((param_2 == (unsigned int *)0x0) || (puVar13 = param_2, (~*param_2 & 0x40000112) != 0)) {
    puVar13 = (unsigned int *)0x0;
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  temp_v13 = param_4;
  temp_v2 = (**(romwright_code **)(*param_4 + 8))(param_4,0x270,4);
  if (temp_v2 == 0) {
    return (int *)0x0;
  }
  piVar4 = (int *)_ZN9Obj55b680C1EP18AsdAllocatorObjectP12Obj55b680ResPv(temp_v2,temp_v13,puVar13,param_3);
  temp_v0 = 0;
  puVar12 = &_ZGVZN2nw4math5MTX348IdentityEvE8identity;
  *piVar4 = (int)&DAT_0055bc08;
  piVar4[0x52] = 0;
  piVar4[0x53] = 0;
  piVar4[0x54] = 0;
  piVar4[0x55] = 0;
  piVar4[0x56] = 0;
  piVar4[0x57] = 0;
  piVar4[0x58] = 0;
  piVar4[0x59] = 0;
  piVar4[0x5a] = 0;
  temp_v2 = 0x3f800000;
  temp_v6 = 0;
  piVar4[0x5b] = 0;
  piVar4[0x5c] = 0;
  piVar4[0x5d] = 0;
  piVar4[0x5e] = 0;
  piVar4[0x5f] = 0;
  piVar4[0x60] = 0;
  piVar4[0x61] = 0;
  piVar4[0x62] = *(int *)(param_3 + 0x10);
  if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v3 != 0)) {
    _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v2;
    DAT_0064c058 = temp_v6;
    DAT_0064c05c = temp_v6;
    DAT_0064c060 = temp_v6;
    DAT_0064c064 = temp_v6;
    DAT_0064c068 = temp_v2;
    DAT_0064c06c = temp_v6;
    DAT_0064c070 = temp_v6;
    DAT_0064c074 = temp_v6;
    DAT_0064c078 = temp_v6;
    DAT_0064c07c = temp_v2;
    DAT_0064c080 = temp_v6;
  }
  nn_math_ARMv6_MTX34CopyAsm(piVar4 + 99,&_ZZN2nw4math5MTX348IdentityEvE8identity);
  if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v3 != 0)) {
    _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v2;
    DAT_0064c058 = temp_v6;
    DAT_0064c05c = temp_v6;
    DAT_0064c060 = temp_v6;
    DAT_0064c064 = temp_v6;
    DAT_0064c068 = temp_v2;
    DAT_0064c06c = temp_v6;
    DAT_0064c070 = temp_v6;
    DAT_0064c074 = temp_v6;
    DAT_0064c078 = temp_v6;
    DAT_0064c07c = temp_v2;
    DAT_0064c080 = temp_v6;
  }
  nn_math_ARMv6_MTX34CopyAsm(piVar4 + 0x6f,&_ZZN2nw4math5MTX348IdentityEvE8identity);
  piVar4[0x7b] = 0;
  *(unsigned char *)(piVar4 + 0x7c) = 1;
  *(unsigned char *)(piVar4 + 0x7d) = 0;
  *(unsigned char *)((int)piVar4 + 0x1f5) = 1;
  *(unsigned char *)((int)piVar4 + 0x1f6) = 1;
  temp_v1 = 0;
  if (*(int *)(param_3 + 0x18) != 0) {
    temp_v1 = 2;
  }
  *(unsigned char *)((int)piVar4 + 0x1f7) = temp_v1 | (*(int *)(param_3 + 0x14) != 0);
  piVar4[0x7e] = 0;
  piVar4[0x7f] = 0;
  piVar4[0x80] = 0;
  piVar4[0x81] = 0;
  piVar4[0x82] = 0;
  piVar4[0x83] = 0;
  piVar4[0x84] = 0;
  piVar4[0x85] = 0;
  piVar4[0x86] = param_3;
  piVar4[0x87] = 0;
  *(unsigned char *)((int)piVar4 + 0x1f6) = (char)puVar13[0x35] != '\0';
  *piVar4 = (int)&DAT_0055b5ec;
  piVar4[0x88] = *(int *)(param_3 + 0x1c);
  piVar4[0x89] = 0;
  piVar4[0x8a] = 0;
  piVar4[0x8b] = 0;
  piVar4[0x8c] = 0;
  piVar4[0x8d] = 0;
  piVar4[0x8e] = 0;
  piVar4[0x8f] = 0;
  piVar4[0x90] = 0;
  piVar4[0x91] = 0;
  piVar4[0x93] = (int)&DAT_0055c4f0;
  piVar4[0x94] = (int)&DAT_0055c524;
  piVar4[0x92] = 0;
  piVar4[0x96] = temp_v6;
  piVar4[0x95] = temp_v6;
  piVar4[0x99] = 0x4b7fffff;
  piVar4[0x97] = temp_v2;
  piVar4[0x98] = temp_v6;
  piVar4[0x9a] = (int)nw_anim_PlayPolicy_Loop;
  piVar4[0x9b] = 0;
  temp_v2 = (**(romwright_code **)(*piVar4 + 0x24))(piVar4,temp_v13);
  if (temp_v2 < 0) {
    (**(romwright_code **)*piVar4)(piVar4);
    (**(romwright_code **)(*(int *)piVar4[1] + 0xc))((int *)piVar4[1],piVar4);
    return (int *)0x0;
  }
  temp_v5 = puVar13[0x38];
  temp_v2 = 0;
  if (temp_v2 < (int)temp_v5) {
    do {
      if (puVar13[0x39] != 0) {
        temp_v6 = (int)puVar13 + puVar13[0x39] + 0xe4;
      }
      else {
        temp_v6 = 0;
      }
      piVar6 = (int *)(temp_v6 + temp_v2 * 4);
      temp_v6 = *piVar6;
      if (temp_v6 != 0) {
        puVar12 = (unsigned int *)(temp_v6 + (int)piVar6);
      }
      if (temp_v6 == 0) {
        puVar12 = (unsigned int *)0x0;
      }
      if (puVar13[0x32] != 0) {
        temp_v6 = (int)puVar13 + puVar13[0x32] + 200;
      }
      else {
        temp_v6 = 0;
      }
      piVar6 = (int *)(temp_v6 + temp_v2 * 4);
      temp_v6 = *piVar6;
      if (temp_v6 != 0) {
        puVar7 = (unsigned int *)((int)piVar6 + temp_v6);
      }
      else {
        puVar7 = (unsigned int *)0x0;
      }
      if ((puVar7 != (unsigned int *)0x0) && ((~*puVar7 & 0x10000002) != 0)) {
        puVar7 = (unsigned int *)0x0;
      }
      if (puVar12[0xc] != 0) {
        puVar9 = (unsigned int *)((int)puVar12 + puVar12[0xc] + 0x30);
      }
      else {
        puVar9 = (unsigned int *)0x0;
      }
      temp_v6 = FUN_001c940c(puVar7,*puVar9,temp_v13,param_5);
      if (temp_v6 == 0) {
LAB_001beec8:
        temp_v5 = 0;
        if (piVar4[0x88] != 0) {
          do {
            puVar9 = (unsigned int *)(piVar4[0x8b] + temp_v5 * 4);
            puVar12 = (unsigned int *)*puVar9;
            if (puVar12 != (unsigned int *)0x0) {
              (**(romwright_code **)*puVar12)(puVar12);
              (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
              *puVar9 = 0;
              *(unsigned int *)(piVar4[0x8b] + temp_v5 * 4) = 0;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < (unsigned int)piVar4[0x88]);
        }
        if (piVar4 == (int *)0x0) {
          return (int *)0x0;
        }
        (**(romwright_code **)*piVar4)(piVar4);
        (**(romwright_code **)(*(int *)piVar4[1] + 0xc))((int *)piVar4[1],piVar4);
        return (int *)0x0;
      }
      if (piVar4[0x8e] < (piVar4[0x91] - piVar4[0x90]) >> 2) {
        *(int *)(piVar4[0x90] + piVar4[0x89] * 4) = temp_v6;
        piVar4[0x8e] = piVar4[0x8e] + 1;
      }
      temp_v7 = 1;
      temp_v8 = 1;
      temp_v11 = 1;
      uStack_48 = 0;
      temp_v10 = 0;
      temp_v12 = 0;
      temp_v9 = 0;
      piVar6 = piVar4;
      FUN_001c8248(piVar4,puVar12,&temp_v7,temp_v13,param_5,temp_v6);
      if (piVar6 == (int *)0x0) goto LAB_001beec8;
      if (piVar4[0x89] < (piVar4[0x8c] - piVar4[0x8b]) >> 2) {
        *(int **)(piVar4[0x8b] + piVar4[0x89] * 4) = piVar6;
        piVar4[0x89] = piVar4[0x89] + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)temp_v5);
  }
  if (param_1 == 0) {
    return piVar4;
  }
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != (int *)0x0) {
    if (piVar6 == piVar4) {
      return piVar4;
    }
    nw_gfx_SceneNode_IsCircularReference();
    if (piVar6 != (int *)0x0) {
      return piVar4;
    }
  }
  if (piVar4[3] != 0) {
    return piVar4;
  }
  temp_v4 = *(unsigned int *)(param_1 + 0x20);
  temp_v5 = temp_v4 & 0x3fffffff;
  if ((int)temp_v5 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v5 != 0) {
      temp_v5 = temp_v5 << 1;
    }
    else {
      temp_v5 = 1;
    }
    if ((temp_v4 & 0x3fffffff) < temp_v5) {
      if (((*(int *)(param_1 + 0x14) == 0) || ((temp_v4 & 0xc0000000) != 0x40000000)) ||
         (puVar12 = (unsigned int *)
                    (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                              (*(int **)(param_1 + 0x14),temp_v5 << 2,0x20),
         puVar12 == (unsigned int *)0x0)) {
        if (temp_v0) {
          piVar4[3] = *(int *)(param_1 + 0x10);
        }
        return piVar4;
      }
      temp_v2 = 0;
      puVar9 = *(unsigned int **)(param_1 + 0x18);
      puVar11 = *(unsigned int **)(param_1 + 0x1c);
      puVar8 = puVar12;
      if (puVar9 != puVar11) {
        do {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar9;
          }
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar11);
        puVar9 = *(unsigned int **)(param_1 + 0x18);
        temp_v2 = (*(int *)(param_1 + 0x1c) - (int)puVar9) >> 2;
      }
      if (puVar9 != (unsigned int *)0x0) {
        *(unsigned int **)(param_1 + 0x1c) = puVar9;
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar12 + temp_v2;
      *(unsigned int **)(param_1 + 0x18) = puVar12;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v5;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar4;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar4[3] = *(int *)(param_1 + 0x10);
  }
  return piVar4;
}

} /* extern "C" */
