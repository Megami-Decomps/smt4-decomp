/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae110` (_code @ 0x3ae110, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd7c0(unsigned int, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
} param_4_stack;

extern int DAT_00580ca0; /* 0x580ca0 */

/* Supplied declaration required: FUN_003fd7c0. */


void FUN_003ae110(int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = DAT_00580ca0 + temp_v0 * 0x18;
    if ((*(char *)(temp_v1 + 0x8c4) != '\0') && (*(short *)(temp_v1 + 0x8c8) == param_1)) {
      FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v1 + 0x8cc) + 4),param_2,2);
      *(unsigned int *)(temp_v1 + 0x8d0) = param_3;
      *(short *)(temp_v1 + 0x8c6) = (short)param_2;
      *(unsigned char *)(temp_v1 + 0x8d4) = 1;
      *(unsigned short *)(temp_v1 + 0x8d6) = param_4;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  return;
}

} /* extern "C" */
