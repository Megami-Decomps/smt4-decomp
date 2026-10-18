/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040c64c` (_code @ 0x40c64c, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0040c64c_arg1 fn_0040c64c_arg1;
struct fn_0040c64c_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x4];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x17];
    byte field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    short field_0x24; /* +0x24 */
    short field_0x26; /* +0x26 */
    unsigned char pad_0x28[0x20];
    short field_0x48; /* +0x48 */
    short field_0x4a; /* +0x4a */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_00571350; /* 0x571350 */
extern unsigned int DAT_00571354; /* 0x571354 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a638; /* 0x57a638 */
extern unsigned int DAT_0057a63c; /* 0x57a63c */
extern unsigned int DAT_0057a64c; /* 0x57a64c */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003e7ef0. */
/* Supplied declaration required: FUN_003ed238. */
extern int FUN_003f1534(int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003f24e0. */
extern int FUN_004aa750(unsigned int);
extern int FUN_004c9b38(int);
/* Supplied declaration required: FUN_004ca460. */
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004f9450. */
/* Supplied declaration required: FUN_004fd204. */
/* Supplied declaration required: FUN_004fe764. */


void FUN_0040c64c(unsigned int param_1,fn_0040c64c_arg1 *param_2)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v3 = FUN_0014aa78();
  if (param_2->field_0x20 == 0) {
    FUN_003e7ef0(temp_v3);
    FUN_004ca460((int)param_2->field_0x24,(int)param_2->field_0x26,(int)param_2->field_0x48,
                 (int)param_2->field_0x4a);
    if (param_2->field_0x24 != 0) {
      if (param_2->field_0x24 == 1) {
        if (!((*(unsigned int *)(temp_v3 + 0x45a4) & DAT_00571354) == 0 &&
             (DAT_00571350 & *(unsigned int *)(temp_v3 + 0x45a0)) == 0)) {
          if ((*(unsigned int *)(DAT_00573808 + 0x339c) & 0x400) != 0) {
            FUN_004f9450();
          }
          param_2->field_0x20 = 1;
          goto LAB_0040c6fc;
        }
        param_2->field_0x2 = 0;
        return;
      }
    }
    else {
      FUN_003ed238(temp_v3,0x200);
      if (!((*(unsigned int *)(temp_v3 + 0x45a4) & DAT_00571354) != 0 ||
           (DAT_00571350 & *(unsigned int *)(temp_v3 + 0x45a0)) != 0)) {
        param_2->field_0x20 = 2;
        goto LAB_0040c82c;
      }
      param_2->field_0x2 = 0;
      return;
    }
  }
  if (param_2->field_0x20 == 1) {
LAB_0040c6fc:
    temp_v6 = *(int *)(temp_v3 + 0x1ed4) + param_2->field_0x48 * 0x1d0;
    temp_v4 = FUN_004c9b38(temp_v6);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v6 + 0x58) = *(unsigned int *)(temp_v6 + 0x58) & 0xfffffff7;
      *(unsigned short *)(temp_v6 + 0x60) = *(unsigned short *)(temp_v6 + 0x60) | 0x800;
      temp_v4 = temp_v3 + param_2->field_0x26 * 8;
      temp_v4 = FUN_003f1534(temp_v3,temp_v6,*(unsigned int *)(temp_v4 + 0x2008),
                           *(unsigned int *)(temp_v4 + 0x200c));
      if (temp_v4 == 0) {
        param_2->field_0x2 = 0;
        return;
      }
      param_2->field_0x20 = 3;
      temp_v0 = (short)DAT_0057a638;
      temp_v1 = (short)DAT_0057a64c;
      temp_v2 = (short)DAT_0057a63c;
      FUN_004cae0c(temp_v3,temp_v6,0);
      FUN_004fd204((int)temp_v1 + (int)temp_v0,*(unsigned int *)&param_2->field_0x8,temp_v6,0xff,(int)temp_v2,
                   0);
      temp_v5 = 6;
      if ((*(unsigned int *)(temp_v6 + 0x50) & 0x10) != 0) {
        temp_v5 = 7;
      }
      FUN_004fe764((int)temp_v1,*(unsigned int *)&param_2->field_0x8,temp_v6,temp_v5,0xd);
    }
  }
  if (param_2->field_0x20 == 2) {
LAB_0040c82c:
    temp_v4 = FUN_004aa750(DAT_0057a9c8);
    if (temp_v4 != 0) {
      param_2->field_0x20 = 3;
      FUN_003f24e0(temp_v3,(int)param_2->field_0x48);
      param_2->field_0x2 = 0;
      return;
    }
  }
  if (param_2->field_0x20 != 3) {
    param_2->field_0x2 = 1;
    return;
  }
  FUN_003f24e0(temp_v3,(int)param_2->field_0x48);
  param_2->field_0x2 = 0;
  return;
}
