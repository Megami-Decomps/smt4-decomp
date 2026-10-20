/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f4fc` (_code @ 0x31f4fc, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int FUN_0014384c(int);
int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_002e6dd4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_00588fd8; /* 0x588fd8 */
extern int DAT_00588fdc; /* 0x588fdc */
extern int DAT_00588fe0; /* 0x588fe0 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_002e6dd4. */


void FUN_0031f4fc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00588fd8 < '\x01') {
    FUN_0014384c(0xf);
    asdTMTexTableLoadTmx(0x19,0);
    if (DAT_00588fdc == 0) {
      temp_v0 = 0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x277,1);
      DAT_00588fdc = temp_v0;
      FUN_002e6dd4();
    }
    if (DAT_00588fe0 == 0) {
      temp_v0 = 0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x9a,1);
      DAT_00588fe0 = temp_v0;
      FUN_002e6dd4();
    }
  }
  DAT_00588fd8 = DAT_00588fd8 + '\x01';
  return;
}

} /* extern "C" */
