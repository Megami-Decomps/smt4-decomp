/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d488` (_code @ 0x23d488, 0x52c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023dc38(unsigned int *, unsigned int);
int FUN_00255158(int, int);

typedef struct fn_0023d488_arg1 fn_0023d488_arg1;
struct fn_0023d488_arg1 {
    unsigned char pad_0x0[0x23];
    byte field_0x23; /* +0x23 */
    unsigned char pad_0x24[0xb];
    byte field_0x2f; /* +0x2f */
    unsigned char pad_0x30[0x2];
    char field_0x32; /* +0x32 */
    char field_0x33; /* +0x33 */
    char field_0x34; /* +0x34 */
    byte field_0x35; /* +0x35 */
    ushort field_0x36; /* +0x36 */
    uint field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x13];
    byte field_0x4f; /* +0x4f */
    unsigned char pad_0x50[0x6];
    byte field_0x56; /* +0x56 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_0023dc38. */
extern short FUN_0023dcfc(unsigned int);
/* Supplied declaration required: FUN_00255158. */
extern int FUN_002939f4(void);
extern int FUN_0033f8ec(unsigned int *, int, int, int);
extern int FUN_0033fb2c(unsigned int *);
extern int FUN_0033fc50(void);


/* WARNING: Removing unreachable block (ram,0x0023d810) */
/* WARNING: Removing unreachable block (ram,0x0023d820) */
/* WARNING: Removing unreachable block (ram,0x0023d5dc) */
/* WARNING: Removing unreachable block (ram,0x0023d5e8) */
/* WARNING: Removing unreachable block (ram,0x0023d82c) */
/* WARNING: Removing unreachable block (ram,0x0023d83c) */

unsigned int FUN_0023d488(unsigned int *param_1,fn_0023d488_arg1 *param_2,int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  short temp_v2;
  short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  
  temp_v9 = 0;
  temp_v0 = param_2->field_0x35;
  temp_v7 = 0;
  temp_v4 = param_2->field_0x38;
  temp_v6 = (unsigned int)((param_2->field_0x36 & 0xfff) != 0);
  if (((temp_v4 & 0x7f) != 0) && ((temp_v0 & 0x20) == 0)) {
    temp_v6 = temp_v6 | 4;
  }
  temp_v1 = param_2->field_0x32;
  temp_v10 = temp_v1 != '\0';
  if (!temp_v10) {
    temp_v1 = param_2->field_0x33;
  }
  if ((temp_v10 || temp_v1 != '\0') || (param_2->field_0x34 != '\0' || (temp_v0 & 1) != 0)) {
    temp_v6 = temp_v6 | 0x80;
  }
  if (param_3 != 0 && (temp_v4 & 0x4000) != 0) {
    temp_v6 = temp_v6 | 0x40;
  }
  if ((temp_v0 & 2) != 0) {
    temp_v6 = temp_v6 | 0x100;
  }
  if ((temp_v4 & 0x1000000) != 0) {
    temp_v6 = temp_v6 | 0x200;
  }
  if ((temp_v4 & 0x2000000) != 0) {
    temp_v6 = temp_v6 | 0x400;
  }
  if ((temp_v0 & 0x40) != 0) {
    temp_v6 = temp_v6 | 0x800;
  }
  if ((char)temp_v0 < '\0') {
    temp_v6 = temp_v6 | 0x1000;
  }
  if ((temp_v4 & 0x4000000) != 0) {
    temp_v6 = temp_v6 | 0x2000;
  }
  if ((temp_v4 & 0x8000000) != 0) {
    temp_v6 = temp_v6 | 0x4000;
  }
  if ((temp_v4 & 0x10000000) != 0) {
    temp_v6 = temp_v6 | 0x8000;
  }
  if ((temp_v4 & 0x80) != 0) {
    temp_v6 = temp_v6 | 0x10000;
  }
  if ((temp_v4 & 0x100) != 0) {
    temp_v6 = temp_v6 | 0x20000;
  }
  if ((temp_v0 & 0x10) != 0) {
    temp_v6 = temp_v6 | 0x80000;
  }
  if (param_2->field_0x4f != 0) {
    temp_v6 = temp_v6 | 0x100000;
  }
  if ((param_2->field_0x36 & 0x1000) != 0) {
    temp_v6 = temp_v6 | 0x800000;
  }
  if ((temp_v0 & 8) != 0) {
    temp_v6 = temp_v6 | 0x2000000;
  }
  else if (param_2->field_0x23 == 7 || param_2->field_0x23 == 9) {
    temp_v6 = temp_v6 | 0x1000000;
  }
  if (param_2->field_0x2f == 4) {
    temp_v6 = temp_v6 | 0x4000000;
  }
  if (param_2->field_0x56 != 0) {
    temp_v6 = temp_v6 | 0x8000000;
  }
  if (((temp_v6 & 1) != 0) &&
     (((temp_v6 & 0x1000000) != 0 ||
      (((*(unsigned short *)((int)param_1 + 0x1c6) & 2) == 0 &&
       ((short)param_1[0x6d] != *(short *)((int)param_1 + 0x1b6))))))) {
    temp_v7 = 1;
  }
  temp_v8 = temp_v7;
  temp_v11 = param_4;
  if ((temp_v6 & 4) != 0) {
    if ((temp_v6 & 0x1000000) == 0) {
      temp_v11 = param_4 & 0xffff0000;
      FUN_0023dc38(&temp_v11,temp_v4 & 0x7f);
      if (((unsigned short)temp_v11 & *(unsigned short *)((int)param_1 + 0x1c6)) != 0) {
        temp_v8 = temp_v7 | 4;
      }
      if ((temp_v8 & 4) != 0) {
        if ((temp_v6 & 1) != 0) {
          temp_v8 = temp_v8 | 1;
        }
      }
      else if ((temp_v8 & 1) != 0) {
        temp_v11 = temp_v11 & 0xffff0000;
        FUN_0023dc38(&temp_v11,param_2->field_0x38 & 0x7f);
        temp_v7 = temp_v8;
        if ((((temp_v11 & 2) != 0) ||
            (temp_v7 = temp_v8 | 4, temp_v4 = temp_v8 & 1, temp_v8 = temp_v7, temp_v4 != 0)) &&
           (temp_v8 = temp_v7, (param_2->field_0x38 & 0x7f) == 0x11)) {
          temp_v8 = temp_v7 | 4;
        }
      }
    }
    else {
      temp_v8 = temp_v7 | 4;
    }
  }
  if (((temp_v6 & 0x100) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0xd), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x100;
  }
  if (((temp_v6 & 0x200) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x12), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x200;
  }
  if (((temp_v6 & 0x400) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x13), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x400;
  }
  if (((temp_v6 & 0x800) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x12), 0 < temp_v5)) {
    temp_v8 = temp_v8 | 0x800;
  }
  if (((temp_v6 & 0x1000) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x13), 0 < temp_v5)) {
    temp_v8 = temp_v8 | 0x1000;
  }
  if (((temp_v6 & 0x2000) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x14), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x2000;
  }
  if (((temp_v6 & 0x4000) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0xe), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x4000;
  }
  if (((temp_v6 & 0x8000) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0xf), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x8000;
  }
  if (((temp_v6 & 0x10000) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x10), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x10000;
  }
  if (((temp_v6 & 0x20000) != 0) && (temp_v5 = FUN_00255158((int)(short)param_1[2],0x11), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x20000;
  }
  if (((temp_v6 & 0x80000) != 0) && (temp_v5 = FUN_002939f4(), (*(unsigned int *)(temp_v5 + 0x44a0) & 0x400) == 0)
     ) {
    temp_v8 = temp_v8 | 0x80000;
  }
  if ((temp_v6 & 0x100000) != 0) {
    if ((*param_1 & 2) != 0) {
      if (*(short *)(param_1[0x9e] + 0x1c) >= *(short *)((int)param_1 + 0x1b6)) {
        temp_v8 = temp_v8 | 0x100000;
      }
    }
    else if (((*param_1 & 8) == 0) ||
            (*(short *)(param_1[0x9f] + 0xe) >= *(short *)((int)param_1 + 0x1b6))) {
      temp_v8 = temp_v8 | 0x100000;
    }
  }
  if (((temp_v6 & 0x800000) != 0) &&
     ((temp_v5 = FUN_002939f4(), (*(unsigned int *)(temp_v5 + 0x44a0) & 0x40000) != 0 ||
      ((*(unsigned int *)(temp_v5 + 0xe0) & 0x40000) == 0)))) {
    temp_v8 = temp_v8 | 0x800000;
  }
  if (((temp_v6 & 0x1000000) != 0) && (temp_v5 = FUN_0033fb2c(param_1), temp_v5 != 0)) {
    temp_v8 = temp_v8 | 0x1000000;
  }
  if (((temp_v6 & 0x2000000) != 0) && (temp_v5 = FUN_0033fc50(), temp_v5 != 0)) {
    temp_v8 = temp_v8 | 0x2000000;
  }
  if (((temp_v6 & 0x4000000) != 0) && (*(short *)((int)param_1 + 0x1c6) == 0)) {
    temp_v8 = temp_v8 | 0x4000000;
  }
  if ((temp_v6 & 0x8000000) != 0) {
    temp_v5 = FUN_002939f4();
    temp_v2 = *(short *)(temp_v5 + 0x4968);
    if (*(short *)(temp_v5 + 0x4968) < *(short *)(temp_v5 + 0x496a)) {
      temp_v2 = *(short *)(temp_v5 + 0x496a);
    }
    if (temp_v2 < 8) {
      temp_v8 = temp_v8 | 0x8000000;
    }
  }
  temp_v7 = temp_v8;
  if ((temp_v6 & 0x80) != 0) {
    temp_v11 = param_2->field_0x35 & 1;
    temp_v5 = FUN_0033f8ec(param_1,(int)param_2->field_0x32,(int)param_2->field_0x33,
                         (int)param_2->field_0x34);
    if (temp_v5 == 0) {
      temp_v8 = temp_v8 | 0x80;
    }
    temp_v7 = temp_v8;
    if ((((temp_v8 & 0x80) == 0) ||
        (((temp_v6 & ~temp_v8 & 1) != 0 && (temp_v7 = temp_v8 | 1, (temp_v8 & 0x80) == 0)))) &&
       ((temp_v6 & temp_v7 & 1) != 0)) {
      temp_v7 = temp_v7 | 0x80;
    }
  }
  if ((temp_v6 & 0x40) != 0) {
    temp_v2 = FUN_00255158((int)(short)param_1[2],0xb);
    temp_v3 = FUN_0023dcfc(0xb);
    if (temp_v2 != temp_v3) {
      temp_v2 = FUN_00255158((int)(short)param_1[2],10);
      temp_v3 = FUN_0023dcfc(10);
      if (temp_v2 != temp_v3) {
        temp_v2 = FUN_00255158((int)(short)param_1[2],7);
        temp_v3 = FUN_0023dcfc(7);
        if (temp_v2 != temp_v3) {
          temp_v7 = temp_v7 | 0x40;
        }
      }
    }
  }
  if (temp_v6 != temp_v7) {
    temp_v9 = 3;
  }
  return temp_v9;
}

} /* extern "C" */
