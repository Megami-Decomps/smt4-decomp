/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a78c0` (_code @ 0x2a78c0, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Supplied declaration required: FUN_00150c4c. */


int FUN_002a78c0(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                int param_6)

{
/* irregular: 4 unstructured edge(s); 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  piVar1 = *(int **)(param_1 + 4);
  FUN_00150c4c(piVar1,param_2,param_1 + 8,0x200,0,0,1);
  if (piVar1 != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(*piVar1 + 0x4c))();
    if ((temp_v0 != 0) && (temp_v0 = (**(romwright_code **)(*piVar1 + 0xc))(piVar1), temp_v0 != 0)) {
      (**(romwright_code **)(*piVar1 + 0x40))(piVar1,param_5,0);
      temp_v0 = param_4;
      if (param_6 != 0) {
        do {
          if (0 >= temp_v0) {
            if (piVar1 != (int *)0x0) {
              (**(romwright_code **)(*piVar1 + 0x38))();
            }
            return param_4;
          }
          if (*(char *)(param_1 + 0x20a) != '\0') break;
          temp_v1 = temp_v0;
          if (param_6 <= temp_v0) {
            temp_v1 = param_6;
          }
          temp_v1 = (**(romwright_code **)(*piVar1 + 0x24))(piVar1,param_3,(temp_v1 + 0x1fU) & 0xffffffe0);
          if (temp_v1 < 0) break;
          if (temp_v0 <= temp_v1) {
            if (piVar1 != (int *)0x0) {
              (**(romwright_code **)(*piVar1 + 0x38))();
            }
            return param_4;
          }
          param_3 = param_3 + temp_v1;
          temp_v0 = temp_v0 - temp_v1;
        } while( 1 );
      }
      else {
        temp_v0 = (**(romwright_code **)(*piVar1 + 0x24))(piVar1,param_3,(param_4 + 0x1fU) & 0xffffffe0);
        if (-1 < temp_v0) {
          if (piVar1 != (int *)0x0) {
            (**(romwright_code **)(*piVar1 + 0x38))();
          }
          return param_4;
        }
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 0x38))();
    }
  }
  return -1;
}
