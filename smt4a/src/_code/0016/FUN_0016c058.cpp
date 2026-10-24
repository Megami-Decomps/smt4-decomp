/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016c058` (_code @ 0x16c058, 0x39c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018f488(int *, int, unsigned int);
int FUN_001942a8(int, int *);
int FUN_0019430c(...);
int FUN_0019a270(...);
int FUN_001a063c(int *, int, int);

typedef struct fn_0016c058_arg0 fn_0016c058_arg0;
struct fn_0016c058_arg0 {
    unsigned char pad_0x0[0xc];
    void *field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8c];
    int field_0xa0; /* +0xa0 */
    short field_0xa4; /* +0xa4 */
    short field_0xa6; /* +0xa6 */
};

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

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

/* Supplied declaration required: FUN_0018f488. */
/* Supplied declaration required: FUN_001942a8. */
/* Supplied declaration required: FUN_0019430c. */
/* Supplied declaration required: FUN_0019a270. */
/* Supplied declaration required: FUN_001a063c. */
extern int FUN_001a7a20(int *, char *, unsigned int);
extern unsigned int wstrlen(void);
extern int __cxa_guard_acquire(unsigned int *);


void FUN_0016c058(fn_0016c058_arg0 *param_1,int *param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 5 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int *piVar7;
  unsigned int *puVar8;
  int *piVar9;
  int temp_v5;
  int temp_v6;
  int in_r12;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  
  temp_v6 = *param_2;
  temp_v4 = param_2[3];
  piVar6 = (int *)param_1->field_0xc;
  temp_v5 = param_2[4];
  temp_v0 = *(char *)((int)param_2 + 0x29);
  piVar7 = *(int **)(*(int *)param_2[1] + 8);
  piVar9 = *(int **)(*(int *)param_2[1] + 0x10c);
  if (piVar9 == (int *)0x0) {
    return;
  }
  temp_v2 = wstrlen();
  temp_v3 = FUN_001a7a20(piVar9 + 1,"$shadowmap",temp_v2);
  if (temp_v3 == 0xffff) {
    return;
  }
  temp_v3 = *piVar9 + temp_v3 * 0xc;
  if (*(char *)(temp_v3 + 4) != '\0') {
    return;
  }
  if (**(int **)(temp_v3 + 8) == 0) {
    return;
  }
  if ((**(unsigned char **)(temp_v6 + 0x2c) & 2) == 0) {
    temp_v7 = param_1->field_0xa0 == *piVar7;
    if (temp_v7) {
      in_r12 = (int)param_1->field_0xa4;
    }
    temp_v8 = in_r12 == (short)piVar7[8];
    temp_v9 = temp_v7 && temp_v8;
    if (temp_v7 && temp_v8) {
      temp_v9 = param_1->field_0xa6 == *(short *)((int)piVar7 + 0x22);
    }
    if (!temp_v9) {
      if (param_1->field_0xa0 != *piVar7) {
        piVar9 = piVar7 + 2;
      }
      else if ((*(short *)((int)piVar7 + 0x22) == -1) != (param_1->field_0xa6 == -1)) {
        piVar9 = piVar7 + 6;
      }
      else {
        piVar9 = piVar7 + 4;
      }
      FUN_001a063c(piVar6,*piVar9,piVar9[1] << 2);
      temp_v3 = piVar7[8];
      temp_v1 = *(short *)((int)piVar7 + 0x22);
      param_1->field_0xa0 = *piVar7;
      param_1->field_0xa4 = (short)temp_v3;
      param_1->field_0xa6 = temp_v1;
    }
    puVar8 = (unsigned int *)*piVar6;
    temp_v3 = param_2[8];
    *puVar8 = *(unsigned char *)(temp_v5 + 0x22) | 0x80000000;
    puVar8[1] = 0xf02c0;
    FUN_0019a270(puVar8 + 2,temp_v3,0xbf02c1);
    *piVar6 = (int)(puVar8 + 0x10);
    temp_v3 = param_2[9];
    puVar8[0x10] = *(unsigned char *)(temp_v5 + 10) | 0x80000000;
    puVar8[0x11] = 0xf02c0;
    FUN_0019a270(puVar8 + 0x12,temp_v3,0xbf02c1);
    *piVar6 = (int)(puVar8 + 0x20);
    if ((**(unsigned char **)(temp_v6 + 0x2c) & 4) != 0) {
      return;
    }
    FUN_0018f488(piVar6,temp_v4,*(unsigned int *)((int)param_1->field_0x10 + 0xd0));
    FUN_001942a8(temp_v6,piVar6);
    return;
  }
  temp_v1 = (short)piVar7[8];
  if (param_1->field_0xa0 == *piVar7) {
    temp_v7 = param_1->field_0xa4 == temp_v1;
    if (temp_v7) {
      temp_v1 = param_1->field_0xa6;
    }
    if (temp_v7 && temp_v1 == *(short *)((int)piVar7 + 0x22)) goto LAB_0016c188;
  }
  if (param_1->field_0xa0 != *piVar7) {
    piVar9 = piVar7 + 2;
  }
  else if ((*(short *)((int)piVar7 + 0x22) == -1) != (param_1->field_0xa6 == -1)) {
    piVar9 = piVar7 + 6;
  }
  else {
    piVar9 = piVar7 + 4;
  }
  FUN_001a063c(piVar6,*piVar9,piVar9[1] << 2);
  temp_v3 = piVar7[8];
  temp_v1 = *(short *)((int)piVar7 + 0x22);
  param_1->field_0xa0 = *piVar7;
  param_1->field_0xa4 = (short)temp_v3;
  param_1->field_0xa6 = temp_v1;
LAB_0016c188:
  if (temp_v0 != '\0') {
    puVar8 = (unsigned int *)*piVar6;
    temp_v3 = param_2[8];
    *puVar8 = *(unsigned char *)(temp_v5 + 2) | 0x80000000;
    puVar8[1] = 0xf02c0;
    FUN_0019a270(puVar8 + 2,temp_v3,0xbf02c1);
    puVar8 = puVar8 + 0x10;
    *piVar6 = (int)puVar8;
  }
  else {
    puVar8 = (unsigned int *)*piVar6;
    if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v3 != 0)) {
      _ZZN2nw4math5MTX348IdentityEvE8identity = 0x3f800000;
      DAT_0064c058 = 0;
      DAT_0064c05c = 0;
      DAT_0064c060 = 0;
      DAT_0064c064 = 0;
      DAT_0064c068 = 0x3f800000;
      DAT_0064c06c = 0;
      DAT_0064c070 = 0;
      DAT_0064c074 = 0;
      DAT_0064c078 = 0;
      DAT_0064c07c = 0x3f800000;
      DAT_0064c080 = 0;
    }
    *puVar8 = *(unsigned char *)(temp_v5 + 2) | 0x80000000;
    puVar8[1] = 0xf02c0;
    FUN_0019a270(puVar8 + 2,&_ZZN2nw4math5MTX348IdentityEvE8identity,0xbf02c1);
    puVar8 = puVar8 + 0x10;
    *piVar6 = (int)puVar8;
  }
  temp_v3 = param_2[9];
  *puVar8 = *(unsigned char *)(temp_v5 + 10) | 0x80000000;
  puVar8[1] = 0xf02c0;
  FUN_0019a270(puVar8 + 2,temp_v3,0xbf02c1);
  *piVar6 = (int)(puVar8 + 0x10);
  if ((**(unsigned char **)(temp_v6 + 0x2c) & 4) != 0) {
    return;
  }
  temp_v3 = param_2[2];
  FUN_0018f488(piVar6,temp_v4,*(unsigned int *)((int)param_1->field_0x10 + 0xd0));
  FUN_0019430c(temp_v6,piVar6,temp_v3,temp_v5 + 0x20);
  return;
}

} /* extern "C" */
