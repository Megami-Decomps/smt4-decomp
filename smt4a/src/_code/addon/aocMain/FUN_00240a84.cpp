/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240a84` (_code @ 0x240a84, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, unsigned char *, unsigned int *);
int taskCreateDraw(...);
int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_0022677c(int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00240be4; /* 0x240be4 */
extern unsigned char LAB_00240bf4; /* 0x240bf4 */
extern unsigned char LAB_00240c00; /* 0x240c00 */
extern unsigned char LAB_00240c10; /* 0x240c10 */
extern unsigned char LAB_0024b5ac; /* 0x24b5ac */
extern unsigned char LAB_002981b4; /* 0x2981b4 */
extern unsigned char LAB_002debc0; /* 0x2debc0 */
extern unsigned char LAB_002dec08; /* 0x2dec08 */
extern unsigned int *DAT_00570278; /* 0x570278 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_0022677c. */


void FUN_00240a84(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x20,1);
  DAT_00570278 = puVar1;
  *(unsigned char *)(puVar1 + 6) = 0;
  *(unsigned char *)((int)puVar1 + 0x19) = 0;
  puVar1[7] = 0;
  *(unsigned char *)((int)puVar1 + 0x1a) = 0;
  if (param_1 == 0) {
    *(unsigned char *)((int)puVar1 + 0x19) = 1;
    FUN_0022677c(0,0xff);
    FUN_0022677c(1,0xff);
  }
  puVar2 = &LAB_00240be4;
  asdProcessCreateSimple(&LAB_00240be4,4,0,0,&LAB_0024b5ac,&LAB_002debc0,DAT_00570278);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_00240bf4,0x81,1,0,&LAB_002981b4,0,DAT_00570278,puVar2);
  taskCreateDraw(&LAB_00240c00,0xdd,1,0,&LAB_002981b4,0,DAT_00570278,*puVar1);
  puVar2 = &LAB_00240c10;
  taskCreateDraw(&LAB_00240c10,0xeb,1,0,&LAB_002dec08,0,DAT_00570278,*puVar1);
  puVar1[3] = (unsigned int)puVar2;
  return;
}

} /* extern "C" */
