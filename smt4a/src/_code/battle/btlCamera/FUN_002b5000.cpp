/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5000` (_code @ 0x2b5000, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_004f0e20(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002984a0(...); /* 0x2984a0 */
extern unsigned char LAB_002b5094; /* 0x2b5094 */
extern int btlCameraDestroy(...); /* 0x32850c */
extern int g_btlCamera; /* 0x571508 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_004f0e20. */


void FUN_002b5000(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  puVar1 = &LAB_002b5094;
  taskCreateDraw(&LAB_002b5094,4,0,0,FUN_002984a0,btlCameraDestroy,param_1,*param_1);
  param_1[0x1a] = (unsigned int)puVar1;
  if (g_btlCamera == 0) {
    temp_v0 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x8b4,1);
    g_btlCamera = temp_v0;
  }
  FUN_004f0e20();
  return;
}

} /* extern "C" */
