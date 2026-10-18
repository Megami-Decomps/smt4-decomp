/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe1b4` (_code @ 0x2fe1b4, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_001dfadc(); /* 0x1dfadc */
extern unsigned char LAB_001dfb40; /* 0x1dfb40 */
extern int FUN_002db898(); /* 0x2db898 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_002467b0(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00249f1c. */
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_002c1f28(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_002fe1b4(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  char *pcVar5;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_002c1f28();
  if (temp_v1 == 0) {
    puVar3 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xc,1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    temp_v2 = FUN_002467b0(10,7,0);
    temp_v0 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *puVar3 = temp_v2;
    puVar3[1] = 0;
    puVar3[2] = temp_v0;
    pcVar5 = "EffectLine";
    FUN_002c5978("EffectLine",2,0,0,FUN_001dfadc,FUN_002db898,puVar3);
    FUN_002c4c00("EffectLineDraw",0x71,0,0,&LAB_001dfb40,0,puVar3,pcVar5);
    FUN_00249f1c(pcVar5);
  }
  return 1;
}
