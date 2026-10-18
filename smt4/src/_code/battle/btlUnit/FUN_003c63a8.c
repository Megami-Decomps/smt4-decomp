/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c63a8` (_code @ 0x3c63a8, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int *DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_004342cc; /* 0x4342cc */
extern unsigned int DAT_004342d0; /* 0x4342d0 */

extern unsigned int *FUN_0022a344(unsigned int, unsigned int);
extern int FUN_0022a444(unsigned int);
/* Supplied declaration required: FUN_003d88a0. */


void FUN_003c63a8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  switch(param_3) {
  case 0:
    temp_v0 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      if ((DAT_004342c8[0x18d] & 0x20) != 0) {
        return;
      }
      FUN_003d88a0();
      return;
    }
    FUN_003d88a0();
    temp_v2 = DAT_004342c8[0x18d] & 0xffffffdf;
    break;
  case 1:
    temp_v0 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      temp_v2 = DAT_004342c8[0x18d] | 0x40;
    }
    else {
      temp_v2 = DAT_004342c8[0x18d] & 0xffffffbf;
    }
    break;
  case 2:
    temp_v0 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 == 0) {
      DAT_004342c8[0x18d] = DAT_004342c8[0x18d] & 0xffffff7f;
      return;
    }
    temp_v2 = DAT_004342c8[0x18d] | 0x80;
    break;
  case 3:
    puVar3 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_004342cc;
    *puVar3 = temp_v1;
    return;
  case 4:
    puVar3 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_004342d0;
    *puVar3 = temp_v1;
    return;
  case 5:
    puVar3 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10),param_3);
    *DAT_004342c8 = *puVar3;
    return;
  case 6:
    puVar3 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10),param_3);
    DAT_004342c8[1] = *puVar3;
    return;
  case 7:
    puVar3 = (unsigned int *)FUN_0022a344(*(unsigned int *)(param_1 + 0x10),param_3);
    DAT_004342c8[2] = *puVar3;
    return;
  default:
    return;
  }
  DAT_004342c8[0x18d] = temp_v2;
  return;
}
