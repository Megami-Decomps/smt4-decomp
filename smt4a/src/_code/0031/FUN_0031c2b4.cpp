/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c2b4` (_code @ 0x31c2b4, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobSetParent(unsigned int, unsigned int *);
int scrGetArg(int);
int scrSetResult(unsigned int *);
int FUN_0036c580(unsigned int *, unsigned int *, int, unsigned int, int, int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *g_bustupCutAnim; /* 0x57f4c4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: jobSetParent. */
extern int jobIsValid(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0036c580. */


unsigned int FUN_0031c2b4(void)

{
/* irregular: irregular input(s): in_fpscr, in_r3; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int in_r3;
  unsigned int in_fpscr;
  
  scrGetArg(0);
  temp_v0 = scrGetArg(1);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar2 = g_bustupCutAnim + 0x1cf;
  FUN_0036c580(puVar2,g_bustupCutAnim + 0x1d0,0x40400000,in_r3,0x3f000000,0x3f800000,0x40400000);
  temp_v1 = jobIsValid();
  if (temp_v1 != 0) {
    jobSetParent(*g_bustupCutAnim,puVar2);
  }
  scrSetResult(puVar2);
  return 1;
}

} /* extern "C" */
