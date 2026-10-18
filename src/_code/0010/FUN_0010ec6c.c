/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ec6c` (_code @ 0x10ec6c, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern int DAT_004e39e4; /* 0x4e39e4 */
extern unsigned char DAT_004e39e8; /* 0x4e39e8 */
extern int DAT_004e39f4; /* 0x4e39f4 */
extern unsigned int DAT_004e3a0c; /* 0x4e3a0c */
extern int DAT_004e3a10; /* 0x4e3a10 */
extern int DAT_004e3a20; /* 0x4e3a20 */
extern unsigned int DAT_004e3a38; /* 0x4e3a38 */
extern int DAT_004e3a3c; /* 0x4e3a3c */
extern unsigned char DAT_004e3a40; /* 0x4e3a40 */
extern int DAT_004e3a4c; /* 0x4e3a4c */

/* Supplied declaration required: FUN_001234dc. */
/* Supplied declaration required: FUN_002bc304. */
/* Supplied declaration required: FUN_002bc3c8. */
/* Supplied declaration required: FUN_002c27ec. */
/* Supplied declaration required: FUN_002c2a2c. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_0010ec6c(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_004e39f4 - 1;
  if (temp_v0 < 0) {
    temp_v0 = DAT_004e39e4 - 1;
  }
  temp_v4 = *(unsigned int *)(&DAT_004e39e8 + temp_v0 * 4);
  FUN_002c2a2c(0x400);
  FUN_002c27ec(temp_v4);
  temp_v0 = DAT_004e3a20 - 1;
  if (temp_v0 < 0) {
    temp_v0 = DAT_004e3a10 - 1;
  }
  if (param_2 != 0) {
    puVar1 = &DAT_004e3a0c;
  }
  else {
    puVar1 = &DAT_004e39e0;
  }
  temp_v4 = (puVar1 + temp_v0)[2];
  FUN_002c2a2c(0x410);
  FUN_002c27ec(temp_v4);
  temp_v0 = DAT_004e3a4c - 1;
  if (temp_v0 < 0) {
    temp_v0 = DAT_004e3a3c - 1;
  }
  temp_v4 = *(unsigned int *)(&DAT_004e3a40 + temp_v0 * 4);
  FUN_002c2a2c(0x401);
  FUN_002c27ec(temp_v4);
  if (param_1 != 0) {
    FUN_002bc3c8();
    FUN_002bc304(&DAT_004e39e0,1);
    FUN_002bc304(&DAT_004e3a0c,param_2);
    FUN_002bc304(&DAT_004e3a38,1);
  }
  FUN_001234dc(0x402);
  FUN_002c6c10(DAT_004e39f4 + 1,DAT_004e39e4);
  DAT_004e39f4 = temp_v1;
  FUN_002c6c10(DAT_004e3a20 + 1,DAT_004e3a10);
  DAT_004e3a20 = temp_v2;
  FUN_002c6c10(DAT_004e3a4c + 1,DAT_004e3a3c);
  DAT_004e3a4c = temp_v3;
  return;
}
