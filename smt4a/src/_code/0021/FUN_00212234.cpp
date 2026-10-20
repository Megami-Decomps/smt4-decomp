/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00212234` (_code @ 0x212234, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00181ae0(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005b3bc8; /* 0x5b3bc8 */
extern unsigned int DAT_005b3bd0; /* 0x5b3bd0 */

/* Supplied declaration required: FUN_00181ae0. */
extern unsigned int wstrlen(void);


void FUN_00212234(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = wstrlen();
  FUN_00181ae0(DAT_005b3bd0,DAT_005b3bc8,param_1,temp_v0);
  return;
}

} /* extern "C" */
