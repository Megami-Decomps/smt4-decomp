/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMemoryAllocTracked` (_code @ 0x163060, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_0018003c(void);
int FUN_002e3140(void);
int rt_memclr(void);
int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned char DAT_005b4028; /* 0x5b4028 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: rt_memclr. */


int asdMemoryAllocTracked(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  FUN_0018003c();
  asdMemoryAlloc(param_1,param_2,param_3,param_4,param_5);
  if (param_1 != 0) {
    rt_memclr();
  }
  software_interrupt(0x14);
  if (*(*(int * *)((unsigned char *)&DAT_005b4028 + 0x4)) < 0) {
    FUN_002e3140();
  }
  return param_1;
}

} /* extern "C" */
