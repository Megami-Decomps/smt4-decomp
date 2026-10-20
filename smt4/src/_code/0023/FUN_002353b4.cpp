/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002353b4` (_code @ 0x2353b4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b89e4(int, int);
int msgBoxFlagsClearBit7(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char g_messageMain; /* 0x43e188 */

/* Supplied declaration required: FUN_002b89e4. */
/* Supplied declaration required: msgBoxFlagsClearBit7. */


void FUN_002353b4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 8) != '\0') {
    if (*(char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x5f) != '\0') {
      *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 8) = 0;
      msgBoxFlagsClearBit7(*(unsigned int *)(temp_v0 + 4));
      return;
    }
    if ((*(int *)((unsigned char *)&g_messageMain + 0x8)) != 0) {
      FUN_002b89e4((*(int *)((unsigned char *)&g_messageMain + 0x8)),*(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 9));
      *(unsigned char *)(temp_v0 + 8) = 3;
      *(unsigned char *)(temp_v0 + 0x35) = 0;
    }
  }
  return;
}

} /* extern "C" */
