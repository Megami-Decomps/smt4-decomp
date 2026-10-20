/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027249c` (_code @ 0x27249c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdMemoryAllocTracked(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0024bcac; /* 0x24bcac */
extern unsigned char LAB_0027253c; /* 0x27253c */
extern int FUN_002deeb8(...); /* 0x2deeb8 */
extern unsigned int *DAT_005738e8; /* 0x5738e8 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int jobIsValid(unsigned int);


void FUN_0027249c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  
  temp_v0 = jobIsValid(param_1[0x1c]);
  if (temp_v0 == 0) {
    puVar2 = &LAB_0027253c;
    taskCreateDraw(&LAB_0027253c,4,0,0,&LAB_0024bcac,FUN_002deeb8,param_1,*param_1);
    param_1[0x1c] = (unsigned int)puVar2;
    puVar3 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0xc,1);
    DAT_005738e8 = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  return;
}

} /* extern "C" */
