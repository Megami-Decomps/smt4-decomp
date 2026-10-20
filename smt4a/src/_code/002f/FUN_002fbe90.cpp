/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbe90` (_code @ 0x2fbe90, 0x8e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(unsigned int, unsigned int *);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7908. */
extern int FUN_002ea4ac(int *, unsigned int *);


void FUN_002fbe90(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  unsigned int uStack_18;
  int temp_v8;
  
  uStack_18 = param_1;
  temp_v8 = param_2;
  if (param_2 < 0) {
    temp_v1 = 0xd8a0a046;
    temp_v0 = FUN_002ea4ac(&temp_v8,(unsigned int *)&temp_v1);
    if (temp_v0 != 0) {
      puVar2 = (unsigned int *)&temp_v2;
      temp_v2 = 0x80050014;
    }
    else {
      temp_v2 = 0xd8a0a050;
      temp_v0 = FUN_002ea4ac(&temp_v8,(unsigned int *)&temp_v2);
      if (temp_v0 != 0) {
        puVar2 = (unsigned int *)&temp_v3;
        temp_v3 = 0x80050015;
      }
      else {
        temp_v3 = 0xd8a0a047;
        temp_v0 = FUN_002ea4ac(&temp_v8,(unsigned int *)&temp_v3);
        if (temp_v0 != 0) {
          puVar2 = (unsigned int *)&temp_v4;
          temp_v4 = 0x80050009;
        }
        else {
          temp_v4 = 0xd8a0a048;
          temp_v0 = FUN_002ea4ac(&temp_v8,(unsigned int *)&temp_v4);
          if (temp_v0 != 0) {
            puVar2 = temp_v7;
            temp_v7[0] = 0x80050009;
          }
          else {
            puVar2 = (unsigned int *)&temp_v6;
            temp_v6 = 0x80050001;
          }
        }
      }
    }
  }
  else {
    puVar2 = (unsigned int *)&temp_v5;
    temp_v5 = 0x10001;
  }
  FUN_002e7908(param_1,puVar2);
  return;
}

} /* extern "C" */
