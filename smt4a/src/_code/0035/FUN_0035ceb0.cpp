/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ceb0` (_code @ 0x35ceb0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, int);
int FUN_002b945c(int);
int FUN_00324bc8(int, int, int);
int FUN_00376fb8(int);

extern unsigned char DAT_005f1623; /* 0x5f1623 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned char DAT_005f1c91; /* 0x5f1c91 */

/* Supplied declaration required: FUN_00137ee0. */
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_002b945c. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00376fb8. */


unsigned int FUN_0035ceb0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_00376fb8(temp_v0 + 100);
  FUN_00324bc8(0x18,1,0);
  FUN_002b945c(temp_v0);
  DAT_005f1623 = 1;
  DAT_005f1b70 = 0;
  DAT_005f1c91 = 1;
  FUN_00137ee0(6,0);
  return 1;
}

} /* extern "C" */
