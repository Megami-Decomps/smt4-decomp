/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153630` (_code @ 0x153630, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int DAT_0057f4c4; /* 0x57f4c4 */

extern int FUN_00163e40(unsigned int);
extern int FUN_00166f90(unsigned int);
/* Supplied declaration required: FUN_0019c6cc. */


unsigned int
FUN_00153630(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v0 = DAT_0057f4c4;
  temp_v4 = (unsigned long long)param_5;
  if (DAT_0057f4c4 != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v3 + 0x634));
      if ((temp_v1 != 0) && (temp_v1 = FUN_00166f90(*(unsigned int *)(temp_v3 + 0x634)), temp_v1 == param_1))
      {
        FUN_0019c6cc(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x634),param_2,param_3,param_4,(int)temp_v4);
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}
