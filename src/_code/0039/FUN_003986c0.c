/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003986c0` (_code @ 0x3986c0, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_0039768c(); /* 0x39768c */
extern int FUN_00397730(); /* 0x397730 */
extern int FUN_0039779c(); /* 0x39779c */
extern int FUN_00397d5c(); /* 0x397d5c */
extern unsigned char LAB_00398a24; /* 0x398a24 */
extern unsigned char LAB_00398a34; /* 0x398a34 */
extern int FUN_00398a4c(); /* 0x398a4c */
extern int FUN_00398a90(); /* 0x398a90 */
extern int FUN_00398b3c(); /* 0x398b3c */
extern int FUN_00398b5c(); /* 0x398b5c */
extern int FUN_00398b80(); /* 0x398b80 */
extern int FUN_00398bf0(); /* 0x398bf0 */
extern unsigned char DAT_004056c0; /* 0x4056c0 */
extern unsigned char DAT_004056d8; /* 0x4056d8 */
extern unsigned char DAT_004056fc; /* 0x4056fc */

extern unsigned int *FUN_0024bd4c(void);
extern unsigned int *FUN_002891c8(void);
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002af854. */
extern unsigned int *FUN_002bd3ec(void);
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_003986c0(unsigned char *param_1)

{
/* irregular: 21 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  *(romwright_code **)(param_1 + 0xd4) = FUN_00398b5c;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(romwright_code **)(param_1 + 0xdc) = FUN_00398b80;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  *(romwright_code **)(param_1 + 0xe4) = FUN_0039779c;
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0x398b58;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(romwright_code **)(param_1 + 0xf4) = FUN_00397d5c;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(romwright_code **)(param_1 + 0xfc) = FUN_0039768c;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(romwright_code **)(param_1 + 0x104) = FUN_00397730;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(romwright_code **)(param_1 + 0x10c) = FUN_00398bf0;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(romwright_code **)(param_1 + 0x114) = FUN_00398b3c;
  *(unsigned int *)(param_1 + 0x118) = 0;
  *(unsigned int *)(param_1 + 0x11c) = 0x399168;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(romwright_code **)(param_1 + 0x124) = FUN_00398a90;
  *(unsigned int *)(param_1 + 0x128) = 0;
  *(romwright_code **)(param_1 + 300) = FUN_00398a4c;
  *(unsigned int *)(param_1 + 0x130) = 0;
  param_1[0x649] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x22] = 0;
  *(unsigned short *)(param_1 + 0x2c) = 0;
  *(unsigned short *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xac) = 0;
  param_1[0x944] = 0;
  if (param_1[0x649] == '\0' || param_1[0x649] == -1) {
    puVar1 = (unsigned int *)FUN_002bd3ec();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x649] == '\x01') {
    puVar1 = (unsigned int *)FUN_002891c8();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  if (param_1[0x649] == '\x02') {
    puVar1 = (unsigned int *)FUN_0024bd4c();
    *(unsigned int *)(param_1 + 0xb0) = *puVar1;
    *(unsigned int *)(param_1 + 0xb4) = puVar1[1];
    *(unsigned int *)(param_1 + 0xb8) = puVar1[2];
    *(unsigned int *)(param_1 + 0xbc) = puVar1[3];
    *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(puVar1 + 4);
  }
  *(unsigned int *)(param_1 + 0xc2) = *(unsigned int *)(param_1 + 0xb0);
  *(unsigned int *)(param_1 + 0xc6) = *(unsigned int *)(param_1 + 0xb4);
  *(unsigned int *)(param_1 + 0xca) = *(unsigned int *)(param_1 + 0xb8);
  *(unsigned int *)(param_1 + 0xce) = *(unsigned int *)(param_1 + 0xbc);
  *(unsigned short *)(param_1 + 0xd2) = *(unsigned short *)(param_1 + 0xc0);
  FUN_002c4e28(0x2e);
  FUN_002c5ab8(0x2e,0);
  FUN_0029fae8(param_1 + 0x580,0x69,7,0xf,1,1);
  FUN_0029fae8(param_1 + 0x5e4,3,1,3,1,1);
  temp_v0 = FUN_002c5e2c(&LAB_00398a24);
  *(unsigned int *)(param_1 + 0x64c) = temp_v0;
  temp_v0 = FUN_002c5e2c(&LAB_00398a34);
  *(unsigned int *)(param_1 + 0x650) = temp_v0;
  FUN_002972f8(temp_v0,*(unsigned int *)(param_1 + 0x64c));
  *(unsigned int *)(param_1 + 0x654) = temp_v0;
  puVar3 = param_1 + 0x65c;
  FUN_002c3344();
  FUN_002c32f8(puVar3,&DAT_004056c0,0x18,&DAT_004056d8,0x24,0,0,0,0,&DAT_004056fc,0x70);
  FUN_002bdb2c(param_1 + 0x67c,0x2e,0,puVar3,1);
  FUN_002bf030(param_1 + 0x67c,0);
  FUN_002bdb2c(param_1 + 0x708,0x2e,0,puVar3,1);
  FUN_002bdac0(param_1 + 0x708,0);
  FUN_002bdb2c(param_1 + 0x794,0x2e,0,puVar3,1);
  FUN_002af854(param_1 + 0x794,0);
  FUN_0028d974();
  *(unsigned short *)(param_1 + 0x940) = 0x95;
  return;
}
