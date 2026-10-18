/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8894` (_code @ 0x2c8894, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f294; /* 0x57f294 */

/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00280070. */


void FUN_002c8894(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int *piVar3;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = DAT_0057f294;
  if (DAT_0057f294 != 0) {
    pfVar2 = *(float **)(DAT_0057f294 + 0x50c);
    piVar3 = (int *)(DAT_0057f294 + 0x50c);
    temp_v2 = *pfVar2;
    temp_v3 = pfVar2[1];
    temp_v4 = pfVar2[2];
    temp_v1 = *(float *)(*(int *)(DAT_0057f294 + 0x50c) + 0x3c);
    FUN_001bc124();
    temp_v2 = temp_v2 - temp_v1;
    temp_v1 = *(float *)(*piVar3 + 0x38);
    FUN_001bc124();
    temp_v3 = temp_v1 + temp_v3;
    temp_v1 = *(float *)(*piVar3 + 0x3c);
    FUN_001bbf0c();
    temp_v4 = temp_v4 - temp_v1;
    FUN_0014f0dc(temp_v0,*piVar3,&temp_v2,*piVar3 + 0x18);
    FUN_00280070(temp_v0,0);
  }
  return;
}
