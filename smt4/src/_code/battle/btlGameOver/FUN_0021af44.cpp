/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021af44` (_code @ 0x21af44, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0020ef14(...); /* 0x20ef14 */
extern unsigned char LAB_0021b064; /* 0x21b064 */
extern unsigned char LAB_0021b07c; /* 0x21b07c */
extern unsigned char LAB_0021b094; /* 0x21b094 */
extern int btlGameOverRunForJob(...); /* 0x2ca030 */
extern int btlGameOverDestroy(...); /* 0x2e06b4 */
extern int g_btlGameOver; /* 0x435d60 */

extern int gameDataBlocksGetSaveData(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void FUN_0021af44(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = &LAB_0021b064;
  taskCreateDraw(&LAB_0021b064,2,0,0,FUN_0020ef14,btlGameOverDestroy,param_1,*param_1);
  param_1[0xb] = (unsigned int)puVar1;
  taskCreateDraw(&LAB_0021b07c,0x7a,0,0,btlGameOverRunForJob,0,param_1,puVar1);
  taskCreateDraw(&LAB_0021b094,0xd8,0,0,btlGameOverRunForJob,0,param_1,param_1[0xb]);
  temp_v0 = 0x100;
  asdMemAlloc(0x100,0x100,0,0x40,1);
  g_btlGameOver = temp_v0;
  temp_v1 = gameDataBlocksGetSaveData();
  if ((*(char *)(temp_v1 + 0x24b29) != '\0') && (temp_v1 = gameFlagIsSet(0x557), temp_v1 == 0)) {
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
    param_1[0x1128] = param_1[0x1128] | 0x80000000;
  }
  return;
}

} /* extern "C" */
