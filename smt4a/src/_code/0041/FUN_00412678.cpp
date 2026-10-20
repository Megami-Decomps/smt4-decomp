/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412678` (_code @ 0x412678, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001960f0(unsigned int *, unsigned int *);
int FUN_0019eafc(void);
int FUN_00500fe4(unsigned int *, unsigned int *, unsigned int);
int FUN_00501084(unsigned int *, unsigned int *);
int rt_memcpy_w(unsigned int *, unsigned int *, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_001960f0. */
/* Supplied declaration required: FUN_0019eafc. */
/* Supplied declaration required: FUN_00500fe4. */
/* Supplied declaration required: FUN_00501084. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00412678(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  FUN_0019eafc();
  *param_1 = 0x100;
  param_1[1] = 0x20229;
  param_1[2] = 0x300;
  param_1[3] = 0x2025e;
  param_1[4] = 1;
  param_1[5] = 0xf025f;
  param_1[6] = 0x100;
  param_1[7] = 0x30253;
  puVar2 = param_1 + 8;
  temp_v0 = 0;
  do {
    if (param_2[temp_v0 * 0x1c + 0x58] != 0) {
      *puVar2 = 0;
      puVar2[1] = (temp_v0 * 3 + 0x203) | 0x802f0000;
      puVar1 = puVar2 + 3;
      puVar2[2] = 0;
      *puVar1 = 0;
    }
    else {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
      *puVar1 = (temp_v0 * 3 + 0x205) | 0xf0000;
    }
    puVar2 = puVar1 + 1;
    if ((char)param_2[temp_v0 * 5 + 0x1a8] != '\0') {
      *puVar2 = temp_v0;
      puVar1[2] = 0x803f0232;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar2 = puVar1 + 7;
      puVar1[6] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xc);
  temp_v0 = *param_2;
  if (temp_v0 == 0) {
    puVar1 = param_2;
    FUN_00501084(param_2,param_2 + 1);
    temp_v0 = ((int)puVar1 + (-4 - (int)param_2)) >> 2;
    *param_2 = temp_v0;
  }
  rt_memcpy_w(puVar2,param_2 + 1,temp_v0 << 2);
  puVar1 = param_2;
  FUN_00500fe4(param_2,puVar2 + *param_2,param_3);
  temp_v0 = 0;
  do {
    if (param_2[temp_v0 * 0x1c + 0x58] != 0) {
      *puVar1 = 0;
      puVar1[1] = (temp_v0 * 3 + 0x203) | 0x802f0000;
      puVar2 = puVar1 + 3;
      puVar1[2] = 0;
      *puVar2 = 0;
    }
    else {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
      *puVar2 = (temp_v0 * 3 + 0x205) | 0xf0000;
    }
    puVar1 = puVar2 + 1;
    if ((char)param_2[temp_v0 * 5 + 0x1a8] != '\0') {
      *puVar1 = temp_v0;
      puVar2[2] = 0x803f0232;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar1 = puVar2 + 7;
      puVar2[6] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 0xc);
  FUN_001960f0(param_1,puVar1);
  return;
}

} /* extern "C" */
