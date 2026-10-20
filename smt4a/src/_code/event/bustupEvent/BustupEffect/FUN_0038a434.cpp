/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a434` (_code @ 0x38a434, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int bustupCutAnimSetJobParam(...);
int VectorSignedToFloat(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_00289748(...); /* 0x289748 */
extern unsigned char LAB_002897ac; /* 0x2897ac */
extern int FUN_0034da10(...); /* 0x34da10 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern unsigned int FUN_002282c8(unsigned int, unsigned int, unsigned int);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: bustupCutAnimSetJobParam. */


unsigned int FUN_0038a434(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  char *pcVar5;
  unsigned int in_fpscr;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_00162ea4();
  if (temp_v1 == 0) {
    puVar3 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0xc,1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    temp_v2 = FUN_002282c8(10,7,0);
    temp_v0 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *puVar3 = temp_v2;
    puVar3[1] = 0;
    puVar3[2] = temp_v0;
    pcVar5 = "EffectLine";
    asdProcessCreateSimple("EffectLine",4,0,0,FUN_00289748,FUN_0034da10,puVar3);
    taskCreateDraw("EffectLineDraw",0x73,0,0,&LAB_002897ac,0,puVar3,pcVar5);
    bustupCutAnimSetJobParam(pcVar5);
  }
  return 1;
}

} /* extern "C" */
