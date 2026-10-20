/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498ff0` (_code @ 0x498ff0, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
extern int FUN_0018719c(unsigned int);


void FUN_00498ff0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  int temp_v3;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v0 = *(int *)(param_1 + 0xb40);
  if (temp_v0 != 8) {
    temp_v2 = 0x7c007b;
    uStack_34 = 0x7e007d;
    uStack_30 = 0x80007f;
    uStack_2c = 0x820081;
    uStack_28 = 0x83;
    temp_v3 = 0x8b008a;
    uStack_20 = 0x8d008c;
    uStack_1c = 0x8f008e;
    uStack_18 = 0x910090;
    uStack_14 = 0x83;
    if (*(int *)(param_1 + 0x14) != 1) {
      temp_v1 = *(unsigned short *)((int)&temp_v2 + temp_v0 * 2);
      if (((*(char *)(param_1 + 0x18) != '\0') || (temp_v0 = FUN_0018719c(0x410), temp_v0 == 0)) &&
         (*(int *)(param_1 + 0xb40) == 0)) {
        temp_v1 = 0x7a;
      }
    }
    else {
      temp_v1 = *(unsigned short *)((int)&temp_v3 + temp_v0 * 2);
      if ((*(char *)(param_1 + 0x18) != '\0') || (temp_v0 = FUN_0018719c(0x410), temp_v0 == 0)) {
        if (*(int *)(param_1 + 0xb40) == 0) {
          temp_v1 = 0x88;
        }
        else if (*(int *)(param_1 + 0xb40) == 3) {
          temp_v1 = 0x89;
        }
      }
    }
  }
  else {
    temp_v2 = 0x840083;
    uStack_34 = 0x860085;
    temp_v1 = *(unsigned short *)((int)&temp_v2 + *(int *)(param_1 + 0xb44) * 2);
  }
  sysPlaySe(temp_v1);
  return;
}

} /* extern "C" */
