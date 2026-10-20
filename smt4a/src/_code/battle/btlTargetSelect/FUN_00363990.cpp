/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363990` (_code @ 0x363990, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_001505ac(...);
int taskCreateDraw(...);
int asdOperatorNew(int, unsigned int *);
int asdMemoryAlloc(int, int, int, int, int);
int FUN_002f5020(unsigned int *, unsigned char *, int, int);
int FUN_0036b644(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_00357ea0(...); /* 0x357ea0 */
extern unsigned char LAB_00363b98; /* 0x363b98 */
extern unsigned char LAB_00363bb4; /* 0x363bb4 */
extern unsigned char LAB_00363bcc; /* 0x363bcc */
extern int payloadWorkRelease(...); /* 0x379d18 */
extern int btlTargetSelectDestroy(...); /* 0x399238 */
extern unsigned char LAB_0041895c; /* 0x41895c */
extern unsigned char DAT_0052aa0c; /* 0x52aa0c */
extern unsigned char DAT_00557d50; /* 0x557d50 */
extern unsigned int *g_btlTargetSelect; /* 0x57a9a8 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0036b644. */
extern unsigned int FUN_004093f4(void);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00363990(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char *puVar7;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0xb8,1);
  temp_v0 = 0xf4;
  g_btlTargetSelect = puVar1;
  asdOperatorNew(0xf4,param_1);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_004093f4();
  }
  *puVar1 = temp_v1;
  puVar4 = (unsigned int *)0x60;
  asdOperatorNew(0x60,param_1);
  puVar6 = (unsigned int *)0x0;
  if (puVar4 != (unsigned int *)0x0) {
    puVar5 = puVar4 + 1;
    *puVar4 = (unsigned int)&DAT_00557d50;
    FUN_002f5020(puVar5,&LAB_0041895c,0x10,5);
    puVar6 = puVar5 + -1;
    *(unsigned char *)((int)puVar5 + 0xf) = 0;
    *(unsigned char *)((int)puVar5 + 0x1f) = 0;
    *(unsigned char *)((int)puVar5 + 0x2f) = 0;
    *(unsigned char *)((int)puVar5 + 0x3f) = 0;
    *(unsigned char *)((int)puVar5 + 0x4f) = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0x42200000;
  }
  puVar1[1] = (unsigned int)puVar6;
  *(unsigned char *)(puVar1 + 2) = 0;
  puVar7 = &LAB_00363b98;
  taskCreateDraw(&LAB_00363b98,4,0,0,FUN_00357ea0,btlTargetSelectDestroy,puVar1,*param_1);
  param_1[0xf] = (unsigned int)puVar7;
  taskCreateDraw(&LAB_00363bb4,0x7e,0,0,payloadWorkRelease,0,puVar1,puVar7);
  taskCreateDraw(&LAB_00363bcc,0xda,0,0,payloadWorkRelease,0,puVar1,param_1[0xf]);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 3);
  FUN_001505ac(puVar1 + 3,0,0,0,0,0,0,&DAT_0052aa0c,0x10,0,0);
  FUN_0014e188(puVar1 + 0xb,0xc,0x71,puVar1 + 3,1);
  FUN_0036b644(puVar1 + 0xb,0);
  return;
}

} /* extern "C" */
