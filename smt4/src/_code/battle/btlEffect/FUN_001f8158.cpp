/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8158` (_code @ 0x1f8158, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effectProcessCreate(void);
int jobSetParent(unsigned int, unsigned int);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int FUN_003d971c(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int btlEffectDispatchCurrentJob(...); /* 0x1e4a84 */
extern unsigned char LAB_001f8230; /* 0x1f8230 */
extern unsigned char LAB_001f8244; /* 0x1f8244 */
extern int FUN_0020ee0c(...); /* 0x20ee0c */
extern int btlEffectDestroy(...); /* 0x2c9fd0 */
extern unsigned char g_btlEffect; /* 0x435d00 */

/* Supplied declaration required: effectProcessCreate. */
/* Supplied declaration required: jobSetParent. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_003d971c. */


void FUN_001f8158(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  
  puVar1 = &LAB_001f8230;
  taskCreateDraw(&LAB_001f8230,2,0,0,btlEffectDispatchCurrentJob,btlEffectDestroy,param_1,*param_1);
  param_1[0xe] = (unsigned int)puVar1;
  temp_v0 = 0;
  effectProcessCreate();
  param_1[0xf] = temp_v0;
  jobSetParent(*param_1,temp_v0);
  puVar1 = &LAB_001f8244;
  taskCreateDraw(&LAB_001f8244,0x71,0,0,FUN_0020ee0c,0,param_1,*param_1);
  param_1[0x10] = (unsigned int)puVar1;
  temp_v0 = 0x100;
  asdMemAlloc(0x100,0x100,0,0x32a4,1);
  (*(unsigned int *)((unsigned char *)&g_btlEffect + 0x18)) = temp_v0;
  FUN_003d971c();
  return;
}

} /* extern "C" */
