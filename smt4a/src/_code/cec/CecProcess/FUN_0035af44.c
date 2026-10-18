/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035af44` (_code @ 0x35af44, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0028196c(); /* 0x28196c */
extern unsigned char LAB_00514a44; /* 0x514a44 */
extern unsigned char LAB_00514afc; /* 0x514afc */
extern unsigned char LAB_00514b7c; /* 0x514b7c */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0016dfc4. */
/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */
extern unsigned int FUN_003166c0(void);


void FUN_0035af44(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  int temp_v6;
  
  FUN_00188b60(param_1 + 0xd28);
  *(unsigned int *)(param_1 + 0x84) = 0;
  temp_v0 = FUN_003166c0();
  *(unsigned int *)(param_1 + 0x88) = temp_v0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0;
  temp_v0 = 0x100;
  FUN_00167ab4(0x100,0x100,0,0x1000,0x1000,1);
  *(unsigned int *)(param_1 + 0xd54) = temp_v0;
  FUN_0016dfc4(param_1 + 0xd3c,temp_v0,0x1000);
  temp_v2 = 4;
  temp_v3 = &LAB_00514a44;
  temp_v4 = &LAB_00514b7c;
  temp_v5 = &LAB_00514afc;
  temp_v1 = param_1 + 0xd34;
  temp_v6 = param_1;
  FUN_002fb0d4(temp_v1,&temp_v2,FUN_0028196c,&temp_v6,
               *(int *)(param_1 + 0xd44) + *(int *)(param_1 + 0xd48),0x11,0xfffffffe,0);
  if ((temp_v1 & 0x7e00000) != 0x600000 && (int)temp_v1 < 0) {
    FUN_002e3140();
  }
  return;
}
