/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d160` (_code @ 0x15d160, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0015dcc8. */
/* Supplied declaration required: FUN_0015dd3c. */
/* Supplied declaration required: FUN_0015dd70. */
/* Supplied declaration required: FUN_0015dee8. */
extern int FUN_0015df1c(unsigned char *);
/* Supplied declaration required: FUN_0015df9c. */
/* Supplied declaration required: FUN_002a2d34. */
extern int FUN_002bb5b4(void);
extern int FUN_002bb7b0(void);
/* Supplied declaration required: FUN_002c5468. */


void FUN_0015d160(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    temp_v1 = FUN_002bb7b0();
    temp_v0 = param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 8;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x12f0);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x12f4);
    if (*(char *)(param_1 + 0x15ac) != '\0') {
      FUN_002a2d34(&DAT_004e6f14,0,temp_v2);
      FUN_002a2d34(&DAT_004e6f14,1,temp_v3);
    }
    FUN_0015df9c(&DAT_004e6f14,0,temp_v2);
    FUN_0015df9c(&DAT_004e6f14,1,temp_v3);
    FUN_0015dd3c(&DAT_004e8568);
    FUN_0015dee8(&DAT_004e8568);
    temp_v4 = *(int *)(param_1 + 0x1320);
    temp_v0 = FUN_0015df1c(&DAT_004e6f14);
    FUN_0015dcc8(temp_v1);
    FUN_0015dd70(&DAT_004e8568,(temp_v4 - temp_v0) - temp_v1,*(unsigned int *)(param_1 + 0x1324));
    **(unsigned short **)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131e) * 4 + 0x1098) =
         *(unsigned short *)(param_1 + 0x131a);
    *(short *)(param_1 + 0x131a) = *(short *)(param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_002c5468();
    }
    *(unsigned short *)(param_1 + 0x131e) = *(unsigned short *)(param_1 + 0x131a) & 1;
    *(char *)(param_1 + 0x1319) = *(char *)(param_1 + 0x1319) + '\x01';
  }
  return;
}
