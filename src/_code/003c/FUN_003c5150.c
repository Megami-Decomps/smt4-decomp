/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5150` (_code @ 0x3c5150, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c5364; /* 0x3c5364 */
extern unsigned char DAT_00434388; /* 0x434388 */
extern unsigned int DAT_0043438c; /* 0x43438c */
extern unsigned int DAT_00435dc0; /* 0x435dc0 */
extern unsigned int DAT_00435dd8; /* 0x435dd8 */

/* Supplied declaration required: FUN_0022a3a8. */
/* Supplied declaration required: FUN_0022a400. */
/* Supplied declaration required: FUN_0025c2ec. */
/* Supplied declaration required: FUN_0025c318. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */
extern unsigned int FUN_002c0c74(unsigned int);
/* Supplied declaration required: FUN_002c0cc4. */
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003bbf3c. */
/* Supplied declaration required: FUN_003bc670. */


void FUN_003c5150(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  FUN_0025c58c(temp_v0,0x73,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  FUN_0025c318();
  FUN_0025c2ec(*(unsigned int *)(param_1 + 0x10),1);
  FUN_00262914(*(unsigned int *)(param_1 + 0x10),&LAB_003c5364);
  temp_v1 = (unsigned int)DAT_00434388;
  if (temp_v1 != 0) {
    FUN_003bc670();
    FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0,DAT_0043438c,0,temp_v1 - 1,0);
    FUN_0022a400(*(unsigned int *)(param_1 + 0x10),1,(int)(char)DAT_00434388);
  }
  else {
    FUN_003bbf3c();
    FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0,DAT_0043438c,0,temp_v1 - 1,0);
    FUN_0022a400(*(unsigned int *)(param_1 + 0x10),1,(int)(char)DAT_00434388);
  }
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),2,DAT_00435dc0,0,0x4b1,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),3,DAT_00435dd8,0,1000,0);
  puVar3 = (unsigned int *)(param_2 + 0x44a8);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),4,(*puVar3 & 0x4000) >> 0xe);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),5,(*puVar3 & 0x8000) >> 0xf);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),6,(*puVar3 & 0x10000) >> 0x10);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0xb,(*puVar3 & 0x20000000) >> 0x1d);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0xc);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0xd,(*puVar3 & 0x100000) >> 0x14);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0xe,*puVar3 >> 0x1f);
  temp_v0 = FUN_002c0cec(0x1c,2);
  FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),10,0,0,temp_v0,0);
  return;
}
