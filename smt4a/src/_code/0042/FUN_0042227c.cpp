/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042227c` (_code @ 0x42227c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(unsigned int, unsigned int);
int FUN_0025cab8(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0025cab8. */


void FUN_0042227c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  
  FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(param_1 + 0x10));
  VectorSignedToFloat(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  VectorSignedToFloat(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  FUN_0025cab8();
  return;
}

} /* extern "C" */
