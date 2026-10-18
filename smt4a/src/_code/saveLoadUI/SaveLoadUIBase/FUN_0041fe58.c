/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041fe58` (_code @ 0x41fe58, 0x388 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned char DAT_00533d50; /* 0x533d50 */
extern unsigned char DAT_00533dc8; /* 0x533dc8 */
extern unsigned char DAT_00533de0; /* 0x533de0 */
extern unsigned char DAT_00588e14; /* 0x588e14 */
extern unsigned char DAT_00588e15; /* 0x588e15 */
extern unsigned char DAT_00588e16; /* 0x588e16 */
extern unsigned char DAT_00588e17; /* 0x588e17 */
extern unsigned char DAT_00588e18; /* 0x588e18 */
extern unsigned char DAT_00588e19; /* 0x588e19 */
extern int DAT_00588e28; /* 0x588e28 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014af84. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001a9110. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00203b40. */
extern unsigned int FUN_00228af0(void);
extern unsigned int FUN_00261458(void);
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002a48e0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031d1d8. */
extern unsigned char FUN_00371288(void);
/* Supplied declaration required: FUN_003f86f0. */
/* Supplied declaration required: FUN_003f881c. */
/* Supplied declaration required: FUN_0041f020. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041fe58(int param_1,int param_2,unsigned char param_3)

{
/* irregular: 21 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *(char *)(param_1 + 5) = (char)param_2;
  *(unsigned char *)(param_1 + 6) = param_3;
  temp_v1 = 0x10000;
  FUN_001630d4(0x10000,0x100,0,0x80,1);
  *(unsigned int *)(param_1 + 0x1c) = temp_v1;
  temp_v1 = 0x10000;
  FUN_001630d4(0x10000,0x100,0,8,1);
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  temp_v1 = 0x10000;
  FUN_001630d4(0x10000,0x100,0,0x2a71c,1);
  *(unsigned int *)(param_1 + 0x24) = temp_v1;
  temp_v1 = FUN_00261458();
  rt_memcpy_w(*(unsigned int *)(param_1 + 0x1c),temp_v1,0x80);
  temp_v1 = FUN_00228af0();
  FUN_001a9110(*(unsigned int *)(param_1 + 0x20),temp_v1);
  temp_v1 = FUN_0014af84();
  rt_memcpy_w(*(unsigned int *)(param_1 + 0x24),temp_v1,0x2a71c);
  temp_v2 = FUN_0014af84();
  rt_memcpy_w(param_1 + 0x28,temp_v2 + 8,0xe);
  FUN_002804b0("saveLoadUI/saveloadUI.bf",param_1 + 0x38,0);
  FUN_002804b0("saveLoadUI/saveloadUI.mbm",param_1 + 0x3c,0);
  if (param_2 != 0) {
    *(unsigned int *)(param_1 + 0x48) = 0x470;
    *(unsigned int *)(param_1 + 0x4c) = 8;
    temp_v0 = FUN_0018719c();
    *(unsigned char *)(param_1 + 0x50) = temp_v0;
  }
  else {
    *(unsigned int *)(param_1 + 0x4c) = 9;
    *(unsigned int *)(param_1 + 0x48) = 0x471;
    *(unsigned char *)(param_1 + 0x50) = 1;
  }
  DAT_00588e16 = FUN_0018719c(0x470);
  DAT_00588e17 = FUN_0018719c(0x471);
  DAT_00588e18 = FUN_0018719c(0x558);
  DAT_00588e19 = FUN_0018719c(0x559);
  FUN_0014384c(0x2b);
  FUN_001acf98(0x2b,0);
  FUN_003f881c(0x3d,0);
  FUN_003f86f0();
  temp_v2 = 0;
  do {
    FUN_002e6354(param_1 + temp_v2 * 0x80 + 0x6c,0x80);
    temp_v3 = param_1 + temp_v2;
    temp_v2 = temp_v2 + 1;
    *(unsigned char *)(temp_v3 + 0x2ec) = 0;
  } while (temp_v2 < 5);
  *(unsigned int *)(param_1 + 0x2f4) = 0;
  temp_v1 = 0x100;
  FUN_001630d4(0x100,0x100,0,100,1);
  *(unsigned int *)(param_1 + 0x54) = temp_v1;
  temp_v2 = param_1 + 0x454;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_001505ac(temp_v2,&DAT_00533d50,0x78,&DAT_00533dc8,0x18,0,0,0,0,&DAT_00533de0,0xe0);
  FUN_0014e188(param_1 + 0x474,0x2b,1,temp_v2,0xc9);
  FUN_0014e220(param_1 + 0x500,0x2b,0x51,2,temp_v2,2);
  FUN_0014e220(param_1 + 0x58c,0x2b,0x52,2,temp_v2,2);
  *(unsigned int *)(param_1 + 0x618) = 0;
  *(unsigned int *)(param_1 + 0x61c) = 0;
  *(unsigned char *)(param_1 + 0x30c) = 0;
  *(unsigned char *)(param_1 + 0x72c) = 0;
  temp_v0 = FUN_00371288();
  *(unsigned char *)(param_1 + 0x13) = temp_v0;
  *(unsigned int *)(param_1 + 0x18) = 2;
  *(unsigned int *)(param_1 + 0x300) = 0;
  FUN_001681cc(0xaa);
  *(unsigned int *)(param_1 + 0x308) = 0;
  FUN_0041f020(param_1,1);
  temp_v2 = DAT_00588e28;
  temp_v3 = DAT_00588e28 - 1;
  if (temp_v3 < 0) {
    temp_v3 = 0;
  }
  *(int *)(param_1 + 0x2f8) = DAT_00588e28;
  temp_v4 = temp_v2 - temp_v3;
  *(int *)(param_1 + 0x2fc) = temp_v2;
  *(int *)(param_1 + 0x60) = temp_v2;
  if (temp_v4 < 0) {
    temp_v4 = 0;
  }
  *(int *)(param_1 + 0x304) = temp_v3;
  *(int *)(param_1 + 0x308) = temp_v4;
  FUN_00203b40(param_1 + 0x3d8,5,2,1,1,1);
  FUN_0031d1d8(param_1 + 0x3d8,temp_v4);
  FUN_002a48e0(param_1 + 0x3d8,temp_v3);
  FUN_0019de98(0,0xf4f4f4ff);
  temp_v0 = *(unsigned char *)(param_1 + 7);
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned char *)(param_1 + 7) = 1;
  *(unsigned char *)(param_1 + 0xd) = temp_v0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  DAT_00588e14 = 0;
  DAT_00588e15 = 0;
  return;
}
