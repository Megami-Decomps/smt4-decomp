/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376a2c` (_code @ 0x376a2c, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);
int asdOperatorNew(...);
int asdMemoryAllocTracked(int, int, int, int, int);
int jobIsValid(unsigned int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_00416b70(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00369280; /* 0x369280 */
extern unsigned char LAB_00376bbc; /* 0x376bbc */
extern unsigned char LAB_00376bd8; /* 0x376bd8 */
extern unsigned char LAB_00376bf8; /* 0x376bf8 */
extern int FUN_003a3ae0(...); /* 0x3a3ae0 */
extern int FUN_003ae770(...); /* 0x3ae770 */
extern int FUN_003ae7cc(...); /* 0x3ae7cc */
extern unsigned int *DAT_00573c50; /* 0x573c50 */

/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: jobIsValid. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_00416b70. */


void FUN_00376a2c(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  jobIsValid(param_1[0x14]);
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x1cc,1);
  puVar2 = &LAB_00376bbc;
  DAT_00573c50 = puVar1;
  taskCreateDraw(&LAB_00376bbc,4,0,0,&LAB_00369280,FUN_003a3ae0,param_1,*param_1);
  param_1[0x14] = (unsigned int)puVar2;
  taskCreateDraw(&LAB_00376bd8,0x71,0,0,FUN_003ae7cc,0,0,puVar2);
  taskCreateDraw(&LAB_00376bf8,0x75,0,0,FUN_003ae770,0,0,param_1[0x14]);
  puVar1 = DAT_00573c50;
  *DAT_00573c50 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0xffffffff;
  puVar1[7] = 0;
  if (puVar1[10] != 0) {
    scrScriptProcessDestroy();
    puVar1[10] = 0;
  }
  if (puVar1[9] != 0) {
    asdMemFree();
    puVar1[9] = 0;
  }
  temp_v0 = 0x860;
  puVar1[0xb] = 0;
  asdOperatorNew(0x860,&DAT_00573c50);
  if (temp_v0 != 0) {
    FUN_00416b70();
  }
  puVar1[0xc] = temp_v0;
  return;
}

} /* extern "C" */
