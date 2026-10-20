/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd540` (_code @ 0x2bd540, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a666c(unsigned int, unsigned int, unsigned int);
int FUN_002a66e0(unsigned int, unsigned int, int);
int FUN_002bf0d8(void);
int asdMemoryAlloc(int, int, int, unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002a666c. */
/* Supplied declaration required: FUN_002a66e0. */
extern unsigned int FUN_002bc11c(unsigned int);
/* Supplied declaration required: FUN_002bf0d8. */
extern int FUN_002c3984(void);
extern unsigned int FUN_002c3994(void);
/* Supplied declaration required: asdMemoryAlloc. */


void FUN_002bd540(int param_1)

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
  
  FUN_002bf0d8();
  temp_v3 = *(unsigned int *)(param_1 + 0x24);
  temp_v0 = FUN_002c3994();
  temp_v1 = FUN_002c3984();
  temp_v4 = temp_v3 <= temp_v0;
  if (temp_v0 <= temp_v3) {
    temp_v4 = temp_v1 + temp_v0 <= temp_v3;
  }
  if (((temp_v4) || ((temp_v3 & 0x7f) != 0)) ||
     ((temp_v3 & 0xfe000000) != ((*(int *)(param_1 + 0x28) + temp_v3) & 0xfe000000))) {
    return;
  }
  FUN_002a66e0(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20),param_1 + 0x34);
  temp_v6 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = VectorFloatToUnsigned(temp_v6 * in_s0,3);
  if ((*(int *)(param_1 + 0x1c) == 0x675a) || (*(int *)(param_1 + 0x1c) == 0x675b)) {
    temp_v1 = *(int *)(param_1 + 8);
    if (temp_v1 == 0x10000) {
      temp_v5 = FUN_002bc11c(*(unsigned int *)(param_1 + 0x24));
      *(unsigned int *)(param_1 + 0x30) = temp_v5;
      FUN_002bf0d8();
      return;
    }
    *(unsigned int *)(param_1 + 0x44) = 0;
    if (temp_v1 != 0x20000) {
      if (temp_v1 == 0x30000) {
        temp_v2 = 0x30000;
        asdMemoryAlloc(0x30000,0x100,0,temp_v5);
        *(unsigned int *)(param_1 + 0x44) = temp_v2;
      }
    }
    else {
      temp_v2 = 0x20000;
      asdMemoryAlloc(0x20000,0x100,0,temp_v5);
      *(unsigned int *)(param_1 + 0x44) = temp_v2;
    }
  }
  else {
    temp_v1 = *(int *)(param_1 + 8);
    if (temp_v1 == 0x10000) {
      temp_v5 = FUN_002bc11c(*(unsigned int *)(param_1 + 0x24));
      *(unsigned int *)(param_1 + 0x30) = temp_v5;
      FUN_002bf0d8();
      return;
    }
    *(unsigned int *)(param_1 + 0x44) = 0;
    if (temp_v1 != 0x20000) {
      if (temp_v1 == 0x30000) {
        temp_v2 = 0x30000;
        asdMemoryAlloc(0x30000,0x100,0,temp_v5);
        *(unsigned int *)(param_1 + 0x44) = temp_v2;
      }
    }
    else {
      temp_v2 = 0x20000;
      asdMemoryAlloc(0x20000,0x100,0,temp_v5);
      *(unsigned int *)(param_1 + 0x44) = temp_v2;
    }
  }
  FUN_002a666c(*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x44),temp_v5);
  temp_v5 = FUN_002bc11c(*(unsigned int *)(param_1 + 0x44));
  *(unsigned int *)(param_1 + 0x30) = temp_v5;
  FUN_002bf0d8();
  return;
}

} /* extern "C" */
