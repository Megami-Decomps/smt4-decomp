/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad784` (_code @ 0x2ad784, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0044e608; /* 0x44e608 */
extern unsigned char DAT_004c4b40; /* 0x4c4b40 */
extern unsigned int DAT_004d4280; /* 0x4d4280 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001382cc. */
/* Supplied declaration required: FUN_00144900. */
/* Supplied declaration required: FUN_00146964. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002c3628. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c541c. */


void FUN_002ad784(unsigned char *param_1)

{
/* irregular: 2 unstructured edge(s); 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  int temp_v1 [2];
  
  do {
    FUN_002c3aa8(&DAT_004d4280);
    if (DAT_0044e608 == 0) {
      puVar1 = (unsigned int *)&DAT_0044e608;
      FUN_001382cc(&DAT_0044e608,"err:f");
      if (-1 < (int)puVar1) {
        puVar1 = (unsigned int *)0x0;
      }
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar1) {
      FUN_00144900(param_1 + 0xc,0xffff8001);
      temp_v1[0] = DAT_0044e608;
      FUN_00146964(temp_v1,param_1);
      if (DAT_0044e608 != 0) {
        software_interrupt(0x23);
        DAT_0044e608 = 0;
      }
      FUN_002c3a24(&DAT_004d4280);
      if (*param_1 != 2 && *param_1 != 5) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        FUN_002c541c(temp_v1,1);
        FUN_002c3628(temp_v1);
      }
      return;
    }
    temp_v0 = puVar1 == (unsigned int *)0xd0401834;
    if (temp_v0) {
      puVar1 = (unsigned int)(uint)*(unsigned int)param_1;
    }
    if (!temp_v0 || puVar1 != (unsigned int *)0x2) {
      FUN_002c3a24(&DAT_004d4280);
      if (*param_1 != 2 && *param_1 != 5) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        FUN_002c541c(temp_v1,1);
        FUN_002c3628(temp_v1);
      }
      return;
    }
    FUN_002bb490(&DAT_004c4b40,0);
    FUN_002c3a24(&DAT_004d4280);
  } while( 1 );
}
