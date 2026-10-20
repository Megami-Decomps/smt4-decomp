/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMemAlloc` (_code @ 0x2c498c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3944(void);
int asdMemoryAlloc(int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_00465120; /* 0x465120 */

/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: asdMemoryAlloc. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int asdMemAlloc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  nn_os_CriticalSection_Enter((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
  asdMemoryAlloc(param_1,param_2,param_3,param_4,param_5);
  if (param_1 != 0) {
    FUN_002c3944();
  }
  nn_os_CriticalSection_Leave((*(unsigned int *)((unsigned char *)&DAT_00465120 + 0x4)));
  return param_1;
}

} /* extern "C" */
