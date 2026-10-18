/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00417d08` (_code @ 0x417d08, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0019f18c(unsigned short);
extern int FUN_0019f1a4(unsigned short, unsigned int);
extern int FUN_001ab940(void);
extern int FUN_001bd100(unsigned short);
/* Supplied declaration required: FUN_003deeb4. */
extern int FUN_003deecc(unsigned short);


void FUN_00417d08(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x90c) != '\0') {
    temp_v1 = FUN_0019f1a4(*(unsigned short *)(param_1 + 0xcce),0);
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_001bd100(*(unsigned short *)(param_1 + 0xcce));
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_003deeb4(*(unsigned short *)(param_1 + 0xcce));
    if (temp_v1 != 0) {
      temp_v0 = *(unsigned short *)(param_1 + 0xcce);
      temp_v1 = FUN_001ab940();
      temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
      *(unsigned char *)(temp_v1 + 0x2a0) = *(unsigned char *)(temp_v1 + 0x2a0) & 0x9f;
      return;
    }
    temp_v1 = FUN_003deecc(*(unsigned short *)(param_1 + 0xcce));
    if (temp_v1 == 0) {
      return;
    }
  }
  else {
    temp_v1 = FUN_0019f18c(*(unsigned short *)(param_1 + 0xcce));
    if (temp_v1 != 0) {
      temp_v1 = FUN_003deeb4();
      if (temp_v1 == 0) {
        return;
      }
      temp_v0 = *(unsigned short *)(param_1 + 0xcce);
      temp_v1 = FUN_001ab940();
      temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
      *(unsigned char *)(temp_v1 + 0x2a0) = *(unsigned char *)(temp_v1 + 0x2a0) & 0x9f;
      return;
    }
    temp_v1 = FUN_0019f1a4(*(unsigned short *)(param_1 + 0xcce),0);
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_001bd100(*(unsigned short *)(param_1 + 0xcce));
    if (temp_v1 != 0) {
      return;
    }
    temp_v1 = FUN_003deeb4(*(unsigned short *)(param_1 + 0xcce));
    if (temp_v1 == 0) {
      temp_v1 = FUN_003deecc(*(unsigned short *)(param_1 + 0xcce));
      if (temp_v1 == 0) {
        return;
      }
    }
  }
  temp_v0 = *(unsigned short *)(param_1 + 0xcce);
  temp_v1 = FUN_001ab940();
  temp_v1 = temp_v1 + (unsigned int)temp_v0 * 4;
  *(unsigned char *)(temp_v1 + 0x2a0) = *(unsigned char *)(temp_v1 + 0x2a0) & 0x9f;
  return;
}
