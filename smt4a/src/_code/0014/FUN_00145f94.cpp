/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145f94` (_code @ 0x145f98, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00156994(unsigned int, int);
int FUN_00158038(unsigned int *);

extern int DAT_0056fcb8; /* 0x56fcb8 */

/* Supplied declaration required: FUN_00156994. */
/* Supplied declaration required: FUN_00158038. */


unsigned int FUN_00145f94(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *unaff_r4;
  unsigned int *puVar2;
  
  param_1 = (unsigned int *)*param_1;
  FUN_00158038(param_1);
  if ((param_1[0xd] & 2) == 0) {
    if ((DAT_0056fcb8 != 0) &&
       (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
      temp_v0 = DAT_0056fcb8 + 0x10;
    }
    else {
      temp_v0 = param_1[3];
    }
    if (param_1[4] != 0 && param_1[1] != 0) {
      puVar2 = param_1;
      if (temp_v0 != 0) {
        unaff_r4 = (unsigned int *)param_1[6];
        puVar2 = (unsigned int *)param_1[7];
      }
      if ((temp_v0 != 0 && unaff_r4 != puVar2) && (temp_v0 = param_1[3], temp_v0 != 0)) {
        do {
          FUN_00156994(*unaff_r4,temp_v0 + 0x38);
          unaff_r4 = unaff_r4 + 1;
        } while (unaff_r4 != puVar2);
      }
    }
  }
  return 0;
}

} /* extern "C" */
