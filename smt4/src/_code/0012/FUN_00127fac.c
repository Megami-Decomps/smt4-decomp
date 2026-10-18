/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127fac` (_code @ 0x127fac, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char DAT_004d4600; /* 0x4d4600 */

/* Supplied declaration required: FUN_001377a0. */
/* Supplied declaration required: FUN_002bb7c4. */
extern int FUN_002bb7e8(unsigned char *, int, unsigned int, unsigned int);


unsigned char * FUN_00127fac(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [4];
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (unsigned char *)0x8a01bf9;
  }
  else if ((param_3 & 0xfff) != 0) {
    puVar1 = (unsigned char *)0xe0e01bf2;
  }
  else if ((param_2 & 0xfff) != 0) {
    puVar1 = (unsigned char *)0xe0e01bf1;
  }
  else {
    temp_v0 = FUN_002bb7e8(&DAT_004d4600,param_1,param_3,0x1000);
    if (temp_v0 == 0) {
      puVar1 = (unsigned char *)0xd8601837;
    }
    else {
      *(unsigned int *)(param_1 + 0x14) = param_2;
      puVar1 = temp_v2;
      FUN_002bb7c4(puVar1,temp_v0,param_2,param_3,4,3);
      if (-1 < (int)puVar1) {
        puVar1 = temp_v2;
        FUN_002bb7c4(puVar1,*(unsigned int *)(param_1 + 0x14),0,param_3,6,0);
        if ((int)puVar1 < 0) {
          temp_v1 = *(unsigned int *)(param_1 + 0x14);
          FUN_001377a0(&DAT_004d4600,param_1);
          FUN_002bb7c4(temp_v2,temp_v0,temp_v1,param_3,5,3);
        }
        return puVar1;
      }
      FUN_001377a0(&DAT_004d4600,param_1);
    }
  }
  return puVar1;
}
