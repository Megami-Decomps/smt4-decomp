/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bf44` (_code @ 0x10bf44, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00141bdc(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern int iRam004e1f6c; /* 0x4e1f6c */

/* Supplied declaration required: FUN_00141bdc. */
extern int FUN_002bf684(unsigned char *);


int FUN_0010bf44(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bf684(&DAT_004e1f68);
  temp_v1 = iRam004e1f6c;
  if (temp_v0 == 0) {
    return 0;
  }
  if (*(int *)(iRam004e1f6c + 0x38) != 0) {
    temp_v0 = *(int *)(iRam004e1f6c + 0x3c);
    FUN_00141bdc(temp_v0,param_1);
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

} /* extern "C" */
