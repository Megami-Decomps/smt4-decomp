/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275748` (_code @ 0x275748, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int stateSetterConstructDefault(...);
int stateSetterConstruct(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0027daf0; /* 0x27daf0 */
extern unsigned char LAB_002bd338; /* 0x2bd338 */
extern unsigned char LAB_00316108; /* 0x316108 */
extern unsigned char LAB_00316120; /* 0x316120 */
extern unsigned int *DAT_00588110; /* 0x588110 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: stateSetterConstructDefault. */
/* Supplied declaration required: stateSetterConstruct. */


void FUN_00275748(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x580,1);
  DAT_00588110 = puVar1;
  if (param_1 != (unsigned int *)0x0) {
    stateSetterConstruct(puVar1 + 4,(int)(char)*param_1);
  }
  else {
    stateSetterConstructDefault(puVar1 + 4);
  }
  pcVar2 = "NameMainProc";
  asdProcessCreateSimple("NameMainProc",4,0,0,&LAB_0027daf0,&LAB_00316108,DAT_00588110);
  *puVar1 = (unsigned int)pcVar2;
  taskCreateDraw("NameDrawUp",0x85,1,0,&LAB_002bd338,0,DAT_00588110,pcVar2);
  taskCreateDraw("NameDrawUp",0xe1,1,0,&LAB_002bd338,0,DAT_00588110,*puVar1);
  pcVar2 = "NameDrawDown";
  taskCreateDraw("NameDrawDown",0xea,1,0,&LAB_00316120,0,DAT_00588110,*puVar1);
  puVar1[2] = (unsigned int)pcVar2;
  return;
}

} /* extern "C" */
