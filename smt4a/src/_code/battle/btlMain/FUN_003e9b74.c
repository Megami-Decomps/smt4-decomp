/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9b74` (_code @ 0x3e9b74, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e9b74_arg0 fn_003e9b74_arg0;
struct fn_003e9b74_arg0 {
    unsigned char pad_0x0[0x404];
    void *field_0x404; /* +0x404 */
    unsigned char pad_0x408[0x1acc];
    unsigned char field_0x1ed4; /* +0x1ed4 */
    unsigned char pad_0x1ed5[0x127];
    unsigned char field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x1ffd[0x2bf];
    undefined4 field_0x22bc; /* +0x22bc */
    unsigned char pad_0x22c0[0xc];
    undefined1 field_0x22cc; /* +0x22cc */
};

/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_003e9c80; /* 0x3e9c80 */
extern unsigned char LAB_003e9cb4; /* 0x3e9cb4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004d881c. */
extern unsigned int FUN_004d88c0(void);


void FUN_003e9b74(fn_003e9b74_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  fn_003e9b74_arg0 *pfVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  
  temp_v0 = 0x24;
  FUN_00178b04(0x24,&LAB_003e9c80,0x3626);
  if (temp_v0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = FUN_004d88c0();
  }
  param_1->field_0x22bc = temp_v1;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v0 = 4;
  do {
    temp_v2 = *(int *)&param_1->field_0x1ffc + temp_v0 * 0x408;
    if (*(char *)(temp_v2 + 0x23a) != '\0') {
      temp_v0 = *(int *)&param_1->field_0x1ed4 + *(short *)(temp_v2 + 8) * 0x1d0;
      pfVar2 = param_1;
      FUN_003f0e20(param_1,(int)*(short *)(temp_v0 + 0x6a));
      FUN_00100388(&temp_v3,&LAB_003e9cb4,(int)*(short *)((int)pfVar2->field_0x404 + 0x8c));
      FUN_004d881c(param_1->field_0x22bc,&temp_v3);
      param_1->field_0x22cc = 1;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x36);
  temp_v0 = 0;
  pfVar2 = param_1;
  FUN_003f0e20(param_1,(int)*(short *)(temp_v0 + 0x6a));
  FUN_00100388(&temp_v3,&LAB_003e9cb4,(int)*(short *)((int)pfVar2->field_0x404 + 0x8c));
  FUN_004d881c(param_1->field_0x22bc,&temp_v3);
  param_1->field_0x22cc = 1;
  return;
}
