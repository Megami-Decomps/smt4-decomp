/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ed3c` (_code @ 0x37ed3c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0039a7ac; /* 0x39a7ac */
extern int FUN_003bab24(...); /* 0x3bab24 */
extern signed char DAT_0057f20a; /* 0x57f20a */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */


void FUN_0037ed3c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  if (DAT_0057f20a == '\0') {
    if (DAT_0057f214 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x20,1);
      DAT_0057f214 = puVar1;
    }
    puVar1 = DAT_0057f214;
    *DAT_0057f214 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    pcVar2 = "CrazingSumaho Calc";
    asdProcessCreateSimple("CrazingSumaho Calc",4,0,0,&LAB_0039a7ac,0,0);
    *puVar1 = (unsigned int)pcVar2;
    taskCreateDraw("CrazingSumaho DrawDown",0xee,0,0,FUN_003bab24,0,0,pcVar2);
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x3f4ccccd;
    puVar1[6] = 0x3f4ccccd;
    *(unsigned char *)(puVar1 + 1) = 0;
    *(unsigned char *)((int)puVar1 + 5) = 0;
    *(unsigned char *)(puVar1 + 7) = 0;
    *(unsigned char *)((int)puVar1 + 0x1d) = 0;
  }
  DAT_0057f20a = DAT_0057f20a + '\x01';
  return;
}

} /* extern "C" */
