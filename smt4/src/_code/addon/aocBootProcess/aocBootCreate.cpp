/* NON_MATCHING: romwright 0.5.0 decompilation of `aocBootCreate` (_code @ 0x224bd0, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba78c(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int aocBootUpdate(...); /* 0x1b4cbc */
extern int aocBootDestroy(...); /* 0x20ecbc */
extern unsigned char LAB_00224ccc; /* 0x224ccc */
extern int g_aocMain; /* 0x432fc8 */
extern unsigned int *g_aocBoot; /* 0x432fe0 */
extern unsigned int g_aocBootFinished; /* 0x432fe4 */

/* Supplied declaration required: FUN_002ba78c. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */


unsigned int aocBootCreate(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (g_aocBoot == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x5f4,1);
    g_aocBoot = puVar1;
  }
  puVar1 = g_aocBoot;
  g_aocBootFinished = 0;
  *(unsigned char *)(g_aocBoot + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  FUN_002ba78c(puVar1 + 3);
  puVar1[0x17c] = 0;
  puVar2 = &LAB_00224ccc;
  asdProcessCreateSimple(&LAB_00224ccc,2,0,0,aocBootUpdate,aocBootDestroy,0);
  puVar1 = g_aocBoot;
  *g_aocBoot = (unsigned int)puVar2;
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  return *puVar1;
}

} /* extern "C" */
