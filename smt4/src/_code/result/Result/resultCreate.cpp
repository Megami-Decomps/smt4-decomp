/* NON_MATCHING: romwright 0.5.0 decompilation of `resultCreate` (_code @ 0x29b998, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002898e4(...);
int FUN_00296774(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int FUN_003b7b58(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0018c0ec(...); /* 0x18c0ec */
extern int FUN_001a16c0(...); /* 0x1a16c0 */
extern int FUN_001c88d8(...); /* 0x1c88d8 */
extern unsigned char LAB_001c8974; /* 0x1c8974 */
extern int g_result; /* 0x44dc20 */

/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_00296774. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_003b7b58. */


void resultCreate(unsigned char param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int *puVar3;
  
  if (g_result == 0) {
    FUN_002898e4();
    temp_v0 = 0x100;
    asdMemAlloc(0x100,0x100,0,0xd658,1);
    pcVar2 = "Result CALC";
    g_result = temp_v0;
    asdProcessCreateSimple("Result CALC",2,0,0,FUN_0018c0ec,FUN_001c88d8,0);
    puVar3 = (unsigned int *)(temp_v0 + 0xd644);
    *puVar3 = (unsigned int)pcVar2;
    taskCreateDraw("Result DrawUpLeft",0x80,0,0,FUN_001a16c0,0,0,pcVar2);
    taskCreateDraw("Result DrawUpRight",0xde,0,0,FUN_001a16c0,0,0,*puVar3);
    pcVar2 = "Result DDRAW";
    taskCreateDraw("Result DDRAW",0xe6,0,0,&LAB_001c8974,0,0,*puVar3);
    *(char **)(temp_v0 + 0xd64c) = pcVar2;
    FUN_003b7b58(temp_v0);
    *(unsigned char *)(temp_v0 + 0x3560) = param_1;
    FUN_00296774(temp_v0,1);
    return;
  }
  return;
}

} /* extern "C" */
