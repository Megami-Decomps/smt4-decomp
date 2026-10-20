/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035196c` (_code @ 0x35196c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c526c(void);
int FUN_003603f8(unsigned int *, unsigned char *);
int FUN_00360570(int *);
int FUN_003605cc(int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004091b0; /* 0x4091b0 */
extern int DAT_0044e9e8; /* 0x44e9e8 */
extern unsigned int DAT_00471bac; /* 0x471bac */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_003603f8. */
/* Supplied declaration required: FUN_00360570. */
/* Supplied declaration required: FUN_003605cc. */


void FUN_0035196c(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_003603f8(&DAT_00471bac,&DAT_004091b0);
  FUN_003605cc(1);
  FUN_00360570(&DAT_0044e9e8);
  software_interrupt(0x19);
  if (DAT_0044e9e8 < 0) {
    FUN_002c526c();
    return;
  }
  return;
}

} /* extern "C" */
