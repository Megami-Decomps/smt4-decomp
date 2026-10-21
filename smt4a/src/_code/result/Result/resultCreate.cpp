/* NON_MATCHING: romwright 0.5.0 decompilation of `resultCreate` (_code @ 0x2c52e0, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_0020b490(...);
int campCommonBgAcquire(...);
int FUN_004b6390(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_00204098(...); /* 0x204098 */
extern unsigned char LAB_00229324; /* 0x229324 */
extern int FUN_00267bf0(...); /* 0x267bf0 */
extern unsigned char LAB_00267c70; /* 0x267c70 */
extern int DAT_00588c44; /* 0x588c44 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern unsigned short ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: FUN_0020b490. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_004b6390. */


void resultCreate(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int *puVar4;
  
  if (DAT_00588c44 == 0) {
    campCommonBgAcquire();
    temp_v1 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x7f58,1);
    pcVar3 = "Result CALC";
    DAT_00588c44 = temp_v1;
    asdProcessCreateSimple("Result CALC",4,0,0,FUN_00204098,FUN_00267bf0,0);
    puVar4 = (unsigned int *)(temp_v1 + 0x7f30);
    *puVar4 = (unsigned int)pcVar3;
    taskCreateDraw("Result DrawUpLeft",0x85,0,0,&LAB_00229324,0,0,pcVar3);
    taskCreateDraw("Result DrawUpRight",0xe1,0,0,&LAB_00229324,0,0,*puVar4);
    pcVar3 = "Result DDRAW";
    taskCreateDraw("Result DDRAW",0xea,0,0,&LAB_00267c70,0,0,*puVar4);
    *(char **)(temp_v1 + 0x7f38) = pcVar3;
    FUN_004b6390(temp_v1);
    *(char *)(temp_v1 + 0x4398) = (char)param_1;
    *(unsigned short *)(temp_v1 + 0x439a) = 0;
    if (param_1 == 3) {
      temp_v0 = ifTouchGetButtonHelpValue();
      *(unsigned short *)(temp_v1 + 0x439a) = temp_v0;
    }
    FUN_0020b490(temp_v1,1);
    return;
  }
  return;
}

} /* extern "C" */
