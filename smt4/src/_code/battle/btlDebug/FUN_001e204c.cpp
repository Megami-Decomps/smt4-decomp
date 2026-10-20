/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e204c` (_code @ 0x1e204c, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025c2d0(...);
int FUN_0025c2ec(...);
int asdListBoxAddItems(void);
int FUN_0025c58c(...);
int FUN_00262914(...);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int FUN_003c5150(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_001d3da0(...); /* 0x1d3da0 */
extern unsigned char LAB_001e21c0; /* 0x1e21c0 */
extern unsigned char LAB_001e21d4; /* 0x1e21d4 */
extern unsigned char LAB_001e21e8; /* 0x1e21e8 */
extern int FUN_001fc5c0(...); /* 0x1fc5c0 */
extern int FUN_0021ec34(...); /* 0x21ec34 */
extern unsigned char LAB_0021ecdc; /* 0x21ecdc */
extern unsigned short DAT_0043438a; /* 0x43438a */
extern unsigned int *DAT_00434390; /* 0x434390 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0025c2d0. */
/* Supplied declaration required: FUN_0025c2ec. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_003c5150. */


void FUN_001e204c(unsigned int *param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  param_1[0x112a] = param_1[0x112a] | 1;
  puVar1 = &LAB_001e21c0;
  taskCreateDraw(&LAB_001e21c0,2,0,0,FUN_001d3da0,FUN_0021ec34,param_1,*param_1);
  param_1[0x17] = (unsigned int)puVar1;
  taskCreateDraw(&LAB_001e21d4,0x73,0,0,FUN_001fc5c0,0,param_1,puVar1);
  taskCreateDraw(&LAB_001e21e8,0xe6,0,0,&LAB_0021ecdc,0,param_1,param_1[0x17]);
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x20,1);
  DAT_00434390 = puVar2;
  puVar2[1] = param_2;
  *puVar2 = 0;
  DAT_0043438a = 0;
  if (param_2 != 0) {
    temp_v0 = param_1[0x17];
    FUN_0025c58c(temp_v0,0x73,0);
    puVar2[4] = temp_v0;
    asdListBoxAddItems();
    FUN_0025c2ec(puVar2[4],1);
    FUN_00262914(puVar2[4],"btl Debug Menu");
  }
  else {
    FUN_003c5150();
  }
  if (DAT_00439ca8 != 0) {
    FUN_0025c2d0(DAT_00439ca8,1);
    return;
  }
  return;
}

} /* extern "C" */
