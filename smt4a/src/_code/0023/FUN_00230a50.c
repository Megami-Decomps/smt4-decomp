/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230a50` (_code @ 0x230a50, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588fd4; /* 0x588fd4 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_001879d0. */


void FUN_00230a50(int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float in_s0;
  
  temp_v2 = DAT_00588fd4 + param_3 * 0x8c;
  temp_v0 = FUN_001654d8(temp_v2 + 0x44);
  FUN_001879d0(DAT_0059dbb4);
  *param_1 = (int)in_s0 + temp_v0;
  temp_v1 = FUN_001654e4(temp_v2 + 0x44);
  *param_2 = temp_v1;
  return;
}
