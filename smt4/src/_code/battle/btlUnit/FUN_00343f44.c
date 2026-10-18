/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343f44` (_code @ 0x343f44, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00343f44_arg1 fn_00343f44_arg1;
struct fn_00343f44_arg1 {
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

extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439a24; /* 0x439a24 */
extern unsigned int DAT_00439a28; /* 0x439a28 */
extern unsigned int DAT_00439a38; /* 0x439a38 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023ce90. */
/* Supplied declaration required: FUN_0023f79c. */
/* Supplied declaration required: FUN_00240530. */
/* Supplied declaration required: FUN_0024057c. */
/* Supplied declaration required: FUN_00240614. */
/* Supplied declaration required: FUN_002451c4. */
extern int FUN_002939f4(void);
extern int FUN_0033a7f8(int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0033b1ac. */
extern int FUN_003ae820(unsigned int);
extern int FUN_003c0ab4(int);
/* Supplied declaration required: FUN_003c1248. */


void FUN_00343f44(unsigned int param_1,fn_00343f44_arg1 *param_2)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v3 = FUN_002939f4();
  if (param_2->field_0x20 == 0) {
    FUN_0023ce90(temp_v3);
    FUN_003c1248((int)param_2->field_0x24,(int)param_2->field_0x26,(int)param_2->field_0x48,
                 (int)param_2->field_0x4a);
    if (param_2->field_0x24 != 0) {
      if (param_2->field_0x24 == 1) {
        if ((*(unsigned int *)(temp_v3 + 0x44a0) & 4) != 0) {
          if ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x400) != 0) {
            FUN_00240614();
          }
          param_2->field_0x20 = 1;
          goto LAB_00343fdc;
        }
        param_2->field_0x2 = 0;
        return;
      }
    }
    else {
      FUN_0023f79c(temp_v3,0x200);
      if ((*(unsigned int *)(temp_v3 + 0x44a0) & 4) == 0) {
        param_2->field_0x20 = 2;
        goto LAB_003440fc;
      }
      param_2->field_0x2 = 0;
      return;
    }
  }
  if (param_2->field_0x20 == 1) {
LAB_00343fdc:
    temp_v6 = *(int *)(temp_v3 + 0x1e98) + param_2->field_0x48 * 0x114;
    temp_v4 = FUN_003c0ab4(temp_v6);
    if (temp_v4 != 0) {
      *(unsigned int *)(temp_v6 + 0x54) = *(unsigned int *)(temp_v6 + 0x54) & 0xfffffff7;
      *(unsigned short *)(temp_v6 + 0x58) = *(unsigned short *)(temp_v6 + 0x58) | 0x800;
      temp_v4 = temp_v3 + param_2->field_0x26 * 8;
      temp_v4 = FUN_0033a7f8(temp_v3,temp_v6,*(unsigned int *)(temp_v4 + 0x1fd0),
                           *(unsigned int *)(temp_v4 + 0x1fd4));
      if (temp_v4 == 0) {
        param_2->field_0x2 = 0;
        return;
      }
      param_2->field_0x20 = 3;
      temp_v0 = (short)DAT_00439a24;
      temp_v1 = (short)DAT_00439a38;
      temp_v2 = (short)DAT_00439a28;
      FUN_0024057c(temp_v3,temp_v6,0);
      FUN_002451c4((int)temp_v1 + (int)temp_v0,*(unsigned int *)&param_2->field_0x8,temp_v6,0xff,(int)temp_v2,
                   0);
      temp_v5 = 6;
      if ((*(unsigned int *)(temp_v6 + 0x50) & 0x10) != 0) {
        temp_v5 = 7;
      }
      FUN_00240530((int)temp_v1,*(unsigned int *)&param_2->field_0x8,temp_v6,temp_v5,0xd);
    }
  }
  if (param_2->field_0x20 == 2) {
LAB_003440fc:
    temp_v4 = FUN_003ae820(DAT_00439ca8);
    if (temp_v4 != 0) {
      param_2->field_0x20 = 3;
      FUN_0033b1ac(temp_v3,(int)param_2->field_0x48);
      param_2->field_0x2 = 0;
      return;
    }
  }
  if (param_2->field_0x20 != 3) {
    param_2->field_0x2 = 1;
    return;
  }
  FUN_0033b1ac(temp_v3,(int)param_2->field_0x48);
  param_2->field_0x2 = 0;
  return;
}
