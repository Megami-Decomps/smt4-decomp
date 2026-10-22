/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e14a4` (_code @ 0x2e14a4, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int asdLoadFileSyncDefault(...);
int bustupViewerResetState(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_002e15c8; /* 0x2e15c8 */
extern unsigned char LAB_002e15e8; /* 0x2e15e8 */
extern unsigned char LAB_002e1600; /* 0x2e1600 */
extern int FUN_003150f4(...); /* 0x3150f4 */
extern unsigned char LAB_003692a8; /* 0x3692a8 */
extern int FUN_003692c0(...); /* 0x3692c0 */
extern unsigned char LAB_003a3b84; /* 0x3a3b84 */
extern unsigned int *g_bustupViewer; /* 0x588ff0 */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: bustupViewerResetState. */


void FUN_002e14a4(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xa4,1);
  g_bustupViewer = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[0x10] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  *(unsigned char *)(puVar1 + 0x11) = 0;
  bustupViewerResetState();
  puVar1[0x12] = 0x1a;
  puVar1[0x13] = 0x1e;
  puVar2 = &LAB_002e15c8;
  asdLoadFileSyncDefault();
  puVar1[0x26] = (unsigned int)puVar2;
  temp_v0 = spriteHandleCreate(0);
  puVar1[0x28] = temp_v0;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_002e15e8;
  asdProcessCreateSimple(&LAB_002e15e8,4,0,0,FUN_003150f4,&LAB_003692a8,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_002e1600,0xea,0,0,FUN_003692c0,&LAB_003a3b84,0,puVar2);
  return;
}

} /* extern "C" */
