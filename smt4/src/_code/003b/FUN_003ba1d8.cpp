/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba1d8` (_code @ 0x3ba1d8, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289508(void);
int FUN_00289574(...);
int FUN_002bd808(int, unsigned short [6]);

/* stack frame of param_1: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned short sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_00289508. */
/* Supplied declaration required: FUN_00289574. */
extern char *FUN_00289594(void);
/* Supplied declaration required: FUN_002bd808. */


void FUN_003ba1d8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned short temp_v2 [6];
  
  pcVar2 = (char *)FUN_00289594();
  temp_v0 = *pcVar2;
  if (temp_v0 != '\x01') {
    if (temp_v0 == '\x02') {
      FUN_00289574((unsigned char)pcVar2[1] + 100,pcVar2[2],0xffffffff);
      (*(unsigned int *)((unsigned char *)&DAT_0049f91c + 0x8)) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x80010;
      FUN_00289508();
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    if (temp_v0 != '\x03') {
      FUN_00289508();
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    temp_v2[1] = 0;
    temp_v2[2] = 0;
    temp_v2[0] = (unsigned short)(unsigned char)pcVar2[1];
    FUN_002bd808(param_1 + 0x42,temp_v2);
    temp_v1 = *(unsigned int *)(param_1 + 0x20) | 0x10;
  }
  else {
    FUN_00289574(pcVar2[1],pcVar2[2],pcVar2[3]);
    temp_v1 = *(unsigned int *)(param_1 + 0x20) | 0x80010;
  }
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  FUN_00289508();
  *(unsigned int *)(param_1 + 0x28) = 5;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  return;
}

} /* extern "C" */
