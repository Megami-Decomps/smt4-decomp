/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350c60` (_code @ 0x350c60, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00243c24(unsigned int);
int FUN_002b41e4(unsigned int, int, unsigned int, int);
int FUN_00350a8c(void);

extern unsigned char g_effectEditor; /* 0x59dbe0 */

/* Supplied declaration required: FUN_00243c24. */
/* Supplied declaration required: FUN_002b41e4. */
/* Supplied declaration required: FUN_00350a8c. */


unsigned int FUN_00350c60(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002b41e4((*(unsigned int *)((unsigned char *)&g_effectEditor + 0x1c)),*(int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),
                 *(unsigned short *)(param_1 + 8));
  }
  temp_v0 = (*(unsigned int *)((unsigned char *)&g_effectEditor + 0x1c));
  FUN_00243c24((*(unsigned int *)((unsigned char *)&g_effectEditor + 0x1c)));
  FUN_00350a8c();
  return temp_v0;
}

} /* extern "C" */
