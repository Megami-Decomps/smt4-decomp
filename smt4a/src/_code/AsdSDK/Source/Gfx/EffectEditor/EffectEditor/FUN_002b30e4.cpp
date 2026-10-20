/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b30e4` (_code @ 0x2b30e4, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned char DAT_0059dc84; /* 0x59dc84 */


unsigned char * FUN_002b30e4(int param_1,int param_2)

{
  int *piVar1;
  unsigned short temp_v0;
  
  temp_v0 = 0;
  do {
    piVar1 = *(int **)(temp_v0 * 4 + 0x59e624);
    if (piVar1 != (int *)0x0) {
      param_2 = *piVar1;
    }
    if (piVar1 != (int *)0x0 && param_2 != 0) {
      do {
        if (((*(short *)(param_2 + 4) != 0x1b) &&
            (*(short *)(param_2 + 4) == *(short *)(*(int *)(param_1 + 0x90) + 4))) &&
           (*(short *)(param_2 + 8) == *(short *)(*(int *)(param_1 + 0x90) + 0xc))) {
          return (unsigned char *)*piVar1;
        }
        piVar1 = piVar1 + 7;
        param_2 = *piVar1;
      } while (param_2 != 0);
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0xd) {
      return &DAT_0059dc84;
    }
  } while( 1 );
}

} /* extern "C" */
