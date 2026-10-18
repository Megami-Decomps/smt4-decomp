/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe400` (_code @ 0x2fe400, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_002fe450; /* 0x2fe450 */
extern unsigned char DAT_00538914; /* 0x538914 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9520. */
extern int FUN_0030f0ac(int *, unsigned int *);
/* Supplied declaration required: FUN_0030f0bc. */


unsigned long long FUN_002fe400(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int uStack_20;
  int iStack_1c;
  int temp_v2;
  int temp_v3;
  
  uStack_20 = param_1;
  iStack_1c = param_2;
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002e9300(&uStack_20,&DAT_00538914);
  temp_v1 = param_2 + 0x28;
  FUN_0030f0bc(temp_v1,temp_v0);
  temp_v2 = temp_v1;
  FUN_002e9318(&uStack_20);
  temp_v3 = *(unsigned int *)(param_2 + 0x38);
  temp_v1 = FUN_0030f0ac(&temp_v2,(unsigned int *)&temp_v3);
  if (temp_v1 != 0) {
    FUN_002e9520(param_1,temp_v2 + 0x18);
    return romwright_piece_4_4(iStack_1c,uStack_20);
  }
  FUN_002e9300(param_1,&LAB_002fe450);
  return romwright_piece_4_4(iStack_1c,uStack_20);
}
