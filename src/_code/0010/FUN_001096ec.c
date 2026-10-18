/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001096ec` (_code @ 0x1096ec, 0x398 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned char LAB_00109a88; /* 0x109a88 */
extern unsigned int DAT_00476628; /* 0x476628 */
extern unsigned char DAT_004e1f68; /* 0x4e1f68 */
extern unsigned char DAT_004e2094; /* 0x4e2094 */
extern unsigned char DAT_004e20ec; /* 0x4e20ec */
extern unsigned char DAT_004e21ac; /* 0x4e21ac */
extern unsigned int DAT_004e23d0; /* 0x4e23d0 */
extern unsigned int DAT_004e23d4; /* 0x4e23d4 */
extern unsigned int DAT_004e23d8; /* 0x4e23d8 */
extern unsigned int DAT_004e23dc; /* 0x4e23dc */
extern unsigned char DAT_004e23e4; /* 0x4e23e4 */
extern unsigned char DAT_004e26ec; /* 0x4e26ec */
extern unsigned char DAT_004e26f8; /* 0x4e26f8 */
extern unsigned char DAT_004e26fc; /* 0x4e26fc */
extern unsigned int DAT_004e2708; /* 0x4e2708 */
extern unsigned int DAT_004e2710; /* 0x4e2710 */
extern unsigned int DAT_004e30b0; /* 0x4e30b0 */
extern unsigned int DAT_004e30b4; /* 0x4e30b4 */
extern unsigned int DAT_004e30b8; /* 0x4e30b8 */
extern unsigned char DAT_004e30cc; /* 0x4e30cc */
extern unsigned int DAT_004e3110; /* 0x4e3110 */
extern unsigned int DAT_004e3114; /* 0x4e3114 */
extern unsigned int DAT_004e3118; /* 0x4e3118 */
extern unsigned int DAT_004e3120; /* 0x4e3120 */
extern unsigned int DAT_004e3124; /* 0x4e3124 */
extern unsigned int DAT_004e3128; /* 0x4e3128 */
extern unsigned int DAT_004e312c; /* 0x4e312c */
extern unsigned int DAT_004e3130; /* 0x4e3130 */
extern signed char DAT_004e3134; /* 0x4e3134 */
extern unsigned char DAT_004e3184; /* 0x4e3184 */
extern unsigned int DAT_004efd2c; /* 0x4efd2c */
extern unsigned int DAT_004efd30; /* 0x4efd30 */
extern unsigned int DAT_004efd34; /* 0x4efd34 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001177e0. */
/* Supplied declaration required: FUN_00119c28. */
/* Supplied declaration required: FUN_00120eb4. */
/* Supplied declaration required: FUN_00120ef4. */
/* Supplied declaration required: FUN_00120f48. */
/* Supplied declaration required: FUN_00120fd4. */
/* Supplied declaration required: FUN_00121030. */
/* Supplied declaration required: FUN_0012113c. */
/* Supplied declaration required: FUN_001216cc. */
/* Supplied declaration required: FUN_00121824. */
extern unsigned int FUN_00121ffc(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_0012201c. */
/* Supplied declaration required: FUN_00122170. */
extern unsigned int FUN_00132afc(unsigned char *);
/* Supplied declaration required: FUN_002bf59c. */
extern unsigned int FUN_002bf5c0(unsigned int, unsigned int, unsigned int, unsigned char *);
extern int FUN_002bf684(unsigned char *);
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002bfefc(unsigned int *);
extern int FUN_002c1870(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c5300. */


unsigned int FUN_001096ec(unsigned int param_1,int param_2,unsigned char *param_3)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  unsigned char *temp_v5;
  unsigned int temp_v6;
  unsigned char *temp_v7;
  
  FUN_002bf694(&DAT_004e23e4,param_1);
  temp_v0 = FUN_002c1870(&DAT_004e23e4,&LAB_00109a88,4);
  if (temp_v0 != 0) {
    DAT_004e3184 = 1;
  }
  temp_v0 = FUN_002bf684(&DAT_004e1f68);
  if (temp_v0 != 0) {
    FUN_001177e0();
  }
  FUN_00121824(&DAT_004e1f68,&DAT_004e23e4);
  temp_v1 = FUN_00132afc(&DAT_004e2094);
  temp_v5 = (unsigned char *)0x1;
  DAT_004e23d0 = FUN_002c5300(0x10000,0x100,0,temp_v1);
  FUN_001216cc(&DAT_004e1f68,DAT_004e23d0,temp_v1);
  temp_v1 = FUN_00121ffc(&DAT_004e21ac,&DAT_004e1f68);
  temp_v5 = (unsigned char *)0x1;
  DAT_004e23d4 = FUN_002c5300(0x10000,0x100,0,temp_v1);
  FUN_00121030(&DAT_004e21ac,&DAT_004e1f68,DAT_004e23d4,temp_v1);
  puVar3 = &DAT_004e20ec;
  FUN_0012201c(&DAT_004e20ec,&DAT_004e1f68);
  temp_v6 = 1;
  temp_v5 = (unsigned char *)0x20;
  DAT_004e23d8 = FUN_002bf5c0(0x10000,0x100,0,puVar3);
  if (param_3 == (unsigned char *)0x0) {
    param_3 = &DAT_004e20ec;
    FUN_00122170(&DAT_004e20ec,&DAT_004e1f68);
  }
  temp_v6 = 1;
  temp_v5 = (unsigned char *)0x20;
  temp_v6 = FUN_002bf5c0(0x10000,0x100,0,param_3);
  temp_v5 = puVar3;
  temp_v7 = param_3;
  DAT_004e23dc = temp_v6;
  FUN_0012113c(&DAT_004e20ec,&DAT_004e1f68,&DAT_004e21ac,DAT_004e23d8);
  if (param_2 != 0) {
    puVar3 = &DAT_004e26ec;
    DAT_004e3134 = '\x01';
    FUN_00120fd4(&DAT_004e26ec,&DAT_004e1f68);
    temp_v5 = (unsigned char *)0x1;
    DAT_004e3130 = FUN_002c5300(0x10000,0x100,0,puVar3);
    FUN_00120f48(&DAT_004e26ec,&DAT_004e1f68,DAT_004e3130,puVar3);
    temp_v1 = 0;
    DAT_004e2708 = 0x20;
    DAT_004e2710 = 0x40b55555;
    temp_v5 = (unsigned char *)0x0;
    temp_v6 = 0;
    temp_v7 = (unsigned char *)0x0;
    temp_v3 = 0x3f800000;
    FUN_002bf59c(&DAT_004e26f8,&DAT_004e26fc,&DAT_004e30cc);
    DAT_004e3110 = temp_v1;
    DAT_004e3114 = temp_v3;
    DAT_004e3118 = temp_v1;
    FUN_00119c28(&temp_v5);
    temp_v4 = romwright_piece_4_4(0x40a00000,temp_v1);
    if (DAT_004e3134 != '\0') {
      DAT_004e3120 = 0x40a00000;
      DAT_004e30b4 = 0x40a00000;
      DAT_004e3124 = 0x40000000;
      DAT_004e30b8 = 0x40000000;
      DAT_004e3128 = 0x40a00000;
      DAT_004e30b0 = 0x40a00000;
    }
    temp_v2 = 0;
    DAT_004e312c = 0;
    do {
      FUN_00120eb4(temp_v2 * 0x84 + 0x4e2728,&DAT_004e20ec,&DAT_004e26ec);
      if ((DAT_004e3134 != '\0') && (temp_v2 < 0x10)) {
        if (((DAT_00476628 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476628), temp_v0 != 0)) {
          DAT_004efd2c = (unsigned int)temp_v4;
          DAT_004efd30 = DAT_004efd2c;
          DAT_004efd34 = DAT_004efd2c;
        }
        temp_v3 = DAT_004efd34;
        temp_v1 = DAT_004efd30;
        temp_v0 = temp_v2 * 0xc;
        *(unsigned int *)(temp_v0 + 0x4e2fa8) = DAT_004efd2c;
        *(unsigned int *)(temp_v0 + 0x4e2fac) = temp_v1;
        *(unsigned int *)(temp_v0 + 0x4e2fb0) = temp_v3;
        FUN_00120ef4(temp_v2 * 0x84 + 0x4e2728,temp_v0 + 0x4e2fa8);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x10);
  }
  return 1;
}
