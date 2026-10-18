/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb924` (_code @ 0x2eb924, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
} param_2_stack;

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_00263534. */
/* Supplied declaration required: FUN_00263720. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5ff4. */
/* Supplied declaration required: FUN_00357be4. */
/* Supplied declaration required: FUN_0035a080. */
/* Supplied declaration required: FUN_0035a154. */
/* Supplied declaration required: FUN_003e0738. */
extern unsigned int FUN_003e0790(unsigned int, unsigned int, unsigned int);


unsigned char FUN_002eb924(unsigned int param_1,unsigned int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned char *temp_v6;
  unsigned char temp_v7 [360];
  unsigned char temp_v8 [12];
  
  temp_v4 = 0;
  FUN_0035a154(temp_v7);
  FUN_00263720(temp_v8);
  temp_v0 = DAT_00464fac[6];
  FUN_00263534(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (*(int *)(DAT_00464fac[6] + 0x3c0) != 0) {
    if ((temp_v0 & 0x80000000) == 0) {
      FUN_003e0738(DAT_00464fac[6],temp_v8,1,param_1);
      temp_v1 = FUN_003e0790(DAT_00464fac[6],1,param_1);
      temp_v2 = 0x100;
      temp_v5 = 1;
      FUN_002c54f0(0x100,0x100,0,temp_v1);
      temp_v6 = temp_v8;
      temp_v5 = 1;
      temp_v3 = DAT_00464fac[6];
      FUN_00357be4(temp_v3,temp_v7,temp_v2,temp_v1);
      temp_v4 = -1 < temp_v3;
      if (temp_v4) {
        FUN_0035a080(temp_v7,&temp_v5,&temp_v6);
        FUN_002c5ff4(param_2,temp_v5,temp_v6);
      }
      FUN_002c4360(temp_v2);
      FUN_002390dc(DAT_00464fac[6]);
    }
  }
  else {
    FUN_002390dc();
  }
  return temp_v4;
}
