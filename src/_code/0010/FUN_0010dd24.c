/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dd24` (_code @ 0x10dd24, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_001197c4(); /* 0x1197c4 */
extern unsigned int DAT_0044e90c; /* 0x44e90c */
extern unsigned char DAT_004e315c; /* 0x4e315c */
extern unsigned char DAT_004e3169; /* 0x4e3169 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
extern int FUN_002bd630(void);
/* Supplied declaration required: FUN_002c3b00. */


void FUN_0010dd24(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c3b00(&DAT_004e315c);
  temp_v0 = FUN_002bd630();
  *(unsigned int *)(temp_v0 + 0x1ec) = 0;
  coproc_moveto_Data_Memory_Barrier(0);
  *(romwright_code **)(temp_v0 + 0x1e8) = FUN_001197c4;
  DAT_0044e90c = 0x14;
  DAT_004e3169 = 1;
  return;
}
