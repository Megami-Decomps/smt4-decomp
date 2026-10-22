/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d018` (_code @ 0x11d018, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(...);
int __aeabi_vec_ctor_nocookie_nodtor(...);
int FUN_002fbc1a(...);
int streamReadWord(int, unsigned char *);
int FUN_00304d10(...);
int FUN_00310f9e(...);
int FUN_00310fa6(...);
int FUN_00310ff2(int, unsigned char *);

extern unsigned char LAB_0011076d; /* 0x11076d */
extern unsigned char LAB_0011077d; /* 0x11077d */
extern unsigned char LAB_002e7635; /* 0x2e7635 */
extern unsigned char LAB_002e9319; /* 0x2e9319 */
extern unsigned char LAB_002e9ff5; /* 0x2e9ff5 */
extern unsigned char LAB_002ea0e5; /* 0x2ea0e5 */
extern unsigned char LAB_002ec9f5; /* 0x2ec9f5 */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: FUN_002fbc1a. */
/* Supplied declaration required: streamReadWord. */
/* Supplied declaration required: FUN_00304d10. */
/* Supplied declaration required: FUN_00310f9e. */
/* Supplied declaration required: FUN_00310fa6. */
/* Supplied declaration required: FUN_00310ff2. */


void FUN_0011d018(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned int temp_v1;
  unsigned char temp_v2 [252];
  
  puVar3 = temp_v2;
  puVar1 = (unsigned char *)FUN_00304d10(param_2,0);
  if (puVar1 == (unsigned char *)0x0) {
    __aeabi_vec_ctor_nocookie_nodtor(temp_v2,&LAB_002e9ff5,0xc,1);
    puVar1 = temp_v2;
  }
  FUN_00310ff2(param_1,puVar1);
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  puVar1 = (unsigned char *)FUN_00304d10(param_2,1);
  if (puVar1 != (unsigned char *)0x0) {
    puVar3 = puVar1;
  }
  streamReadWord(param_1,puVar3);
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  temp_v0 = FUN_00304d10(param_2,2);
  if (temp_v0 != 0) {
    FUN_00310fa6(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    __aeabi_vec_ctor_nocookie_nodtor(temp_v2,&LAB_002e7635,0x20,1);
    FUN_00310fa6(param_1,temp_v2);
    if (*(char *)(param_1 + 4) != '\0') {
      puVar3 = &LAB_002ec9f5;
      temp_v1 = 0x20;
      rt_vec_dtor(temp_v2,puVar3,temp_v1,1);
      return;
    }
    rt_vec_dtor(temp_v2,&LAB_002ec9f5,0x20,1);
  }
  temp_v0 = FUN_00304d10(param_2,3);
  if (temp_v0 != 0) {
    FUN_00310f9e(param_1,temp_v0);
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  else {
    __aeabi_vec_ctor_nocookie_nodtor(temp_v2,&LAB_0011076d,0xf8,1);
    FUN_00310f9e(param_1,temp_v2);
    if (*(char *)(param_1 + 4) != '\0') {
      puVar3 = &LAB_0011077d;
      temp_v1 = 0xf8;
      rt_vec_dtor(temp_v2,puVar3,temp_v1,1);
      return;
    }
    rt_vec_dtor(temp_v2,&LAB_0011077d,0xf8,1);
  }
  temp_v0 = FUN_00304d10(param_2,4);
  if (temp_v0 != 0) {
    FUN_002fbc1a(param_1,temp_v0);
    return;
  }
  __aeabi_vec_ctor_nocookie_nodtor(temp_v2,&LAB_002ea0e5,8,1);
  FUN_002fbc1a(param_1,temp_v2);
  puVar3 = &LAB_002e9319;
  temp_v1 = 8;
  rt_vec_dtor(temp_v2,puVar3,temp_v1,1);
  return;
}

} /* extern "C" */
