/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9ebc` (_code @ 0x4d9ebc, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned short *, int);

typedef struct fn_004d9ebc_arg0 fn_004d9ebc_arg0;
struct fn_004d9ebc_arg0 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined2 field_0x4; /* +0x4 */
    undefined2 field_0x6; /* +0x6 */
    ushort field_0x8; /* +0x8 */
    undefined2 field_0xa; /* +0xa */
    undefined2 field_0xc; /* +0xc */
    undefined2 field_0xe; /* +0xe */
    undefined2 field_0x10; /* +0x10 */
    undefined2 field_0x12; /* +0x12 */
    undefined2 field_0x14; /* +0x14 */
    undefined2 field_0x16; /* +0x16 */
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    ushort field_0x1c; /* +0x1c */
    ushort field_0x1e; /* +0x1e */
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    ushort field_0x24; /* +0x24 */
    undefined2 field_0x26; /* +0x26 */
    undefined2 field_0x28; /* +0x28 */
    undefined2 field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x34];
    undefined2 field_0x62; /* +0x62 */
    undefined2 field_0x64; /* +0x64 */
    unsigned char pad_0x66[0xc6];
    undefined2 field_0x12c; /* +0x12c */
    undefined2 field_0x12e; /* +0x12e */
};

extern int FUN_00168518(fn_004d9ebc_arg0 *, unsigned int);
extern int gameGetPlayerData(void);
extern unsigned short *gameGetOptions(void);
/* Supplied declaration required: sysMemClear. */
extern unsigned int FUN_0036fd64(fn_004d9ebc_arg0 *, unsigned short);


void FUN_004d9ebc(fn_004d9ebc_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v1;
  unsigned short temp_v0;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short *puVar8;
  int temp_v7;
  unsigned int temp_v8;
  
  puVar8 = (unsigned short *)gameGetOptions();
  temp_v8 = 0xffffffff;
  temp_v7 = 0;
  do {
    if ((fn_004d9ebc_arg0 *)(unsigned int)(unsigned short)puVar8[temp_v7 + 0x99] == param_1) {
      temp_v7 = gameGetPlayerData();
      temp_v8 = FUN_0036fd64(param_1,*(unsigned short *)(temp_v7 + 0x62));
      break;
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 3);
  sysMemClear(puVar8,300);
  temp_v7 = FUN_00168518(param_1,temp_v8);
  puVar8[0x96] = (short)(int)param_1;
  puVar8[0x97] = (short)temp_v8;
  puVar8[0x31] = 0x4b1;
  puVar8[0x32] = *(unsigned short *)(temp_v7 + 8);
  temp_v0 = *(unsigned short *)(temp_v7 + 0x18);
  *puVar8 = temp_v0;
  temp_v1 = *(unsigned short *)(temp_v7 + 0x1a);
  puVar8[1] = temp_v1;
  temp_v2 = *(unsigned short *)(temp_v7 + 0x1c);
  puVar8[2] = temp_v2;
  temp_v3 = *(unsigned short *)(temp_v7 + 0x20);
  puVar8[4] = temp_v3;
  temp_v4 = *(unsigned short *)(temp_v7 + 0x22);
  puVar8[5] = temp_v4;
  temp_v5 = *(unsigned short *)(temp_v7 + 0x24);
  puVar8[6] = temp_v5;
  temp_v6 = *(unsigned short *)(temp_v7 + 0x1e);
  puVar8[3] = temp_v6;
  puVar8[0xe] = temp_v0;
  puVar8[7] = temp_v0;
  puVar8[0xf] = temp_v1;
  puVar8[8] = temp_v1;
  puVar8[0x10] = temp_v2;
  puVar8[9] = temp_v2;
  puVar8[0x12] = temp_v3;
  puVar8[0xb] = temp_v3;
  puVar8[0x13] = temp_v4;
  puVar8[0xc] = temp_v4;
  puVar8[0x14] = temp_v5;
  puVar8[0xd] = temp_v5;
  puVar8[0x11] = temp_v6;
  puVar8[10] = temp_v6;
  puVar8[0x15] = temp_v0;
  puVar8[0x16] = temp_v1;
  return;
}

} /* extern "C" */
