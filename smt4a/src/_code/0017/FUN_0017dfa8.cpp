/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017dfa8` (_code @ 0x17dfa8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned char DAT_0061a483; /* 0x61a483 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a5d8; /* 0x61a5d8 */
extern int DAT_0061a5dc; /* 0x61a5dc */


void FUN_0017dfa8(int *param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = DAT_005b40e0;
  DAT_0061a483 = 0;
  temp_v0 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v0;
  if (((temp_v0 & 8) != 0) && ((unsigned int)puVar1 < DAT_005b40e4)) {
    DAT_005b40e0 = puVar1 + 2;
    *puVar1 = 0;
    puVar1[1] = 0x8025e;
  }
  *param_1 = DAT_0061a5d8;
  *param_2 = (int)DAT_005b40e0 + (-DAT_0061a5d8 - *(int *)(DAT_0061a50c + 4));
  *param_3 = DAT_0061a5dc;
  *param_4 = *(int *)(DAT_0061a50c + 0x20) - DAT_0061a5dc;
  return;
}

} /* extern "C" */
