/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e740` (_code @ 0x22e740, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e0c0(unsigned int);
int FUN_0023553c(int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_002bcfc0(unsigned int, int);
int FUN_002be624(int, unsigned char *, int, unsigned int);
int memClear(int, int);

extern unsigned char LAB_0022e800; /* 0x22e800 */
extern unsigned char LAB_0022e80c; /* 0x22e80c */

/* Supplied declaration required: FUN_0019e0c0. */
extern unsigned int dataTable17Sub0GetRecord(unsigned int *, int);
/* Supplied declaration required: FUN_0023553c. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: memClear. */


void FUN_0022e740(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  memClear(param_1 + 0x170,0x200);
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x15d3c)) {
    do {
      piVar1 = (int *)(param_1 + temp_v2 * 4 + 0x15d2c);
      if (param_2 == 0) {
        temp_v1 = *piVar1;
      }
      else {
        temp_v1 = *piVar1 + 4;
      }
      temp_v0 = dataTable17Sub0GetRecord((unsigned int *)&uStack_20,temp_v1);
      FUN_002bcfc0(temp_v0,0);
      FUN_002be624(param_1 + 0x170,&LAB_0022e80c,param_1 + 0x170,temp_v0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x15d3c));
  }
  temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x160),&LAB_0022e800);
  scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x16c),temp_v0);
  FUN_0019e0c0(*(unsigned int *)(param_1 + 0x16c));
  FUN_0023553c(1);
  return;
}

} /* extern "C" */
