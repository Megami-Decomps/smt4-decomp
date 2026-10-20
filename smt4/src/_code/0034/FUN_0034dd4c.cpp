/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034dd4c` (_code @ 0x34dd4c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7d30(void);
int FUN_002c1b64(unsigned int, unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7d30. */
/* Supplied declaration required: FUN_002c1b64. */


void FUN_0034dd4c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  
  FUN_002c1b64(g_titleScene,*(unsigned int *)(param_1 + 0x10));
  VectorSignedToFloat(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  VectorSignedToFloat(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  FUN_002b7d30();
  return;
}

} /* extern "C" */
