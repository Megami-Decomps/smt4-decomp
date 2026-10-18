/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e198c` (_code @ 0x2e198c, 0xe8 bytes) from smt4.cxi.
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

extern int FUN_001dc57c(); /* 0x1dc57c */
extern unsigned char LAB_003f70c0; /* 0x3f70c0 */
extern unsigned char LAB_003f7188; /* 0x3f7188 */
extern unsigned char LAB_003f7214; /* 0x3f7214 */

extern unsigned int FUN_00248c0c(void);
/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002bcf34. */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c5468. */


void FUN_002e198c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  int temp_v6;
  
  FUN_002c3b00(param_1 + 0x420);
  *(unsigned int *)(param_1 + 0x6c) = 0;
  temp_v0 = FUN_00248c0c();
  *(unsigned int *)(param_1 + 0x70) = temp_v0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  temp_v0 = FUN_002c34a4(0x100,0x100,0,0x1000,0x1000,1);
  *(unsigned int *)(param_1 + 0x44c) = temp_v0;
  FUN_002bcf34(param_1 + 0x434,temp_v0,0x1000);
  temp_v2 = 4;
  temp_v3 = &LAB_003f70c0;
  temp_v4 = &LAB_003f7214;
  temp_v5 = &LAB_003f7188;
  temp_v1 = param_1 + 0x42c;
  temp_v6 = param_1;
  FUN_002bce50(temp_v1,&temp_v2,FUN_001dc57c,&temp_v6,
               *(int *)(param_1 + 0x43c) + *(int *)(param_1 + 0x440),0x11,0xfffffffe,0);
  if ((temp_v1 & 0x7e00000) != 0x600000 && (int)temp_v1 < 0) {
    FUN_002c5468();
  }
  return;
}
