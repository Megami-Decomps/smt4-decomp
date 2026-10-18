/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016cf30` (_code @ 0x16cf30, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_7_stack;

extern unsigned int DAT_005893a8; /* 0x5893a8 */

/* Supplied declaration required: FUN_001885e8. */
/* Supplied declaration required: FUN_0019fc70. */
/* Supplied declaration required: FUN_001a007c. */
/* Supplied declaration required: FUN_001a0164. */
/* Supplied declaration required: FUN_002e6354. */


unsigned int *
FUN_0016cf30(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *****temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  piVar1 = param_1;
  FUN_001a007c();
  if (piVar1 != (int *)0x0) {
    FUN_002e6354();
    FUN_001a0164();
    if (piVar1 != (int *)0x0) {
      temp_v4 = (unsigned int *****)&temp_v4;
      temp_v2 = 0;
      temp_v3 = 1;
      temp_v5 = 1;
      temp_v6 = DAT_005893a8;
      piVar2 = &temp_v6;
      temp_v1 = param_2;
      FUN_001885e8(piVar2,&temp_v2,0,3,1,temp_v4,1,2,param_7,0xc,1,0);
      if (-1 < (int)piVar2) {
        temp_v0 = (int *)0x0;
        piVar2 = (int *)(**(romwright_code **)(*piVar1 + 0x3c))(piVar1,&temp_v0,temp_v2);
        if (-1 < (int)piVar2) {
          piVar2 = piVar1;
          FUN_0019fc70(piVar1,temp_v0,temp_v1,param_3,param_4,param_5,param_6);
          if ((int)piVar2 >= 0) {
            piVar2 = (int *)0x0;
          }
          else {
            (**(romwright_code **)(*temp_v0 + 0x30))();
          }
        }
      }
      if (((unsigned int)piVar2 & 0x80000000) == 0) {
        *param_1 = (int)piVar1;
        return (unsigned int *)0x0;
      }
      (**(romwright_code **)(*piVar1 + 0x30))(piVar1);
      return (unsigned int *)piVar2;
    }
  }
  return (unsigned int *)0xd8604659;
}
