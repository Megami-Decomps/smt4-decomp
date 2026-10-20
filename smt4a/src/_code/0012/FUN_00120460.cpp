/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120460` (_code @ 0x120460, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fbb60(int, unsigned int);
int FUN_002fbb68(int, int *);
int FUN_002fbb70(int, int);
int FUN_00303e34(int, int);

/* stack frame of param_2: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

extern unsigned int byteRefMin(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002fbb60. */
/* Supplied declaration required: FUN_002fbb68. */
/* Supplied declaration required: FUN_002fbb70. */
/* Supplied declaration required: FUN_00303e34. */


void FUN_00120460(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [4];
  
  if (*(char *)(param_1 + 0x3b) != '\0') {
    FUN_00303e34(param_1,param_2 + 8);
  }
  else {
    temp_v6[0] = 0;
    temp_v5[0] = *(unsigned char *)(param_2 + 4);
    temp_v0 = byteRefMin(temp_v5,temp_v6);
    FUN_002fbb60(param_1,temp_v0);
    temp_v1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    temp_v3 = 0;
    FUN_002fbb68(param_1,&temp_v3);
    FUN_00303e34(param_1,param_2 + 8);
    temp_v2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    FUN_002fbb70(param_1,temp_v1);
    temp_v4 = (temp_v2 - temp_v1) - 4;
    FUN_002fbb68(param_1,&temp_v4);
    FUN_002fbb70(param_1,temp_v2);
  }
  return;
}

} /* extern "C" */
