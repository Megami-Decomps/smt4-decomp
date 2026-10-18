/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328150` (_code @ 0x328150, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern char *FUN_0033f868(int);
extern unsigned int FUN_003859d4(unsigned short);
/* Supplied declaration required: FUN_00398438. */


unsigned int FUN_00328150(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v0 = param_1;
  FUN_00398438();
  if (0 < temp_v0) {
    do {
      pcVar2 = (char *)FUN_0033f868(temp_v3);
      if (*pcVar2 == -1) {
        return 0;
      }
      if (*pcVar2 == param_1) {
        temp_v2 = (unsigned int)(unsigned char)pcVar2[2];
        temp_v4 = temp_v2 == 2;
        if (temp_v4) {
          temp_v2 = (unsigned int)pcVar2[3];
        }
        if (temp_v4 && temp_v2 == param_2) {
          temp_v1 = FUN_003859d4(*(unsigned short *)(pcVar2 + 0x14));
          return temp_v1;
        }
      }
      temp_v3 = temp_v3 + 1;
      FUN_00398438();
    } while (temp_v3 < (int)pcVar2);
  }
  return 0;
}
