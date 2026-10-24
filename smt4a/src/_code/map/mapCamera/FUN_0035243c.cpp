/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035243c` (_code @ 0x35243c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [68], unsigned char *, unsigned int, unsigned int, unsigned int);
int FUN_0013c174(unsigned char [68], int *, int);
int FUN_00178b04(int, unsigned char *, int);
int settings5BSetValue(int);
int controllerApplyAtUnitScale(void);
int _ZN9Obj557af8C1EPK21AsdAnimCameraResource(void);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern unsigned char LAB_00352518; /* 0x352518 */
extern unsigned char LAB_00352538; /* 0x352538 */
extern int g_lmapView; /* 0x5806a4 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_00178b04. */
extern int settings5BGetValue(void);
/* Supplied declaration required: settings5BSetValue. */
/* Supplied declaration required: controllerApplyAtUnitScale. */
/* Supplied declaration required: _ZN9Obj557af8C1EPK21AsdAnimCameraResource. */


void FUN_0035243c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int uStack_5c;
  unsigned char temp_v2 [68];
  
  if (*(int **)(g_lmapView + 700) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(g_lmapView + 700) + 4))();
    temp_v0 = g_lmapView;
    puVar2 = (unsigned int *)(g_lmapView + 0x2c0);
    *(unsigned int *)(g_lmapView + 700) = 0;
    temp_v1 = *puVar2;
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x2c4);
    *(unsigned int *)(temp_v0 + 0x40) = *(unsigned int *)(temp_v0 + 0x2c8);
    *(unsigned int *)(temp_v0 + 0x44) = *(unsigned int *)(temp_v0 + 0x2cc);
    *(unsigned int *)(temp_v0 + 0x48) = *(unsigned int *)(temp_v0 + 0x2d0);
    *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x2d4);
    *(unsigned char *)(temp_v0 + 0x2b8) = 0;
    *(unsigned char *)(temp_v0 + 0x304) = 0;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x2c4);
    *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x2c8);
    *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x2cc);
    *(unsigned int *)(temp_v0 + 0x60) = *(unsigned int *)(temp_v0 + 0x2d0);
    *(unsigned int *)(temp_v0 + 100) = *(unsigned int *)(temp_v0 + 0x2d4);
  }
  uStack_5c = 0;
  textFormatBuffer(temp_v2,&LAB_00352518,param_1,param_1,param_2);
  FUN_0013c174(temp_v2,&uStack_5c,1);
  temp_v0 = 0x48;
  FUN_00178b04(0x48,&LAB_00352538,0x15ad);
  if (temp_v0 != 0) {
    _ZN9Obj557af8C1EPK21AsdAnimCameraResource();
  }
  *(int *)(g_lmapView + 700) = temp_v0;
  controllerApplyAtUnitScale();
  temp_v0 = settings5BGetValue();
  if (temp_v0 != 0) {
    settings5BSetValue(0);
  }
  return;
}

} /* extern "C" */
