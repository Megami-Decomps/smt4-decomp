/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030eef0` (_code @ 0x30eef0, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int FUN_002e3390(int);
extern int FUN_0043b13c(int, unsigned int, int, int, unsigned char *, int, unsigned int *);


int FUN_0030eef0(int param_1,int param_2,unsigned char *param_3,int param_4,unsigned int *param_5)

{
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [8];
  
  if (param_2 == 0) {
    temp_v0 = -0x271f5ffe;
  }
  else if (*(int *)(param_1 + 4) < 1) {
    temp_v0 = -0x275f5f9c;
  }
  else {
    temp_v1 = 0;
    temp_v2[0] = 0;
    if (param_3 == (unsigned char *)0x0 || param_4 == 0) {
      param_3 = temp_v2;
      param_4 = 1;
    }
    temp_v0 = FUN_002e3390(param_2);
    temp_v0 = FUN_0043b13c(param_1 + 0xc,*(unsigned int *)(param_1 + 4),param_2,temp_v0 + 1,param_3,
                         param_4,(unsigned int *)&temp_v1);
    if (-1 < temp_v0) {
      if (param_5 != (unsigned int *)0x0) {
        *param_5 = temp_v1;
      }
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
