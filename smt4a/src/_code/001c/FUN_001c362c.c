/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c362c` (_code @ 0x1c362c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_005c1d20; /* 0x5c1d20 */
extern unsigned int DAT_0064776c; /* 0x64776c */
extern unsigned int *DAT_00647770; /* 0x647770 */
extern unsigned int *DAT_00647774; /* 0x647774 */

extern int FUN_002eba64(unsigned int *);


void FUN_001c362c(unsigned int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  
  if (((DAT_005c1d20 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c1d20), temp_v0 != 0)) {
    DAT_00647770 = (unsigned int *)&DAT_00647770;
    DAT_00647774 = (unsigned int *)&DAT_00647770;
    DAT_0064776c = 0;
  }
  puVar1 = DAT_00647770;
  if (((DAT_005c1d20 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c1d20), temp_v0 != 0)) {
    DAT_00647770 = (unsigned int *)&DAT_00647770;
    DAT_00647774 = (unsigned int *)&DAT_00647770;
    DAT_0064776c = 0;
  }
  while ((unsigned int **)puVar1 != &DAT_00647770) {
    puVar3 = (unsigned int *)*puVar1;
    (**(romwright_code **)(puVar1[-1] + 8))(puVar1 + -1,param_2,param_2 + param_3);
    puVar1 = puVar3;
    if (((DAT_005c1d20 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c1d20), temp_v0 != 0)) {
      DAT_00647770 = (unsigned int *)&DAT_00647770;
      DAT_00647774 = (unsigned int *)&DAT_00647770;
      DAT_0064776c = 0;
    }
  }
  return;
}
