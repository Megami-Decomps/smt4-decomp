/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191df8` (_code @ 0x191df8, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027f3dc(...);
int FUN_002b7bca(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001d1d78(...); /* 0x1d1d78 */
extern int FUN_001f6524(...); /* 0x1f6524 */
extern int FUN_002073e4(...); /* 0x2073e4 */
extern int FUN_00219720(...); /* 0x219720 */
extern int FUN_002c6e90(...); /* 0x2c6e90 */
extern int FUN_002dcf14(...); /* 0x2dcf14 */
extern int FUN_002e4b30(...); /* 0x2e4b30 */
extern int FUN_002f28c4(...); /* 0x2f28c4 */

/* Supplied declaration required: FUN_0027f3dc. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_00191df8(int *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = *param_1;
  if (*(char *)(temp_v1 + 0x420) != '\x01') {
    temp_v0 = FUN_002a0d0c();
    pbVar3 = (unsigned char *)(temp_v0 + 0x11);
  }
  else {
    temp_v0 = FUN_002a0d0c();
    pbVar3 = (unsigned char *)(temp_v0 + 0x12);
  }
  temp_v2 = ~(*pbVar3 >> 7) & 1;
  if ((*pbVar3 & 0x7f) == 1) {
    if (temp_v2 != 0) {
      FUN_002b7bca(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002073e4);
    }
    else {
      FUN_002b7bca(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002e4b30);
    }
  }
  if ((*pbVar3 & 0x7f) == 2) {
    if (temp_v2 != 0) {
      FUN_002b7bca(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_001d1d78);
    }
    else {
      FUN_002b7bca(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002c6e90);
    }
  }
  if ((*pbVar3 & 0x7f) == 0x31) {
    if (temp_v2 != 0) {
      FUN_002b7bca(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_00219720);
    }
    else {
      FUN_002b7bca(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002f28c4);
    }
  }
  if ((*pbVar3 & 0x7f) != 3) {
    return;
  }
  if (temp_v2 == 0) {
    FUN_0027f3dc(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_002dcf14);
    return;
  }
  FUN_0027f3dc(temp_v1 + 0x6278,*(unsigned int *)(temp_v1 + 0x6670),2,FUN_001f6524);
  return;
}

} /* extern "C" */
