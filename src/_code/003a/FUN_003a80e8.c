/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a80e8` (_code @ 0x3a80e8, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int FUN_0022ebbc(void);
extern int FUN_002337a0(int);
extern int FUN_0024ec64(unsigned int);
extern int FUN_0029c49c(void);
/* Supplied declaration required: FUN_0029d100. */
/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_003a80e8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = param_2;
  FUN_0029d100(param_2,*(unsigned char *)(param_1 + 0x5a5),0,'c' < *(char *)(param_1 + 0x94),0);
  temp_v2 = FUN_002337a0(param_1 + 0x20);
  if (*(char *)(param_1 + 0x5a5) == '\0') {
    FUN_002b9364(*(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x5ac));
  }
  temp_v3 = FUN_0022ebbc();
  if (temp_v3 < temp_v1) {
    temp_v0 = '\x01';
  }
  else {
    temp_v2 = FUN_0024ec64(param_2);
    if (temp_v2 != 0) {
      temp_v0 = '\x02';
    }
    else if (*(char *)(param_1 + 0x5a5) == '\x02') {
      temp_v0 = '\x03';
    }
    else {
      temp_v2 = FUN_0029c49c();
      if (temp_v2 != -1) {
        if (*(char *)(param_1 + 0xa5b0) != '\0') {
          return 0;
        }
        return 1;
      }
      temp_v0 = '\x05';
    }
  }
  *(char *)(param_1 + 0xa5b0) = temp_v0;
  return 0;
}
