/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b498` (_code @ 0x11b498, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0011b560; /* 0x11b560 */
extern unsigned char LAB_0011b56c; /* 0x11b56c */
extern unsigned char LAB_0011b574; /* 0x11b574 */

/* Supplied declaration required: FUN_0011bc40. */
/* Supplied declaration required: FUN_00126d14. */
/* Supplied declaration required: FUN_002af390. */
/* Supplied declaration required: FUN_002b5cf0. */
/* Supplied declaration required: FUN_002b7148. */
/* Supplied declaration required: FUN_002c1400. */


unsigned int FUN_0011b498(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002b7148();
  FUN_0011bc40(param_1 + 0x138,param_2,param_4,0xffffffff);
  *(unsigned int *)(param_1 + 0x128) = param_2;
  *(unsigned char *)(param_1 + 300) = 0;
  FUN_002c1400(param_1 + 0x138,param_1 + 0x12a20,&LAB_0011b560);
  FUN_002c1400(param_1 + 0x138,param_1 + 0x12a30,&LAB_0011b56c);
  FUN_002c1400(param_1 + 0x138,param_1 + 0x12a28,&LAB_0011b574);
  FUN_002c1400(param_1 + 0x138,param_1 + 0x12a38,"uMatrix");
  temp_v0 = param_1 + 0x138;
  FUN_002c1400(temp_v0,param_1 + 0x12a40,"uMaterialColor");
  FUN_002b7148();
  temp_v1 = param_1 + 0x138;
  FUN_002b5cf0(temp_v1,temp_v0);
  FUN_002af390(temp_v0,temp_v1);
  FUN_00126d14(param_1);
  return 1;
}
