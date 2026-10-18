/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a66c4` (_code @ 0x4a66c4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0023b258(void);
extern int FUN_002c7c54(void);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0035d8a4. */
/* Supplied declaration required: FUN_004a6610. */
extern int FUN_004cfe4c(int);


void FUN_004a66c4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0023b258();
  if (temp_v0 != 0) {
    FUN_0035d8a4();
    if ((*(char *)(param_1 + 0x860) == '\x01') || (*(char *)(param_1 + 0x860) != '\0')) {
      FUN_001681cc(0x48);
    }
    else {
      temp_v0 = FUN_004cfe4c(param_1 + 0x20);
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x868);
      FUN_00184310();
      if ((*(unsigned char *)(temp_v1 + 0xb3) & 2) == 0) {
        temp_v2 = 0x30;
      }
      else {
        temp_v2 = 0x121;
      }
      FUN_001681cc(temp_v2);
    }
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  else {
    temp_v0 = FUN_002c7c54();
    if (temp_v0 != 0x69) {
      FUN_004a6610(param_1,1);
      return;
    }
  }
  return;
}
