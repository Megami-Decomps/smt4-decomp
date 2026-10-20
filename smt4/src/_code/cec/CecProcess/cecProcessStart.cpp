/* NON_MATCHING: romwright 0.5.0 decompilation of `cecProcessStart` (_code @ 0x1a07e4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);
int memClear(void);
int asdMemAlloc(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_cecProcess; /* 0x43de68 */

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
extern unsigned int FUN_003bbe6c(void);


void cecProcessStart(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0x100;
  asdMemAlloc(0x100,0x100,0,0x460,1);
  memClear();
  temp_v1 = 0x14;
  g_cecProcess = temp_v0;
  asdOperatorNew();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_003bbe6c();
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return;
}

} /* extern "C" */
