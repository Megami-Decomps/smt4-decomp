/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c104` (_code @ 0x31c104, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_00213ad8(...); /* 0x213ad8 */
extern unsigned char LAB_002281a0; /* 0x2281a0 */
extern int FUN_00261254(...); /* 0x261254 */
extern unsigned char LAB_0031c26c; /* 0x31c26c */
extern unsigned char LAB_0031c280; /* 0x31c280 */
extern unsigned char LAB_0031c294; /* 0x31c294 */
extern unsigned int *DAT_0057f3c0; /* 0x57f3c0 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */


void FUN_0031c104(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f3c0 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x1c,1);
    DAT_0057f3c0 = puVar1;
  }
  puVar1 = DAT_0057f3c0;
  *DAT_0057f3c0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar2 = &LAB_0031c26c;
  asdProcessCreateSimple(&LAB_0031c26c,3,0,0,&LAB_002281a0,FUN_00213ad8,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0031c280,0x84,0,0,FUN_00261254,0,0,puVar2);
  taskCreateDraw(&LAB_0031c294,0xe0,0,0,FUN_00261254,0,0,*puVar1);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0x3ca3d70a;
  puVar1[6] = param_1;
  *(unsigned char *)(puVar1 + 5) = 0 < param_1;
  return;
}

} /* extern "C" */
