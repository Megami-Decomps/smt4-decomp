/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a694` (_code @ 0x38a694, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, int, int);
int taskCreateDraw(...);
int asdOperatorNew(void);
int FUN_00402e34(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0037d4b0; /* 0x37d4b0 */
extern unsigned char LAB_0038a780; /* 0x38a780 */
extern unsigned char LAB_0038a79c; /* 0x38a79c */
extern unsigned char LAB_0038a7b0; /* 0x38a7b0 */
extern unsigned char LAB_0038a7c8; /* 0x38a7c8 */
extern unsigned char LAB_0039b93c; /* 0x39b93c */
extern unsigned char LAB_0039b960; /* 0x39b960 */
extern unsigned int *DAT_0057f244; /* 0x57f244 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_00402e34. */


void FUN_0038a694(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x6b8;
  asdOperatorNew();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  puVar2 = &LAB_0038a780;
  DAT_0057f244 = puVar1;
  asdProcessCreateSimple(&LAB_0038a780,4,0,0,&LAB_0037d4b0,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0038a79c,0x7e,0,0,&LAB_0039b960,0,0,puVar2);
  taskCreateDraw(&LAB_0038a7b0,0xda,0,0,&LAB_0039b960,0,0,*puVar1);
  taskCreateDraw(&LAB_0038a7c8,0xeb,0,0,&LAB_0039b93c,0,0,*puVar1);
  FUN_00402e34(puVar1);
  return;
}

} /* extern "C" */
