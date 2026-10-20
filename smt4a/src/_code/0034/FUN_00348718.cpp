/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348718` (_code @ 0x348718, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bustupCutAnimSetJobParam(void);
int FUN_00318544(unsigned int, int, int, int, int);
int scrSetResult(unsigned int);
int FUN_0037b280(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: bustupCutAnimSetJobParam. */
/* Supplied declaration required: FUN_00318544. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0037b280. */


unsigned int FUN_00348718(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg(0);
  FUN_0037b280();
  bustupCutAnimSetJobParam();
  FUN_00318544(temp_v0,0,0,0,0);
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
