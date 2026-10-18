/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146314` (_code @ 0x146314, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0056fcb8; /* 0x56fcb8 */
extern int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00145e24. */
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_00156974. */
/* Supplied declaration required: FUN_00157e98. */
/* Supplied declaration required: FUN_00158124. */


unsigned int FUN_00146314(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  temp_v0 = DAT_0056fcc0;
  temp_v2 = DAT_0056fcc0;
  FUN_00158124();
  if (temp_v2 != 0) {
    if ((DAT_0056fcb8 != 0) &&
       (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
      temp_v2 = DAT_0056fcb8 + 0x10;
    }
    else {
      temp_v2 = *(int *)(temp_v0 + 0xc);
    }
    FUN_00157e98(*(unsigned int *)(temp_v0 + 0x10),temp_v2);
  }
  temp_v1 = FUN_00152f54();
  FUN_00145e24(DAT_0059dbb4,temp_v1);
  puVar5 = *(unsigned int **)(DAT_0056fcc0 + 0x1c);
  for (puVar4 = *(unsigned int **)(DAT_0056fcc0 + 0x18); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_00156974(*puVar4);
  }
  return 0;
}
