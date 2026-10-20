/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f8a0` (_code @ 0x35f8a0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f58c; /* 0x57f58c */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int scrGetCommandFrame(void);


void FUN_0035f8a0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  
  temp_v2 = btlGetMainState();
  temp_v3 = *(unsigned int *)(temp_v2 + 0x226c);
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetCommandFrame();
  if (DAT_0057f58c != 0) {
    *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
  }
  FUN_0021bdac(temp_v3,temp_v0,temp_v1,5,0,0,unaff_r4);
  return;
}

} /* extern "C" */
