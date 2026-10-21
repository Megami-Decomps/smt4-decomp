/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002919b4` (_code @ 0x2919b4, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdMemoryAllocTracked(int, int, int, int, int);
int jobStop(...);
int asdListBoxCreateDefaultFlags(...);
int jobSetText(...);
int asdListBoxSetByteValue(...);
int asdListBoxAddItems(void);
int FUN_003592dc(unsigned int);
int FUN_004aa780(...);
int FUN_004d48d0(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_002761c8(...); /* 0x2761c8 */
extern unsigned char LAB_00291b54; /* 0x291b54 */
extern unsigned char LAB_00291b68; /* 0x291b68 */
extern unsigned char LAB_00291b7c; /* 0x291b7c */
extern int FUN_002ba870(...); /* 0x2ba870 */
extern int FUN_00314ef8(...); /* 0x314ef8 */
extern unsigned char LAB_00314fb4; /* 0x314fb4 */
extern unsigned short DAT_005715fa; /* 0x5715fa */
extern unsigned int *DAT_00571600; /* 0x571600 */
extern unsigned int DAT_00571638; /* 0x571638 */
extern unsigned int DAT_0057163c; /* 0x57163c */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdListBoxCreateDefaultFlags. */
/* Supplied declaration required: jobSetText. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_003592dc. */
/* Supplied declaration required: FUN_004aa780. */
/* Supplied declaration required: FUN_004d48d0. */


void FUN_002919b4(unsigned int *param_1,int param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_1[0x116b] | DAT_0057163c;
  param_1[0x116a] = param_1[0x116a] | DAT_00571638;
  param_1[0x116b] = temp_v2;
  puVar1 = &LAB_00291b54;
  taskCreateDraw(&LAB_00291b54,4,0,0,FUN_002761c8,FUN_00314ef8,param_1,*param_1);
  param_1[0x20] = (unsigned int)puVar1;
  taskCreateDraw(&LAB_00291b68,0x75,0,0,FUN_002ba870,0,param_1,puVar1);
  taskCreateDraw(&LAB_00291b7c,0xea,0,0,&LAB_00314fb4,0,param_1,param_1[0x20]);
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x20,1);
  DAT_00571600 = puVar2;
  puVar2[1] = param_2;
  *puVar2 = 0;
  DAT_005715fa = 0;
  if (param_2 != 0) {
    temp_v0 = jobIsValid(puVar2[4]);
    if (temp_v0 != 0) {
      FUN_003592dc(puVar2[4]);
      jobStop(puVar2[4],0);
    }
    temp_v1 = param_1[0x20];
    asdListBoxCreateDefaultFlags(temp_v1,0x75,0);
    puVar2[4] = temp_v1;
    asdListBoxAddItems();
    asdListBoxSetByteValue(puVar2[4],1);
    jobSetText(puVar2[4],"btl Debug Menu");
  }
  else {
    FUN_004d48d0();
  }
  if (g_btlUiBlock != 0) {
    FUN_004aa780(g_btlUiBlock,1);
    return;
  }
  return;
}

} /* extern "C" */
