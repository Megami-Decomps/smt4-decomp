/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014015c` (_code @ 0x14015c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_0063e944; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */

/* Supplied declaration required: FUN_00163060. */


unsigned int FUN_0014015c(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v0 = DAT_0063e944;
  if (0 < DAT_0063e948) {
    do {
      if (temp_v0 == 0) break;
      if (*(int *)(temp_v0 + 0x18) == param_1) {
        return 0;
      }
      temp_v0 = *(int *)(temp_v0 + 0x14);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_0063e948);
  }
  temp_v1 = 0x100;
  FUN_00163060(0x100,0x100,0,0x1c,1);
  *(int *)(temp_v1 + 0x18) = param_1;
  *(unsigned char *)(temp_v1 + 0xd) = 0;
  *(unsigned char *)(temp_v1 + 0xf) = param_2;
  temp_v0 = DAT_0063e944;
  if (DAT_0063e944 != 0) {
    do {
      temp_v2 = temp_v0;
      temp_v0 = *(int *)(temp_v2 + 0x14);
    } while (*(int *)(temp_v2 + 0x14) != 0);
    *(int *)(temp_v1 + 0x10) = temp_v2;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    *(int *)(temp_v2 + 0x14) = temp_v1;
  }
  else {
    *(unsigned int *)(temp_v1 + 0x10) = 0;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
    DAT_0063e944 = temp_v1;
  }
  DAT_0063e948 = DAT_0063e948 + 1;
  return 1;
}
