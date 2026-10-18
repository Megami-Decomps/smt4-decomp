/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0558` (_code @ 0x3b0558, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_0020b718. */
/* Supplied declaration required: FUN_0020d934. */
/* Supplied declaration required: FUN_0023fc38. */
/* Supplied declaration required: FUN_002ade88. */


void FUN_003b0558(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0057f268;
  temp_v1 = FUN_001ab888();
  if (temp_v0 == 0) {
    return;
  }
  temp_v2 = *(int *)(temp_v0 + 0xe84) - 1;
  *(int *)(temp_v0 + 0xe84) = temp_v2;
  temp_v3 = 0;
  if (*(char *)(temp_v2 + temp_v0 + 0xe88) == '\0') {
    do {
      if ((-1 < *(char *)(temp_v1 + temp_v3 + 0x1ca0)) &&
         (temp_v2 = FUN_001ab854(),
         (unsigned int)*(unsigned short *)(temp_v2 + 0x62) == *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xe84) * 4 + 0xe7c)))
      {
        *(unsigned char *)(*(int *)(temp_v0 + temp_v3 * 4 + 0xa10) + 0x27) = 0;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
  }
  else {
    do {
      if ((-1 < *(int *)(temp_v0 + temp_v3 * 8 + 0xa80)) &&
         (temp_v1 = FUN_001ab854(),
         (unsigned int)*(unsigned short *)(temp_v1 + 0x62) == *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xe84) * 4 + 0xe7c)))
      {
        *(unsigned char *)(*(int *)(temp_v0 + temp_v3 * 4 + 0xa20) + 0x27) = 0;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
  }
  FUN_002ade88();
  *(unsigned int *)(temp_v0 + 0x20) = 8;
  FUN_0020b718(0,1);
  FUN_0020d934();
  FUN_0023fc38();
  return;
}
