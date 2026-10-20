/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f29c0` (_code @ 0x3f29c0, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;


unsigned int FUN_003f29c0(int param_1,unsigned int *param_2)

{
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  
  piVar2 = (int *)(param_1 + 0x2410);
  piVar1 = (int *)(param_1 + 0x2414);
  do {
    while( 1 ) {
      if (*piVar1 < 1) {
        return 0;
      }
      temp_v1 = *piVar1 - 1;
      *piVar1 = temp_v1;
      temp_v0 = *piVar2;
      if (*(int *)(param_1 + 0xa8) != 0) break;
      if ((*(int *)(temp_v0 + temp_v1 * 0x10) != 4) ||
         ((*(unsigned short *)
            (*(int *)(param_1 + 0x1ffc) + *(int *)(temp_v0 + temp_v1 * 0x10 + 4) * 0x408 + 0x274) &
          0x11c0) == 0)) {
        *param_2 = *(unsigned int *)(temp_v0 + *piVar1 * 0x10);
        param_2[1] = *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 4);
        param_2[2] = *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 8);
        param_2[3] = *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 0xc);
        return 1;
      }
    }
  } while (*(int *)(temp_v0 + temp_v1 * 0x10) != 6);
  *param_2 = *(unsigned int *)(temp_v0 + *piVar1 * 0x10);
  param_2[1] = *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 4);
  param_2[2] = *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 8);
  param_2[3] = *(unsigned int *)(*piVar2 + *piVar1 * 0x10 + 0xc);
  return 1;
}

} /* extern "C" */
