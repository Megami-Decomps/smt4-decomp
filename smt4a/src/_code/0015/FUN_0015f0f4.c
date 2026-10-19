/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f0f4` (_code @ 0x15f0f4, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_00570260; /* 0x570260 */
extern unsigned int DAT_00570280; /* 0x570280 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned long long FUN_00164a9c(void);
/* Supplied declaration required: FUN_001760cc. */
extern int FUN_00176474(unsigned int);
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001b3428. */
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned int *);
/* Supplied declaration required: FUN_001ba1c0. */
/* Supplied declaration required: FUN_002e3140. */


unsigned int FUN_0015f0f4(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_38;
  int temp_v10;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int temp_v11 [2];
  
  temp_v5 = FUN_00164a9c();
  temp_v2 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
  puVar1 = (unsigned int *)temp_v5;
  temp_v0 = (unsigned int)(unsigned char)puVar1[0x1143];
  temp_v4 = temp_v0 == 1;
  if (temp_v4) {
    temp_v0 = *puVar1;
    temp_v2 = puVar1[1];
  }
  if (((temp_v4 && temp_v0 == temp_v2) && (temp_v1 = FUN_00176474(DAT_00570280), temp_v1 != 0)) &&
     (temp_v1 = FUN_001af210(DAT_00570260 + 0x98), temp_v1 != 0)) {
    *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
    FUN_001760cc(DAT_00570280);
    puVar4 = (unsigned int *)FUN_001b5acc((unsigned int *)&temp_v7);
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar5 = temp_v11;
    FUN_001b57a8(puVar5,0);
    temp_v3 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = temp_v3;
    puVar4 = temp_v11;
    temp_v9 = 0;
    FUN_001b57a8(puVar4,0);
    temp_v7 = *puVar4;
    temp_v8 = puVar4[1];
    temp_v6 = romwright_piece_3_1((((unsigned int)(temp_v6) >> 8) & 0xffffffU),200);
    temp_v10 = temp_v6;
    uStack_28 = temp_v9;
    uStack_24 = uStack_38;
    uStack_30 = temp_v7;
    uStack_2c = temp_v8;
    FUN_001ba1c0(DAT_00570260,&temp_v10,0x65,0);
  }
  temp_v0 = puVar1[0x1144];
  if (temp_v0 != 0) {
    software_interrupt(0x24);
    if ((int)temp_v0 < 0) {
      FUN_002e3140();
    }
    if (((temp_v0 & 0x3ff) == 0x3fe) && (*puVar1 == puVar1[1])) {
      FUN_001b3428(puVar1 + 0x1144);
    }
  }
  return 0;
}
