/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c078` (_code @ 0x10c078, 0x164 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char DAT_004e315c; /* 0x4e315c */

extern unsigned int FUN_00128f34(int);
/* Supplied declaration required: FUN_00128f44. */
extern int FUN_00128f58(int, unsigned int);
/* Supplied declaration required: FUN_00128ff0. */
/* Supplied declaration required: FUN_00147288. */
/* Supplied declaration required: FUN_001537c4. */
/* Supplied declaration required: FUN_002bd448. */
/* Supplied declaration required: FUN_002bd46c. */
extern unsigned int FUN_002bd48c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd610. */
extern unsigned int FUN_002bf798(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int * FUN_0010c078(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_002c3aa8(&DAT_004e315c);
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x98,1);
  puVar1[0x1f] = 0xffffffff;
  puVar1[0x23] = param_3;
  puVar1[0x24] = 1;
  temp_v0 = FUN_00128f34(param_1);
  *puVar1 = temp_v0;
  FUN_00128f44(param_1);
  temp_v1 = FUN_00128f58(param_1,0);
  puVar1[0x22] = param_2 - (temp_v1 - param_1);
  puVar1[0x20] = temp_v1 - param_1;
  temp_v0 = FUN_002bf798(0x10000,0x100,0,param_2,0x20,1);
  puVar1[0x1b] = temp_v0;
  FUN_002bd610(param_1,temp_v0,param_2);
  temp_v0 = FUN_002bd48c(0x7fff,0);
  puVar1[0xe] = temp_v0;
  puVar1[0xf] = 0x3f34fdf4;
  puVar1[0x10] = 0x3f34fdf4;
  FUN_001537c4(temp_v0,puVar1 + 0xf);
  FUN_00147288(puVar1[0xe]);
  FUN_002bd46c(puVar1[0xe]);
  temp_v1 = 0;
  do {
    FUN_002bd448(puVar1 + temp_v1 * 6 + 2);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_00128ff0(puVar1[0xe],puVar1[0x1b],puVar1 + 2,puVar1 + 8,0);
  FUN_002c3a24(&DAT_004e315c);
  return puVar1;
}
