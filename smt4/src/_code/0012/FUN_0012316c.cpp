/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012316c` (_code @ 0x12316c, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(int, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int g_commandBufferCursor; /* 0x4652a0 */
extern int g_commandBufferEnd; /* 0x4652a4 */
extern unsigned int *DAT_004c632c; /* 0x4c632c */

/* Supplied declaration required: memClear. */


void FUN_0012316c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  romwright_code *in_r12;
  
  puVar1 = DAT_004c632c;
  if (DAT_004c632c != (unsigned int *)0x0) {
    if (DAT_004c632c[1] != 0) {
      in_r12 = DAT_0044e334;
    }
    if (DAT_004c632c[1] != 0 && in_r12 != (romwright_code *)0x0) {
      (*in_r12)(0x10000,0x105,*DAT_004c632c);
    }
    if (DAT_0044e330 == (romwright_code *)0x0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (*DAT_0044e330)(0x10000,0x105,*puVar1,param_1 + param_2 * 0x1c);
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
    memClear(temp_v0 + param_1,param_2 * 0x1c);
    g_commandBufferCursor = puVar1[1];
    g_commandBufferEnd = g_commandBufferCursor + puVar1[2];
  }
  return;
}

} /* extern "C" */
