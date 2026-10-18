/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c250` (_code @ 0x14c250, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

/* Supplied declaration required: FUN_0014c494. */
/* Supplied declaration required: FUN_00150d2c. */
extern int *FUN_001522ac(unsigned char *, unsigned int);
extern unsigned int FUN_001522d4(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a4b0c. */
/* Supplied declaration required: FUN_002a78c0. */
extern int FUN_002a7a3c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a7ac4. */
extern unsigned int FUN_002ac780(int);
extern int FUN_002c3984(void);
extern unsigned int FUN_002c3994(void);
/* Supplied declaration required: rt_memcpy. */


unsigned int
FUN_0014c250(int *param_1,unsigned int param_2,unsigned int param_3,int *param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [12];
  char temp_v9;
  int temp_v10;
  unsigned int uStack_44;
  unsigned int temp_v11;
  
  temp_v0 = FUN_002ac780(param_1[1]);
  piVar2 = (int *)(**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v0);
  if ((piVar2 != (int *)0x0) ||
     (piVar2 = param_1, FUN_00150d2c(param_1,param_2,param_4,param_5), piVar2 != (int *)0x0)) {
    FUN_002a7ac4(temp_v8,piVar2,1);
    if ((temp_v9 != '\0') && (temp_v1 = FUN_002a7a3c(temp_v8,param_3), temp_v1 != 0)) {
      return 1;
    }
    piVar2 = (int *)FUN_001522ac(temp_v8,param_3);
    temp_v2 = (**(romwright_code **)(*param_4 + 8))(param_4,piVar2 + 8);
    temp_v3 = FUN_002c3994();
    temp_v1 = FUN_002c3984();
    temp_v7 = temp_v2 <= temp_v3;
    temp_v6 = temp_v3 == temp_v2;
    if (!temp_v7 || temp_v6) {
      temp_v4 = temp_v2 + (int)(piVar2 + 8);
      temp_v7 = temp_v1 + temp_v3 <= temp_v4;
      temp_v6 = temp_v4 == temp_v1 + temp_v3;
    }
    if (!temp_v7 || temp_v6) {
      temp_v10 = 0x56574943;
      uStack_44 = temp_v0;
      temp_v11 = param_3;
      rt_memcpy(temp_v2,&temp_v10,0x20);
      temp_v1 = temp_v2 + 0x20;
      temp_v5 = FUN_001522d4(temp_v8,param_3);
      FUN_002a78c0(param_1,temp_v0,temp_v1,piVar2,temp_v5,param_5);
      if (param_1 == piVar2) {
        FUN_0014c494(temp_v8,param_3,temp_v1);
        FUN_002a4b0c(temp_v1,piVar2);
        return 1;
      }
    }
  }
  return 0;
}
