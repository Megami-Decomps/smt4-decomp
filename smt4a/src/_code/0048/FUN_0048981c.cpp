/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048981c` (_code @ 0x48981c, 0x99c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00183e58(void);
int FUN_00357a48(void);
int FUN_003a35a4(void);
int FUN_003d2150(...);
int FUN_0048816c(...);
int FUN_0048d248(...);
int FUN_0049277c(...);
int FUN_00492b84(...);
int FUN_00492c18(...);
int FUN_004d03ec(void);
int FUN_004d040c(...);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */

extern unsigned int *FUN_00162e8c(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183e58. */
extern int FUN_00325064(void);
/* Supplied declaration required: FUN_00357a48. */
extern int FUN_00384cf4(void);
/* Supplied declaration required: FUN_003a35a4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_0048816c. */
/* Supplied declaration required: FUN_0048d248. */
/* Supplied declaration required: FUN_0049277c. */
/* Supplied declaration required: FUN_00492b84. */
extern int FUN_00492bc0(int);
/* Supplied declaration required: FUN_00492c18. */
extern int FUN_00492c5c(int);
extern unsigned int FUN_00492c84(int);
/* Supplied declaration required: FUN_004d03ec. */
/* Supplied declaration required: FUN_004d040c. */


unsigned int FUN_0048981c(int param_1)

{
/* irregular: 10 unstructured edge(s); 5 goto(s); 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned int temp_v2;
  int *piVar5;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned int *puVar9;
  unsigned long long temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  int temp_v6;
  int uStack_54;
  int temp_v7;
  int temp_v8;
  int temp_v9 [2];
  unsigned int *temp_v10;
  unsigned int *temp_v11;
  unsigned int *temp_v12;
  
  temp_v10 = (unsigned int *)FUN_00162e8c();
  temp_v3 = 0;
  temp_v0 = param_1 + 0x4cc;
  puVar7 = (unsigned char *)(param_1 + 0x7b90);
  puVar8 = (unsigned char *)(param_1 + 0x7b91);
  temp_v7 = temp_v0;
  if (((*(unsigned int *)(param_1 + 0x10) & 0x2000000) != 0) &&
     ((FUN_004d03ec(), temp_v0 == 0 || (DAT_005f1614 != '\0')))) {
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfdffffff;
  }
  temp_v0 = 0;
  temp_v12 = temp_v10 + 0x340;
  do {
    temp_v4 = (unsigned int *)&temp_v6;
    temp_v5 = (unsigned int *)&uStack_54;
    FUN_0049277c(0x13,temp_v0 + 0xfb5,temp_v9,&temp_v8);
LAB_004898d0:
    if (*(char *)(param_1 + 0xc) != '\0') {
LAB_00489984:
      if (DAT_005f1a5e == '\0') goto LAB_004899f8;
      temp_v1 = FUN_00384cf4();
      if (temp_v1 != 0) goto LAB_004899f8;
      if (temp_v0 != 1) {
        if (temp_v0 == 0) {
          temp_v0 = 1;
          continue;
        }
        if (temp_v0 != 3) {
          if (temp_v0 != 4) goto LAB_004899f8;
          temp_v0 = 5;
          continue;
        }
        temp_v0 = 4;
        continue;
      }
      temp_v0 = 2;
      continue;
    }
    if (temp_v0 == 4) {
      temp_v1 = FUN_00325064();
      if (temp_v1 != 0) {
        temp_v4 = (unsigned int *)&temp_v6;
        temp_v5 = (unsigned int *)&uStack_54;
        FUN_0049277c(0x13,0x1237,temp_v9,&temp_v8);
      }
      else {
        temp_v4 = (unsigned int *)&temp_v6;
        temp_v5 = (unsigned int *)&uStack_54;
        FUN_0049277c(0x13,0x1235,temp_v9,&temp_v8);
      }
      if (*(char *)(param_1 + 0xc) != '\0') goto LAB_00489984;
    }
    if ((DAT_005f1a5e != '\0') && (temp_v1 = FUN_00384cf4(), temp_v1 == 0)) {
      if (temp_v0 == 1) {
        temp_v0 = 2;
        continue;
      }
      if (temp_v0 == 0) {
        temp_v0 = 1;
        continue;
      }
    }
LAB_004899f8:
    temp_v1 = temp_v9[0];
    FUN_004d040c(temp_v9[0],temp_v8,temp_v6,uStack_54);
    puVar9 = (unsigned int *)temp_v3;
    if (((temp_v1 != 0) && (DAT_005f1614 == '\0')) && (DAT_005f161d != '\0')) {
      switch(temp_v0) {
      case 0:
        if (*(char *)(param_1 + 0xc) != '\0') {
          temp_v0 = param_1;
          FUN_0048816c(param_1,1);
          if (temp_v0 != 0) {
            FUN_003d2150(0x100020d);
            *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
            temp_v0 = param_1;
            FUN_0048816c(param_1,1);
            if (temp_v0 != 0) {
              *(char *)(param_1 + 100) = (char)temp_v0;
            }
            *(unsigned char *)(param_1 + 0x56) = 5;
            *puVar7 = 1;
            *puVar8 = 1;
          }
        }
        else if (temp_v10[0x545] != 0) {
          FUN_003d2150(0x100020e);
          temp_v10[0x544] = (unsigned int)(temp_v10[0x544] == 0);
          *(unsigned char *)(param_1 + 0x56) = 5;
          *(unsigned char *)(param_1 + 0x59) = 0;
          *puVar7 = 1;
          *puVar8 = 1;
        }
        break;
      case 1:
        if (*(char *)(param_1 + 0xc) != '\0') {
          if (*(char *)((int)temp_v12 + 0x8e) == '\x06') {
            FUN_003d2150(0x100020e);
            *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffcffff) | 0x2000000;
            *puVar7 = 1;
            *puVar8 = 1;
            pfVar3 = (float *)FUN_00492b84(temp_v7);
            temp_v4 = (unsigned int *)romwright_f2u((float)((*pfVar3 * 2.0f)));
            temp_v5 = (unsigned int *)romwright_f2u((float)((pfVar3[1] * 2.0f)));
            FUN_00492c18(temp_v7,&temp_v4);
            *(unsigned char *)((int)temp_v10 + 0xd8e) = 0xc;
            *(unsigned char *)(param_1 + 0x57) = 5;
            *(unsigned char *)(param_1 + 0x59) = 0;
            return 1;
          }
          temp_v0 = temp_v0 + 1;
          if (temp_v0 >= 6) {
            return 0;
          }
          continue;
        }
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
        FUN_004d040c(temp_v9[0],temp_v8,temp_v6,uStack_54);
        if (temp_v9[0] == 0) {
          return 1;
        }
        FUN_003d2150(0x100020e);
        piVar5 = (int *)(temp_v10 + 0x545);
        temp_v0 = *piVar5 + 1;
        *piVar5 = temp_v0;
        if (temp_v0 >= 3) {
          *piVar5 = 0;
          FUN_00183e58();
          temp_v2 = 0x10a;
        }
        else if (temp_v0 != 0) {
          if (temp_v0 != 1) {
            *(unsigned char *)(param_1 + 0x57) = 5;
            *(unsigned char *)(param_1 + 0x59) = 0;
            *puVar7 = 1;
            *puVar8 = 1;
            return 1;
          }
          FUN_00183e58();
          temp_v2 = 0xf6;
        }
        else {
          FUN_00183e58();
          temp_v2 = 0x10a;
        }
        sysPlaySe(temp_v2);
        *(unsigned char *)(param_1 + 0x57) = 5;
        *(unsigned char *)(param_1 + 0x59) = 0;
        *puVar7 = 1;
        *puVar8 = 1;
        return 1;
      case 2:
        puVar6 = (unsigned int *)(param_1 + 0x20510);
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
        if (*(char *)(param_1 + 0xc) != '\0') {
          FUN_004d040c(temp_v9[0],temp_v8,temp_v6,uStack_54);
          if (temp_v9[0] != 0) {
            FUN_003d2150(0x1000229);
            if (DAT_005f1a5e != '\0') {
              temp_v0 = FUN_00492c5c(temp_v7);
              temp_v1 = FUN_00492bc0(temp_v7);
              if (temp_v0 == temp_v1) {
                *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
                FUN_00492b84(temp_v7);
                temp_v10 = puVar9;
                temp_v11 = puVar9;
                FUN_00492c18(temp_v7,&temp_v10);
                *(unsigned char *)(param_1 + 0x58) = 5;
                *(char *)(param_1 + 100) = (char)*puVar6;
                *puVar7 = 1;
                *puVar8 = 1;
              }
              *(unsigned char *)(param_1 + 0x58) = 5;
              FUN_00357a48();
            }
            else {
              *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
              FUN_00492b84(temp_v7);
              temp_v10 = puVar9;
              temp_v11 = puVar9;
              FUN_00492c18(temp_v7,&temp_v10);
              *(unsigned char *)(param_1 + 0x58) = 5;
              *(char *)(param_1 + 100) = (char)*puVar6;
              *puVar7 = 1;
              *puVar8 = 1;
            }
            *puVar7 = 1;
            *puVar8 = 1;
          }
        }
        else {
          FUN_004d040c(temp_v9[0],temp_v8,temp_v6,uStack_54);
          if (temp_v9[0] != 0) {
            FUN_003d2150(0x1000229);
            if (DAT_005f1a5e != '\0') {
              temp_v0 = FUN_00492c5c(temp_v7);
              temp_v1 = FUN_00492bc0(temp_v7);
              if (temp_v0 == temp_v1) {
                *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
                FUN_00492b84(temp_v7);
                temp_v10 = puVar9;
                temp_v11 = puVar9;
                FUN_00492c18(temp_v7,&temp_v10);
                *(char *)(param_1 + 100) = (char)*puVar6;
                *puVar7 = 1;
                *puVar8 = 1;
              }
              *(unsigned char *)(param_1 + 0x58) = 5;
              FUN_00357a48();
            }
            else {
              *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
              FUN_00492b84(temp_v7);
              temp_v10 = puVar9;
              temp_v11 = puVar9;
              FUN_00492c18(temp_v7,&temp_v10);
              *(unsigned char *)(param_1 + 0x58) = 5;
              *(char *)(param_1 + 100) = (char)*puVar6;
              *puVar7 = 1;
              *puVar8 = 1;
            }
          }
        }
        break;
      case 3:
        if (*(char *)((int)temp_v12 + 0x8e) == '\x06') {
          temp_v0 = temp_v0 + 1;
          if (temp_v0 >= 6) {
            return 0;
          }
          continue;
        }
        FUN_003d2150(0x100020e);
        *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffcffff) | 0x2000000;
        *puVar7 = 1;
        *puVar8 = 1;
        pfVar3 = (float *)FUN_00492b84(temp_v7);
        temp_v4 = (unsigned int *)romwright_f2u((float)((*pfVar3 * 0.5f)));
        temp_v5 = (unsigned int *)romwright_f2u((float)((pfVar3[1] * 0.5f)));
        FUN_00492c18(temp_v7,&temp_v4);
        *(unsigned char *)((int)temp_v10 + 0xd8e) = 6;
        *(unsigned char *)(param_1 + 0x59) = 5;
        *(unsigned char *)(param_1 + 0x57) = 0;
        return 1;
      case 4:
        if (*(char *)(param_1 + 0xc) != '\0') {
          temp_v0 = param_1;
          FUN_0048816c(param_1,0xffffffff);
          if (temp_v0 != 0) {
            FUN_003d2150(0x100020d);
            *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
            temp_v0 = param_1;
            FUN_0048816c(param_1,0xffffffff);
            if (temp_v0 != 0) {
              *(char *)(param_1 + 100) = (char)temp_v0;
            }
            *(unsigned char *)(param_1 + 0x5a) = 5;
            *puVar7 = 1;
            *puVar8 = 1;
          }
        }
        else {
          *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
          FUN_004d040c(temp_v9[0],temp_v8,temp_v6,uStack_54);
          if (temp_v9[0] != 0) {
            FUN_003d2150(0x1000229);
            if (DAT_005f1a5e != '\0') {
              *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
              temp_v2 = FUN_00492c84(temp_v7);
              FUN_0048d248(param_1,temp_v2);
              FUN_00492b84(temp_v7);
              temp_v4 = puVar9;
              temp_v5 = puVar9;
              FUN_00492c18(temp_v7,&temp_v4);
              *puVar7 = 1;
              *puVar8 = 1;
            }
            else {
              if (temp_v10[0x56e] != 0) {
                temp_v10[0x56e] = 0;
              }
              FUN_003a35a4();
            }
            *(unsigned char *)(param_1 + 0x5b) = 5;
            *puVar7 = 1;
            *puVar8 = 1;
          }
        }
        break;
      case 5:
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
        FUN_004d040c(temp_v9[0],temp_v8,temp_v6,uStack_54);
        if (temp_v9[0] != 0) {
          FUN_003d2150(0x1000229);
          if (DAT_005f1a5e != '\0') {
            *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffcffff;
            temp_v2 = FUN_00492c84(temp_v7);
            FUN_0048d248(param_1,temp_v2);
            FUN_00492b84(temp_v7);
            temp_v4 = puVar9;
            temp_v5 = puVar9;
            FUN_00492c18(temp_v7,&temp_v4);
            *puVar7 = 1;
            *puVar8 = 1;
          }
          else {
            if (temp_v10[0x56e] != 0) {
              temp_v10[0x56e] = 0;
            }
            FUN_00492b84(temp_v7);
            temp_v4 = puVar9;
            temp_v5 = puVar9;
            FUN_00492c18(temp_v7,&temp_v4);
            *(unsigned int **)(param_1 + 0x34) = temp_v4;
            *(unsigned int **)(param_1 + 0x38) = temp_v5;
            FUN_003a35a4();
          }
          *puVar7 = 1;
          *puVar8 = 1;
          *(unsigned char *)(param_1 + 0x5b) = 5;
        }
      }
      return 1;
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 6) {
      return 0;
    }
  } while (temp_v0 != 5);
  temp_v1 = FUN_00325064();
  if (temp_v1 != 0) {
    temp_v4 = (unsigned int *)&temp_v6;
    temp_v5 = (unsigned int *)&uStack_54;
    FUN_0049277c(0x13,0x123e,temp_v9,&temp_v8);
  }
  else {
    temp_v4 = (unsigned int *)&temp_v6;
    temp_v5 = (unsigned int *)&uStack_54;
    FUN_0049277c(0x13,0x123c,temp_v9,&temp_v8);
  }
  goto LAB_004898d0;
}

} /* extern "C" */
