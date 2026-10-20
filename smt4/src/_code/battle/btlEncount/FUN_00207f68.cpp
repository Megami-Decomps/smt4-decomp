/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207f68` (_code @ 0x207f68, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00270028(...);
int FUN_0029be5c(...);
int asdMemFree(...);
int asdMemAlloc(...);
int taskCreateDraw(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001fc6b4(...); /* 0x1fc6b4 */
extern unsigned char LAB_00208098; /* 0x208098 */
extern int btlEncountDestroy(...); /* 0x2d5034 */
extern unsigned int *g_btlEncount; /* 0x435d30 */

/* Supplied declaration required: FUN_00270028. */
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void FUN_00207f68(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  
  puVar1 = &LAB_00208098;
  taskCreateDraw(&LAB_00208098,2,0,0,FUN_001fc6b4,btlEncountDestroy,param_1,*param_1);
  param_1[2] = (unsigned int)puVar1;
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x14,1);
  g_btlEncount = puVar2;
  *puVar2 = 0;
  puVar2[3] = 0;
  if (puVar2[1] != 0) {
    asdMemFree();
    puVar2[1] = 0;
  }
  temp_v1 = 0x32;
  temp_v0 = 0;
  do {
    param_1[temp_v0 * 8 + 0xfd] = 0xffffffff;
    *(unsigned char *)((int)param_1 + temp_v0 * 0x20 + 0x3fa) = 0xff;
    temp_v1 = temp_v1 - 1;
    *(unsigned short *)(param_1 + temp_v0 * 8 + 0xfe) = 0xffff;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  FUN_0029be5c(2,1);
  if ((((*(char *)((int)param_1 + 0x44b7) == '\0') && (-1 < (int)param_1[0x30])) &&
      ((param_1[0x38] & 0x2000000) == 0)) &&
     (puVar5 = param_1 + 0x1128, (*puVar5 & 2) == 0 && (*puVar5 & 0x40000000) == 0)) {
    FUN_00270028(2);
    *puVar5 = *puVar5 | 0x40000000;
  }
  return;
}

} /* extern "C" */
