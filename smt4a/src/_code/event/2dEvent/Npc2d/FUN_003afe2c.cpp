/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afe2c` (_code @ 0x3afe2c, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(...);
int FUN_0019cac4(...);
int sysMemClear(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_002897cc(...); /* 0x2897cc */
extern int FUN_0034da3c(...); /* 0x34da3c */

/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: sysMemClear. */
extern unsigned int FUN_00409fe8(unsigned int, unsigned int);


void FUN_003afe2c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0; 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xbc,1);
  sysMemClear();
  puVar1[8] = 0x3f800000;
  puVar1[9] = 0;
  puVar1[10] = 0x3e800000;
  puVar1[1] = 0x1f;
  puVar1[5] = param_4 - 0xd;
  puVar1[4] = param_3;
  puVar1[2] = param_2;
  *(unsigned char *)(puVar1 + 0xc) = 0;
  *(unsigned char *)(puVar1 + 0x18) = 1;
  puVar1[0xd] = in_s0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  temp_v0 = param_1 & 0xffff;
  FUN_0019cac4();
  puVar1[0x14] = (int)*(short *)(temp_v0 + 0x8c);
  temp_v1 = FUN_00162ea4();
  if (temp_v1 != 0) {
    puVar1[3] = 1;
  }
  else {
    temp_v0 = FUN_00409fe8(puVar1[0x14],1);
    puVar1[0x13] = temp_v0;
    puVar1[3] = 2;
  }
  *puVar1 = -param_1 & 0xffff;
  if ((int)param_3 < -99) {
    temp_v0 = 0x11;
  }
  else if ((int)param_3 < -0x3b) {
    temp_v0 = 3;
  }
  else if ((int)param_3 >= 100) {
    temp_v0 = 0x12;
  }
  else if ((int)param_3 >= 0x28) {
    temp_v0 = 4;
  }
  else if ((int)param_3 < 0) {
    temp_v0 = 0x13;
  }
  else {
    temp_v0 = 5;
  }
  puVar1[0xf] = temp_v0;
  puVar1[6] = 0x3ea8f5c3;
  asdProcessCreateSimple("EVE_2dTex",4,0,0,FUN_002897cc,FUN_0034da3c,puVar1);
  return;
}

} /* extern "C" */
