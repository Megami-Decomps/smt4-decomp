/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038abbc` (_code @ 0x38abbc, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002347b8(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_0038a1e0(...); /* 0x38a1e0 */
extern int FUN_0038a478(...); /* 0x38a478 */
extern int FUN_0038aa80(...); /* 0x38aa80 */
extern unsigned int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_002347b8. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */


void FUN_0038abbc(unsigned int *param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  
  param_1[3] = param_4;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 0x105) = param_3;
  temp_v0 = g_aocMain;
  FUN_002347b8(g_aocMain,param_2,param_1 + 5);
  param_1[4] = temp_v0;
  temp_v0 = *param_1;
  temp_v1 = temp_v0 & 0xffffffdf;
  *param_1 = temp_v1;
  if ((temp_v0 & 0x10) == 0) {
    *param_1 = temp_v1 | 0x10;
    param_1[0x106] = 0;
    pcVar3 = "Aoc board CALC";
    asdProcessCreateSimple("Aoc board CALC",2,0,0,FUN_0038a1e0,0,param_1);
    param_1[1] = (unsigned int)pcVar3;
    taskCreateDraw("Aoc board UP L",0x82,1,0,FUN_0038a478,0,param_1,pcVar3);
    taskCreateDraw("Aoc board UP R",0xe0,1,0,FUN_0038a478,0,param_1,param_1[1]);
    taskCreateDraw("Aoc board DOWN",0x160,1,0,FUN_0038aa80,0,param_1,param_1[1]);
  }
  return;
}

} /* extern "C" */
