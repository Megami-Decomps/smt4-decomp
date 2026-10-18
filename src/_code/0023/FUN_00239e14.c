/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239e14` (_code @ 0x239e14, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_004c7000; /* 0x4c7000 */
extern unsigned int DAT_004c7008; /* 0x4c7008 */
extern unsigned int DAT_004c700c; /* 0x4c700c */
extern unsigned int DAT_004c7010; /* 0x4c7010 */
extern unsigned int DAT_004c7014; /* 0x4c7014 */
extern unsigned int DAT_004c7018; /* 0x4c7018 */
extern unsigned char DAT_004c8000; /* 0x4c8000 */

extern unsigned long long FUN_00100bf6(int, unsigned int, unsigned int);
extern int FUN_0023a0d8(unsigned int, int *, unsigned int);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_00361140. */
/* Supplied declaration required: FUN_003611b8. */


int FUN_00239e14(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  int temp_v6;
  
  temp_v6 = param_4;
  temp_v0 = FUN_002b5c44();
  temp_v1 = FUN_0023a0d8(temp_v0,&temp_v6,param_1);
  if (-1 < temp_v1) {
    temp_v1 = temp_v6 + 0x14;
    temp_v3 = *(unsigned int *)(temp_v6 + 0xc);
    temp_v4 = *(unsigned int *)(temp_v6 + 0x10);
    FUN_00361140(&DAT_004c7000);
    temp_v2 = temp_v4;
    if (temp_v2 == 0) {
      DAT_004c700c = 0x8c;
    }
    else if (temp_v2 == 1) {
      DAT_004c700c = 0xd;
    }
    else if ((temp_v2 == 2) || (temp_v2 != 3)) {
      DAT_004c700c = 0;
    }
    else {
      DAT_004c700c = 0x10;
    }
    DAT_004c7008 = ((temp_v4 & 0xffff) >> 8) | ((temp_v3 & 0xff0fffff) << 8);
    DAT_004c700c = DAT_004c700c | 0x40000;
    temp_v5 = FUN_00100bf6(temp_v1,0,10);
    DAT_004c7014 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
    DAT_004c7010 = (unsigned int)temp_v5;
    DAT_004c7018 = param_2;
    FUN_003611b8(&DAT_004c8000);
    temp_v1 = 0;
  }
  return temp_v1;
}
