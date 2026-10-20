/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d710c` (_code @ 0x3d710c, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d5f60(...);
int VectorSignedToFloat(...);

typedef struct fn_003d710c_arg0 fn_003d710c_arg0;
struct fn_003d710c_arg0 {
    unsigned char pad_0x0[0x5f0];
    undefined4 field_0x5f0; /* +0x5f0 */
    undefined4 field_0x5f4; /* +0x5f4 */
    undefined4 field_0x5f8; /* +0x5f8 */
    unsigned char pad_0x5fc[0x38];
    uint field_0x634; /* +0x634 */
    unsigned char pad_0x638[0x94];
    undefined4 field_0x6cc; /* +0x6cc */
    undefined4 field_0x6d0; /* +0x6d0 */
    undefined4 field_0x6d4; /* +0x6d4 */
    unsigned char pad_0x6d8[0xc];
    undefined4 field_0x6e4; /* +0x6e4 */
    undefined4 field_0x6e8; /* +0x6e8 */
    undefined4 field_0x6ec; /* +0x6ec */
    unsigned char pad_0x6f0[0x24];
    unsigned char field_0x714; /* +0x714 */
    unsigned char pad_0x715[0x3];
    undefined4 field_0x718; /* +0x718 */
    unsigned char field_0x71c; /* +0x71c */
    unsigned char pad_0x71d[0x7];
    unsigned char field_0x724; /* +0x724 */
    unsigned char pad_0x725[0x57];
    undefined4 field_0x77c; /* +0x77c */
    unsigned char pad_0x780[0x4];
    undefined4 field_0x784; /* +0x784 */
    undefined4 field_0x788; /* +0x788 */
    unsigned char pad_0x78c[0x4];
    float field_0x790; /* +0x790 */
};

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
} param_4_stack;

extern unsigned int DAT_00493530; /* 0x493530 */
extern unsigned int DAT_00493534; /* 0x493534 */
extern unsigned int DAT_00493538; /* 0x493538 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_003d5f60. */


void FUN_003d710c(fn_003d710c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  unsigned char temp_v3 [16];
  fn_003d710c_arg0 *pfStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  *(unsigned int *)&param_1->field_0x71c = param_3;
  *(unsigned int *)&param_1->field_0x724 = param_4;
  *(unsigned int *)&param_1->field_0x714 = param_2;
  param_1->field_0x718 = 0;
  param_1->field_0x634 = param_1->field_0x634 | 0x10000;
  param_1->field_0x5f0 = param_1->field_0x6cc;
  param_1->field_0x5f4 = param_1->field_0x6d0;
  param_1->field_0x5f8 = param_1->field_0x6d4;
  DAT_00493530 = param_1->field_0x6e4;
  DAT_00493534 = param_1->field_0x6e8;
  DAT_00493538 = param_1->field_0x6ec;
  temp_v0 = param_1->field_0x788;
  temp_v1 = 0;
  temp_v2 = (float)VectorSignedToFloat(*(unsigned int *)&param_1->field_0x724,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = param_1->field_0x790 + temp_v2;
  pfStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_003d5f60(param_1,temp_v3,&temp_v0);
  return;
}

} /* extern "C" */
