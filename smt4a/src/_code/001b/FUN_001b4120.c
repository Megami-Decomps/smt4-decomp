/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4120` (_code @ 0x1b4120, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b40e0; /* 0x5b40e0 */
extern int DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x001b4178) */
/* WARNING: Removing unreachable block (ram,0x001b4180) */
/* WARNING: Removing unreachable block (ram,0x001b4184) */
/* WARNING: Removing unreachable block (ram,0x001b4194) */
/* WARNING: Removing unreachable block (ram,0x001b41dc) */
/* WARNING: Removing unreachable block (ram,0x001b41e8) */
/* WARNING: Removing unreachable block (ram,0x001b41f0) */
/* WARNING: Removing unreachable block (ram,0x001b41f4) */
/* WARNING: Removing unreachable block (ram,0x0018b610) */
/* WARNING: Removing unreachable block (ram,0x001a09f4) */
/* WARNING: Removing unreachable block (ram,0x001a09fc) */
/* WARNING: Removing unreachable block (ram,0x001a0a04) */
/* WARNING: Removing unreachable block (ram,0x001a0a08) */
/* WARNING: Removing unreachable block (ram,0x001a0a10) */
/* WARNING: Removing unreachable block (ram,0x001a0a18) */
/* WARNING: Removing unreachable block (ram,0x001a0a3c) */
/* WARNING: Removing unreachable block (ram,0x002f59f4) */

void FUN_001b4120(unsigned int param_1,unsigned int param_2)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005b40e0;
  *(int *)(DAT_0061a50c + 0xc) = DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  rt_memcpy_w(temp_v0,param_1,param_2);
  DAT_005b40e0 = DAT_005b40e0 + (param_2 & 0xfffffffc);
  return;
}
