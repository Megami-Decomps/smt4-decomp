/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019aee4` (_code @ 0x19aee4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0019aee4_arg1 fn_0019aee4_arg1;
struct fn_0019aee4_arg1 {
    unsigned char pad_0x0[0x4];
    char field_0x4; /* +0x4 */
    byte field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x1];
    byte field_0x7; /* +0x7 */
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
    ushort field_0xc; /* +0xc */
    ushort field_0xe; /* +0xe */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019e5e0. */
/* Supplied declaration required: FUN_0019ea00. */
/* Supplied declaration required: FUN_001b4120. */


void FUN_0019aee4(unsigned int param_1,fn_0019aee4_arg1 *param_2,unsigned int param_3,unsigned int param_4
                 ,unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int in_fpscr;
  unsigned long long uStack_20;
  
  VectorUnsignedToFloat((unsigned int)param_2->field_0x8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_2->field_0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_2->field_0xe,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_2->field_0xa,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_2->field_0x5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)param_2->field_0x4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)param_2->field_0x7,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0019ea00();
  FUN_0019e5e0(param_3,param_4,param_5,param_6);
  uStack_20 = 0x1024500000001;
  FUN_001b4120(&uStack_20,0x18);
                    /* WARNING: Treating indirect jump as return */
  return;
}
