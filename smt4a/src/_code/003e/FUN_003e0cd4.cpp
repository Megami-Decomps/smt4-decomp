/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0cd4` (_code @ 0x3e0cd4, 0x2a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229ffc(...);
int FUN_003d9164(...);
int FUN_003e9cd0(...);

typedef struct fn_003e0cd4_arg1 fn_003e0cd4_arg1;
struct fn_003e0cd4_arg1 {
    unsigned char pad_0x0[0x17];
    unsigned char field_0x17; /* +0x17 */
    unsigned char pad_0x18[0xf4];
    uint field_0x10c; /* +0x10c */
    unsigned char pad_0x110[0x1dc4];
    int field_0x1ed4; /* +0x1ed4 */
    unsigned char pad_0x1ed8[0x124];
    int field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x2000[0x4];
    unsigned char field_0x2004; /* +0x2004 */
    unsigned char pad_0x2005[0x259b];
    uint field_0x45a0; /* +0x45a0 */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
} param_2_stack;

extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_00573830; /* 0x573830 */
extern unsigned int DAT_00573834; /* 0x573834 */
extern unsigned int DAT_00573838; /* 0x573838 */
extern unsigned int DAT_0057383c; /* 0x57383c */
extern unsigned int DAT_00573840; /* 0x573840 */
extern unsigned int DAT_00573844; /* 0x573844 */
extern unsigned int DAT_00573850; /* 0x573850 */
extern unsigned int DAT_00573854; /* 0x573854 */
extern unsigned int DAT_00573860; /* 0x573860 */
extern unsigned int DAT_00573864; /* 0x573864 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00229ffc. */
/* Supplied declaration required: FUN_003d9164. */
/* Supplied declaration required: FUN_003e9cd0. */
extern int chainCountIdUnflagged(unsigned int, unsigned int *);
extern int FUN_004a96d4(unsigned int);
extern int FUN_004f2708(int, fn_003e0cd4_arg1 *, unsigned int);
extern int FUN_004f6384(unsigned int);


unsigned int FUN_003e0cd4(unsigned int *param_1,fn_003e0cd4_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int *puVar15;
  
  if ((((param_2[1].field_0x17 == '\0') || (temp_v8 = chainCountIdUnflagged(DAT_005712f0,param_1), temp_v8 < 1))
      && (temp_v8 = FUN_004f6384(DAT_00573808), temp_v8 != 0)) &&
     (((param_2->field_0x45a0 & DAT_00573860) == 0 && (*(unsigned int *)(param_2 + 1) & DAT_00573864) == 0
      || (temp_v8 = FUN_004a96d4(DAT_0057a9c8), temp_v8 != 0)))) {
    temp_v7 = DAT_00573854;
    temp_v6 = DAT_00573850;
    temp_v5 = DAT_00573844;
    temp_v4 = DAT_00573840;
    temp_v3 = DAT_0057383c;
    temp_v2 = DAT_00573838;
    temp_v1 = DAT_00573834;
    temp_v11 = DAT_00573830;
    if ((param_2->field_0x10c & 0x4000000) != 0) {
      temp_v8 = 4;
      do {
        puVar15 = (unsigned int *)(param_2->field_0x1ffc + temp_v8 * 0x408);
        temp_v10 = *puVar15;
        temp_v12 = puVar15[1];
        if ((((temp_v10 & temp_v11) != 0 || (temp_v12 & temp_v1) != 0) &&
            ((temp_v10 & temp_v4) == 0 && (temp_v12 & temp_v5) == 0)) &&
           ((temp_v10 & temp_v2) != 0 || (temp_v3 & temp_v12) != 0)) {
          puVar15[1] = temp_v12 | temp_v7;
          *puVar15 = temp_v10 | temp_v6;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x36);
      temp_v8 = 4;
      do {
        temp_v13 = param_2->field_0x1ed4 + temp_v8 * 0x1d0;
        temp_v11 = *(unsigned int *)(temp_v13 + 0x50);
        if ((((temp_v11 & 1) != 0) && ((temp_v11 & 0x80) == 0)) && ((temp_v11 & 0x400) != 0)) {
          *(unsigned int *)(temp_v13 + 0x50) = temp_v11 | 0x40000;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x36);
    }
    param_1[3] = param_1[3] | 4;
    temp_v8 = FUN_004f2708(DAT_00571508,param_2,1);
    if (temp_v8 != 0) {
      temp_v0 = *(short *)&param_2->field_0x2004;
      temp_v9 = 0xffffffff;
      if (temp_v0 == 0) {
        temp_v9 = 1;
      }
      else if (temp_v0 == 1) {
        temp_v9 = 2;
      }
      else if (temp_v0 == 2) {
        temp_v9 = 3;
      }
      else if (temp_v0 == 3) {
        temp_v9 = 4;
      }
      *(unsigned int *)(DAT_00571508 + 0x7cc) = temp_v9;
    }
    param_1[4] = 0;
    *param_1 = 0x1a;
    param_1[3] = 0;
    temp_v8 = chainCountIdUnflagged(DAT_005712f0,param_1);
    if (((temp_v8 < 1) && (temp_v8 = FUN_004f6384(DAT_00573808), temp_v8 != 0)) &&
       ((temp_v8 = DAT_00571508, FUN_00229ffc(), temp_v8 != 0 &&
        ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x80000) == 0)))) {
      FUN_003e9cd0(param_2);
      *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xffffbfff;
      FUN_003d9164();
      return 0xffffffff;
    }
  }
  return 0;
}

} /* extern "C" */
