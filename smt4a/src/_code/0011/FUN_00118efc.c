/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118efc` (_code @ 0x118efc, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001220c5; /* 0x1220c5 */
extern unsigned char LAB_0012cfc1; /* 0x12cfc1 */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00304d10. */
/* Supplied declaration required: FUN_00305314. */
/* Supplied declaration required: FUN_0030538c. */


void FUN_00118efc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  puVar3 = (unsigned int *)&uStack_20;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00305314(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    FUN_002f5020(puVar3,&LAB_0012cfc1,0xc,1);
    FUN_00305314(param_1,puVar3);
    if (*(char *)(param_1 + 4) != '\0') {
      FUN_002e5700(puVar3,&LAB_001220c5,0xc,1);
      return;
    }
    FUN_002e5700(puVar3,&LAB_001220c5,0xc,1);
  }
  puVar2 = (unsigned int *)FUN_00304d10(param_2,1);
  if (puVar2 != (unsigned int *)0x0) {
    puVar3 = puVar2;
  }
  FUN_0030538c(param_1,puVar3);
  return;
}
