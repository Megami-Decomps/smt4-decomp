/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c1fc` (_code @ 0x13c1fc, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b4000; /* 0x5b4000 */
extern int DAT_005b4004; /* 0x5b4004 */
extern unsigned int DAT_005b4008; /* 0x5b4008 */
extern unsigned int DAT_0063ffd0; /* 0x63ffd0 */
extern unsigned char DAT_00640000; /* 0x640000 */
extern unsigned char DAT_0064007c; /* 0x64007c */

/* Supplied declaration required: FUN_00159814. */
/* Supplied declaration required: FUN_002e59f8. */


void FUN_0013c1fc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_005b4000;
  FUN_00159814(DAT_005b4000,&DAT_0063ffd0);
  if (temp_v0 != 0) {
    DAT_005b4004 = 1;
    FUN_002e59f8(&DAT_00640000,&DAT_0064007c,0x7c);
  }
  else {
    DAT_005b4004 = 0;
  }
  temp_v0 = DAT_005b4004;
  piVar2 = (int *)&DAT_00640000;
  piVar3 = (int *)0x53d740;
  temp_v1 = 0x1f;
  puVar4 = (unsigned int *)0x53d744;
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
      temp_v2 = DAT_0063ffd0;
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
      if ((DAT_005b4008 & 2) != 0) {
        DAT_005b4008 = DAT_005b4008 & 0xfffffffd;
      }
      return;
    }
  } while( 1 );
}
