/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00252578` (_code @ 0x252578, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043dcb4; /* 0x43dcb4 */

/* Supplied declaration required: FUN_002b9008. */


void FUN_00252578(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *param_1;
  if (*(char *)(temp_v2 + 0xe3a) != '\0') {
    temp_v1 = 0;
    do {
      FUN_002b9008();
      temp_v0 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(unsigned short *)(temp_v2 + temp_v0 + 0xdf0) = 0xffff;
    } while (temp_v1 < (int)(unsigned int)*(unsigned char *)(temp_v2 + 0xe3a));
    *(unsigned char *)(temp_v2 + 0xe3a) = 0;
    temp_v2 = DAT_0043dcb4;
    if (DAT_0043dcb4 != 0) {
      *(unsigned short *)(DAT_0043dcb4 + 0x64e) = 0xffff;
      *(unsigned char *)(temp_v2 + 8) = 0;
      *(unsigned short *)(temp_v2 + 0x650) = 0;
    }
    return;
  }
  return;
}
