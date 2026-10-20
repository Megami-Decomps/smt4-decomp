/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00493a7c` (_code @ 0x493a7c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001834a4(int, int);
int FUN_00284168(int, int, int, int);

typedef struct fn_00493a7c_arg0 fn_00493a7c_arg0;
struct fn_00493a7c_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    unsigned char pad_0x10[0x2];
    short field_0x12; /* +0x12 */
    short field_0x14; /* +0x14 */
};

/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00284168. */


void FUN_00493a7c(fn_00493a7c_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  short temp_v9;
  short temp_v10;
  
  temp_v4 = FUN_001834a4(0x20,param_1->field_0xc + 0x4f);
  temp_v9 = *(short *)(temp_v4 + 8);
  temp_v10 = *(short *)(temp_v4 + 10);
  temp_v4 = FUN_001834a4(0x20,200);
  temp_v9 = *(short *)(temp_v4 + 8) + temp_v9;
  temp_v10 = *(short *)(temp_v4 + 10) + temp_v10;
  temp_v4 = FUN_001834a4(0x20,0xc2);
  temp_v0 = *(short *)(temp_v4 + 10);
  temp_v1 = *(short *)(temp_v4 + 8);
  temp_v7 = *(unsigned short *)(temp_v4 + 4) & 0xffff7fff;
  temp_v8 = *(unsigned short *)(temp_v4 + 6) & 0xffff7fff;
  temp_v4 = FUN_001834a4(0x20,0xc3);
  temp_v2 = *(short *)(temp_v4 + 8);
  temp_v3 = *(short *)(temp_v4 + 10);
  temp_v6 = *(unsigned short *)(temp_v4 + 4) & 0xffff7fff;
  temp_v5 = *(unsigned short *)(temp_v4 + 6) & 0xffff7fff;
  temp_v4 = (int)(short)((temp_v1 + temp_v9) - (short)((int)temp_v7 >> 1));
  FUN_00284168(temp_v4,(int)(short)((temp_v0 + temp_v10) - (short)((int)temp_v8 >> 1)),
               (int)(short)(temp_v7 << 1),(int)(short)(temp_v8 << 1));
  param_1->field_0x12 = (short)temp_v4;
  temp_v4 = (int)(short)((temp_v9 + temp_v2) - (short)((int)temp_v6 >> 1));
  FUN_00284168(temp_v4,(int)(short)((temp_v3 + temp_v10) - (short)((int)temp_v5 >> 1)),
               (int)(short)(temp_v6 << 1),(int)(short)(temp_v5 << 1));
  param_1->field_0x14 = (short)temp_v4;
  return;
}

} /* extern "C" */
