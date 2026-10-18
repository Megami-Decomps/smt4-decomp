/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0d34` (_code @ 0x2e0d34, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_00432cf8; /* 0x432cf8 */
extern char s_Mikado_00432cfe[7]; /* 0x432cfe */
extern unsigned short DAT_00432d1c; /* 0x432d1c */

extern char *FUN_00288f60(void);


char * FUN_002e0d34(int param_1)

{
  char *pcVar1;
  int temp_v0;
  
  if (param_1 >= 201) {
    pcVar1 = (char *)FUN_00288f60();
    return pcVar1;
  }
  temp_v0 = 0;
  while( 1 ) {
    if ((short)(&DAT_00432cf8)[temp_v0 * 0x12] == param_1) {
      return s_Mikado_00432cfe + temp_v0 * 0x24;
    }
    if ((short)(&DAT_00432d1c)[temp_v0 * 0x12] == param_1) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x14) {
      return (char *)0x0;
    }
  }
  return (char *)(temp_v0 * 0x24 + 0x432d22);
}
