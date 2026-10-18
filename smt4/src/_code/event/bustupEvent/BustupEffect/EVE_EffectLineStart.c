/* NON_MATCHING: romwright 0.5.0 decompilation of `EVE_EffectLineStart` (_code @ 0x2fe1f0, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_001dfbe0(); /* 0x1dfbe0 */
extern unsigned char LAB_001dfc44; /* 0x1dfc44 */
extern int FUN_002db900(); /* 0x2db900 */
extern unsigned char DAT_00403738; /* 0x403738 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_00246644(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00249dc4. */
extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


unsigned int EVE_EffectLineStart(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  char *pcVar5;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 == 0) {
    puVar3 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0xc,1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    temp_v2 = FUN_00246644(10,7,0);
    temp_v0 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *puVar3 = temp_v2;
    puVar3[1] = 0;
    puVar3[2] = temp_v0;
    pcVar5 = "EffectLine";
    FUN_002c5788("EffectLine",2,0,0,FUN_001dfbe0,FUN_002db900,puVar3);
    FUN_002c4a08(&DAT_00403738,0x71,0,0,&LAB_001dfc44,0,puVar3,pcVar5);
    FUN_00249dc4(pcVar5);
  }
  return 1;
}
