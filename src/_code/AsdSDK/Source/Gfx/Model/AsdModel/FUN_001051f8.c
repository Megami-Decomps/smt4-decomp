/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001051f8` (_code @ 0x1051f8, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464b0c; /* 0x464b0c */
extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern unsigned char DAT_004dae3c; /* 0x4dae3c */
extern unsigned char DAT_004dae48; /* 0x4dae48 */

/* Supplied declaration required: FUN_0010797c. */
/* Supplied declaration required: FUN_00108c00. */
/* Supplied declaration required: FUN_0010bd34. */
/* Supplied declaration required: FUN_0010e5f0. */
/* Supplied declaration required: FUN_00131950. */
/* Supplied declaration required: FUN_002c2b34. */
/* Supplied declaration required: FUN_002c2b90. */


void FUN_001051f8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_002c2b90(&DAT_004dae3c);
  FUN_002c2b90(&DAT_004dae48);
  FUN_00108c00(param_1,param_2);
  FUN_0010797c();
  FUN_0010e5f0();
  FUN_0010bd34();
  temp_v0 = 0;
  do {
    FUN_002c2b34((&DAT_00464b7c)[temp_v0],(&DAT_00464b84)[temp_v0]);
    FUN_00131950((&DAT_00464b7c)[temp_v0]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  DAT_00464b0c = 0;
  return;
}
