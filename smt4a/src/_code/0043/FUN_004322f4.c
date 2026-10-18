/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004322f4` (_code @ 0x4322f4, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 8 byte(s) */
typedef struct {
    unsigned long long sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002ea20c. */
extern int FUN_002eab1c(unsigned int *, int);
extern unsigned int FUN_002ffa9c(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: aeabi_uidivmod. */


double FUN_004322f4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  double temp_v4;
  int uStack_18;
  unsigned int uStack_14;
  
  temp_v4 = (double)romwright_piece_4_4(param_2,param_1);
  if (*(int *)(param_1 + 0x40) != 0) {
    uStack_18 = param_3;
    uStack_14 = param_4;
    FUN_002ea20c(&uStack_18);
    temp_v0 = FUN_002eab1c((unsigned int *)&uStack_18,param_1 + 0x38);
    if (0 < temp_v0) {
      temp_v1 = FUN_002ffa9c(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c),1000,0);
      VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = (float)VectorUnsignedToFloat
                               (*(unsigned int *)(param_1 + 0x40),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (double)((temp_v3 / temp_v2) * 1000.0f);
      aeabi_uidivmod(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x40),
                     *(unsigned int *)(param_1 + 0x28));
    }
  }
  return temp_v4;
}
