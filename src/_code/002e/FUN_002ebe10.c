/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebe10` (_code @ 0x2ebe10, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_001f3658(); /* 0x1f3658 */
extern unsigned char LAB_002d6544; /* 0x2d6544 */
extern unsigned char LAB_002ebf18; /* 0x2ebf18 */

extern int FUN_002c1f28(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_002ebe10(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_s0;
  float in_s1;
  
  temp_v0 = FUN_002c1f28();
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x24,1);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[2] = in_s1 - 10.0f;
    puVar2[7] = param_1;
    puVar2[8] = param_2;
    *(float *)&puVar2[1] = in_s1;
    puVar2[3] = in_s0;
    puVar2[4] = in_s0;
    FUN_002c5978(&LAB_002ebf18,2,0,0,FUN_001f3658,&LAB_002d6544,puVar2);
  }
  return;
}
