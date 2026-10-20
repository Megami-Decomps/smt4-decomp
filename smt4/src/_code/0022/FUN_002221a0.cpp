/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002221a0` (_code @ 0x2221a0, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_002c425c(unsigned int, unsigned int *);
int FUN_002ebe68(unsigned int *, unsigned int *, int, unsigned int, int, int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *g_bustupCutAnim; /* 0x43dfc0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: scrGetArg. */
extern int jobIsValid(void);
/* Supplied declaration required: FUN_002c425c. */
/* Supplied declaration required: FUN_002ebe68. */


unsigned int FUN_002221a0(void)

{
/* irregular: irregular input(s): in_fpscr, in_r3; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int in_r3;
  unsigned int in_fpscr;
  
  scrGetArg(0);
  temp_v0 = scrGetArg(1);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar2 = g_bustupCutAnim + 0x1ce;
  FUN_002ebe68(puVar2,g_bustupCutAnim + 0x1cf,0x40400000,in_r3,0x3f000000,0x3f800000,0x40400000);
  temp_v1 = jobIsValid();
  if (temp_v1 != 0) {
    FUN_002c425c(*g_bustupCutAnim,puVar2);
  }
  return 1;
}

} /* extern "C" */
