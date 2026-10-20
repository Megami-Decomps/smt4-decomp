/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002947b8` (_code @ 0x2947b8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_00580ca0; /* 0x580ca0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_0036d578(unsigned long long *);


void FUN_002947b8(unsigned int *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned long long temp_v2;
  unsigned long long temp_v3;
  unsigned long long temp_v4;
  unsigned int uStack_28;
  
  temp_v1 = 0;
  temp_v2 = romwright_piece_4_4(in_s1,in_s0);
  temp_v3 = (unsigned long long)in_s2;
  do {
    temp_v0 = DAT_00580ca0 + temp_v1 * 0x3c;
    if (((*(char *)(temp_v0 + 0x90) != '\0') && (*(short *)(temp_v0 + 0xa6) == 0xd)) &&
       (temp_v0 = FUN_0036d578(&temp_v4), temp_v0 != 0)) {
      temp_v3 = (unsigned long long)uStack_28;
      temp_v2 = temp_v4;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x23);
  *param_1 = (int)temp_v2;
  param_1[1] = (int)((unsigned long long)temp_v2 >> 0x20);
  param_1[2] = (int)temp_v3;
  return;
}

} /* extern "C" */
