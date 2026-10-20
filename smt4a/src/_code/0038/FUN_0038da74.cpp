/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038da74` (_code @ 0x38da74, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int FUN_003f0e20(unsigned int *, unsigned int);
int btlSlotSetStoreValue(unsigned int, int, int);

extern unsigned int DAT_00571118; /* 0x571118 */
extern unsigned int DAT_0057111c; /* 0x57111c */
extern unsigned int DAT_00571120; /* 0x571120 */
extern unsigned int DAT_00571124; /* 0x571124 */

extern unsigned int *btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: btlSlotSetStoreValue. */


unsigned int FUN_0038da74(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  puVar3 = (unsigned int *)btlGetMainState();
  FUN_003f0e20(puVar3,temp_v0);
  temp_v2 = DAT_00571118;
  if (puVar3 != (unsigned int *)0x0) {
    if (temp_v1 != 1) {
      if (temp_v1 == 2) {
        temp_v2 = DAT_00571120 | *puVar3;
        puVar3[1] = DAT_00571124 | puVar3[1];
        *puVar3 = temp_v2;
        btlSlotSetStoreValue(temp_v0,0x1a,2);
      }
    }
    else {
      puVar3[1] = DAT_0057111c | puVar3[1];
      *puVar3 = *puVar3 | temp_v2;
      btlSlotSetStoreValue(temp_v0,0x1a,1);
    }
  }
  return 1;
}

} /* extern "C" */
