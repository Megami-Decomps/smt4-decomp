/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a0d4` (_code @ 0x11a0d4, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126170(unsigned int, int);
int FUN_002aead8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern int DAT_0043dfc0; /* 0x43dfc0 */

extern int FUN_00126160(unsigned int);
/* Supplied declaration required: FUN_00126170. */
/* Supplied declaration required: FUN_002aead8. */
extern int FUN_002b7174(unsigned int);
extern int FUN_002bf244(unsigned int);


unsigned int
FUN_0011a0d4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

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
      temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v3 + 0x630));
      if ((temp_v1 != 0) && (temp_v1 = FUN_002b7174(*(unsigned int *)(temp_v3 + 0x630)), temp_v1 == param_1))
      {
        temp_v1 = FUN_00126160(*(unsigned int *)(temp_v3 + 0x630));
        temp_v4 = (unsigned int)temp_v5;
        if (temp_v1 == 0) {
          FUN_00126170(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x630),1);
          FUN_002aead8(*(unsigned int *)(temp_v3 + 0x630),param_2,param_3,param_4,temp_v4);
          return 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}

} /* extern "C" */
