/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2628` (_code @ 0x1d2628, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemAlloc(...);
int taskCreateDraw(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001b5498(...); /* 0x1b5498 */
extern unsigned char LAB_001d26c8; /* 0x1d26c8 */
extern int btlHelpFreeNodeListAndStopJob(...); /* 0x20ef98 */
extern unsigned int *DAT_00435d78; /* 0x435d78 */

extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void FUN_001d2628(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  
  temp_v0 = jobIsValid(param_1[0x13]);
  if (temp_v0 == 0) {
    puVar2 = &LAB_001d26c8;
    taskCreateDraw(&LAB_001d26c8,2,0,0,FUN_001b5498,btlHelpFreeNodeListAndStopJob,param_1,*param_1);
    param_1[0x13] = (unsigned int)puVar2;
    puVar3 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0xc,1);
    DAT_00435d78 = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  return;
}

} /* extern "C" */
