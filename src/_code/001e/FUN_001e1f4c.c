/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1f4c` (_code @ 0x1e1f4c, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_001d3ca4(); /* 0x1d3ca4 */
extern unsigned char LAB_001e20c0; /* 0x1e20c0 */
extern unsigned char LAB_001e20d4; /* 0x1e20d4 */
extern unsigned char LAB_001e20e8; /* 0x1e20e8 */
extern int FUN_001fc51c(); /* 0x1fc51c */
extern int FUN_0021eb38(); /* 0x21eb38 */
extern unsigned char LAB_0021ebe0; /* 0x21ebe0 */
extern unsigned short DAT_0043438a; /* 0x43438a */
extern unsigned int *DAT_00434390; /* 0x434390 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0025c508. */
/* Supplied declaration required: FUN_0025c524. */
/* Supplied declaration required: FUN_0025c550. */
/* Supplied declaration required: FUN_0025c7c4. */
/* Supplied declaration required: FUN_00262b40. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_003c5378. */


void FUN_001e1f4c(unsigned int *param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  param_1[0x112a] = param_1[0x112a] | 1;
  puVar1 = &LAB_001e20c0;
  FUN_002c4c00(&LAB_001e20c0,2,0,0,FUN_001d3ca4,FUN_0021eb38,param_1,*param_1);
  param_1[0x17] = (unsigned int)puVar1;
  FUN_002c4c00(&LAB_001e20d4,0x73,0,0,FUN_001fc51c,0,param_1,puVar1);
  FUN_002c4c00(&LAB_001e20e8,0xe6,0,0,&LAB_0021ebe0,0,param_1,param_1[0x17]);
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x20,1);
  DAT_00434390 = puVar2;
  puVar2[1] = param_2;
  *puVar2 = 0;
  DAT_0043438a = 0;
  if (param_2 != 0) {
    temp_v0 = param_1[0x17];
    FUN_0025c7c4(temp_v0,0x73,0);
    puVar2[4] = temp_v0;
    FUN_0025c550();
    FUN_0025c524(puVar2[4],1);
    FUN_00262b40(puVar2[4],"btl Debug Menu");
  }
  else {
    FUN_003c5378(puVar2,param_1);
  }
  if (DAT_00439ca8 != 0) {
    FUN_0025c508(DAT_00439ca8,1);
    return;
  }
  return;
}
