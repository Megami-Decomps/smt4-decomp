/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226fc0` (_code @ 0x226fc0, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00226fc0_arg0 fn_00226fc0_arg0;
struct fn_00226fc0_arg0 {
    unsigned char pad_0x0[0x3028];
    undefined4 field_0x3028; /* +0x3028 */
    unsigned char pad_0x302c[0x14];
    undefined1 field_0x3040; /* +0x3040 */
    byte field_0x3041; /* +0x3041 */
    short field_0x3042; /* +0x3042 */
    ushort field_0x3044; /* +0x3044 */
    unsigned char pad_0x3046[0x2];
    void *field_0x3048; /* +0x3048 */
    undefined4 field_0x304c; /* +0x304c */
    void *field_0x3050; /* +0x3050 */
    void *field_0x3054; /* +0x3054 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00226a90. */
/* Supplied declaration required: FUN_00226bc0. */
/* Supplied declaration required: FUN_00226de8. */
/* Supplied declaration required: FUN_0034c86c. */
extern int FUN_0034c9a0(unsigned int);
/* Supplied declaration required: FUN_003ddb50. */


void FUN_00226fc0(fn_00226fc0_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = FUN_0034c9a0(param_1->field_0x304c);
  if (temp_v0 == 0) {
    FUN_00226bc0(param_1->field_0x304c);
    if ((int)*(short *)param_1->field_0x3050 == (int)in_s0) {
      pvVar2 = param_1->field_0x3054;
      VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)pvVar2 + 0xb),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)pvVar2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)pvVar2 + 9),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_003ddb50(0,0,(int)*(short *)((int)param_1->field_0x3050 + 2),
                   (unsigned int)*(unsigned char *)((int)pvVar2 + 10));
    }
    FUN_00226a90(param_1,(int)(short)(int)in_s0,1);
  }
  temp_v0 = FUN_0034c9a0(param_1->field_0x304c);
  if (temp_v0 != 0) {
    FUN_0034c86c(param_1->field_0x304c);
    param_1->field_0x3040 = 10;
    FUN_00226de8(param_1);
    return;
  }
  return;
}
