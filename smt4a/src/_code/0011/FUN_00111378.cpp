/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111378` (_code @ 0x111378, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, int, unsigned int, unsigned int);
int FUN_002e7614(unsigned char [12], unsigned int);
int FUN_002ec9f4(unsigned char [12]);
int FUN_002fd03a(int *, unsigned char [12]);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002ec9f4. */
/* Supplied declaration required: FUN_002fd03a. */


unsigned int FUN_00111378(int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    if ((char)param_1[2] == '\0') {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
      *(unsigned char *)(param_1 + 2) = temp_v0;
    }
    temp_v2 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    FUN_002e7614(temp_v4,temp_v2);
    (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v4);
    temp_v3 = (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    if (*(unsigned char *)(param_1 + 2) < temp_v3) {
      FUN_002fd03a(param_1,temp_v4);
    }
    FUN_002e74c4(param_2,temp_v5 + temp_v7,temp_v6,0xffffffff);
    FUN_002ec9f4(temp_v4);
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
