/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416d30` (_code @ 0x416d30, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00180118(...);
int FUN_00184310(...);
int asdLoadFileAsyncSimple(...);
int libc_strcpy(...);
int FUN_003180c4(...);

/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00184310. */
extern int saveSlotFindById(unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern char *dataTableGetEntries(void);
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_003180c4. */


void FUN_00416d30(int param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  unsigned char temp_v5 [32];
  unsigned char temp_v6 [68];
  
  asdLoadFileAsyncSimple("battle/Result.bf",param_1 + 0x18,0);
  asdLoadFileAsyncSimple("battle/ResultMsg.mbm",param_1 + 0x20,0);
  if ((-1 < (int)*(unsigned int *)(param_1 + 0x34)) &&
     (temp_v1 = saveSlotFindById(*(unsigned int *)(param_1 + 0x34) & 0xffff), temp_v1 != 0)) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
    FUN_00180118(temp_v2);
    libc_strcpy(temp_v5,temp_v2);
    FUN_003180c4(8,temp_v5);
    temp_v3 = FUN_0014bf3c(*(unsigned short *)(temp_v1 + 0x62),0);
    libc_strcpy(temp_v5,temp_v3);
    FUN_003180c4(0x10,temp_v5);
    asdLoadFileAsyncSimple("battle/DevilLvUp.bf",param_1 + 0x24,0);
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
    FUN_00184310();
    temp_v0 = *(char *)(temp_v2 + 0x38);
    temp_v3 = dataTableGet(0x25,0);
    pcVar5 = (char *)dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v3);
    temp_v4 = 0;
    if (temp_v4 < temp_v2) {
      do {
        if (*pcVar5 == temp_v0) {
          textFormatBuffer(temp_v6,"battle/DevilMsg/%s.mbm",pcVar5 + 1);
          asdLoadFileAsyncSimple(temp_v6,param_1 + 0x2c,0);
          return;
        }
        temp_v4 = temp_v4 + 1;
        pcVar5 = pcVar5 + 0x20;
      } while (temp_v4 < temp_v2);
    }
    pcVar5 = (char *)0x0;
    textFormatBuffer(temp_v6,"battle/DevilMsg/%s.mbm",pcVar5 + 1);
    asdLoadFileAsyncSimple(temp_v6,param_1 + 0x2c,0);
  }
  return;
}

} /* extern "C" */
