/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a06a0` (_code @ 0x2a06a0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern int DAT_00464b8c; /* 0x464b8c */
extern int DAT_004dad80; /* 0x4dad80 */

/* Supplied declaration required: FUN_0019de18. */
extern unsigned int *FUN_0025be50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002abdb0. */


/* WARNING: Removing unreachable block (ram,0x001db8e0) */
/* WARNING: Removing unreachable block (ram,0x001db8d8) */
/* WARNING: Removing unreachable block (ram,0x001db8c8) */
/* WARNING: Removing unreachable block (ram,0x001db8bc) */
/* WARNING: Removing unreachable block (ram,0x001db8b8) */
/* WARNING: Removing unreachable block (ram,0x001db8b0) */
/* WARNING: Removing unreachable block (ram,0x001db8c0) */
/* WARNING: Removing unreachable block (ram,0x001db8c4) */
/* WARNING: Removing unreachable block (ram,0x001db8cc) */
/* WARNING: Removing unreachable block (ram,0x001db8d0) */
/* WARNING: Removing unreachable block (ram,0x001db8d4) */
/* WARNING: Removing unreachable block (ram,0x001db8dc) */
/* WARNING: Removing unreachable block (ram,0x001db900) */

void FUN_002a06a0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0025be50(param_2,param_3,7);
  *(unsigned int **)(param_1 + 0x28) = puVar1;
  *puVar1 = *puVar1 & 0xffdfffff;
  temp_v0 = puVar1[2];
  if (DAT_00464b8c != 0) {
    FUN_0019de18(temp_v0);
    FUN_002abdb0(DAT_00464b7c,DAT_00464b84);
    DAT_004dad80 = DAT_004dad80 + 1;
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    *(unsigned int *)(temp_v0 + 0x10) = 1;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  return;
}
