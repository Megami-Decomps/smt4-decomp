/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022838c` (_code @ 0x22838c, 0x720 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_001aba54(void);
int FUN_002a2cbc(void);
int FUN_002e6340(void);
int sysMemClear(int, int);
int FUN_002e6dd4(int, int);
int FUN_003339ec(void);
int FUN_0034c8e8(void);
int FUN_003fd56c(void);
int FUN_003fd6dc(void);
int FUN_003ff1a8(void);
int FUN_0040a810(void);
int FUN_004bb880(void);
int FUN_004cd960(void);
int rt_memcpy_w(unsigned short *, unsigned short *, int);

extern int DAT_0057f69c; /* 0x57f69c */
extern unsigned int *DAT_0057f6a4; /* 0x57f6a4 */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_002a2cbc. */
/* Supplied declaration required: FUN_002e6340. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_003339ec. */
/* Supplied declaration required: FUN_0034c8e8. */
/* Supplied declaration required: FUN_003fd56c. */
/* Supplied declaration required: FUN_003fd6dc. */
/* Supplied declaration required: FUN_003ff1a8. */
/* Supplied declaration required: FUN_0040a810. */
/* Supplied declaration required: FUN_004bb880. */
/* Supplied declaration required: FUN_004cd960. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0022838c(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned short *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar8;
  unsigned int temp_v5;
  
  sysMemClear(DAT_0057f69c + 0x88,0x2a71c);
  puVar1 = DAT_0057f6a4;
  temp_v3 = 0x18;
  *DAT_0057f6a4 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  temp_v4 = DAT_0057f69c;
  temp_v0 = 0;
  temp_v2 = DAT_0057f69c + 0x8c;
  do {
    *(unsigned char *)(temp_v2 + temp_v0 + 0x1c88) = 0xff;
    *(char *)(temp_v2 + temp_v0 * 300 + 0xce) = (char)temp_v0;
    temp_v3 = temp_v3 - 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v3 != 0);
  *(unsigned char *)(temp_v4 + 0x1d2c) = 0xff;
  *(unsigned char *)(temp_v4 + 0x1d2d) = 0xff;
  *(unsigned char *)(temp_v4 + 0x1d2e) = 0xff;
  *(unsigned int *)(temp_v4 + 0x2db4) = 0;
  *(unsigned int *)(temp_v4 + 0x2db8) = 0;
  FUN_002e6dd4(temp_v4 + 0x2d68,0x4c);
  puVar1 = DAT_0057f6a4;
  temp_v4 = DAT_0057f69c;
  temp_v0 = 0;
  *(unsigned short *)(DAT_0057f6a4 + 2) = 0;
  puVar8 = (unsigned short *)(temp_v4 + 0x5f5c);
  *(unsigned short *)((int)puVar1 + 10) = 0;
  do {
    puVar3 = (unsigned short *)((temp_v0 + 1U) & 0xffff);
    FUN_00184310();
    puVar1 = DAT_0057f6a4;
    if (puVar3 != (unsigned short *)0x0) {
      if ((puVar3[5] & 1) != 0) {
        if (*(short *)(DAT_0057f6a4 + 2) == 0) {
          *(unsigned short *)(DAT_0057f6a4 + 2) = *puVar3;
        }
        *(unsigned short *)((int)puVar1 + 10) = *puVar3;
      }
      *puVar8 = puVar3[3];
      puVar8[1] = puVar3[0xf];
      puVar8[2] = puVar3[0x10];
      puVar8[3] = puVar3[0x11];
      puVar8[4] = puVar3[0x12];
      puVar8[5] = puVar3[0x13];
      puVar8[6] = puVar3[0xf];
      puVar8[7] = puVar3[0x10];
      puVar8[8] = puVar3[0x11];
      puVar8[9] = puVar3[0x12];
      puVar8[10] = puVar3[0x13];
      puVar8[0xc] = puVar3[0xc];
      puVar8[0xd] = puVar3[0xd];
      puVar8[0xe] = puVar3[0x20];
      puVar8[0xf] = puVar3[0x21];
      puVar8[0x10] = puVar3[0x22];
      puVar8[0x11] = puVar3[0x23];
      puVar8[0x12] = puVar3[0x24];
      puVar8[0x13] = puVar3[0x25];
      puVar8[0x14] = puVar3[0x26];
      puVar8[0x15] = puVar3[0x27];
      puVar8[0x1a] = 0;
      puVar8[0x1b] = puVar8[0x1b] & 0xff00;
      *(unsigned char *)(puVar8 + 0xb) = *(unsigned char *)(puVar8 + 0xb) & 1;
      puVar8[0x27] = 0;
      rt_memcpy_w(puVar8 + 0x1e,puVar3 + 0x50,0x12);
      temp_v4 = 0;
      do {
        temp_v1 = (unsigned int)(unsigned short)puVar8[temp_v4 + 0xe];
        if (((temp_v1 != 0) && (FUN_001aba54(), temp_v1 != 0)) && (*(unsigned short *)(temp_v1 + 0x26) < 0x12)) {
          *(unsigned char *)((int)puVar8 + temp_v4 + 0x2c) =
               *(unsigned char *)((int)puVar8 + *(unsigned short *)(temp_v1 + 0x26) + 0x3c);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
    temp_v4 = DAT_0057f69c;
    temp_v0 = temp_v0 + 1;
    puVar8 = puVar8 + 0x28;
  } while (temp_v0 < 0x500);
  temp_v5 = 0;
  *(unsigned char *)(DAT_0057f69c + 0x3e74) = 0;
  *(unsigned char *)(temp_v4 + 0x3e75) = 0;
  *(unsigned char *)(temp_v4 + 0x3e76) = 0;
  *(unsigned char *)(temp_v4 + 0x3e77) = 0;
  *(unsigned int *)(temp_v4 + 0x3e78) = 0;
  *(unsigned int *)(temp_v4 + 0x3e7c) = 0;
  *(unsigned int *)(temp_v4 + 16000) = 0;
  *(unsigned int *)(temp_v4 + 0x3e84) = 0;
  *(unsigned int *)(temp_v4 + 0x3e88) = 0;
  *(unsigned int *)(temp_v4 + 0x3e8c) = 0;
  *(unsigned short *)(temp_v4 + 0x3e94) = 0;
  *(unsigned short *)(temp_v4 + 0x3e96) = 0;
  *(unsigned char *)(temp_v4 + 0x3e90) = 0;
  *(unsigned short *)(temp_v4 + 0x3e92) = 0xffff;
  *(unsigned char *)(temp_v4 + 0x3e91) = 0;
  *(unsigned int *)(temp_v4 + 0x45b8) = 0;
  *(unsigned int *)(temp_v4 + 0x45bc) = 0;
  *(unsigned int *)(temp_v4 + 0x45c0) = 0;
  *(unsigned int *)(temp_v4 + 0x45c4) = 0;
  *(unsigned int *)(temp_v4 + 0x45c8) = 0;
  *(unsigned int *)(temp_v4 + 0x45cc) = 0;
  *(unsigned int *)(temp_v4 + 0x45d0) = 0;
  *(unsigned int *)(temp_v4 + 0x45d4) = 0;
  *(unsigned int *)(temp_v4 + 0x45d8) = 0;
  *(unsigned int *)(temp_v4 + 0x45dc) = 0;
  *(unsigned int *)(temp_v4 + 0x45e0) = 0;
  *(unsigned int *)(temp_v4 + 0x45e4) = 0;
  *(unsigned int *)(temp_v4 + 0x45e8) = 0;
  *(unsigned int *)(temp_v4 + 0x45ec) = 0;
  *(unsigned int *)(temp_v4 + 0x45f0) = 0;
  *(unsigned int *)(temp_v4 + 0x45f4) = 0;
  *(unsigned int *)(temp_v4 + 0x45f8) = 0;
  *(unsigned int *)(temp_v4 + 0x45fc) = 0;
  *(unsigned int *)(temp_v4 + 0x4600) = 0;
  *(unsigned int *)(temp_v4 + 0x4604) = 0;
  *(unsigned int *)(temp_v4 + 0x4608) = 0;
  *(unsigned int *)(temp_v4 + 0x460c) = 0;
  *(unsigned int *)(temp_v4 + 0x4610) = 0;
  *(unsigned int *)(temp_v4 + 0x4614) = 0;
  *(unsigned int *)(temp_v4 + 0x4618) = 0;
  *(unsigned int *)(temp_v4 + 0x461c) = 0;
  *(unsigned int *)(temp_v4 + 0x4620) = 0;
  *(unsigned int *)(temp_v4 + 0x4624) = 0;
  *(unsigned int *)(temp_v4 + 0x4628) = 0;
  *(unsigned int *)(temp_v4 + 0x462c) = 0;
  *(unsigned int *)(temp_v4 + 0x4630) = 0;
  *(unsigned int *)(temp_v4 + 0x4634) = 0;
  *(unsigned int *)(temp_v4 + 0x4a80) = 0;
  *(unsigned int *)(temp_v4 + 0x4a84) = 0;
  *(unsigned int *)(temp_v4 + 0x4a88) = 0;
  *(unsigned int *)(temp_v4 + 0x4a8c) = 0;
  *(unsigned int *)(temp_v4 + 0x4a90) = 0;
  *(unsigned int *)(temp_v4 + 0x4a94) = 0;
  *(unsigned int *)(temp_v4 + 0x4a98) = 0;
  *(unsigned int *)(temp_v4 + 0x4a9c) = 0;
  *(unsigned int *)(temp_v4 + 0x4aa0) = 0;
  *(unsigned int *)(temp_v4 + 0x4aa4) = 0;
  *(unsigned int *)(temp_v4 + 0x4aa8) = 0;
  *(unsigned int *)(temp_v4 + 0x4aac) = 0;
  *(unsigned int *)(temp_v4 + 0x4ab0) = 0;
  *(unsigned int *)(temp_v4 + 0x4ab4) = 0;
  *(unsigned int *)(temp_v4 + 0x4ab8) = 0;
  *(unsigned int *)(temp_v4 + 0x4abc) = 0;
  sysMemClear(temp_v4 + 0x4ac0,0x80);
  *(unsigned int *)(temp_v4 + 0x4bc0) = 0;
  *(unsigned int *)(temp_v4 + 0x4bc4) = 0;
  *(unsigned int *)(temp_v4 + 0x4bc8) = 0;
  *(unsigned int *)(temp_v4 + 0x4bcc) = 0;
  *(unsigned int *)(temp_v4 + 0x4bd0) = 0;
  *(unsigned int *)(temp_v4 + 0x4bd4) = 0;
  *(unsigned int *)(temp_v4 + 0x4bd8) = 0;
  *(unsigned int *)(temp_v4 + 0x4bdc) = 0;
  *(unsigned int *)(temp_v4 + 0x4be0) = 0;
  *(unsigned int *)(temp_v4 + 0x4be4) = 0;
  *(unsigned int *)(temp_v4 + 0x4be8) = 0;
  *(unsigned int *)(temp_v4 + 0x4bec) = 0;
  *(unsigned int *)(temp_v4 + 0x4bf0) = 0;
  *(unsigned int *)(temp_v4 + 0x4bf4) = 0;
  *(unsigned int *)(temp_v4 + 0x4bf8) = 0;
  *(unsigned int *)(temp_v4 + 0x4bfc) = 0;
  *(unsigned int *)(temp_v4 + 0x4c04) = 0;
  *(unsigned int *)(temp_v4 + 0x4c08) = 0;
  *(unsigned int *)(temp_v4 + 0x4c0c) = 0;
  *(unsigned int *)(temp_v4 + 0x4c10) = 0;
  *(unsigned int *)(temp_v4 + 0x4c14) = 0;
  *(unsigned int *)(temp_v4 + 0x4c18) = 0;
  *(unsigned int *)(temp_v4 + 0x4c1c) = 0;
  *(unsigned int *)(temp_v4 + 0x4c20) = 0;
  *(unsigned int *)(temp_v4 + 0x4c44) = 0;
  *(unsigned int *)(temp_v4 + 0x4c48) = 0;
  *(unsigned int *)(temp_v4 + 0x4c4c) = 0;
  *(unsigned int *)(temp_v4 + 0x4c50) = 0;
  *(unsigned int *)(temp_v4 + 0x4c54) = 0;
  *(unsigned char *)(temp_v4 + 0x3eae) = 1;
  *(unsigned char *)(temp_v4 + 0x3eaf) = 1;
  *(unsigned char *)(temp_v4 + 0x463a) = 0;
  sysMemClear(temp_v4 + 0x4d08,0xc0);
  *(unsigned char *)(temp_v4 + 0x4c88) = 0;
  *(unsigned char *)(temp_v4 + 0x4c89) = 0;
  *(unsigned char *)(temp_v4 + 0x4c8a) = 0;
  *(unsigned char *)(temp_v4 + 0x4c8b) = 0;
  *(unsigned int *)(temp_v4 + 0x4cfc) = 0xffffffff;
  *(unsigned char *)(temp_v4 + 0x4c02) = 0xc;
  *(unsigned int *)(temp_v4 + 0x4c40) = 0xe10;
  *(unsigned int *)(temp_v4 + 0x4c3c) = 0;
  *(unsigned char *)(temp_v4 + 0x4c03) = 0;
  *(unsigned int *)(temp_v4 + 0x538c) = 0;
  *(unsigned int *)(temp_v4 + 0x5390) = 0;
  *(unsigned int *)(temp_v4 + 0x4c68) = 0;
  *(unsigned int *)(temp_v4 + 0x4c6c) = temp_v5;
  *(unsigned char *)(temp_v4 + 0x4c70) = 0;
  *(unsigned int *)(temp_v4 + 0x4f10) = 0;
  *(unsigned int *)(temp_v4 + 0x4f14) = temp_v5;
  *(unsigned int *)(temp_v4 + 0x4f18) = 0;
  *(unsigned int *)(temp_v4 + 0x535c) = 0;
  *(unsigned int *)(temp_v4 + 0x5360) = temp_v5;
  *(unsigned int *)(temp_v4 + 0x5364) = 0;
  *(unsigned char *)(temp_v4 + 0x5368) = 0;
  *(unsigned int *)(temp_v4 + 0x536c) = 0;
  *(unsigned int *)(temp_v4 + 0x5370) = 0;
  *(unsigned int *)(temp_v4 + 0x5374) = 0;
  *(unsigned int *)(temp_v4 + 0x5378) = 0;
  *(unsigned int *)(temp_v4 + 0x537c) = 0;
  *(unsigned int *)(temp_v4 + 0x5380) = 0;
  *(unsigned int *)(temp_v4 + 0x5384) = 1;
  *(unsigned int *)(temp_v4 + 0x5388) = 1;
  *(unsigned int *)(temp_v4 + 0x5394) = 0;
  *(unsigned char *)(temp_v4 + 0x5398) = 0;
  *(unsigned char *)(temp_v4 + 0x5399) = 0;
  *(unsigned char *)(temp_v4 + 0x539a) = 0;
  *(unsigned int *)(temp_v4 + 0x53a0) = 0;
  *(unsigned int *)(temp_v4 + 0x53a4) = 0;
  *(unsigned int *)(temp_v4 + 0x53a8) = 0;
  *(unsigned int *)(temp_v4 + 0x53ac) = 0;
  *(unsigned int *)(temp_v4 + 0x53b0) = 0;
  *(unsigned int *)(temp_v4 + 0x53b4) = 0;
  *(unsigned int *)(temp_v4 + 0x53b8) = 0;
  *(unsigned int *)(temp_v4 + 0x53bc) = 0;
  *(unsigned int *)(temp_v4 + 0x53c0) = 0;
  *(unsigned int *)(temp_v4 + 0x53c4) = 0;
  *(unsigned int *)(temp_v4 + 0x53c8) = 0;
  *(unsigned int *)(temp_v4 + 0x53cc) = 0;
  *(unsigned int *)(temp_v4 + 0x53d0) = 0;
  *(unsigned int *)(temp_v4 + 0x53d4) = 0;
  *(unsigned int *)(temp_v4 + 0x53d8) = 0;
  *(unsigned int *)(temp_v4 + 0x53dc) = 0;
  *(unsigned int *)(temp_v4 + 0x53e0) = 0;
  *(unsigned int *)(temp_v4 + 0x53e4) = 0;
  *(unsigned int *)(temp_v4 + 0x53e8) = 0;
  *(unsigned int *)(temp_v4 + 0x53ec) = 0;
  *(unsigned int *)(temp_v4 + 0x53f0) = 0;
  *(unsigned int *)(temp_v4 + 0x53f4) = 0;
  *(unsigned int *)(temp_v4 + 0x53f8) = 0;
  *(unsigned int *)(temp_v4 + 0x53fc) = 0;
  *(unsigned int *)(temp_v4 + 0x539c) = 0x44fa0000;
  *(unsigned int *)(temp_v4 + 0x5428) = 0;
  *(unsigned int *)(temp_v4 + 0x542c) = 0;
  *(unsigned int *)(temp_v4 + 0x5430) = 0;
  *(unsigned int *)(temp_v4 + 0x5434) = 0x467a0000;
  *(unsigned int *)(temp_v4 + 0x5438) = temp_v5;
  *(unsigned char *)(temp_v4 + 0x543d) = 0;
  *(unsigned char *)(temp_v4 + 0x543e) = 0;
  *(unsigned char *)(temp_v4 + 0x543f) = 0;
  *(unsigned int *)(temp_v4 + 0x5440) = 1;
  *(unsigned int *)(temp_v4 + 0x5444) = 0;
  *(unsigned int *)(temp_v4 + 0x5448) = 0;
  *(unsigned int *)(temp_v4 + 0x544c) = 0;
  *(unsigned int *)(temp_v4 + 0x5450) = 0;
  *(unsigned int *)(temp_v4 + 0x5454) = 0;
  *(unsigned int *)(temp_v4 + 0x5458) = 0;
  *(unsigned int *)(temp_v4 + 0x545c) = 0;
  *(unsigned int *)(temp_v4 + 0x5460) = 0;
  *(unsigned int *)(temp_v4 + 0x5464) = temp_v5;
  *(unsigned char *)(temp_v4 + 0x54d8) = 0;
  *(unsigned char *)(temp_v4 + 0x54d9) = 0;
  *(unsigned char *)(temp_v4 + 0x54da) = 0;
  *(unsigned short *)(temp_v4 + 0x54dc) = 0;
  *(unsigned short *)(temp_v4 + 0x54de) = 0;
  *(unsigned char *)(temp_v4 + 0x54e0) = 0;
  *(unsigned int *)(temp_v4 + 0x54e4) = 0;
  *(unsigned int *)(temp_v4 + 0x54f0) = 0;
  *(unsigned int *)(temp_v4 + 0x54e8) = 0;
  *(unsigned int *)(temp_v4 + 0x54f4) = 0;
  *(unsigned int *)(temp_v4 + 0x54ec) = 0;
  *(unsigned int *)(temp_v4 + 0x54f8) = 0;
  *(unsigned int *)(temp_v4 + 0x54fc) = 0;
  *(unsigned int *)(temp_v4 + 0x5500) = 0;
  *(unsigned int *)(temp_v4 + 0x5504) = 0;
  *(unsigned int *)(temp_v4 + 0x5508) = 0;
  *(unsigned int *)(temp_v4 + 0x550c) = 0;
  *(unsigned int *)(temp_v4 + 0x5510) = 0;
  *(unsigned int *)(temp_v4 + 0x5514) = 0;
  FUN_003fd56c();
  FUN_002e6340();
  FUN_004bb880();
  FUN_004cd960();
  FUN_002e6dd4(DAT_0057f69c + 0x21550,0x80);
  FUN_003339ec();
  FUN_0034c8e8();
  FUN_002a2cbc();
  temp_v4 = DAT_0057f69c;
  *(unsigned int *)(DAT_0057f69c + 0x28040) = 0;
  *(unsigned int *)(temp_v4 + 0x28044) = 0;
  *(unsigned int *)(temp_v4 + 0x28048) = 0;
  *(unsigned int *)(temp_v4 + 0x2804c) = 0;
  *(unsigned int *)(temp_v4 + 0x28050) = 0;
  *(unsigned int *)(temp_v4 + 0x28054) = 0;
  *(unsigned int *)(temp_v4 + 0x28058) = 0;
  *(unsigned int *)(temp_v4 + 0x2805c) = 0;
  FUN_003ff1a8();
  FUN_0040a810();
  FUN_003fd6dc();
  *(unsigned char *)(DAT_0057f69c + 0x27ec6) = 6;
  return;
}

} /* extern "C" */
