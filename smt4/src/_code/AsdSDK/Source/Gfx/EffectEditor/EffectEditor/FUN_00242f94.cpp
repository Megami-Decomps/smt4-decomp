/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00242f94` (_code @ 0x242f94, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effEditorNodeChainApply(int);
int FUN_0024dd80(int);
int FUN_0024dd90(int);
int effMenuListAppend(void);
int memCopy(...);
int padIsButtonPressed(...);
int memAlloc(int, int, int, int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char DAT_00400003; /* 0x400003 */
extern unsigned char DAT_0044eb1c; /* 0x44eb1c */

/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: FUN_0024dd80. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: effMenuListAppend. */
/* Supplied declaration required: memCopy. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: memAlloc. */


unsigned char * FUN_00242f94(unsigned long long *param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  memCopy(param_1,&DAT_0044eb1c,8);
  if ((*(signed char *)((unsigned char *)&DAT_0044eb1c - 0x93)) == '\0') {
    FUN_0024dd90(param_3);
  }
  memCopy(&DAT_0044eb1c,param_1,8);
  effEditorNodeChainApply(param_3);
  temp_v3 = *param_1;
  temp_v1 = 0x43360000;
  temp_v2 = 0x42200000;
  temp_v0 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
  *(int *)(temp_v0 + 0x10) = (int)temp_v3;
  *(int *)(temp_v0 + 0x14) = (int)((unsigned long long)temp_v3 >> 0x20);
  *(unsigned int *)(temp_v0 + 4) = 0xc;
  *(unsigned int *)(temp_v0 + 0x18) = param_2;
  effMenuListAppend();
  temp_v0 = padIsButtonPressed(1);
  if (temp_v0 == 0) {
    FUN_0024dd80(1);
    temp_v0 = padIsButtonPressed();
    if (temp_v0 == 0) {
      if ((*(unsigned int *)(param_3 + 0x10) & 8) == 0) {
        return &(*(unsigned char *)((unsigned char *)&DAT_00400003 - 0x2));
      }
      return &DAT_00400003;
    }
  }
  return (unsigned char *)0x400000;
}

} /* extern "C" */
