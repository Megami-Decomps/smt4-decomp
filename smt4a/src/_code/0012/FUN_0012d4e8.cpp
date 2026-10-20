/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d4e8` (_code @ 0x12d4e8, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5694(int, unsigned int, int, unsigned char *);
int FUN_002e56ec(int, unsigned char *);
int FUN_0030c546(...);
int FUN_0030eb1c(unsigned char [4]);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_00124a43; /* 0x124a43 */

extern unsigned int FUN_00124a28(unsigned char *);
/* Supplied declaration required: FUN_002e5694. */
/* Supplied declaration required: FUN_002e56ec. */
/* Supplied declaration required: FUN_0030c546. */
/* Supplied declaration required: FUN_0030eb1c. */


int FUN_0012d4e8(int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v7 = FUN_00124a28(temp_v3);
  temp_v0 = 8;
  FUN_002e5694(8,param_2,0x124a29,&LAB_00124a43);
  temp_v1 = param_1[1];
  if (param_2 <= (unsigned int)param_1[1]) {
    temp_v1 = param_2;
  }
  temp_v8 = temp_v1 << 3;
  temp_v5 = temp_v0;
  temp_v6 = temp_v0;
  for (temp_v2 = *param_1; *param_1 + temp_v8 != temp_v2; temp_v2 = temp_v2 + 8) {
    FUN_0030c546(temp_v6,temp_v2);
    temp_v6 = temp_v6 + 8;
  }
  for (; temp_v1 < param_2; temp_v1 = temp_v1 + 1) {
    FUN_0030c546(temp_v1 * 8 + temp_v5,temp_v7);
  }
  FUN_002e56ec(*param_1,&LAB_00124a43);
  temp_v0 = temp_v5;
  param_1[1] = param_2;
  *param_1 = temp_v5;
  FUN_0030eb1c(temp_v4);
  return temp_v0;
}

} /* extern "C" */
