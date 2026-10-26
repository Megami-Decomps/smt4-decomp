/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ae538` (_code @ 0x1ae538, 0x7a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0029_VariantA.h"

extern "C" {

int FUN_00283f80(...);
int FUN_0028f870(...);
int gameGetPlayerData(void);
int FUN_002bf380(...);
int FUN_002daff4(...);

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: FUN_00283f80. */
/* Supplied declaration required: FUN_0028f870. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_002bf380. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002daff4. */


void FUN_001ae538(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [8];
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int uStack_2c;
  int temp_v12;
  
  temp_v6 = 0;
  temp_v9 = 0;
  temp_v10 = param_1;
  temp_v11 = param_2;
  uStack_2c = param_3;
  temp_v12 = param_4;
  switch(param_1) {
  case 0x11:
    temp_v9 = g_camp + 0x2a4;
    temp_v6 = g_camp + 0x1e7c;
    FUN_002bf380(2,0x1d,4,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f1,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x509,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50b,temp_v11,param_3,0x6a);
    puVar2 = (unsigned short *)gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*puVar2,temp_v11,param_3);
    break;
  case 0x12:
    temp_v9 = g_camp + 0x308;
    temp_v6 = g_camp + 0x1f6c;
    FUN_002bf380(2,0x1d,4,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f2,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50a,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50c,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50d,temp_v11,param_3,0x6a);
    temp_v3 = gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*(unsigned short *)(temp_v3 + 2),temp_v11,param_3);
    break;
  case 0x13:
    temp_v9 = g_camp + 0x36c;
    temp_v6 = g_camp + 0x205c;
    FUN_002bf380(2,0x1d,4,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f3,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50a,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50b,temp_v11,param_3,0x6a);
    temp_v3 = gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*(unsigned short *)(temp_v3 + 4),temp_v11,param_3);
    break;
  case 0x14:
    temp_v9 = g_camp + 0x3d0;
    temp_v6 = g_camp + 0x20c0;
    FUN_002bf380(2,0x1d,5,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f4,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50e,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50f,temp_v11,param_3,0x6a);
    temp_v3 = gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*(unsigned short *)(temp_v3 + 6),temp_v11,param_3);
    break;
  case 0x15:
    temp_v9 = g_camp + 0x434;
    temp_v6 = g_camp + 0x21b0;
    FUN_002bf380(2,0x1d,5,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f5,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50e,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50f,temp_v11,param_3,0x6a);
    temp_v3 = gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*(unsigned short *)(temp_v3 + 8),temp_v11,param_3);
    break;
  case 0x16:
    temp_v9 = g_camp + 0x498;
    temp_v6 = g_camp + 0x22a0;
    FUN_002bf380(2,0x1d,5,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f6,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50e,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50f,temp_v11,param_3,0x6a);
    temp_v3 = gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*(unsigned short *)(temp_v3 + 10),temp_v11,param_3);
    break;
  case 0x17:
    temp_v9 = g_camp + 0x4fc;
    temp_v6 = g_camp + 0x2390;
    FUN_002bf380(2,0x1d,5,param_2,param_3,0x65);
    FUN_002bf288(2,0x1d,0x4f7,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50e,temp_v11,param_3,0x6a);
    FUN_002bf288(2,0x1d,0x50f,temp_v11,param_3,0x6a);
    temp_v3 = gameGetPlayerData();
    FUN_00283f80(temp_v10,0,*(unsigned short *)(temp_v3 + 0xc),temp_v11,param_3);
  }
  temp_v3 = g_camp;
  temp_v8 = temp_v11;
  temp_v1 = 0;
  temp_v7[0] = 0x11;
  temp_v7[1] = 0x12;
  temp_v7[2] = 0x13;
  temp_v7[3] = 0x14;
  temp_v7[4] = 0x15;
  temp_v7[5] = 0x16;
  temp_v7[6] = 0x17;
  do {
    temp_v4 = temp_v1;
    if (temp_v7[temp_v1] == temp_v10) break;
    temp_v1 = temp_v1 + 1;
    temp_v4 = 0;
  } while (temp_v1 < 7);
  temp_v5 = 0;
  temp_v1 = temp_v4;
  do {
    temp_v1 = temp_v1 - 1;
    if (temp_v1 < 0) {
      temp_v1 = 6;
    }
    if (((temp_v7[temp_v1] != 0x12 && temp_v7[temp_v1] != 0x13) ||
        (temp_v2 = gameFlagIsSet(0x410), temp_v2 != 0)) &&
       (temp_v2 = FUN_0029ee54((const void *)(temp_v3 + temp_v1 * 100 + 0x2a4)), 0 < temp_v2)) {
      FUN_002bf288(2,0x1d,0x4f8,temp_v8,param_3,0x6a);
      FUN_002bf288(2,0x1d,temp_v1 + 0x4fa,temp_v8,param_3,0x6a);
      break;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 7);
  temp_v1 = 0;
  do {
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 7) {
      temp_v4 = 0;
    }
    if (((temp_v7[temp_v4] != 0x12 && temp_v7[temp_v4] != 0x13) ||
        (temp_v5 = gameFlagIsSet(0x410), temp_v5 != 0)) &&
       (temp_v5 = FUN_0029ee54((const void *)(temp_v3 + temp_v4 * 100 + 0x2a4)), 0 < temp_v5)) {
      FUN_002bf288(2,0x1d,0x4f9,temp_v8,param_3,0x6a);
      FUN_002bf288(2,0x1d,temp_v4 + 0x501,temp_v8,param_3,0x6a);
      break;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 7);
  FUN_002bf288(2,0x1d,0x508,temp_v11,param_3,0x6a);
  FUN_002bf288(2,0x1d,0x510,temp_v11,param_3,0x6a);
  temp_v3 = 0;
  do {
    temp_v1 = FUN_0029efc0(temp_v9);
    temp_v4 = FUN_0029ee54((const void *)(temp_v9));
    if (temp_v4 <= temp_v1 + temp_v3) break;
    temp_v1 = FUN_0029efc0(temp_v9);
    FUN_00283f80(temp_v10,temp_v3 + 2,*(unsigned short *)(temp_v6 + (temp_v1 + temp_v3) * 2),temp_v11,param_3);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 9);
  FUN_0028f870(temp_v9,temp_v11,param_3,0);
  if (temp_v12 != 0) {
    temp_v3 = FUN_0029efc0(temp_v9);
    temp_v1 = FUN_0029efa8(temp_v9);
    temp_v0 = *(unsigned short *)(temp_v6 + (temp_v1 + temp_v3) * 2);
    temp_v6 = FUN_0029efa8(temp_v9);
    FUN_002daff4(temp_v10,temp_v6 + 2,temp_v0,temp_v11,param_3);
  }
  return;
}

} /* extern "C" */
