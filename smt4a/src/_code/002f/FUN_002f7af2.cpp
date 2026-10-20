/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7af2` (_code @ 0x2f7af2, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, unsigned char [20], int, unsigned int);
int FUN_002ea668(unsigned char [88]);
int FUN_002ec68a(unsigned int, int *, int *, int, unsigned char [88]);

typedef struct fn_002f7af2_arg1 fn_002f7af2_arg1;
struct fn_002f7af2_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ec68a. */


unsigned int FUN_002f7af2(unsigned int param_1,fn_002f7af2_arg1 *param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [88];
  unsigned char temp_v1 [20];
  int temp_v2;
  int temp_v3;
  
  FUN_002ea668(temp_v0);
  temp_v2 = param_2->field_0xc + param_2->field_0x18;
  temp_v3 = param_2->field_0x10;
  FUN_002ec68a(param_1,&temp_v2,&temp_v3,1,temp_v0);
  FUN_002e74c4(param_3,temp_v1,0x10,0xffffffff);
  return 1;
}

} /* extern "C" */
