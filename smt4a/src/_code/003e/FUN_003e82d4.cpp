/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e82d4` (_code @ 0x3e82d4, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e892c(int);

extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573a70; /* 0x573a70 */
extern unsigned int DAT_00573a74; /* 0x573a74 */
extern unsigned int DAT_00573b10; /* 0x573b10 */
extern unsigned int DAT_00573b14; /* 0x573b14 */

/* Supplied declaration required: FUN_003e892c. */


int FUN_003e82d4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  
  puVar3 = (unsigned int *)(param_1 + 0x45a0);
  if (((*(unsigned int *)(param_1 + 0x45a8) & DAT_00573b10) == 0 &&
       (DAT_00573b14 & *(unsigned int *)(param_1 + 0x45ac)) == 0) &&
     ((*puVar3 & DAT_00573a70) == 0 && (DAT_00573a74 & *(unsigned int *)(param_1 + 0x45a4)) == 0)) {
    FUN_003e892c(param_1);
    temp_v0 = DAT_00573a70;
    *(unsigned int *)(param_1 + 0x45a4) = *(unsigned int *)(param_1 + 0x45a4) | DAT_00573a74;
    *puVar3 = *puVar3 | temp_v0;
  }
  temp_v1 = (int)*(short *)(param_1 + 0x2004);
  if (((DAT_005739f4 & *(unsigned int *)(param_1 + 0x45a4)) == 0 && (*puVar3 & DAT_005739f0) == 0) &&
     ((*puVar3 & DAT_00573a28) == 0 && (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) == 0)) {
    temp_v0 = param_1 + 0x4c00;
    temp_v2 = *(short *)(param_1 + 0x4c74) == 0;
    if (temp_v2) {
      temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x4c76);
    }
    if (temp_v2 && temp_v0 == 0) {
      temp_v1 = -1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
