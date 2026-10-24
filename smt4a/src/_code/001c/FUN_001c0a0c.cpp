/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0a0c` (_code @ 0x1c0a0c, 0x3e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(int *, unsigned int *);
int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
extern unsigned char DAT_0055bc08; /* 0x55bc08 */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x5c4c2c */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern int *_ZN9Obj55b680C1EP18AsdAllocatorObjectP12Obj55b680ResPv(int, int *, unsigned int *, int);
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


int * FUN_001c0a0c(int param_1,unsigned int *param_2,int param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  if ((param_2 == (unsigned int *)0x0) || ((~*param_2 & 0x40000012) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x220,4);
  temp_v0 = 0;
  if (temp_v1 == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)_ZN9Obj55b680C1EP18AsdAllocatorObjectP12Obj55b680ResPv(temp_v1,param_4,param_2,param_3);
    temp_v6 = 0x3f800000;
    *piVar11 = (int)&DAT_0055bc08;
    piVar11[0x52] = 0;
    piVar11[0x53] = 0;
    piVar11[0x54] = 0;
    piVar11[0x55] = 0;
    piVar11[0x56] = 0;
    piVar11[0x57] = 0;
    piVar11[0x58] = 0;
    piVar11[0x59] = 0;
    piVar11[0x5a] = 0;
    temp_v5 = 0;
    piVar11[0x5b] = 0;
    piVar11[0x5c] = 0;
    piVar11[0x5d] = 0;
    piVar11[0x5e] = 0;
    piVar11[0x5f] = 0;
    piVar11[0x60] = 0;
    piVar11[0x61] = 0;
    piVar11[0x62] = *(int *)(param_3 + 0x10);
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v1 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v6;
      DAT_0064c058 = temp_v5;
      DAT_0064c05c = temp_v5;
      DAT_0064c060 = temp_v5;
      DAT_0064c064 = temp_v5;
      DAT_0064c068 = temp_v6;
      DAT_0064c06c = temp_v5;
      DAT_0064c070 = temp_v5;
      DAT_0064c074 = temp_v5;
      DAT_0064c078 = temp_v5;
      DAT_0064c07c = temp_v6;
      DAT_0064c080 = temp_v5;
    }
    nn_math_ARMv6_MTX34CopyAsm(piVar11 + 99,&_ZZN2nw4math5MTX348IdentityEvE8identity);
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v1 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v6;
      DAT_0064c058 = temp_v5;
      DAT_0064c05c = temp_v5;
      DAT_0064c060 = temp_v5;
      DAT_0064c064 = temp_v5;
      DAT_0064c068 = temp_v6;
      DAT_0064c06c = temp_v5;
      DAT_0064c070 = temp_v5;
      DAT_0064c074 = temp_v5;
      DAT_0064c078 = temp_v5;
      DAT_0064c07c = temp_v6;
      DAT_0064c080 = temp_v5;
    }
    nn_math_ARMv6_MTX34CopyAsm(piVar11 + 0x6f,&_ZZN2nw4math5MTX348IdentityEvE8identity);
    piVar11[0x7b] = 0;
    *(unsigned char *)(piVar11 + 0x7c) = 1;
    *(unsigned char *)(piVar11 + 0x7d) = 0;
    *(unsigned char *)((int)piVar11 + 0x1f5) = 1;
    *(unsigned char *)((int)piVar11 + 0x1f6) = 1;
    temp_v3 = 0;
    if (*(int *)(param_3 + 0x18) != 0) {
      temp_v3 = 2;
    }
    *(unsigned char *)((int)piVar11 + 0x1f7) = (*(int *)(param_3 + 0x14) != 0) | temp_v3;
    piVar11[0x7e] = 0;
    piVar11[0x7f] = 0;
    piVar11[0x80] = 0;
    piVar11[0x81] = 0;
    piVar11[0x82] = 0;
    piVar11[0x83] = 0;
    piVar11[0x84] = 0;
    piVar11[0x85] = 0;
    piVar11[0x86] = param_3;
    piVar11[0x87] = 0;
    *(unsigned char *)((int)piVar11 + 0x1f6) = (char)param_2[0x35] != '\0';
  }
  (**(romwright_code **)(*piVar11 + 0x24))(piVar11,param_4);
  if (param_1 == 0) {
    return piVar11;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    if (piVar3 == piVar11) {
      return piVar11;
    }
    nw_gfx_SceneNode_IsCircularReference();
    if (piVar3 != (int *)0x0) {
      return piVar11;
    }
  }
  if (piVar11[3] != 0) {
    return piVar11;
  }
  temp_v4 = *(unsigned int *)(param_1 + 0x20);
  temp_v2 = temp_v4 & 0x3fffffff;
  if ((int)temp_v2 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if ((temp_v4 & 0x3fffffff) < temp_v2) {
      if (((*(int *)(param_1 + 0x14) == 0) || ((temp_v4 & 0xc0000000) != 0x40000000)) ||
         (puVar5 = (unsigned int *)
                   (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                             (*(int **)(param_1 + 0x14),temp_v2 << 2,0x20),
         puVar5 == (unsigned int *)0x0)) {
        if (temp_v0) {
          piVar11[3] = *(int *)(param_1 + 0x10);
        }
        return piVar11;
      }
      temp_v1 = 0;
      puVar6 = *(unsigned int **)(param_1 + 0x18);
      puVar10 = *(unsigned int **)(param_1 + 0x1c);
      puVar8 = puVar5;
      if (puVar6 != puVar10) {
        do {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar10);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar5 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar5;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v2;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar11;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar11[3] = *(int *)(param_1 + 0x10);
  }
  return piVar11;
}

} /* extern "C" */
