/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5700` (_code @ 0x2c5700, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297050(int);
int FUN_002b8244(int);
int FUN_002c5434(void);
int FUN_002c55d4(int);
int FUN_002c5758(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0043e2a9; /* 0x43e2a9 */
extern unsigned int DAT_0043e2bc; /* 0x43e2bc */
extern signed char DAT_00465198; /* 0x465198 */

/* Supplied declaration required: FUN_00297050. */
/* Supplied declaration required: FUN_002b8244. */
/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: FUN_002c55d4. */
/* Supplied declaration required: FUN_002c5758. */


int FUN_002c5700(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_002b8244(0);
  FUN_00297050(1);
  FUN_002c5758(4);
  DAT_0043e2bc = DAT_0043e2bc & 0xfffffffb;
  DAT_0043e2a9 = DAT_0043e2bc == 0;
  temp_v0 = (int)DAT_00465198;
  DAT_00465198 = DAT_0043e2a9;
  if ((unsigned char)DAT_0043e2a9) {
    FUN_002c5434();
  }
  else {
    FUN_002c55d4(1);
  }
  return temp_v0;
}

} /* extern "C" */
