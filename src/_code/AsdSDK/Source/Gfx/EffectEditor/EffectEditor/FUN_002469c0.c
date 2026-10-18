/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002469c0` (_code @ 0x2469c0, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned char DAT_0044eb38; /* 0x44eb38 */


unsigned char * FUN_002469c0(int param_1,int param_2)

{
  int *piVar1;
  unsigned short temp_v0;
  
  temp_v0 = 0;
  do {
    piVar1 = *(int **)(temp_v0 * 4 + 0x44f4d4);
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
      return &DAT_0044eb38;
    }
  } while( 1 );
}
