/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350ff8` (_code @ 0x350ff8, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5c50(long long *, int, unsigned int, int, int);
int software_interrupt(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002b5c50. */


unsigned long long FUN_00350ff8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  long long temp_v6;
  unsigned long long temp_v7;
  long long temp_v8;
  long long temp_v9;
  
  if (*(int *)(param_1 + 0xc) != 3) {
    return 0xffffffffffffffff;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x140);
  temp_v0 = *(unsigned int *)(param_1 + 0x144) | temp_v1;
  if (temp_v0 == 0) {
    if (*(int *)(param_1 + 0x46c) >= 0) {
      temp_v4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x470) < 0) {
        return 0xffffffffffffffff;
      }
      temp_v4 = 1;
    }
    temp_v0 = *(unsigned int *)(param_1 + 0x134);
    temp_v1 = *(unsigned int *)(param_1 + 0x130);
    if (temp_v1 == 0 && temp_v0 == 0) {
      temp_v5 = 0;
      temp_v3 = temp_v5;
    }
    else {
      temp_v3 = param_1 + temp_v4 * 0x80 + (*(int *)(param_1 + temp_v4 * 4 + 0x47c) % 0x10) * 8;
      temp_v2 = *(unsigned int *)(temp_v3 + 0x30);
      temp_v5 = temp_v2 - temp_v1;
      temp_v3 = *(int *)(temp_v3 + 0x34) - (temp_v0 + (temp_v2 < temp_v1));
    }
    software_interrupt(0x28);
    temp_v9 = (unsigned long long)temp_v0 * 3 +
               (((unsigned long long)
                 (unsigned int)(((int)temp_v1 >> 0x1f) * -0x452cb512 +
                       (int)((unsigned long long)temp_v1 * 0xbad34aee >> 0x20)) << 0x20) |
               (((unsigned long long)temp_v1 * 0xbad34aee) & 0xffffffff)) +
               romwright_piece_4_4(temp_v1 * 3,(int)((unsigned long long)temp_v0 * 0xbad34aee >> 0x20));
    temp_v6 = FUN_002b5c50(&temp_v9,(int)((unsigned long long)temp_v9 >> 0x20),0xe353f7cf,0x20c49ba5,7);
    temp_v6 = temp_v6 + romwright_piece_4_4(temp_v3,temp_v5);
    *(long long *)(param_1 + 0x140) = temp_v6;
    temp_v4 = param_1 + temp_v4 * 0x80 + (*(int *)(param_1 + temp_v4 * 4 + 0x47c) % 0x10) * 8;
    temp_v0 = *(unsigned int *)(temp_v4 + 0x30);
    temp_v1 = (unsigned int)temp_v6 - temp_v0;
    temp_v0 = (int)((unsigned long long)temp_v6 >> 0x20) - (*(int *)(temp_v4 + 0x34) + (unsigned int)((unsigned int)temp_v6 < temp_v0))
    ;
    *(unsigned int *)(param_1 + 0x13c) = temp_v0;
    *(unsigned int *)(param_1 + 0x138) = temp_v1;
  }
  software_interrupt(0x28);
  temp_v8 = (unsigned long long)temp_v0 * 3 +
             (((unsigned long long)
               (unsigned int)(((int)temp_v1 >> 0x1f) * -0x452cb512 +
                     (int)((unsigned long long)temp_v1 * 0xbad34aee >> 0x20)) << 0x20) |
             (((unsigned long long)temp_v1 * 0xbad34aee) & 0xffffffff)) +
             romwright_piece_4_4(temp_v1 * 3,(int)((unsigned long long)temp_v0 * 0xbad34aee >> 0x20));
  temp_v7 = FUN_002b5c50(&temp_v8,(int)((unsigned long long)temp_v8 >> 0x20),0xe353f7cf,0x20c49ba5,7);
  return romwright_piece_4_4((int)((unsigned long long)temp_v7 >> 0x20) -
                  (*(int *)(param_1 + 0x144) + (unsigned int)((unsigned int)temp_v7 < *(unsigned int *)(param_1 + 0x140))),
                  (unsigned int)temp_v7 - *(unsigned int *)(param_1 + 0x140));
}

} /* extern "C" */
