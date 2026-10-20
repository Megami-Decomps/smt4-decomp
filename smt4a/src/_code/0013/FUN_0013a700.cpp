/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a700` (_code @ 0x13a700, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00142b2c(int);
int FUN_00144564(void);
int FUN_00144a54(void);
int FUN_00145048(void);
int FUN_00151340(int);
int FUN_00154e34(int);
int FUN_00180008(int);
int FUN_002e6354(unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00588fb4; /* 0x588fb4 */
extern unsigned char DAT_0061955c; /* 0x61955c */

/* Supplied declaration required: FUN_00142b2c. */
/* Supplied declaration required: FUN_00144564. */
/* Supplied declaration required: FUN_00144a54. */
/* Supplied declaration required: FUN_00145048. */
/* Supplied declaration required: FUN_00151340. */
/* Supplied declaration required: FUN_00154e34. */
/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_0013a700(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    FUN_00142b2c(0);
    FUN_00151340(0x6000000);
    FUN_00142b2c(1);
    FUN_00151340(0x6000002);
    FUN_00142b2c(3);
    FUN_00151340(0x6000001);
    FUN_00144564();
    FUN_00144a54();
    FUN_00145048();
    FUN_00154e34((*(unsigned char *)((unsigned char *)&DAT_00588fb4 + 0x1)));
    FUN_002e6354(&DAT_0061955c,0x80);
    FUN_00180008(1);
    return;
  }
  return;
}

} /* extern "C" */
