/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004148fc` (_code @ 0x4148fc, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringDestroy(...);
int FUN_002e9590(...);
int vectorCopyHeader(...);
int FUN_002ea100(...);
int FUN_004130c0(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: FUN_002e9590. */
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002ea100. */
extern int refIsNonNegative(int);
/* Supplied declaration required: FUN_004130c0. */


void FUN_004148fc(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_24;
  unsigned int temp_v3;
  unsigned char temp_v4 [8];
  
  temp_v3 = *(unsigned int *)(param_2 + 0x40);
  temp_v2 = *(unsigned int *)(param_2 + 0x38);
  uStack_24 = *(unsigned int *)(param_2 + 0x3c);
  vectorCopyHeader(param_1 + 0x7c,&temp_v2);
  temp_v0 = refIsNonNegative(param_1 + 0x7c);
  if (temp_v0 == 0) {
    *(unsigned char *)(param_1 + 0xfc) = 1;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xec) != temp_v0) {
      do {
        if (*(int *)(temp_v0 + 8) != 0 || *(int *)(temp_v0 + 0xc) != 0) {
          FUN_002ea100(temp_v4,"not check");
          if ((*(int *)(temp_v0 + 0xa4) - *(int *)(temp_v0 + 0xa0)) >> 3 != 0) {
            FUN_002e9590(temp_v4);
          }
          onlineStringDestroy(temp_v4);
        }
        temp_v0 = temp_v0 + 0xb8;
      } while (*(int *)(param_1 + 0xec) != temp_v0);
    }
    temp_v0 = *(int *)(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xec) != temp_v0) {
      do {
        temp_v1 = *(int *)(temp_v0 + 0xc);
        if (*(int *)(temp_v0 + 8) != 0 || temp_v1 != 0) {
          *(int *)(param_1 + 0x90) = *(int *)(temp_v0 + 8);
          *(int *)(param_1 + 0x94) = temp_v1;
          break;
        }
        temp_v0 = temp_v0 + 0xb8;
      } while (*(int *)(param_1 + 0xec) != temp_v0);
    }
    temp_v0 = gameFlagIsSet(0x580);
    if ((temp_v0 == 0) && (*(int *)(param_1 + 0x90) != 0 || *(int *)(param_1 + 0x94) != 0)) {
      FUN_004130c0(param_1,5);
      return;
    }
    FUN_004130c0(param_1,1);
  }
  return;
}

} /* extern "C" */
