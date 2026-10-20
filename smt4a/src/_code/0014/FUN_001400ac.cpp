/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001400ac` (_code @ 0x1400ac, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014a918(unsigned int *, int);
int FUN_002e3140(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int *DAT_005b402c; /* 0x5b402c */
extern unsigned int DAT_005b4044; /* 0x5b4044 */

/* Supplied declaration required: FUN_0014a918. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_001400ac(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&temp_v0;
  DAT_005b4044 = 0;
  DAT_005b402c = &DAT_005b4044;
  temp_v0 = 0;
  FUN_0014a918(puVar1,0);
  if (-1 < (int)puVar1) {
    puVar1 = (unsigned int *)0x0;
    DAT_005b4044 = temp_v0;
  }
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  return;
}

} /* extern "C" */
