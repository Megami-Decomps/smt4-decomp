/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca138` (_code @ 0x1ca138, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_internal_NWCopyVec4Reverse(...);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */

/* Supplied declaration required: nw_gfx_internal_NWCopyVec4Reverse. */


void FUN_001ca138(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  float *pfVar2;
  int temp_v0;
  int temp_v1;
  int *piVar5;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float fStack_24;
  float temp_v8;
  unsigned int temp_v9;
  
  puVar1 = DAT_005b40e0;
  piVar5 = *(int **)(param_1 + 0x44);
  if ((piVar5 != (int *)0x0) && ((~**(unsigned int **)(*(int *)(param_1 + 8) + 8) & 4) == 0)) {
    temp_v1 = piVar5[2];
    *DAT_005b40e0 = 0x80000016;
    puVar1[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec4Reverse(puVar1 + 2,temp_v1 + 0xb8);
    puVar1 = DAT_005b40e0;
    DAT_005b40e0 = DAT_005b40e0 + 6;
    *DAT_005b40e0 = 0x80000017;
    puVar1[7] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec4Reverse(puVar1 + 8,temp_v1 + 200);
    DAT_005b40e0 = DAT_005b40e0 + 6;
    temp_v2 = *(float *)(temp_v1 + 0xd8);
    temp_v4 = *(float *)(temp_v1 + 0xdc);
    temp_v3 = *(float *)(temp_v1 + 0xe0);
    if (((~*(unsigned int *)(temp_v1 + 0x18) & 2) == 0) && (piVar5[3] != 0)) {
      pfVar2 = (float *)(**(romwright_code **)(*piVar5 + 0x14))(piVar5);
      temp_v3 = *(float *)(temp_v1 + 0xd8);
      temp_v6 = *(float *)(temp_v1 + 0xdc);
      temp_v5 = *(float *)(temp_v1 + 0xe0);
      temp_v2 = *pfVar2 * temp_v3 + pfVar2[1] * temp_v6 + pfVar2[2] * temp_v5;
      temp_v4 = pfVar2[4] * temp_v3 + pfVar2[5] * temp_v6 + pfVar2[6] * temp_v5;
      temp_v3 = pfVar2[8] * temp_v3 + pfVar2[9] * temp_v6 + pfVar2[10] * temp_v5;
    }
    puVar1 = DAT_005b40e0;
    temp_v0 = *(int *)(param_1 + 0xa4);
    temp_v9 = *(unsigned int *)(temp_v1 + 0xe4);
    temp_v7 = *(float *)(temp_v0 + 0x148) * temp_v2 + *(float *)(temp_v0 + 0x14c) * temp_v4 +
               *(float *)(temp_v0 + 0x150) * temp_v3;
    fStack_24 = *(float *)(temp_v0 + 0x158) * temp_v2 + *(float *)(temp_v0 + 0x15c) * temp_v4 +
                *(float *)(temp_v0 + 0x160) * temp_v3;
    temp_v8 = *(float *)(temp_v0 + 0x168) * temp_v2 + *(float *)(temp_v0 + 0x16c) * temp_v4 +
               *(float *)(temp_v0 + 0x170) * temp_v3;
    *DAT_005b40e0 = 0x80000018;
    puVar1[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec4Reverse(puVar1 + 2,&temp_v7);
    DAT_005b40e0 = DAT_005b40e0 + 6;
  }
  return;
}

} /* extern "C" */
