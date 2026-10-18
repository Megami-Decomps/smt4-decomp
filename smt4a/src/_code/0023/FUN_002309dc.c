/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002309dc` (_code @ 0x2309dc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_002a49b4. */


void FUN_002309dc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  char *pcVar4;
  
  temp_v0 = DAT_0057f108;
  pcVar4 = (char *)(DAT_0057f108 + 0x1b6c);
  if (*pcVar4 == '\0') {
    return;
  }
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 2;
    if (-1 < *(short *)(temp_v1 + 0x1b22)) {
      FUN_001641c4();
      *(unsigned short *)(temp_v1 + 0x1b22) = 0xffff;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x25);
  *pcVar4 = '\0';
  *(unsigned char *)(temp_v0 + 0x1b6d) = 0;
  FUN_002a49b4();
  return;
}
