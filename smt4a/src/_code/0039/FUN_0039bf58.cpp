/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bf58` (_code @ 0x39bf58, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(...);
int asdProcessCreateSimple(...);
int FUN_00151408(...);
int taskCreateDraw(...);
int FUN_001527d8(...);
int asdOperatorNew(...);
int asdTMTexLoadMainHeap(...);
int FUN_002804b0(...);
int FUN_003f5268(...);
int FUN_003f84e8(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0035d080; /* 0x35d080 */
extern unsigned char LAB_0037d9b8; /* 0x37d9b8 */
extern unsigned int *DAT_0057f258; /* 0x57f258 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_003f5268. */
/* Supplied declaration required: FUN_003f84e8. */


void FUN_0039bf58(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x6d8;
  asdOperatorNew();
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0x178] = 0;
    puVar1[4] = 0;
  }
  pcVar2 = "NewHightWayInfo PROC";
  DAT_0057f258 = puVar1;
  asdProcessCreateSimple("NewHightWayInfo PROC",4,0,0,&LAB_0035d080,0,0);
  *puVar1 = (unsigned int)pcVar2;
  taskCreateDraw("NewHightWayInfo UL",0x81,0,0,&LAB_0037d9b8,0,0,pcVar2);
  taskCreateDraw("NewHightWayInfo UR",0xdd,0,0,&LAB_0037d9b8,0,0,*puVar1);
  puVar1[1] = param_1;
  FUN_002804b0("event/PartnerTopic/NewHighWayData.tbb",puVar1 + 4,0);
  FUN_002804b0("event/PartnerTopic/NewHighWayMsg.mbm",puVar1 + 10,0);
  asdTMTexTableLoadTmx(0x31,0);
  temp_v1 = 0;
  do {
    asdTMTexLoadMainHeap(0x31,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v0 = spriteHandleCreate(0);
  puVar1[0x176] = temp_v0;
  FUN_001527d8(temp_v0,0xffffffff);
  FUN_00151408(puVar1[0x176],0,0x646464ff);
  FUN_003f84e8(puVar1);
  *(unsigned char *)(puVar1 + 0x175) = 1;
  FUN_003f5268(puVar1,9,0);
  return;
}

} /* extern "C" */
