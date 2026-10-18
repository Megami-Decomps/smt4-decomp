/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c0f4` (_code @ 0x10c0f4, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char DAT_004e315c; /* 0x4e315c */

extern unsigned int FUN_00129010(int);
/* Supplied declaration required: FUN_00129020. */
extern int FUN_00129034(int, unsigned int);
/* Supplied declaration required: FUN_001290cc. */
/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: FUN_001538b8. */
/* Supplied declaration required: FUN_002bd258. */
/* Supplied declaration required: FUN_002bd27c. */
extern unsigned int FUN_002bd29c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd420. */
extern unsigned int FUN_002bf5c0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c498c. */


unsigned int * FUN_0010c0f4(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_002c38a4(&DAT_004e315c);
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x98,1);
  puVar1[0x1f] = 0xffffffff;
  puVar1[0x23] = param_3;
  puVar1[0x24] = 1;
  temp_v0 = FUN_00129010(param_1);
  *puVar1 = temp_v0;
  FUN_00129020(param_1);
  temp_v1 = FUN_00129034(param_1,0);
  puVar1[0x22] = param_2 - (temp_v1 - param_1);
  puVar1[0x20] = temp_v1 - param_1;
  temp_v0 = FUN_002bf5c0(0x10000,0x100,0,param_2,0x20,1);
  puVar1[0x1b] = temp_v0;
  FUN_002bd420(param_1,temp_v0,param_2);
  temp_v0 = FUN_002bd29c(0x7fff,0);
  puVar1[0xe] = temp_v0;
  puVar1[0xf] = 0x3f34fdf4;
  puVar1[0x10] = 0x3f34fdf4;
  FUN_001538b8(temp_v0,puVar1 + 0xf);
  FUN_00147370(puVar1[0xe]);
  FUN_002bd27c(puVar1[0xe]);
  temp_v1 = 0;
  do {
    FUN_002bd258(puVar1 + temp_v1 * 6 + 2);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_001290cc(puVar1[0xe],puVar1[0x1b],puVar1 + 2,puVar1 + 8,0);
  FUN_002c3820(&DAT_004e315c);
  return puVar1;
}
