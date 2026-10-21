/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f24e0` (_code @ 0x3f24e0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(void);
int FUN_003f2aec(int);
int btlUiIdsRefresh(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f2aec. */
/* Supplied declaration required: btlUiIdsRefresh. */


void FUN_003f24e0(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x1ed4) + param_2 * 0x1d0 + 0x50);
  if ((temp_v0 & 1) == 0 || (temp_v0 & 0x80) == 0) {
    return;
  }
  temp_v1 = param_1;
  FUN_003f0e20();
  temp_v2 = (int)*(short *)(param_1 + 0x301e);
  do {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0xc) {
      btlUiIdsRefresh(g_btlUiBlock);
      return;
    }
  } while (-1 < *(short *)(param_1 + temp_v2 * 2 + 0x3006));
  *(unsigned short *)(param_1 + temp_v2 * 2 + 0x3006) = *(unsigned short *)(temp_v1 + 0x6e);
  FUN_003f2aec(param_1);
  btlUiIdsRefresh(g_btlUiBlock);
  return;
}

} /* extern "C" */
