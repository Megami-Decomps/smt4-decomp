/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002726b8` (_code @ 0x2726b8, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdOperatorNew(void);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0024ebe4; /* 0x24ebe4 */
extern unsigned char LAB_002727b4; /* 0x2727b4 */
extern unsigned char LAB_002727c8; /* 0x2727c8 */
extern unsigned char LAB_002727dc; /* 0x2727dc */
extern unsigned char LAB_002727f4; /* 0x2727f4 */
extern int battleDrawRosterMarkerRects(...); /* 0x2987c4 */
extern int btlEffectSettingsReleaseTask(...); /* 0x2df6f0 */
extern int FUN_002df754(...); /* 0x2df754 */
extern int FUN_002fc0c8(...); /* 0x2fc0c8 */
extern unsigned char DAT_00557e84; /* 0x557e84 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int *DAT_0057aa08; /* 0x57aa08 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */


void FUN_002726b8(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  
  puVar1 = &LAB_002727b4;
  taskCreateDraw(&LAB_002727b4,4,0,0,&LAB_0024ebe4,btlEffectSettingsReleaseTask,param_1,*param_1);
  param_1[0x16] = (unsigned int)puVar1;
  taskCreateDraw(&LAB_002727c8,0x71,0,0,battleDrawRosterMarkerRects,0,param_1,puVar1);
  taskCreateDraw(&LAB_002727dc,0x7d,0,0,FUN_002df754,0,param_1,param_1[0x16]);
  taskCreateDraw(&LAB_002727f4,0xd9,0,0,FUN_002df754,0,param_1,param_1[0x16]);
  puVar2 = (unsigned int *)0x14;
  asdOperatorNew();
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00557e84;
    puVar2[1] = (unsigned int)param_1;
  }
  DAT_0057aa08 = puVar2;
  if (*(unsigned int **)(g_handleRegistry + 0x3c) != (unsigned int *)0x0) {
    **(unsigned int **)(g_handleRegistry + 0x3c) = (unsigned int)FUN_002fc0c8;
    return;
  }
  return;
}

} /* extern "C" */
