/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107934` (_code @ 0x107934, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004650a0; /* 0x4650a0 */
extern int DAT_004650a4; /* 0x4650a4 */
extern unsigned int DAT_004e3c28; /* 0x4e3c28 */
extern unsigned char DAT_004e3c58; /* 0x4e3c58 */

/* Supplied declaration required: FUN_0011c6cc. */


void FUN_00107934(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_004650a0;
  FUN_0011c6cc(DAT_004650a0,&DAT_004e3c28);
  if (temp_v0 != 0) {
    DAT_004650a4 = 1;
  }
  piVar2 = (int *)&DAT_004e3c58;
  piVar3 = (int *)0x409ab0;
  if (temp_v0 == 0) {
    DAT_004650a4 = 0;
  }
  temp_v0 = DAT_004650a4;
  temp_v1 = 0x1f;
  puVar4 = (unsigned int *)0x409ab4;
  do {
    if (*piVar3 != 0) {
      temp_v2 = 0;
      if ((temp_v2 & *puVar4) == 0) {
        *piVar2 = 0;
      }
      else {
        *piVar2 = *piVar2 + 1;
      }
    }
    else {
      temp_v2 = DAT_004e3c28;
      if (0 < temp_v0) {
        if ((temp_v2 & *puVar4) == 0) {
          *piVar2 = 0;
        }
        else {
          *piVar2 = *piVar2 + 1;
        }
      }
    }
    temp_v1 = temp_v1 - 1;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 2;
    puVar4 = puVar4 + 2;
    if (temp_v1 == 0) {
      return;
    }
  } while( 1 );
}
