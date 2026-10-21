/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7fac` (_code @ 0x1f7fac, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00256898(int, int);
int FUN_002568c4(int);
int FUN_0025c2d0(int, int);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int jobDispatchOptionalOwner(...); /* 0x1e4a50 */
extern unsigned char LAB_001f80f0; /* 0x1f80f0 */
extern unsigned char LAB_001f8104; /* 0x1f8104 */
extern int battleEditorRunForJob(...); /* 0x20edd8 */
extern int FUN_002c9edc(...); /* 0x2c9edc */
extern int g_btlMain; /* 0x4342c8 */
extern unsigned int *DAT_00435ce8; /* 0x435ce8 */
extern int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_00256898. */
/* Supplied declaration required: FUN_002568c4. */
extern int FUN_00256940(int, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0025c2d0. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void FUN_001f7fac(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = &LAB_001f80f0;
  taskCreateDraw(&LAB_001f80f0,2,0,0,jobDispatchOptionalOwner,FUN_002c9edc,param_1,*param_1);
  param_1[0x16] = (unsigned int)puVar1;
  taskCreateDraw(&LAB_001f8104,0x73,0,0,battleEditorRunForJob,0,param_1,puVar1);
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x18,1);
  DAT_00435ce8 = puVar2;
  *puVar2 = 0;
  puVar2[1] = (unsigned int)*(unsigned char *)((int)param_1 + 0x1e9d);
  *(unsigned short *)(puVar2 + 4) = 0xffff;
  *(unsigned char *)((int)puVar2 + 0x12) = 0xff;
  *(unsigned char *)((int)puVar2 + 0x13) = 0xff;
  if (g_btlMain != 0) {
    if ((-1 < *(int *)(g_btlMain + 0x760)) &&
       (temp_v0 = FUN_00256940(g_btlMain,param_1,1), temp_v0 != 0)) {
      FUN_002568c4(0);
    }
    FUN_00256898(1,0);
  }
  param_1[0x112a] = param_1[0x112a] | 0x80000;
  if (g_btlUiBlock != 0) {
    FUN_0025c2d0(g_btlUiBlock,1);
    return;
  }
  return;
}

} /* extern "C" */
