/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e738c` (_code @ 0x2e738c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, int, int);
int taskCreateDraw(...);
int asdOperatorNew(void);
int FUN_004bd794(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_002c3328; /* 0x2c3328 */
extern unsigned char LAB_002e7480; /* 0x2e7480 */
extern unsigned char LAB_002e7494; /* 0x2e7494 */
extern unsigned char LAB_002e74a0; /* 0x2e74a0 */
extern unsigned char LAB_002e74b0; /* 0x2e74b0 */
extern int FUN_0031d7cc(...); /* 0x31d7cc */
extern unsigned char LAB_0031d85c; /* 0x31d85c */
extern unsigned int *DAT_0057f260; /* 0x57f260 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_004bd794. */


void FUN_002e738c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x3a8;
  asdOperatorNew();
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[0xc5] = 0;
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  puVar2 = &LAB_002e7480;
  DAT_0057f260 = puVar1;
  asdProcessCreateSimple(&LAB_002e7480,4,0,0,&LAB_002c3328,0,0);
  *puVar1 = (unsigned int)puVar2;
  if (param_1 != 1) {
    taskCreateDraw(&LAB_002e7494,0x7e,0,0,&LAB_0031d85c,0,0,puVar2);
    taskCreateDraw(&LAB_002e74a0,0xda,0,0,&LAB_0031d85c,0,0,*puVar1);
    taskCreateDraw(&LAB_002e74b0,0xeb,0,0,FUN_0031d7cc,0,0,*puVar1);
  }
  FUN_004bd794(puVar1,param_1);
  return;
}

} /* extern "C" */
