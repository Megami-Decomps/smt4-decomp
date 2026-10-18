/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb7f4` (_code @ 0x2eb7f4, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp190; /* 0x190: local_190 */
} param_2_stack;

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_00263308. */
/* Supplied declaration required: FUN_002634f4. */
/* Supplied declaration required: FUN_002c415c. */
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5df8. */
/* Supplied declaration required: FUN_003579d4. */
/* Supplied declaration required: FUN_00359e70. */
/* Supplied declaration required: FUN_00359f44. */
/* Supplied declaration required: FUN_003e050c. */
extern unsigned int FUN_003e0564(unsigned int, unsigned int, unsigned int);


unsigned char FUN_002eb7f4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned char *puStack_18c;
  unsigned char temp_v6 [360];
  unsigned char temp_v7 [8];
  
  temp_v4 = 0;
  FUN_00359f44(temp_v6);
  FUN_002634f4(temp_v7);
  temp_v0 = DAT_00464fac[6];
  FUN_00263308(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (*(int *)(DAT_00464fac[6] + 0x210) != 0) {
    if ((temp_v0 & 0x80000000) == 0) {
      FUN_003e050c(DAT_00464fac[6],temp_v7,0,param_1);
      temp_v1 = FUN_003e0564(DAT_00464fac[6],0,param_1);
      temp_v5 = 1;
      temp_v2 = FUN_002c5300(0x100,0x100,0,temp_v1);
      puStack_18c = temp_v7;
      temp_v5 = 0;
      temp_v3 = DAT_00464fac[6];
      FUN_003579d4(temp_v3,temp_v6,temp_v2,temp_v1);
      temp_v4 = -1 < temp_v3;
      if (temp_v4) {
        FUN_00359e70(temp_v6,&temp_v5,&puStack_18c);
        FUN_002c5df8(param_2,temp_v5,puStack_18c);
      }
      FUN_002c415c(temp_v2);
      FUN_00238f44(DAT_00464fac[6]);
    }
  }
  else {
    FUN_00238f44();
  }
  return temp_v4;
}
