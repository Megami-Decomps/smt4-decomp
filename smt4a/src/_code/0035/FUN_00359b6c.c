/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359b6c` (_code @ 0x359b6c, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_00359c6c; /* 0x359c6c */
extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0016a0e8(void);
extern int FUN_0019c6bc(int);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0034a290. */


void FUN_00359b6c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int uStack_7c;
  int temp_v4;
  
  temp_v0 = DAT_0057f0c8;
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0057f0c8 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(DAT_0057f0c8 + 0x67c) = 1;
    *(unsigned char *)(temp_v0 + 0x5ea) = 1;
    temp_v1 = FUN_0016a0e8();
    temp_v2 = FUN_0019c6bc(param_1);
    if (temp_v2 != 0) {
      temp_v2 = param_1;
      FUN_0034a290();
      FUN_0020d164(&temp_v3,(*(unsigned int *)(temp_v2 + 0x44) & 0xffff) >> 0xb);
      FUN_003180c4(0x24,&temp_v3);
      FUN_00100388(&temp_v3,&LAB_00359c6c);
      FUN_003180c4(0x25,&temp_v3);
    }
    else {
      temp_v2 = param_1;
      FUN_001aba54();
      FUN_0020d164(&temp_v3,(*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb);
      FUN_003180c4(0x24,&temp_v3);
      FUN_00230c1c(&temp_v3,(*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5);
      FUN_003180c4(0x25,&temp_v3);
    }
    temp_v3 = 3;
    uStack_7c = temp_v1;
    temp_v4 = param_1;
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x678),2,0xffffffff,0);
  }
  return;
}
