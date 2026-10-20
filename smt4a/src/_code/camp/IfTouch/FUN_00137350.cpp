/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137350` (_code @ 0x137350, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, unsigned char *, int);
int asdMemoryAllocTracked(int, int, int, int, int);
int sysMemClear(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00137448; /* 0x137448 */
extern unsigned char LAB_0013c2c8; /* 0x13c2c8 */
extern unsigned char LAB_0013ed24; /* 0x13ed24 */
extern signed char DAT_0057f248; /* 0x57f248 */
extern unsigned int *DAT_0057f24c; /* 0x57f24c */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysMemClear. */


void FUN_00137350(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f248 < '\x01') {
    if (DAT_0057f24c == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x680,1);
      DAT_0057f24c = puVar1;
    }
    puVar1 = DAT_0057f24c;
    sysMemClear();
    puVar2 = &LAB_00137448;
    asdProcessCreateSimple(&LAB_00137448,3,0,0,&LAB_0013c2c8,&LAB_0013ed24,0);
    *puVar1 = (unsigned int)puVar2;
    *(unsigned short *)((int)puVar1 + 0x64e) = 0xffff;
    *(unsigned short *)((int)puVar1 + 0x64a) = 10;
    *(unsigned short *)(puVar1 + 0x193) = 0;
  }
  DAT_0057f248 = DAT_0057f248 + '\x01';
  return;
}

} /* extern "C" */
