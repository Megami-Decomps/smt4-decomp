/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144f1c` (_code @ 0x144f1c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0063fd88; /* 0x63fd88 */
extern int DAT_0063fd8c; /* 0x63fd8c */
extern unsigned char DAT_0063fd90; /* 0x63fd90 */
extern int DAT_0063fd9c; /* 0x63fd9c */
extern unsigned int DAT_0063fdb4; /* 0x63fdb4 */
extern int DAT_0063fdb8; /* 0x63fdb8 */
extern int DAT_0063fdc8; /* 0x63fdc8 */
extern unsigned int DAT_0063fde0; /* 0x63fde0 */
extern int DAT_0063fde4; /* 0x63fde4 */
extern unsigned char DAT_0063fde8; /* 0x63fde8 */
extern int DAT_0063fdf4; /* 0x63fdf4 */

/* Supplied declaration required: FUN_00154ca4. */
/* Supplied declaration required: FUN_00161044. */
/* Supplied declaration required: FUN_00161074. */
/* Supplied declaration required: FUN_00161694. */
/* Supplied declaration required: FUN_0017d294. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00144f1c(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0063fd9c - 1;
  if (temp_v0 < 0) {
    temp_v0 = DAT_0063fd8c - 1;
  }
  temp_v4 = *(unsigned int *)(&DAT_0063fd90 + temp_v0 * 4);
  FUN_00161044(0x400);
  FUN_00161074(temp_v4);
  temp_v0 = DAT_0063fdc8 - 1;
  if (temp_v0 < 0) {
    temp_v0 = DAT_0063fdb8 - 1;
  }
  if (param_2 != 0) {
    puVar1 = &DAT_0063fdb4;
  }
  else {
    puVar1 = &DAT_0063fd88;
  }
  temp_v4 = (puVar1 + temp_v0)[2];
  FUN_00161044(0x410);
  FUN_00161074(temp_v4);
  temp_v0 = DAT_0063fdf4 - 1;
  if (temp_v0 < 0) {
    temp_v0 = DAT_0063fde4 - 1;
  }
  temp_v4 = *(unsigned int *)(&DAT_0063fde8 + temp_v0 * 4);
  FUN_00161044(0x401);
  FUN_00161074(temp_v4);
  if (param_1 != 0) {
    FUN_0017d294();
    FUN_00154ca4(&DAT_0063fd88,1);
    FUN_00154ca4(&DAT_0063fdb4,param_2);
    FUN_00154ca4(&DAT_0063fde0,1);
  }
  FUN_00161694(0x402);
  aeabi_uidivmod(DAT_0063fd9c + 1,DAT_0063fd8c);
  DAT_0063fd9c = temp_v1;
  aeabi_uidivmod(DAT_0063fdc8 + 1,DAT_0063fdb8);
  DAT_0063fdc8 = temp_v2;
  aeabi_uidivmod(DAT_0063fdf4 + 1,DAT_0063fde4);
  DAT_0063fdf4 = temp_v3;
  return;
}
