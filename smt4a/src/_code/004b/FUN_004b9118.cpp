/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b9118` (_code @ 0x4b9118, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1438(int, unsigned short [6]);
int FUN_00324c48(...);
int FUN_004731d8(void);

/* stack frame of param_1: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned short sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_005f1604; /* 0x5f1604 */

/* Supplied declaration required: FUN_001d1438. */
/* Supplied declaration required: FUN_00324c48. */
extern char *FUN_004731a4(void);
/* Supplied declaration required: FUN_004731d8. */


void FUN_004b9118(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned short temp_v2 [6];
  
  pcVar2 = (char *)FUN_004731a4();
  temp_v0 = *pcVar2;
  if (temp_v0 != '\x01') {
    if (temp_v0 == '\x02') {
      FUN_00324c48((unsigned char)pcVar2[1] + 100,pcVar2[2],0xffffffff);
      DAT_005f1604 = 0xffffffff;
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x80010;
      FUN_004731d8();
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    if (temp_v0 != '\x03') {
      FUN_004731d8();
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    temp_v2[1] = 0;
    temp_v2[2] = 0;
    temp_v2[0] = (unsigned short)(unsigned char)pcVar2[1];
    FUN_001d1438(param_1 + 0x42,temp_v2);
    temp_v1 = *(unsigned int *)(param_1 + 0x20) | 0x10;
  }
  else {
    FUN_00324c48(pcVar2[1],pcVar2[2],pcVar2[3]);
    temp_v1 = *(unsigned int *)(param_1 + 0x20) | 0x80010;
  }
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  FUN_004731d8();
  *(unsigned int *)(param_1 + 0x28) = 5;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  return;
}

} /* extern "C" */
