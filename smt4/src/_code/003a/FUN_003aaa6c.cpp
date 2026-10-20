/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aaa6c` (_code @ 0x3aaa6c, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231bb8(unsigned int, float *);
int FUN_00290994(int, int, int, int, int, int, int, int, int, int, int, int, int, int, unsigned int, int);

typedef struct fn_003aaa6c_arg0 fn_003aaa6c_arg0;
struct fn_003aaa6c_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x47];
    int field_0x50; /* +0x50 */
    short field_0x54; /* +0x54 */
    short field_0x56; /* +0x56 */
    short field_0x58; /* +0x58 */
};

/* stack frame of param_2: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_00231bb8. */
/* Supplied declaration required: FUN_00290994. */


void FUN_003aaa6c(fn_003aaa6c_arg0 *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  float temp_v0;
  float fStack_1c;
  
  if (param_1->field_0x50 != 0) {
    FUN_00231bb8(*(unsigned int *)&param_1[1].field_0x8,&temp_v0);
    FUN_00290994(param_1->field_0x50,(int)temp_v0,(int)fStack_1c,0x1d,0x56a,0x56b,0x56c,0x566,0x568
                 ,0x567,0x569,(int)param_1->field_0x58,(int)param_1->field_0x54,
                 (int)param_1->field_0x56,param_2,0);
  }
  return;
}

} /* extern "C" */
