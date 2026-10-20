/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b604` (_code @ 0x39b604, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(...);
int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_001acf98(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_0031c55c(...); /* 0x31c55c */
extern int FUN_0031c794(...); /* 0x31c794 */
extern unsigned char LAB_0039b7b0; /* 0x39b7b0 */
extern unsigned char LAB_0039b7c4; /* 0x39b7c4 */
extern unsigned char LAB_0039b7dc; /* 0x39b7dc */
extern unsigned int *DAT_0057f3b4; /* 0x57f3b4 */
extern unsigned int DAT_0057f3d0; /* 0x57f3d0 */
extern unsigned int DAT_0057f3d4; /* 0x57f3d4 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
extern int FUN_00341940(unsigned int);


void FUN_0039b604(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  
  if (DAT_0057f3b4 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x1c,1);
    DAT_0057f3b4 = puVar1;
  }
  puVar1 = DAT_0057f3b4;
  temp_v1 = 0;
  *DAT_0057f3b4 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar2 = &LAB_0039b7b0;
  asdProcessCreateSimple(&LAB_0039b7b0,3,0,0,FUN_0031c794,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0039b7c4,0x86,0,0,FUN_0031c55c,0,0,puVar2);
  taskCreateDraw(&LAB_0039b7dc,0xe2,0,0,FUN_0031c55c,0,0,*puVar1);
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 6) = 0;
  puVar1[5] = 0x3f800000;
  puVar1[3] = 0x28;
  do {
    temp_v0 = FUN_00341940((&DAT_0057f3d0)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      asdTMTexTableLoadTmx((&DAT_0057f3d0)[temp_v1 * 3],0);
      *(unsigned char *)(temp_v1 * 0xc + 0x57f3d9) = 1;
    }
    temp_v0 = FUN_0018206c((&DAT_0057f3d0)[temp_v1 * 3],(&DAT_0057f3d4)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_001acf98((&DAT_0057f3d0)[temp_v1 * 3],(&DAT_0057f3d4)[temp_v1 * 3]);
      *(unsigned char *)(temp_v1 * 0xc + 0x57f3d8) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return;
}

} /* extern "C" */
