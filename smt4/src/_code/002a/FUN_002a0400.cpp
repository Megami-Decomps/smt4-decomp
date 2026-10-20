/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0400` (_code @ 0x2a0400, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019df1c(unsigned int);
int FUN_002abb24(unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */
extern int DAT_00464b8c; /* 0x464b8c */
extern int DAT_004dad80; /* 0x4dad80 */

/* Supplied declaration required: FUN_0019df1c. */
extern unsigned int *FUN_0025bc18(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002abb24. */


/* WARNING: Removing unreachable block (ram,0x001db9e8) */
/* WARNING: Removing unreachable block (ram,0x001db9e0) */
/* WARNING: Removing unreachable block (ram,0x001db9d0) */
/* WARNING: Removing unreachable block (ram,0x001db9c4) */
/* WARNING: Removing unreachable block (ram,0x001db9c0) */
/* WARNING: Removing unreachable block (ram,0x001db9b8) */
/* WARNING: Removing unreachable block (ram,0x001db9c8) */
/* WARNING: Removing unreachable block (ram,0x001db9cc) */
/* WARNING: Removing unreachable block (ram,0x001db9d4) */
/* WARNING: Removing unreachable block (ram,0x001db9d8) */
/* WARNING: Removing unreachable block (ram,0x001db9dc) */
/* WARNING: Removing unreachable block (ram,0x001db9e4) */
/* WARNING: Removing unreachable block (ram,0x001dba08) */

void FUN_002a0400(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0025bc18(param_2,param_3,7);
  *(unsigned int **)(param_1 + 0x28) = puVar1;
  *puVar1 = *puVar1 & 0xffdfffff;
  temp_v0 = puVar1[2];
  if (DAT_00464b8c != 0) {
    FUN_0019df1c(temp_v0);
    FUN_002abb24(DAT_00464b7c,DAT_00464b84);
    DAT_004dad80 = DAT_004dad80 + 1;
    *(unsigned int *)(temp_v0 + 0xc) = 1;
    *(unsigned int *)(temp_v0 + 0x10) = 1;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
