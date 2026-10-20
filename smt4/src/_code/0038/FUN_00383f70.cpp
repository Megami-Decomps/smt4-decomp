/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00383f70` (_code @ 0x383f70, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(...);
int FUN_002c0944(int, int, int);
int FUN_002c1b64(unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00240d5c(unsigned int *);
extern unsigned int FUN_002bcddc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: FUN_002c1b64. */


void FUN_00383f70(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  if ((*param_1 & 0x20) == 0) {
    return;
  }
  FUN_002c1b64(g_titleScene,0);
  FUN_002c0944(0x80,0x80,0x80);
  temp_v2 = param_1[0x197];
  if ((int)param_1[0x198] < (int)param_1[0x197]) {
    temp_v2 = param_1[0x198];
  }
  if (temp_v2 == 0) {
    FUN_002be5a4(2,0xffffffff,0x405890);
    return;
  }
  temp_v1 = 0;
  if (temp_v1 < (int)temp_v2) {
    do {
      temp_v0 = FUN_002bcddc((short)param_1[temp_v1 + 0x1b3],0);
      VectorSignedToFloat(temp_v1 * 0xe + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,0xffffffff,temp_v0);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)temp_v2);
  }
  temp_v1 = FUN_00240d5c(param_1 + 0x196);
  VectorSignedToFloat(temp_v1 * 0xe + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,0xffffffff,0x4058c8);
  return;
}

} /* extern "C" */
