/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b8108` (_code @ 0x1b8108, 0x654 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(...);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char LAB_001b9f9c; /* 0x1b9f9c */
extern int nw_anim_PlayPolicy_Loop(...); /* 0x1c37f8 */
extern unsigned char DAT_0055b884; /* 0x55b884 */
extern unsigned char DAT_0055b98c; /* 0x55b98c */
extern unsigned char DAT_0055c4f0; /* 0x55c4f0 */
extern unsigned char DAT_0055c524; /* 0x55c524 */
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

extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int * FUN_001b8108(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  romwright_code *pcVar8;
  int *piVar9;
  int *piVar10;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned long long temp_v10;
  int *temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int *temp_v14;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x70,4);
  if (puVar1 == (unsigned int *)0x0) {
    return (unsigned int *)0x0;
  }
  puVar1[3] = 1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = (unsigned int)&DAT_0055b884;
  puVar1[1] = (unsigned int)param_2;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  temp_v10 = 0x3f80000000000000;
  puVar1[0xb] = 0;
  puVar1[0xc] = (unsigned int)&DAT_0055c4f0;
  puVar1[0xd] = (unsigned int)&DAT_0055c524;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0x3f800000;
  pcVar8 = (romwright_code *)&LAB_001b9f9c;
  temp_v5 = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x13] = (unsigned int)&LAB_001b9f9c;
  puVar1[0x15] = 0;
  *(unsigned char *)(puVar1 + 0x16) = 1;
  *(unsigned char *)((int)puVar1 + 0x59) = 0;
  *(unsigned char *)((int)puVar1 + 0x5a) = 0;
  *puVar1 = (unsigned int)&DAT_0055b98c;
  *(unsigned char *)((int)puVar1 + 0x5b) = 0;
  *(unsigned char *)(puVar1 + 0x17) = 0;
  *(unsigned char *)((int)puVar1 + 0x5d) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  temp_v0 = *param_1;
  temp_v7 = param_1[2];
  temp_v8 = param_1[1];
  temp_v1 = param_1[3];
  puVar1[0x15] = temp_v0;
  puVar1[0x10] = 0x3f800000;
  puVar1[0x11] = 0;
  puVar1[0x12] = *(unsigned int *)(temp_v0 + 0x14);
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  if (*(char *)(temp_v0 + 0x10) != '\0') {
    if (*(char *)(temp_v0 + 0x10) == '\x01') {
      pcVar8 = nw_anim_PlayPolicy_Loop;
      puVar1[0x13] = (unsigned int)pcVar8;
    }
  }
  else {
    puVar1[0x13] = (unsigned int)pcVar8;
  }
  *(unsigned char *)(puVar1 + 0x16) = 1;
  temp_v0 = (**(romwright_code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],temp_v8 << 2,4);
  if (temp_v0 == 0) {
    temp_v5 = -0x80000000;
  }
  if (-1 < temp_v5) {
    puVar3 = puVar1 + 4;
    temp_v8 = temp_v8 & 0x3fffffff;
    temp_v11 = (int *)puVar1[1];
    temp_v12 = temp_v0;
    temp_v14 = (int *)temp_v8;
    if ((int **)puVar3 != &temp_v11) {
      temp_v12 = puVar1[5];
      temp_v14 = (int *)puVar1[7];
      temp_v11 = (int *)*puVar3;
      *puVar3 = (unsigned int)puVar1[1];
      puVar1[5] = temp_v0;
      puVar1[6] = temp_v0;
      puVar1[7] = temp_v8;
    }
    temp_v13 = temp_v12;
    temp_v8 = 0;
    if (temp_v11 != (int *)0x0) {
      temp_v8 = temp_v12;
    }
    if (temp_v11 != (int *)0x0 && temp_v8 != 0) {
      (**(romwright_code **)(*temp_v11 + 0xc))(temp_v11,temp_v12);
    }
    temp_v0 = (**(romwright_code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],temp_v7 << 2,4);
    if (temp_v0 == 0) {
      temp_v5 = -0x80000000;
    }
    if (-1 < temp_v5) {
      puVar3 = puVar1 + 8;
      temp_v11 = (int *)puVar1[1];
      temp_v12 = temp_v0;
      temp_v14 = (int *)(temp_v7 & 0x3fffffff);
      if ((int **)puVar3 != &temp_v11) {
        temp_v12 = puVar1[9];
        temp_v14 = (int *)puVar1[0xb];
        temp_v11 = (int *)*puVar3;
        *puVar3 = (unsigned int)puVar1[1];
        puVar1[9] = temp_v0;
        puVar1[10] = temp_v0;
        puVar1[0xb] = temp_v7 & 0x3fffffff;
      }
      temp_v13 = temp_v12;
      temp_v8 = 0;
      if (temp_v11 != (int *)0x0) {
        temp_v8 = temp_v12;
      }
      if (temp_v11 != (int *)0x0 && temp_v8 != 0) {
        (**(romwright_code **)(*temp_v11 + 0xc))(temp_v11,temp_v12);
      }
    }
  }
  if (temp_v5 < 0) {
    return puVar1;
  }
  if ((char)temp_v1 == '\0') {
    return puVar1;
  }
  temp_v8 = (**(romwright_code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],temp_v7 << 6,4);
  if (temp_v8 == 0) {
    return puVar1;
  }
  piVar10 = (int *)puVar1[1];
  puVar4 = puVar1 + 0x18;
  piVar9 = (int *)(temp_v7 & 0x3fffffff);
  temp_v11 = piVar10;
  temp_v12 = temp_v8;
  temp_v13 = temp_v8;
  temp_v14 = piVar9;
  if ((int **)puVar4 != &temp_v11) {
    temp_v12 = puVar1[0x19];
    temp_v13 = puVar1[0x1a];
    temp_v14 = (int *)puVar1[0x1b];
    temp_v11 = (int *)*puVar4;
    puVar1[0x1a] = temp_v8;
    puVar1[0x1b] = (unsigned int)piVar9;
    *puVar4 = (unsigned int)piVar10;
    puVar1[0x19] = temp_v8;
    piVar9 = piVar10;
  }
  if (temp_v12 < temp_v13) {
    piVar9 = (int *)(temp_v13 - temp_v12);
  }
  if (temp_v12 < temp_v13) {
    temp_v8 = ((unsigned int)piVar9 & 0x7f) >> 6;
  }
  else {
    temp_v8 = 0;
  }
  for (temp_v1 = temp_v8 + 1; temp_v1 < ((int)(temp_v13 - temp_v12) >> 6) + 1; temp_v1 = temp_v1 + 2) {
  }
  temp_v13 = temp_v12;
  if (temp_v11 != (int *)0x0 && temp_v12 != 0) {
    (**(romwright_code **)(*temp_v11 + 0xc))();
  }
  temp_v8 = *(unsigned int *)(*param_1 + 0x18);
  temp_v1 = (int)(puVar1[0x1a] - puVar1[0x19]) >> 6;
  if ((int)temp_v8 < temp_v1) {
    if ((int)temp_v8 < 0) {
      temp_v8 = 0;
    }
    if ((int)temp_v8 < temp_v1) {
      temp_v7 = (temp_v1 - temp_v8) & 1;
    }
    else {
      temp_v7 = 0;
    }
    for (temp_v0 = temp_v7 + temp_v8; temp_v0 < temp_v1; temp_v0 = temp_v0 + 2) {
    }
    temp_v1 = puVar1[0x19] + temp_v8 * 0x40;
  }
  else {
    if ((int)(puVar1[0x1b] & 0x3fffffff) < (int)temp_v8) {
      if ((puVar1[0x18] != 0) && ((puVar1[0x1b] & 0xc0000000) == 0x40000000)) {
        temp_v7 = 0;
        temp_v1 = (**(romwright_code **)(*(int *)puVar1[0x18] + 8))((int *)puVar1[0x18],temp_v8 << 6);
        if (temp_v1 != 0) {
          temp_v0 = 0;
          temp_v6 = puVar1[0x19];
          temp_v9 = puVar1[0x1a];
          temp_v5 = temp_v1;
          if (temp_v6 != temp_v9) {
            do {
              if (temp_v5 != 0) {
                nn_math_ARMv6_MTX34CopyAsm(temp_v5,temp_v6);
                temp_v7 = *(unsigned int *)(temp_v6 + 0x34);
                temp_v4 = *(unsigned int *)(temp_v6 + 0x38);
                *(unsigned int *)(temp_v5 + 0x30) = *(unsigned int *)(temp_v6 + 0x30);
                *(unsigned int *)(temp_v5 + 0x34) = temp_v7;
                *(unsigned int *)(temp_v5 + 0x38) = temp_v4;
                *(unsigned int *)(temp_v5 + 0x3c) = *(unsigned int *)(temp_v6 + 0x3c);
              }
              temp_v6 = temp_v6 + 0x40;
              temp_v5 = temp_v5 + 0x40;
            } while (temp_v6 != temp_v9);
            temp_v0 = (int)(puVar1[0x1a] - puVar1[0x19]) >> 6;
          }
          temp_v3 = puVar1[0x19];
          if (temp_v3 != 0) {
            temp_v2 = puVar1[0x1a];
            if (temp_v3 < temp_v2) {
              temp_v7 = temp_v2 - temp_v3;
            }
            if (temp_v3 < temp_v2) {
              temp_v7 = (temp_v7 & 0x7f) >> 6;
            }
            else {
              temp_v7 = 0;
            }
            temp_v6 = temp_v7 + 1;
            temp_v5 = (int)(temp_v2 - temp_v3) >> 6;
            if (temp_v6 < temp_v5 + 1) {
              do {
                temp_v6 = temp_v6 + 2;
              } while (temp_v6 < temp_v5 + 1);
            }
            puVar1[0x1a] = temp_v3;
            (**(romwright_code **)(*(int *)puVar1[0x18] + 0xc))();
          }
          puVar1[0x1a] = temp_v1 + temp_v0 * 0x40;
          puVar1[0x19] = temp_v1;
          puVar1[0x1b] = (puVar1[0x1b] & 0xc0000000) | temp_v8;
        }
        else {
          temp_v8 = puVar1[0x1b] & 0x3fffffff;
        }
      }
      else {
        temp_v8 = puVar1[0x1b] & 0x3fffffff;
      }
    }
    for (temp_v1 = (int)(puVar1[0x1a] - puVar1[0x19]) >> 6; temp_v1 < (int)temp_v8; temp_v1 = temp_v1 + 1) {
      temp_v0 = puVar1[0x19] + temp_v1 * 0x40;
      if (temp_v0 != 0) {
        if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v5 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v5 != 0)) {
          _ZZN2nw4math5MTX348IdentityEvE8identity = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
          DAT_0064c058 = (unsigned int)temp_v10;
          DAT_0064c05c = DAT_0064c058;
          DAT_0064c060 = DAT_0064c058;
          DAT_0064c064 = DAT_0064c058;
          DAT_0064c068 = _ZZN2nw4math5MTX348IdentityEvE8identity;
          DAT_0064c06c = DAT_0064c058;
          DAT_0064c070 = DAT_0064c058;
          DAT_0064c074 = DAT_0064c058;
          DAT_0064c078 = DAT_0064c058;
          DAT_0064c07c = _ZZN2nw4math5MTX348IdentityEvE8identity;
          DAT_0064c080 = DAT_0064c058;
        }
        nn_math_ARMv6_MTX34CopyAsm(temp_v0,&_ZZN2nw4math5MTX348IdentityEvE8identity);
        temp_v4 = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
        *(unsigned int *)(temp_v0 + 0x30) = temp_v4;
        *(unsigned int *)(temp_v0 + 0x34) = temp_v4;
        *(unsigned int *)(temp_v0 + 0x38) = temp_v4;
        *(unsigned int *)(temp_v0 + 0x3c) = 0x801;
      }
    }
    temp_v1 = puVar1[0x19] + temp_v8 * 0x40;
  }
  puVar1[0x1a] = temp_v1;
  return puVar1;
}

} /* extern "C" */
