/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b53e0` (_code @ 0x2b53e0, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int uiSpriteSetKeyframe(...);
int FUN_0020ad6c(...);
int FUN_002c52d8(...);
int FUN_002ed428(...);
int FUN_0031e6f4(...);
int FUN_00331c60(...);
int btlUiPanelStart(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001631b8(...); /* 0x1631b8 */
extern unsigned char LAB_0029865c; /* 0x29865c */
extern unsigned char LAB_002b548c; /* 0x2b548c */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_0020ad6c. */
/* Supplied declaration required: FUN_002c52d8. */
/* Supplied declaration required: FUN_002ed428. */
/* Supplied declaration required: FUN_0031e6f4. */
/* Supplied declaration required: FUN_00331c60. */
/* Supplied declaration required: btlUiPanelStart. */


/* WARNING: Removing unreachable block (ram,0x0038e4f0) */
/* WARNING: Removing unreachable block (ram,0x0038e528) */
/* WARNING: Removing unreachable block (ram,0x0038e514) */
/* WARNING: Removing unreachable block (ram,0x00184c30) */
/* WARNING: Removing unreachable block (ram,0x0038e53c) */
/* WARNING: Removing unreachable block (ram,0x0038e548) */
/* WARNING: Removing unreachable block (ram,0x0038e554) */
/* WARNING: Removing unreachable block (ram,0x0038e54c) */
/* WARNING: Removing unreachable block (ram,0x0038e510) */
/* WARNING: Removing unreachable block (ram,0x0038e540) */
/* WARNING: Removing unreachable block (ram,0x0038e560) */

void FUN_002b53e0(unsigned int *param_1)

{
/* irregular: 20 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  puVar1 = &LAB_002b548c;
  taskCreateDraw(&LAB_002b548c,4,0,0,&LAB_0029865c,FUN_001631b8,param_1,*param_1);
  param_1[1] = (unsigned int)puVar1;
  FUN_002c52d8();
  FUN_002ed428(param_1 + 0x6c);
  FUN_0031e6f4(param_1 + 0x7c);
  temp_v0 = 0;
  if (temp_v0 < (int)param_1[0x10b]) {
    do {
      FUN_00331c60(param_1 + temp_v0 * 2 + 0x8b);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)param_1[0x10b]);
  }
  param_1[0x10b] = 0;
  btlUiPanelStart(g_btlUiBlock);
  temp_v0 = g_btlUiBlock;
  *(unsigned int *)(g_btlUiBlock + 0x74a0) = 0x14;
  if (*(int *)(temp_v0 + 0x6140) != 0) {
    FUN_0020ad6c(temp_v0 + 0x28c4,0x27,1);
    uiSpriteSetKeyframe(temp_v0 + 0x3b7c,0xf,0);
    if (*(int *)(temp_v0 + 0x3bd4) != 0) {
      *(unsigned short *)(temp_v0 + 0x3bd8) = 0x30;
      *(unsigned short *)(temp_v0 + 0x3bda) = 0;
      *(unsigned char *)(temp_v0 + 0x3c03) = 0;
      *(unsigned char *)(temp_v0 + 0x3c06) = 0;
      *(unsigned char *)(temp_v0 + 0x3bdc) = 0;
      *(unsigned int *)(temp_v0 + 0x3b9c) = *(unsigned int *)(*(int *)(temp_v0 + 0x3bd4) + 0x240);
    }
    return;
  }
  return;
}

} /* extern "C" */
