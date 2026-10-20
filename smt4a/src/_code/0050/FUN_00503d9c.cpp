/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00503d9c` (_code @ 0x503d9c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00503c90(int, int *, int, int);
int FUN_005043b0(int, int *);
int nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(int *, int *, int);

/* stack frame of param_3: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_00503c90. */
/* Supplied declaration required: FUN_005043b0. */
/* Supplied declaration required: nw_gfx_ShaderBinaryInfo_SafeBuffer_Write. */


int FUN_00503d9c(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  
  temp_v4 = param_2 + param_3;
  temp_v5 = 0;
  if (0 < *(int *)(param_1 + 0x294)) {
    temp_v0 = 1;
  }
  temp_v1 = 0x10244;
  if (*(int *)(param_1 + 0x294) < 1) {
    temp_v0 = 0;
  }
  temp_v2 = param_2;
  temp_v3 = param_2;
  nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&temp_v2,&temp_v0,8);
  temp_v7 = 0xf02d5;
  temp_v6 = 0;
  nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&temp_v2,&temp_v6,8);
  temp_v0 = *(unsigned int *)(param_1 + 0x290);
  FUN_00503c90(param_1,&temp_v2,0x2d6,param_1 + 0x90);
  if (0 < *(int *)(param_1 + 0x294)) {
    temp_v8 = 0;
    temp_v9 = 0xf02a5;
    nw_gfx_ShaderBinaryInfo_SafeBuffer_Write(&temp_v2,&temp_v8,8);
    temp_v0 = *(unsigned int *)(param_1 + 0x290);
    FUN_00503c90(param_1,&temp_v2,0x2a6,param_1 + 0x90);
  }
  FUN_005043b0(param_1,&temp_v2);
  return temp_v3 - temp_v2;
}

} /* extern "C" */
