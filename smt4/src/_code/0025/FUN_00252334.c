/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00252334` (_code @ 0x252334, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */
extern int DAT_0043dcb4; /* 0x43dcb4 */

/* Supplied declaration required: FUN_002b8cc8. */


void FUN_00252334(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_0043da90;
  if (*(char *)(DAT_0043da90 + 0xe3a) != '\0') {
    temp_v2 = 0;
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(temp_v1 + temp_v0 + 0xdf0) = 0xffff;
    } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0xe3a));
    *(unsigned char *)(temp_v1 + 0xe3a) = 0;
    temp_v1 = DAT_0043dcb4;
    if (DAT_0043dcb4 != 0) {
      *(unsigned short *)(DAT_0043dcb4 + 0x64e) = 0xffff;
      *(unsigned char *)(temp_v1 + 8) = 0;
      *(unsigned short *)(temp_v1 + 0x650) = 0;
    }
    return;
  }
  return;
}
