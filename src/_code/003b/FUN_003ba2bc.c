/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba2bc` (_code @ 0x3ba2bc, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_0022b064. */
extern int FUN_00287758(void);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002bd808. */
/* Supplied declaration required: FUN_003b82c4. */
extern int FUN_003bb350(int);
extern int FUN_003bbaa8(int);


void FUN_003ba2bc(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_003bbaa8(param_1 + 0xd58);
  if ((temp_v0 != 0) && (temp_v0 = FUN_00287758(), temp_v0 != 0)) {
    temp_v1 = FUN_003bb350(param_1 + 0x9c);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(int *)(param_1 + 0xd7c);
    }
    if (temp_v1 != 0 && temp_v0 != 0) {
      temp_v2 = *(int *)(param_1 + 0xd80) != 0;
      if (temp_v2) {
        param_3 = *(int *)(param_1 + 0xd88);
      }
      if ((temp_v2 && param_3 != 0) && (*(int *)(param_1 + 0xd8c) != 0)) {
        FUN_00297060();
        *(int *)(param_1 + 0xd84) = temp_v0;
        *(unsigned int *)(temp_v0 + 0x108) = 2;
        temp_v0 = *(int *)(param_1 + 0xd88);
        FUN_00297060(temp_v0,*(unsigned int *)(param_1 + 0xd8c));
        *(int *)(param_1 + 0xd90) = temp_v0;
        *(unsigned int *)(temp_v0 + 0x108) = 2;
        if ((*(unsigned int *)(param_1 + 0x20) & 0x10) != 0) {
          FUN_002bd808(param_1 + 0x3c,param_1 + 0x42);
          FUN_003b82c4(param_1);
          *(unsigned int *)(param_1 + 0x28) = 2;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffef;
          FUN_0022b064(param_1);
          return;
        }
      }
    }
  }
  return;
}
