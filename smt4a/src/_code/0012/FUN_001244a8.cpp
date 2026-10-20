/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001244a8` (_code @ 0x1244a8, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;

extern int DAT_00594944; /* 0x594944 */
extern int DAT_00594948; /* 0x594948 */

extern int FUN_00111800(int);
extern unsigned int FUN_002e7908(int *, unsigned int *);
extern int wordRefsEqual_002ea42c(int, unsigned int);


int FUN_001244a8(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  int temp_v3;
  
  temp_v3 = 0x80680001;
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  temp_v0 = FUN_002e7908(&iStack_20,(unsigned int *)&temp_v3);
  temp_v1 = wordRefsEqual_002ea42c(param_1 + 0x130,temp_v0);
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(param_1 + 0x13c);
    if (temp_v1 == 0) {
      temp_v1 = *(int *)(param_1 + 300);
      temp_v2 = DAT_00594948;
      if (temp_v1 == 200) {
        temp_v1 = *(int *)(param_1 + 0x128);
        temp_v2 = DAT_00594944;
      }
      temp_v1 = temp_v1 + temp_v2;
    }
  }
  else {
    temp_v1 = FUN_00111800(param_1 + 0x130);
  }
  return temp_v1;
}

} /* extern "C" */
