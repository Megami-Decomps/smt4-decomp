/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab80c` (_code @ 0x4ab80c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */


void FUN_004ab80c(unsigned int param_1,unsigned char *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
  puVar2 = (unsigned int *)((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x7490);
  *param_2 = *(unsigned char *)((*(int *)((unsigned char *)&g_btlUi + 0x10)) + 0x74b1);
  temp_v1 = *(unsigned int *)(temp_v0 + 0x7494);
  *param_3 = *puVar2;
  param_3[1] = temp_v1;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x749c);
  *param_4 = *(unsigned int *)(temp_v0 + 0x7498);
  param_4[1] = temp_v1;
  return;
}

} /* extern "C" */
