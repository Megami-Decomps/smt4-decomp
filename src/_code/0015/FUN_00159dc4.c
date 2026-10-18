/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159dc4` (_code @ 0x159dc4, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern signed char DAT_0044e7c1; /* 0x44e7c1 */
extern signed char DAT_0044e7c2; /* 0x44e7c2 */
extern signed char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_0044e7c5; /* 0x44e7c5 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char DAT_004a95c0; /* 0x4a95c0 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00138f5c. */
/* Supplied declaration required: FUN_0015d298. */
/* Supplied declaration required: FUN_0015d44c. */
/* Supplied declaration required: FUN_0015d4ec. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002c3628. */


void FUN_00159dc4(int *param_1,unsigned int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (DAT_0044e7c2 != '\0') {
    puVar1 = &DAT_004e6f64;
    FUN_0015d44c(&DAT_004e6f64,param_2,0x952b80,0);
    if (puVar1 != (unsigned char *)0x0) {
      software_interrupt(0x28);
      puVar2 = &DAT_004e6f64;
      FUN_0015d298();
      DAT_0044e7c5 = 0;
      software_interrupt(0x28);
      param_1[1] = temp_v1 - (temp_v0 + (unsigned int)(puVar2 < puVar1));
      *param_1 = (int)puVar2 - (int)puVar1;
      return;
    }
    DAT_0044e7c1 = '\x01';
  }
  if (DAT_0044e7c1 != '\0') {
    FUN_002c3628(&DAT_0044e7c8);
    FUN_00138f5c(&DAT_0044e7c8);
  }
  if (DAT_0044e7c3 == '\0') {
    puVar1 = &DAT_004e6f64;
    FUN_0015d4ec();
    software_interrupt(0x28);
    puVar2 = &DAT_004e6f64;
    FUN_0015d298();
    DAT_0044e7c5 = 0;
    software_interrupt(0x28);
    *param_1 = (int)puVar2 - (int)puVar1;
    param_1[1] = temp_v3 - (temp_v2 + (unsigned int)(puVar2 < puVar1));
    return;
  }
  FUN_002bb490(&DAT_004a95c0,0);
  return;
}
