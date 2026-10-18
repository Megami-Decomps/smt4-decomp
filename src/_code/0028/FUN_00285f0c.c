/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285f0c` (_code @ 0x285f0c, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */
extern unsigned int DAT_0043e2b0; /* 0x43e2b0 */

/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_0033f90c. */
/* Supplied declaration required: FUN_0033f99c. */


/* WARNING: Removing unreachable block (ram,0x0028605c) */
/* WARNING: Removing unreachable block (ram,0x00286068) */
/* WARNING: Removing unreachable block (ram,0x00286078) */
/* WARNING: Removing unreachable block (ram,0x00285fe4) */
/* WARNING: Removing unreachable block (ram,0x00285ff0) */
/* WARNING: Removing unreachable block (ram,0x00286008) */
/* WARNING: Removing unreachable block (ram,0x00286018) */
/* WARNING: Removing unreachable block (ram,0x00286024) */
/* WARNING: Removing unreachable block (ram,0x00286034) */
/* WARNING: Removing unreachable block (ram,0x00286040) */

void FUN_00285f0c(void)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  long long temp_v5;
  unsigned int temp_v6 [8];
  unsigned int uStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char temp_v7 [28];
  
  temp_v0 = DAT_0043e2ac;
  temp_v4 = DAT_0043e2ac + 0x88;
  uStack_50 = FUN_002c0ba8(0x556);
  uStack_4c = FUN_002c0ba8(0x557);
  temp_v2 = FUN_002c0ba8(0x421);
  temp_v5 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x1f4dc) << 0x20;
  uStack_48 = temp_v2;
  FUN_0033f90c();
  temp_v3 = 0;
  temp_v6[4] = 0x2a6;
  temp_v6[0] = 0x2a2;
  temp_v6[1] = 0x2a3;
  temp_v6[2] = 0x2a4;
  temp_v6[3] = 0x2a5;
  uStack_58 = temp_v2;
  do {
    temp_v1 = FUN_002c0ba8(temp_v6[temp_v3]);
    temp_v2 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
    temp_v7[temp_v3] = temp_v1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 5);
  FUN_002bcf58(temp_v4,DAT_0043e2b0,0x24d28);
  *(unsigned int *)(temp_v0 + 0x1f4dc) = temp_v2;
  FUN_0033f99c(uStack_58);
  FUN_002c4360(uStack_58);
  return;
}
