/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eff18` (_code @ 0x3eff18, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00334e04; /* 0x334e04 */
extern unsigned int DAT_0044eb30; /* 0x44eb30 */
extern unsigned int DAT_0044eb34; /* 0x44eb34 */
extern unsigned char DAT_004d91c0; /* 0x4d91c0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002c2218(unsigned char *);


unsigned long long FUN_003eff18(unsigned int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  
  *(unsigned int *)(param_3 + 0xa8) = param_1;
  *(unsigned int *)(param_3 + 0xac) = param_2;
  DAT_0044eb30 = 0;
  DAT_0044eb34 = 0;
  temp_v0 = FUN_002c2218(&DAT_004d91c0);
  return romwright_piece_4_4(&LAB_00334e04,temp_v0 - 0x4a0);
}
