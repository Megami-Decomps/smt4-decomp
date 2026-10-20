/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010526e` (_code @ 0x10526e, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb6b8(int [2]);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_002eb690(int *, int *);
extern int FUN_002eb6ae(int, unsigned int);
/* Supplied declaration required: FUN_002eb6b8. */


unsigned int FUN_0010526e(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4 [2];
  int temp_v5;
  unsigned char temp_v6 [4];
  
  temp_v2 = 0;
  temp_v4[0] = param_1[2];
  while( 1 ) {
    temp_v5 = param_1[4];
    temp_v1 = FUN_002eb690(temp_v4,&temp_v5);
    temp_v0 = temp_v4[0];
    if (temp_v1 == 0) break;
    temp_v1 = FUN_002eb6ae(temp_v4[0],0x20);
    if ((temp_v1 == 0) && (temp_v1 = FUN_002eb6ae(temp_v0,0x800), temp_v1 != 0)) {
      if ((param_1[6] != 0) && (param_1[6] < *param_2 - *(int *)(temp_v0 + 0x108))) {
        temp_v3 = temp_v4[0];
        (**(romwright_code **)(*param_1 + 0x14))(temp_v6,param_1,&temp_v3);
        temp_v2 = 1;
        param_1[7] = param_1[7] + 1;
      }
    }
    FUN_002eb6b8(temp_v4);
  }
  return temp_v2;
}

} /* extern "C" */
