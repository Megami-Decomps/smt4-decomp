/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c940` (_code @ 0x34c940, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0020b908. */
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_002c8550. */
/* Supplied declaration required: FUN_002f3bc4. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_003343c0. */
/* Supplied declaration required: FUN_00334434. */
/* Supplied declaration required: FUN_0033449c. */
extern unsigned int FUN_0034a9ac(void);
/* Supplied declaration required: FUN_0037c8b4. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_0037e1b0. */


void FUN_0034c940(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0057f290;
  *(unsigned char *)(DAT_0057f290 + 0x9071) = 1;
  FUN_002f3bc4(temp_v0 + 0x669c,param_1,0);
  temp_v2 = temp_v0 + param_1 * 8;
  *(unsigned int *)(temp_v0 + 0x8b60) = *(unsigned int *)(temp_v0 + 0x66d0);
  *(unsigned int *)(temp_v0 + 0x8b64) = *(unsigned int *)(temp_v0 + 0x66d4);
  *(unsigned int *)(temp_v0 + 0x8b68) = *(unsigned int *)(temp_v0 + 0x66d8);
  *(unsigned int *)(temp_v0 + 0x8b6c) = *(unsigned int *)(temp_v0 + 0x66dc);
  temp_v1 = *(unsigned int *)(temp_v2 + 0x907c) & 0x1fffc;
  temp_v3 = (*(unsigned int *)(temp_v0 + 0x13bc) & 0xfffe0003) | temp_v1;
  *(unsigned int *)(temp_v0 + 0x13bc) = temp_v3;
  temp_v4 = *(unsigned int *)(temp_v2 + 0x9078) & 0x7fff;
  *(unsigned int *)(temp_v0 + 0x13bc) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x13b8) = temp_v4 | (*(unsigned int *)(temp_v0 + 0x13b8) & 0xffff8000);
  *(unsigned int *)(temp_v0 + 0x13b8) = temp_v4 | (*(unsigned int *)(temp_v2 + 0x9078) & 0x3fff8000) | 0x40000000;
  *(unsigned int *)(temp_v0 + 0x13bc) = temp_v1 | 1;
  FUN_0033449c(1);
  FUN_0031f718((int)*(short *)(temp_v0 + 0x66fe),0);
  FUN_00334434(temp_v0 + 0x669c,0);
  FUN_003343c0(0);
  FUN_002c8550(9);
  FUN_0037e1b0(0);
  temp_v1 = FUN_0034a9ac();
  FUN_002a7324(temp_v1 != *(unsigned short *)(temp_v0 + 0x66fe));
  if (0 < *(int *)(temp_v0 + 0x418)) {
    FUN_0037c8e4(1,0);
    FUN_0037c8b4(-*(int *)(temp_v0 + 0x418),0);
  }
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_002c8550(8);
  FUN_0020b908(0x13,1);
  return;
}
