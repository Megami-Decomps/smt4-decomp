/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119ff4` (_code @ 0x119ff4, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern int DAT_0043dfc0; /* 0x43dfc0 */

extern int FUN_00126084(unsigned int);
/* Supplied declaration required: FUN_00126094. */
/* Supplied declaration required: FUN_002aed6c. */
extern int FUN_002b74b4(unsigned int);
extern int FUN_002bf41c(unsigned int);


unsigned int
FUN_00119ff4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  
  temp_v0 = DAT_0043dfc0;
  temp_v5 = (unsigned long long)param_5;
  if (DAT_0043dfc0 != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v3 + 0x630));
      if ((temp_v1 != 0) && (temp_v1 = FUN_002b74b4(*(unsigned int *)(temp_v3 + 0x630)), temp_v1 == param_1))
      {
        temp_v1 = FUN_00126084(*(unsigned int *)(temp_v3 + 0x630));
        temp_v4 = (unsigned int)temp_v5;
        if (temp_v1 == 0) {
          FUN_00126094(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x630),1);
          FUN_002aed6c(*(unsigned int *)(temp_v3 + 0x630),param_2,param_3,param_4,temp_v4);
          return 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}
