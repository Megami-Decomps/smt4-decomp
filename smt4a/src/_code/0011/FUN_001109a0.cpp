/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001109a0` (_code @ 0x1109a0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e789a(unsigned int);
int FUN_002f3dc4(unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e789a. */
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002f3dc4. */


unsigned long long FUN_001109a0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v1;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v1 = param_4;
  FUN_002e789a(param_2);
  temp_v1 = 0x10001;
  temp_v0 = _ZN12OnlineResultC1ERKj((unsigned int *)&uStack_18,(unsigned int *)&temp_v1);
  FUN_002f3dc4(param_2,temp_v0);
  return romwright_piece_4_4(uStack_14,uStack_18);
}

} /* extern "C" */
