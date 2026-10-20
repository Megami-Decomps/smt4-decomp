/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa15c` (_code @ 0x4fa15c, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00420dec(...);
int FUN_00420fc0(...);
int FUN_004f6254(...);
int FUN_004fa228(...);
int FUN_004fbdd4(...);
int VectorUnsignedToFloat(...);

typedef struct fn_004fa15c_arg0 fn_004fa15c_arg0;
struct fn_004fa15c_arg0 {
    unsigned char pad_0x0[0x339c];
    undefined4 field_0x339c; /* +0x339c */
    unsigned char pad_0x33a0[0x14];
    undefined1 field_0x33b4; /* +0x33b4 */
    byte field_0x33b5; /* +0x33b5 */
    short field_0x33b6; /* +0x33b6 */
    ushort field_0x33b8; /* +0x33b8 */
    unsigned char pad_0x33ba[0x2];
    void *field_0x33bc; /* +0x33bc */
    undefined4 field_0x33c0; /* +0x33c0 */
    void *field_0x33c4; /* +0x33c4 */
    void *field_0x33c8; /* +0x33c8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00420dec. */
/* Supplied declaration required: FUN_00420fc0. */
extern int FUN_004212b8(unsigned int);
/* Supplied declaration required: FUN_004f6254. */
/* Supplied declaration required: FUN_004fa228. */
/* Supplied declaration required: FUN_004fbdd4. */


void FUN_004fa15c(fn_004fa15c_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = FUN_004212b8(param_1->field_0x33c0);
  if (temp_v0 == 0) {
    FUN_00420dec(param_1->field_0x33c0);
    if ((int)*(short *)param_1->field_0x33c4 == (int)in_s0) {
      pvVar2 = param_1->field_0x33c8;
      VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)pvVar2 + 0xb),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)pvVar2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)pvVar2 + 9),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_004fbdd4(0,0,(int)*(short *)((int)param_1->field_0x33c4 + 2),
                   (unsigned int)*(unsigned char *)((int)pvVar2 + 10));
    }
    FUN_004f6254(param_1,(int)(short)(int)in_s0,1);
  }
  temp_v0 = FUN_004212b8(param_1->field_0x33c0);
  if (temp_v0 != 0) {
    FUN_00420fc0(param_1->field_0x33c0);
    param_1->field_0x33b4 = 10;
    FUN_004fa228(param_1);
    return;
  }
  return;
}

} /* extern "C" */
