/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e588` (_code @ 0x30e588, 0xca bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: while (COPY). */


unsigned long long FUN_0030e588(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v3 = 0;
  temp_v4 = 7;
  temp_v0 = *(unsigned short *)(param_2 + 2);
  temp_v7 = 0xffffffff;
  temp_v6 = 4;
  if (temp_v0 == 0) {
    temp_v4 = 0x8a;
    temp_v6 = 3;
  }
  temp_v5 = 0;
  *(unsigned short *)(param_3 * 4 + param_2 + 6) = 0xffff;
  temp_v2 = (unsigned int)temp_v0;
  do {
    if (param_3 < temp_v5) {
      return romwright_piece_4_4(param_1,temp_v7);
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v5 * 4 + param_2 + 6);
    temp_v3 = temp_v3 + 1;
    if ((temp_v4 <= temp_v3) || (temp_v2 != temp_v1)) {
      if (temp_v3 < temp_v6) {
        temp_v6 = temp_v2 * 4 + param_1;
        *(short *)(temp_v6 + 0xa7c) = *(short *)(temp_v6 + 0xa7c) + (short)temp_v3;
      }
      else if (temp_v2 != 0) {
        if (temp_v2 != temp_v7) {
          temp_v6 = temp_v2 * 4 + param_1;
          *(short *)(temp_v6 + 0xa7c) = *(short *)(temp_v6 + 0xa7c) + 1;
        }
        *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
      }
      else if (temp_v3 < 0xb) {
        *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
      }
      else {
        *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
      }
      temp_v3 = 0;
      temp_v7 = temp_v2;
      if (temp_v1 != 0) {
        if (temp_v2 != temp_v1) {
          temp_v4 = 7;
          temp_v6 = 4;
          temp_v5 = temp_v5 + 1;
          temp_v2 = temp_v1;
          continue;
        }
        temp_v4 = 6;
      }
      else {
        temp_v4 = 0x8a;
      }
      temp_v6 = 3;
    }
    temp_v5 = temp_v5 + 1;
    temp_v2 = temp_v1;
  } while( 1 );
}
