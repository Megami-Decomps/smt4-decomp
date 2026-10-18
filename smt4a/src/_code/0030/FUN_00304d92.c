/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00304d92` (_code @ 0x304d92, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0013425c. */
/* Supplied declaration required: FUN_00134338. */
/* Supplied declaration required: FUN_002e9ff4. */
extern int FUN_002ed28c(int, unsigned int *);
/* Supplied declaration required: FUN_0030d358. */
/* Supplied declaration required: FUN_0030d36a. */
/* Supplied declaration required: FUN_00310ff2. */


unsigned long long FUN_00304d92(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int iStack_20;
  int iStack_1c;
  unsigned int uStack_18;
  unsigned int temp_v2;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  temp_v2 = param_4;
  FUN_0030d36a(param_2);
  temp_v0 = FUN_002ed28c(param_1,&temp_v2);
  if (temp_v0 != 0) {
    FUN_00134338(param_2,temp_v2);
    for (temp_v1 = 0; temp_v1 < temp_v2; temp_v1 = temp_v1 + 1) {
      if (*(char *)(param_1 + 4) != '\0') {
        return romwright_piece_4_4(iStack_1c,iStack_20);
      }
      FUN_002e9ff4(&iStack_20);
      FUN_00310ff2(param_1,&iStack_20);
      if (*(char *)(param_1 + 4) != '\0') {
        FUN_0030d36a();
        break;
      }
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0xc;
        FUN_0030d358(param_2,temp_v0);
      }
      else {
        FUN_0013425c(param_2,temp_v0,&iStack_20);
      }
    }
  }
  return romwright_piece_4_4(iStack_1c,iStack_20);
}
