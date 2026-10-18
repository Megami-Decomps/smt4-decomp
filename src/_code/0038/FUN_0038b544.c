/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b544` (_code @ 0x38b544, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 15 slot(s), 49 byte(s) */
typedef struct {
    unsigned int sp2EC; /* 0x2ec: local_2ec */
    unsigned int sp2F8; /* 0x2f8: local_2f8 */
    unsigned char sp31B; /* 0x31b: local_31b */
    unsigned char sp31C; /* 0x31c: local_31c */
    unsigned char sp31D; /* 0x31d: local_31d */
    unsigned short sp410; /* 0x410: local_410 */
    unsigned int sp41C; /* 0x41c: local_41c */
    unsigned int sp424; /* 0x424: local_424 */
    unsigned int sp428; /* 0x428: local_428 */
    unsigned int sp430; /* 0x430: local_430 */
    unsigned int sp438; /* 0x438: local_438 */
    unsigned int sp43C; /* 0x43c: local_43c */
    unsigned int sp440; /* 0x440: local_440 */
    unsigned int sp444; /* 0x444: local_444 */
    unsigned int sp448; /* 0x448: local_448 */
} param_7_stack;

extern unsigned char DAT_00477000; /* 0x477000 */
extern unsigned char DAT_00477fff; /* 0x477fff */

/* Supplied declaration required: FUN_00100c74. */
/* Supplied declaration required: FUN_00147390. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_0035a404. */
/* Supplied declaration required: FUN_00361500. */
/* Supplied declaration required: FUN_003615dc. */
/* Supplied declaration required: FUN_00361678. */
/* Supplied declaration required: FUN_003617bc. */
/* Supplied declaration required: FUN_003617ec. */


unsigned int
FUN_0038b544(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,
            int param_6,unsigned int param_7)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned int temp_v7 [2];
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned short temp_v11;
  unsigned char temp_v12 [131];
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  int temp_v17;
  
  FUN_00361500(temp_v7);
  temp_v11 = (unsigned short)param_4;
  temp_v13 = 0;
  temp_v15 = 0;
  if (param_5 != 0) {
    temp_v9 = 1;
  }
  temp_v7[0] = 1;
  temp_v8 = 4;
  temp_v14 = 1;
  if (param_6 != 0) {
    temp_v10 = temp_v10 | 1;
  }
  FUN_00100c74(temp_v12,param_3,0x41);
  puVar1 = temp_v7;
  FUN_003615dc(temp_v7,0);
  FUN_00147390();
  FUN_003617bc();
  FUN_003617ec();
  DAT_00477fff = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  puVar2 = temp_v6;
  temp_v1 = param_7;
  FUN_00361678(puVar2,temp_v7,&DAT_00477000,puVar1);
  if ((puVar2 != (unsigned char *)0x0) && (temp_v16 == 2)) {
    temp_v1 = 0xffffffff;
    temp_v0 = 0;
    FUN_0035a404(0,&temp_v2,&DAT_00477000 + temp_v17 * 2,&temp_v1);
    if (temp_v0 < 0) {
      FUN_002c52f8();
    }
    FUN_002c3944(param_2,param_4);
    FUN_0035a404(param_2,&temp_v2,&DAT_00477000 + temp_v17 * 2,&temp_v1);
    if (param_2 < 0) {
      FUN_002c52f8();
    }
    return 1;
  }
  return 0;
}
