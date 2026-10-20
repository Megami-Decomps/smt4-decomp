/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d548` (_code @ 0x38d548, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00371c3c(int, int);
int FUN_003e87a8(void);
int FUN_004aa1d0(unsigned int);

extern unsigned int DAT_00570dd0; /* 0x570dd0 */
extern unsigned int DAT_00570dd4; /* 0x570dd4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int btlGetMainState(void);
extern int FUN_00168518(int, unsigned short);
extern int gameGetOptions(void);
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_003e87a8. */
/* Supplied declaration required: FUN_004aa1d0. */


unsigned int FUN_0038d548(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = btlGetMainState();
  FUN_003e87a8();
  temp_v2 = gameGetOptions();
  temp_v0 = *(unsigned short *)(temp_v2 + 0x12e);
  temp_v2 = gameGetOptions();
  temp_v2 = FUN_00168518((int)*(short *)(temp_v2 + 300),temp_v0);
  FUN_00371c3c((int)(short)(*(short *)(temp_v2 + 100) + 1),0);
  temp_v3 = DAT_00570dd4 | *(unsigned int *)(temp_v1 + 0x45a4);
  *(unsigned int *)(temp_v1 + 0x45a0) = DAT_00570dd0 | *(unsigned int *)(temp_v1 + 0x45a0);
  *(unsigned int *)(temp_v1 + 0x45a4) = temp_v3;
  FUN_004aa1d0(DAT_0057a9c8);
  return 1;
}

} /* extern "C" */
