/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d850` (_code @ 0x28d850, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: FUN_00220c28. */
/* Supplied declaration required: FUN_002954b8. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002b9008. */


void FUN_0028d850(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043dd24;
  temp_v1 = 0;
  *(unsigned int *)(DAT_0043dd24 + 0x744) = 4;
  if (0 < *(short *)(temp_v0 + 0x786)) {
    do {
      *(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x76c) = 0xffff;
      FUN_002b9008();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x786));
  }
  if (*(char *)(temp_v0 + 0x74e) != '\x02' && *(char *)(temp_v0 + 0x74e) != '\x01') {
    if (*(char *)(temp_v0 + 0x7f4) == '\0') {
      FUN_002954b8(0);
      return;
    }
    if (*(char *)(temp_v0 + 0x7f5) != '\0') {
      FUN_00220c28(1);
    }
    else {
      FUN_0029f10c(temp_v0 + 0x7f6,0x323232ff);
    }
    *(unsigned char *)(temp_v0 + 0x7f4) = 0;
  }
  return;
}
