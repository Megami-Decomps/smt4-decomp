/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a76b8` (_code @ 0x3a76b8, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022de74(int *);
int FUN_00233240(int *, int);
int FUN_00297060(int, int);
int FUN_0029ce60(unsigned int, int, int);
int FUN_0029d770(int, unsigned char [1548]);
int FUN_0029da34(...);
int FUN_0029e620(unsigned int, int);
int FUN_0029e648(int, int);
int buttonHelpSetPreset(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp620; /* 0x620: local_620 */
} param_1_stack;

extern unsigned char DAT_0043d9c8; /* 0x43d9c8 */

extern int FUN_0022ddd0(int);
/* Supplied declaration required: FUN_0022de74. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0023360c(int *);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_0029ce60. */
/* Supplied declaration required: FUN_0029d770. */
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029e648. */
extern unsigned int FUN_002b066c(unsigned short);
/* Supplied declaration required: buttonHelpSetPreset. */


void FUN_003a76b8(int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [1548];
  
  temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1);
  if ((temp_v1 != 0) && (temp_v1 = FUN_0022ddd0((int)param_1 + 0x96), temp_v1 == 0)) {
    temp_v1 = param_1[0x166];
    FUN_00297060(temp_v1,param_1[0x167]);
    param_1[0x168] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    param_1[5] = 1;
    param_1[6] = 0;
    *(unsigned char *)((int)param_1 + 0x5a5) = 1;
    if ((char)param_1[0x169] != '\0') {
      temp_v1 = FUN_0023360c(param_1 + 8);
      temp_v1 = param_1[temp_v1 * 8 + 0x16b];
      buttonHelpSetPreset(0x4c);
      temp_v2 = FUN_002b066c((short)temp_v1);
      FUN_0029da34(0,1,(short)temp_v1,temp_v2);
    }
    else {
      temp_v1 = FUN_0023360c(param_1 + 8);
      temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 8 + 0x16b);
      temp_v3 = (unsigned int)temp_v0;
      FUN_0029ce60(temp_v3,*(unsigned char *)((int)param_1 + 0x5a5),0);
      FUN_0029e648(1,0);
      FUN_0029e620(-temp_v3,0);
      buttonHelpSetPreset(0x2d);
      FUN_0029d770(temp_v0,temp_v4);
      FUN_0029da34(0,1,temp_v0,temp_v4);
    }
    FUN_00233240(param_1 + 0x37,0);
    FUN_00233240(param_1 + 0x37,1);
    (*(unsigned int *)((unsigned char *)&DAT_0043d9c8 + 0x4)) = 0xffffffff;
    FUN_0022de74(param_1);
    return;
  }
  return;
}

} /* extern "C" */
