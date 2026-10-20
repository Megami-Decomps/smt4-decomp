/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038892c` (_code @ 0x38892c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, int, unsigned int, int, int, unsigned int);
int FUN_002c76c0(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: FUN_002c76c0. */
extern unsigned int FUN_002deb84(void);


void FUN_0038892c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c76c0(0);
  temp_v0 = FUN_002deb84();
  FUN_0021bdac(param_1,0,temp_v0,0x10,0,param_2);
  return;
}

} /* extern "C" */
