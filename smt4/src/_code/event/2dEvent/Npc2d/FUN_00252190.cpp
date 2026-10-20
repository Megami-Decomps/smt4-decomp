/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00252190` (_code @ 0x252190, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b06c4(...);
int memClear(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001dfc64(...); /* 0x1dfc64 */
extern int FUN_002db92c(...); /* 0x2db92c */

extern unsigned int FUN_00294090(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b06c4. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */


void FUN_00252190(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x98,1);
  memClear();
  puVar1[8] = 0x3f800000;
  puVar1[9] = 0;
  puVar1[10] = 0x3e800000;
  puVar1[4] = param_3;
  puVar1[1] = 0x1f;
  puVar1[2] = param_2;
  *(unsigned char *)(puVar1 + 0xc) = 0;
  temp_v0 = param_1 & 0xffff;
  *(unsigned char *)(puVar1 + 0x17) = 1;
  FUN_002b06c4();
  puVar1[0x13] = (int)*(short *)(temp_v0 + 0x88);
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 != 0) {
    puVar1[3] = 1;
  }
  else {
    temp_v0 = FUN_00294090(puVar1[0x13],1);
    puVar1[0x12] = temp_v0;
    puVar1[3] = 2;
  }
  *puVar1 = -param_1 & 0xffff;
  if ((int)param_3 < -99) {
    temp_v0 = 0x10;
  }
  else if ((int)param_3 < -0x3b) {
    temp_v0 = 3;
  }
  else if ((int)param_3 >= 100) {
    temp_v0 = 0x11;
  }
  else if ((int)param_3 >= 0x28) {
    temp_v0 = 4;
  }
  else if ((int)param_3 < 0) {
    temp_v0 = 0x12;
  }
  else {
    temp_v0 = 5;
  }
  puVar1[0xe] = temp_v0;
  puVar1[6] = 0x3ea8f5c3;
  asdProcessCreateSimple("EVE_2dTex",2,0,0,FUN_001dfc64,FUN_002db92c,puVar1);
  return;
}

} /* extern "C" */
