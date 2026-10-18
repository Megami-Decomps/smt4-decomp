/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a840` (_code @ 0x19a840, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_00168fbc. */
/* Supplied declaration required: FUN_0017cdb0. */
/* Supplied declaration required: FUN_0017cf74. */
extern int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);
extern unsigned int FUN_001bc2ec(unsigned int);


void FUN_0019a840(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v5;
  float temp_v6;
  
  FUN_0017cdb0();
  temp_v3 = *(unsigned int *)(param_1 + 0x24);
  temp_v0 = FUN_00188ca4();
  temp_v1 = FUN_00188c94();
  temp_v4 = temp_v3 <= temp_v0;
  if (temp_v0 <= temp_v3) {
    temp_v4 = temp_v1 + temp_v0 <= temp_v3;
  }
  if (((temp_v4) || ((temp_v3 & 0x7f) != 0)) ||
     ((temp_v3 & 0xfe000000) != ((*(int *)(param_1 + 0x28) + temp_v3) & 0xfe000000))) {
    return;
  }
  FUN_00168fbc(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20),param_1 + 0x34);
  temp_v6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = VectorFloatToUnsigned(temp_v6 * in_s0,3);
  if ((*(int *)(param_1 + 0x1c) == 0x675a) || (*(int *)(param_1 + 0x1c) == 0x675b)) {
    temp_v1 = *(int *)(param_1 + 8);
    if (temp_v1 == 0x10000) {
      temp_v5 = FUN_001bc2ec(*(unsigned int *)(param_1 + 0x24));
      *(unsigned int *)(param_1 + 0x30) = temp_v5;
      FUN_0017cdb0();
      return;
    }
    *(unsigned int *)(param_1 + 0x44) = 0;
    if (temp_v1 != 0x20000) {
      if (temp_v1 == 0x30000) {
        temp_v2 = 0x30000;
        FUN_001630d4(0x30000,0x100,0,temp_v5);
        *(unsigned int *)(param_1 + 0x44) = temp_v2;
      }
    }
    else {
      temp_v2 = 0x20000;
      FUN_001630d4(0x20000,0x100,0,temp_v5);
      *(unsigned int *)(param_1 + 0x44) = temp_v2;
    }
  }
  else {
    temp_v1 = *(int *)(param_1 + 8);
    if (temp_v1 == 0x10000) {
      temp_v5 = FUN_001bc2ec(*(unsigned int *)(param_1 + 0x24));
      *(unsigned int *)(param_1 + 0x30) = temp_v5;
      FUN_0017cdb0();
      return;
    }
    *(unsigned int *)(param_1 + 0x44) = 0;
    if (temp_v1 != 0x20000) {
      if (temp_v1 == 0x30000) {
        temp_v2 = 0x30000;
        FUN_001630d4(0x30000,0x100,0,temp_v5);
        *(unsigned int *)(param_1 + 0x44) = temp_v2;
      }
    }
    else {
      temp_v2 = 0x20000;
      FUN_001630d4(0x20000,0x100,0,temp_v5);
      *(unsigned int *)(param_1 + 0x44) = temp_v2;
    }
  }
  FUN_0017cf74(*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x44),temp_v5);
  temp_v5 = FUN_001bc2ec(*(unsigned int *)(param_1 + 0x44));
  *(unsigned int *)(param_1 + 0x30) = temp_v5;
  FUN_0017cdb0();
  return;
}
