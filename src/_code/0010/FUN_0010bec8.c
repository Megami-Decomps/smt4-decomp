/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bec8` (_code @ 0x10bec8, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern int iRam004e1f6c; /* 0x4e1f6c */

/* Supplied declaration required: FUN_0014154c. */
extern int FUN_002bf85c(unsigned char *);


int FUN_0010bec8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bf85c(&DAT_004e1f68);
  temp_v1 = iRam004e1f6c;
  if (temp_v0 == 0) {
    return 0;
  }
  if (*(int *)(iRam004e1f6c + 0x38) != 0) {
    temp_v0 = *(int *)(iRam004e1f6c + 0x3c);
    FUN_0014154c(temp_v0,param_1);
    if (temp_v0 != -1) {
      if (temp_v0 == -1) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = *(int *)(temp_v1 + 0x38) + *(int *)(*(int *)(temp_v1 + 0x38) + 4);
        if (temp_v1 != 0) {
          temp_v1 = temp_v1 + *(int *)(temp_v1 + temp_v0 * 0xc + 8);
        }
      }
      return temp_v1;
    }
  }
  return 0;
}
