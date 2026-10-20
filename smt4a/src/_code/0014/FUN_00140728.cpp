/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140728` (_code @ 0x140728, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c920(unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char g_asdMemory; /* 0x5b406c */

/* Supplied declaration required: FUN_0019c920. */


void FUN_00140728(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int unaff_r4;
  
  param_1[6] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (*(int * *)((unsigned char *)&g_asdMemory + 0x18));
  if ((*(int * *)((unsigned char *)&g_asdMemory + 0x18)) != (int *)0x0) {
    unaff_r4 = *(*(int * *)((unsigned char *)&g_asdMemory + 0x18));
  }
  if ((*(int * *)((unsigned char *)&g_asdMemory + 0x18)) != (int *)0x0 && unaff_r4 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = temp_v0 + 1;
      puVar2 = (unsigned int *)(unaff_r4 + temp_v0 * 0x14);
      if (puVar2[2] == 0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = temp_v1;
        puVar2[3] = 0;
        puVar2[4] = 0;
        piVar1[1] = piVar1[1] + 1;
        puVar2[1] = param_3;
        *puVar2 = param_2;
        FUN_0019c920(param_1 + 3);
        return;
      }
      temp_v0 = temp_v1;
    } while (temp_v1 < 0x200);
  }
  puVar2 = (unsigned int *)0x0;
  puVar2[1] = param_3;
  *puVar2 = param_2;
  FUN_0019c920(param_1 + 3);
  return;
}

} /* extern "C" */
