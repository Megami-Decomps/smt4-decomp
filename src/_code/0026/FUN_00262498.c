/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262498` (_code @ 0x262498, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00262498_arg0 fn_00262498_arg0;
struct fn_00262498_arg0 {
    unsigned char pad_0x0[0x16];
    short field_0x16; /* +0x16 */
    unsigned char pad_0x18[0x8];
    ushort field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x12];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
};

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002840b8. */
/* Supplied declaration required: FUN_0028412c. */
/* Supplied declaration required: FUN_002841a0. */
extern int FUN_002a89e4(void);
extern unsigned int FUN_002ae394(unsigned short);
extern int FUN_002b66ec(void);
extern unsigned int FUN_003bf764(int, fn_00262498_arg0 *, unsigned int);
extern unsigned int FUN_003bf7ac(unsigned int, fn_00262498_arg0 *, unsigned int);


unsigned int FUN_00262498(fn_00262498_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  fn_00262498_arg0 *pfVar6;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  fn_00262498_arg0 *pfStack_30;
  unsigned int temp_v11;
  int iStack_28;
  
  temp_v4 = (unsigned int)*(unsigned short *)((int)&param_1->field_0x34 + 2) << 0x14;
  temp_v5 = temp_v4 == 0;
  if (temp_v5) {
    temp_v4 = (unsigned int)*(unsigned char *)((int)&param_1->field_0x40 + 3);
  }
  if (temp_v5 && temp_v4 == 0) {
    temp_v3 = 0;
  }
  else {
    pfVar6 = (fn_00262498_arg0 *)0x0;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    pfStack_30 = param_1;
    temp_v11 = param_2;
    iStack_28 = param_3;
    if (param_3 < 0) {
      temp_v2 = FUN_002b66ec();
      temp_v1 = *(short *)(temp_v2 + 0x24);
      FUN_002841a0(&temp_v6,1);
      temp_v3 = FUN_002ae394(param_1->field_0x20);
      pfVar6 = param_1;
      FUN_0028412c(param_1,temp_v3,2);
    }
    else {
      temp_v2 = FUN_002a89e4();
      if (temp_v2 == 0) {
        return 0;
      }
      temp_v1 = *(short *)(temp_v2 + 0x16);
      temp_v6 = *(unsigned int *)(temp_v2 + 0x34);
      temp_v7 = *(unsigned int *)(temp_v2 + 0x38);
      temp_v8 = *(unsigned int *)(temp_v2 + 0x3c);
      temp_v9 = *(unsigned int *)(temp_v2 + 0x40);
    }
    temp_v2 = 0;
    do {
      if (*(short *)((int)&temp_v6 + temp_v2 * 2) != 0) {
        FUN_002840b8();
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 9);
    temp_v0 = *(unsigned short *)((int)&param_1->field_0x34 + 2);
    temp_v3 = temp_v11;
    if ((temp_v0 & 0xfff) != 4000) {
      if ((temp_v0 & 0xfff) != 0) {
        VectorUnsignedToFloat(temp_v0 & 0xffff0fff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = FUN_003bf764((int)temp_v1,pfVar6,0);
      }
      else {
        temp_v4 = (unsigned int)*(unsigned char *)((int)&param_1->field_0x40 + 3);
        temp_v3 = 0;
        if (temp_v4 != 0) {
          VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v3 = FUN_003bf7ac(temp_v11,pfVar6,0);
        }
      }
    }
  }
  return temp_v3;
}
