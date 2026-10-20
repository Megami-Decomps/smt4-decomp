/* NON_MATCHING: romwright 0.5.0 decompilation of `memAlloc` (_code @ 0x167ab4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018003c(void);
int asdMemoryAllocImpl(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002e3140(void);
int rt_memclr(unsigned int, int);
int software_interrupt(int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern unsigned char DAT_005b4028; /* 0x5b4028 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: asdMemoryAllocImpl. */
extern unsigned int FUN_001844ac(void);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: rt_memclr. */


unsigned int
memAlloc(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
            unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0018003c();
  if (param_5 < 0x80) {
    param_5 = 0x80;
  }
  asdMemoryAllocImpl(param_1,param_2,param_3,(param_4 + param_5 * 2 + 0x3f) & -param_5,param_6);
  temp_v0 = FUN_001844ac();
  rt_memclr(temp_v0,param_4);
  software_interrupt(0x14);
  if (*(*(int * *)((unsigned char *)&DAT_005b4028 + 0x4)) < 0) {
    FUN_002e3140();
  }
  return temp_v0;
}

} /* extern "C" */
