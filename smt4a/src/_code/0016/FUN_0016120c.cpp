/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016120c` (_code @ 0x16120c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern romwright_code *DAT_00589190; /* 0x589190 */
extern int g_commandBufferCursor; /* 0x5b40e0 */
extern int g_commandBufferEnd; /* 0x5b40e4 */
extern unsigned int *DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: sysMemClear. */


void FUN_0016120c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  romwright_code *in_r12;
  
  puVar1 = DAT_0061a50c;
  if (DAT_0061a50c != (unsigned int *)0x0) {
    if (DAT_0061a50c[1] != 0) {
      in_r12 = DAT_00589190;
    }
    if (DAT_0061a50c[1] != 0 && in_r12 != (romwright_code *)0x0) {
      (*in_r12)(0x10000,0x105,*DAT_0061a50c);
    }
    if (DAT_0058918c == (romwright_code *)0x0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (*DAT_0058918c)(0x10000,0x105,*puVar1,param_1 + param_2 * 0x1c);
    }
    puVar1[2] = param_1;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[4] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xd] = 0;
    puVar1[1] = temp_v0;
    puVar1[0xc] = 0;
    puVar1[6] = temp_v0 + param_1;
    puVar1[7] = param_2;
    sysMemClear(temp_v0 + param_1,param_2 * 0x1c);
    g_commandBufferCursor = puVar1[1];
    g_commandBufferEnd = g_commandBufferCursor + puVar1[2];
  }
  return;
}

} /* extern "C" */
