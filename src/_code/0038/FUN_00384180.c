/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00384180` (_code @ 0x384180, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00240e8c(unsigned int *);
extern unsigned int FUN_002bcfcc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002c0b1c. */
/* Supplied declaration required: FUN_002c1d3c. */


void FUN_00384180(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  if ((*param_1 & 0x20) == 0) {
    return;
  }
  FUN_002c1d3c(DAT_0044ea00,0);
  FUN_002c0b1c(0x80,0x80,0x80);
  temp_v2 = param_1[0x197];
  if ((int)param_1[0x198] < (int)param_1[0x197]) {
    temp_v2 = param_1[0x198];
  }
  if (temp_v2 == 0) {
    FUN_002be77c(2,0xffffffff,0x405980);
    return;
  }
  temp_v1 = 0;
  if (temp_v1 < (int)temp_v2) {
    do {
      temp_v0 = FUN_002bcfcc((short)param_1[temp_v1 + 0x1b3],0);
      VectorSignedToFloat(temp_v1 * 0xe + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,0xffffffff,temp_v0);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)temp_v2);
  }
  temp_v1 = FUN_00240e8c(param_1 + 0x196);
  VectorSignedToFloat(temp_v1 * 0xe + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(2,0xffffffff,0x4059b8);
  return;
}
