/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003026bc` (_code @ 0x3026bc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eeaf0(unsigned int, int *);
int FUN_002f6ed2(unsigned int, int *);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eeaf0. */
/* Supplied declaration required: FUN_002f6ed2. */


unsigned long long FUN_003026bc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = param_1;
  temp_v1 = param_2;
  temp_v2 = param_3;
  temp_v3 = param_4;
  FUN_002eeaf0(param_1,&temp_v2);
  temp_v1 = temp_v3;
  temp_v0 = temp_v2;
  FUN_002f6ed2(param_2,&temp_v0);
  return romwright_piece_4_4(temp_v1,temp_v0);
}

} /* extern "C" */
