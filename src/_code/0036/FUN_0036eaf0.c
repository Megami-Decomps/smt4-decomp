/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036eaf0` (_code @ 0x36eaf0, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0013fec8. */
/* Supplied declaration required: FUN_002a7c80. */
extern unsigned int FUN_002bd498(unsigned int **, unsigned int, unsigned int);


unsigned int FUN_0036eaf0(unsigned int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *temp_v3;
  char temp_v4;
  unsigned int *temp_v5 [2];
  unsigned char temp_v6 [8];
  
  temp_v2 = 0;
  temp_v5[0] = (unsigned int *)0x0;
  if (param_2 != (unsigned int *)0x0) {
    puVar3 = param_2;
    if ((~*param_2 & 0x20000004) != 0) {
      puVar3 = (unsigned int *)0x0;
    }
    puVar1 = param_2;
    if (puVar3 != (unsigned int *)0x0) {
      temp_v1 = puVar3[7];
      if (temp_v1 != 0) {
        temp_v0 = (int)puVar3 + temp_v1 + 0x1c;
      }
      else {
        temp_v0 = 0;
      }
      if (temp_v0 != 0) {
        puVar1 = (unsigned int *)0x0;
        if (temp_v1 != 0) {
          puVar1 = (unsigned int *)((int)puVar3 + temp_v1 + 0x1c);
        }
      }
      else {
        temp_v3 = (unsigned int *)0x0;
        temp_v4 = '\0';
        FUN_0013fec8(temp_v6,puVar3,param_3);
        FUN_002a7c80(&temp_v3,temp_v6);
        if (temp_v4 == '\0') {
          return 0x80000001;
        }
        temp_v5[0] = temp_v3;
        puVar1 = temp_v5[0];
      }
    }
    temp_v5[0] = puVar1;
    temp_v2 = FUN_002bd498(temp_v5,param_1,param_3);
  }
  return temp_v2;
}
