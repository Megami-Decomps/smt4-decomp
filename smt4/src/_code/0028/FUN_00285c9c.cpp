/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285c9c` (_code @ 0x285c9c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c09d0(...);
int asdMemFree(unsigned int);
int FUN_0033f6d8(void);
int FUN_0033f764(unsigned int);
int rt_memcpy_w(int, unsigned int, int);

extern int DAT_0043e2ac; /* 0x43e2ac */
extern unsigned int DAT_0043e2b0; /* 0x43e2b0 */

/* Supplied declaration required: FUN_002c09d0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0033f6d8. */
/* Supplied declaration required: FUN_0033f764. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x00285dec) */
/* WARNING: Removing unreachable block (ram,0x00285df8) */
/* WARNING: Removing unreachable block (ram,0x00285e08) */
/* WARNING: Removing unreachable block (ram,0x00285d74) */
/* WARNING: Removing unreachable block (ram,0x00285d80) */
/* WARNING: Removing unreachable block (ram,0x00285d98) */
/* WARNING: Removing unreachable block (ram,0x00285da8) */
/* WARNING: Removing unreachable block (ram,0x00285db4) */
/* WARNING: Removing unreachable block (ram,0x00285dc4) */
/* WARNING: Removing unreachable block (ram,0x00285dd0) */

void FUN_00285c9c(void)

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
  uStack_50 = FUN_002c09d0(0x556);
  uStack_4c = FUN_002c09d0(0x557);
  temp_v2 = FUN_002c09d0(0x421);
  temp_v5 = (unsigned long long)*(unsigned int *)(temp_v0 + 0x1f4dc) << 0x20;
  uStack_48 = temp_v2;
  FUN_0033f6d8();
  temp_v3 = 0;
  temp_v6[4] = 0x2a6;
  temp_v6[0] = 0x2a2;
  temp_v6[1] = 0x2a3;
  temp_v6[2] = 0x2a4;
  temp_v6[3] = 0x2a5;
  uStack_58 = temp_v2;
  do {
    temp_v1 = FUN_002c09d0(temp_v6[temp_v3]);
    temp_v2 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
    temp_v7[temp_v3] = temp_v1;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 5);
  rt_memcpy_w(temp_v4,DAT_0043e2b0,0x24d28);
  *(unsigned int *)(temp_v0 + 0x1f4dc) = temp_v2;
  FUN_0033f764(uStack_58);
  asdMemFree(uStack_58);
  return;
}

} /* extern "C" */
