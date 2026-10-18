/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021f480` (_code @ 0x21f480, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp198; /* 0x198: local_198 */
} param_5_stack;

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_0024f07c. */
/* Supplied declaration required: FUN_00263534. */
extern int FUN_002b5c2c(unsigned int);
/* Supplied declaration required: FUN_00357c34. */
/* Supplied declaration required: FUN_00359c28. */
/* Supplied declaration required: FUN_00359c9c. */
/* Supplied declaration required: FUN_00359ef8. */
/* Supplied declaration required: FUN_0035a154. */


unsigned int FUN_0021f480(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [360];
  
  FUN_0035a154(temp_v3);
  temp_v0 = DAT_00464fac[6];
  FUN_00263534(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (-1 < (int)temp_v0) {
    FUN_00359c28(temp_v3,*DAT_00464fac,0,*(unsigned char *)(DAT_00464fac + 2),
                 *(unsigned char *)((int)DAT_00464fac + 9),*(unsigned char *)((int)DAT_00464fac + 10),
                 *(unsigned char *)((int)DAT_00464fac + 0xb));
    FUN_00359c9c(temp_v3,2,param_3,param_2);
    temp_v1 = FUN_002b5c2c(param_1);
    FUN_00359c9c(temp_v3,4,temp_v1 << 1,param_1);
    FUN_00359ef8(temp_v3,param_4,param_5);
    temp_v0 = DAT_00464fac[6];
    FUN_00357c34(temp_v0,temp_v3,1,DAT_00464fac[3]);
    temp_v2 = temp_v0 & 0x80000000;
    if ((int)temp_v2 < 0) {
      temp_v2 = 0xe0a1086c;
      if (temp_v0 != 0xe0a1086c) {
        temp_v2 = 0xe0a1086d;
      }
      if (temp_v0 != 0xe0a1086c && temp_v0 != temp_v2) {
        if (temp_v0 != 0xc8810bea) {
          temp_v2 = 0xc8e10865;
        }
        if ((temp_v0 != 0xc8810bea && temp_v0 != temp_v2) && (temp_v2 = 0xc8e10866, temp_v0 != 0xc8e10866)) {
          temp_v2 = 0xc8e10869;
        }
      }
    }
    FUN_002390dc(DAT_00464fac[6],temp_v2);
    FUN_0024f07c(0);
  }
  return temp_v0;
}
