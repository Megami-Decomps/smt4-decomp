/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3848` (_code @ 0x1d3848, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int FUN_003984a4(...);
int FUN_003984ac(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001d9578; /* 0x1d9578 */
extern unsigned char LAB_001fe130; /* 0x1fe130 */
extern unsigned char LAB_0021f2a8; /* 0x21f2a8 */
extern unsigned char LAB_0021f2c0; /* 0x21f2c0 */
extern unsigned int *DAT_0044d184; /* 0x44d184 */

/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_003984a4. */
/* Supplied declaration required: FUN_003984ac. */


void FUN_001d3848(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x960,1);
  DAT_0044d184 = puVar1;
  if (param_1 != (int *)0x0) {
    FUN_003984ac(puVar1 + 4,(int)(char)*param_1);
  }
  else {
    FUN_003984a4(puVar1 + 4);
  }
  pcVar2 = "NameMainProc";
  asdProcessCreateSimple("NameMainProc",2,0,0,&LAB_001d9578,&LAB_0021f2a8,DAT_0044d184);
  *puVar1 = (unsigned int)pcVar2;
  if (*param_1 != 1) {
    taskCreateDraw("NameDrawUp",0x7a,1,0,&LAB_001fe130,0,DAT_0044d184,pcVar2);
    taskCreateDraw("NameDrawUp",0xd8,1,0,&LAB_001fe130,0,DAT_0044d184,*puVar1);
  }
  else {
    taskCreateDraw("NameDrawUp",0x80,1,0,&LAB_001fe130,0,DAT_0044d184,pcVar2);
    taskCreateDraw("NameDrawUp",0xde,1,0,&LAB_001fe130,0,DAT_0044d184,*puVar1);
  }
  pcVar2 = "NameDrawDown";
  taskCreateDraw("NameDrawDown",0xe6,1,0,&LAB_0021f2c0,0,DAT_0044d184,*puVar1);
  puVar1[2] = (unsigned int)pcVar2;
  return;
}

} /* extern "C" */
