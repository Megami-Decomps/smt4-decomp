/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c00c` (_code @ 0x14c00c, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002a49fc. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c4244. */


void FUN_0014c00c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  do {
    temp_v0 = param_1 + 0x2c;
    FUN_002c3aa8(temp_v0);
    piVar1 = (int *)FUN_002a49fc(param_1,2,1);
    if ((piVar1 != (int *)0x0) || (piVar1 = (int *)FUN_002a49fc(param_1,1), piVar1 != (int *)0x0)) {
      FUN_002c3a24(temp_v0);
    }
    else {
      piVar1 = (int *)FUN_002a49fc(param_1,0,1);
      if (piVar1 == (int *)0x0) {
        FUN_002c3a24(temp_v0);
        return;
      }
      FUN_002c3a24(temp_v0);
    }
    *(int **)(param_1 + 0x24) = piVar1;
    (**(romwright_code **)(*piVar1 + 8))(piVar1);
    *(unsigned char *)(piVar1 + 5) = 3;
    FUN_002c4244(piVar1 + 3);
    *(unsigned int *)(param_1 + 0x24) = 0;
  } while( 1 );
}
