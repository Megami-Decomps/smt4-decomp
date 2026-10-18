/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157844` (_code @ 0x157844, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_004ead10; /* 0x4ead10 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0015d568. */
/* Supplied declaration required: FUN_0015d5b4. */
/* Supplied declaration required: FUN_0015e1a4. */
/* Supplied declaration required: FUN_002a22a8. */
/* Supplied declaration required: FUN_002a2d50. */
/* Supplied declaration required: FUN_002a3418. */
/* Supplied declaration required: FUN_002b4eb8. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_00157844(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  int temp_v1;
  unsigned int unaff_r6;
  unsigned long long temp_v2;
  
  temp_v1 = param_1 + param_2 * 0x10;
  if (*(int *)(temp_v1 + 0x30) < *(int *)(temp_v1 + 0x2c)) {
    FUN_002b4eb8(param_1,param_2);
  }
  FUN_002a22a8(temp_v1 + 0x24,0);
  temp_v1 = (int)(char)param_2;
  FUN_002a3418();
  if (param_3 != 0) {
    temp_v2 = romwright_piece_4_4(unaff_r5,unaff_r4);
    FUN_002c3aa8(0x4e6f58);
    temp_v0 = temp_v1 * 8;
    if (*(int *)(temp_v0 + 0x4e6f48) != 0) {
      FUN_0015d568();
    }
    if (*(int *)(temp_v0 + 0x4e6f4c) != 0) {
      FUN_0015d5b4();
    }
    *(unsigned int *)(temp_v0 + 0x4e6f48) = 0;
    *(unsigned int *)(temp_v0 + 0x4e6f4c) = 0;
    FUN_002a2d50(&DAT_004ead10,temp_v1,0,param_4,temp_v2,unaff_r6);
    FUN_002c3a24(0x4e6f58);
    FUN_002c3aa8(0x4e6f58);
    *(int *)(temp_v0 + 0x4e6f4c) = param_3;
    FUN_0015e1a4(param_3);
    FUN_002a2d50(&DAT_004ead10,temp_v1,1);
    FUN_002c3a24(0x4e6f58);
    return 1;
  }
  return 0;
}
