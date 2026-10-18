/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038cbdc` (_code @ 0x38cbdc, 0x40c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int sp570; /* 0x570: local_570 */
} param_1_stack;

extern unsigned char LAB_0038cfec; /* 0x38cfec */
extern unsigned char LAB_0038cffc; /* 0x38cffc */
extern unsigned char LAB_0038d000; /* 0x38d000 */
extern unsigned char LAB_0038d010; /* 0x38d010 */
extern unsigned char LAB_0038d020; /* 0x38d020 */
extern unsigned char LAB_0038d030; /* 0x38d030 */
extern unsigned char LAB_0038d040; /* 0x38d040 */
extern unsigned char LAB_0038d04c; /* 0x38d04c */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_002341d4. */
/* Supplied declaration required: FUN_00234320. */
/* Supplied declaration required: FUN_00234330. */
extern unsigned int FUN_0023445c(int);
extern unsigned int FUN_00234468(int);
/* Supplied declaration required: FUN_00234974. */
/* Supplied declaration required: FUN_0023499c. */
/* Supplied declaration required: FUN_0023a198. */
/* Supplied declaration required: FUN_0025432c. */
/* Supplied declaration required: FUN_00254384. */
/* Supplied declaration required: FUN_002543dc. */
/* Supplied declaration required: FUN_002a12d8. */
/* Supplied declaration required: FUN_002a83ec. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_00352e6c. */
/* Supplied declaration required: FUN_00352f9c. */
/* Supplied declaration required: FUN_003531dc. */
/* Supplied declaration required: FUN_0038b174. */
/* Supplied declaration required: FUN_0038c224. */
extern unsigned int FUN_003df36c(unsigned int);


int * FUN_0038cbdc(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  unsigned int *puVar7;
  unsigned char temp_v5 [1024];
  unsigned char temp_v6 [64];
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [64];
  int temp_v9;
  unsigned int uStack_a4;
  int temp_v10;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int temp_v11;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  int temp_v12 [3];
  int temp_v13;
  unsigned char *temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  unsigned int uStack_24;
  
  temp_v0 = DAT_00432fc8;
  FUN_0023499c(&temp_v9,DAT_00432fc8 + 0x28,DAT_00432fc8 + 0x18);
  *(unsigned int *)(param_1 + 0xc) = temp_v9;
  *(unsigned int *)(param_1 + 0x10) = uStack_a4;
  temp_v1 = FUN_002a12d8(param_1 + 0xc);
  piVar6 = (int *)-(temp_v1 >> 0x1f);
  if (piVar6 == (int *)0x0) {
    piVar6 = temp_v12;
    FUN_00352f9c(piVar6,temp_v5,0x400);
    temp_v15 = 1;
    temp_v2 = FUN_00234468(temp_v0 + 0x28);
    temp_v3 = FUN_0023445c(temp_v0 + 0x28);
    FUN_00234330(&temp_v10,0,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 0x368) = temp_v10;
    *(unsigned int *)(temp_v0 + 0x36c) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x370) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x374) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x378) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x37c) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x380) = uStack_88;
    *(unsigned int *)(temp_v0 + 900) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x388) = temp_v11;
    *(unsigned int *)(temp_v0 + 0x38c) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x390) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x394) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x398) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x39c) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x3a0) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x3a4) = uStack_64;
    temp_v2 = FUN_00234468(temp_v0 + 0x28);
    temp_v3 = FUN_0023445c(temp_v0 + 0x28);
    FUN_00234330(&temp_v10,2,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 0x3a8) = temp_v10;
    *(unsigned int *)(temp_v0 + 0x3ac) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x3b0) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x3b4) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x3b8) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x3bc) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x3c0) = uStack_88;
    *(unsigned int *)(temp_v0 + 0x3c4) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x3c8) = temp_v11;
    *(unsigned int *)(temp_v0 + 0x3cc) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x3d0) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x3d4) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x3d8) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x3dc) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x3e0) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x3e4) = uStack_64;
    temp_v2 = FUN_00234468(temp_v0 + 0x28);
    temp_v3 = FUN_0023445c(temp_v0 + 0x28);
    FUN_00234330(&temp_v10,3,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 1000) = temp_v10;
    *(unsigned int *)(temp_v0 + 0x3ec) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x3f0) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x3f4) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x3f8) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x3fc) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x400) = uStack_88;
    *(unsigned int *)(temp_v0 + 0x404) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x408) = temp_v11;
    *(unsigned int *)(temp_v0 + 0x40c) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x410) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x414) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x418) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x41c) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x420) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x424) = uStack_64;
    temp_v2 = FUN_00234468(temp_v0 + 0x28);
    temp_v3 = FUN_0023445c(temp_v0 + 0x28);
    FUN_00234330(&temp_v10,5,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 0x428) = temp_v10;
    *(unsigned int *)(temp_v0 + 0x42c) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x430) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x434) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x438) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x43c) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x440) = uStack_88;
    *(unsigned int *)(temp_v0 + 0x444) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x448) = temp_v11;
    *(unsigned int *)(temp_v0 + 0x44c) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x450) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x454) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x458) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x45c) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x460) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x464) = uStack_64;
    FUN_0023a198(temp_v0 + 0x468,&LAB_0038cffc,&LAB_0038cfec);
    FUN_0023a198(temp_v0 + 0x4a8,&LAB_0038cffc,&LAB_0038d000);
    FUN_0023a198(temp_v0 + 0x4e8,&LAB_0038cffc,&LAB_0038d010);
    FUN_0023a198(temp_v0 + 0x528,&LAB_0038cffc,&LAB_0038d020);
    FUN_0023a198(temp_v0 + 0x568,&LAB_0038cffc,&LAB_0038d030);
    temp_v12[0] = temp_v0 + 0x368;
    temp_v12[1] = 9;
    if (*(int *)(temp_v0 + 0x364) != 0) {
      temp_v12[2] = temp_v0 + 0xe3;
      temp_v13 = *(int *)(temp_v0 + 0x364);
    }
    FUN_0038b174(temp_v0);
    FUN_002be624(temp_v6,&LAB_0038d040);
    FUN_002be624(temp_v7,&LAB_0038cfec);
    FUN_002be624(temp_v8,&LAB_0038d04c);
    temp_v14 = temp_v6;
    while( 1 ) {
      FUN_00352e6c(&temp_v9,*(unsigned int *)(temp_v0 + 0x5a8),*(unsigned int *)(temp_v0 + 0x684),0x40,
                   piVar6);
      *(unsigned int *)(param_1 + 0xc) = temp_v9;
      *(unsigned int *)(param_1 + 0x10) = uStack_a4;
      temp_v1 = FUN_002a12d8(param_1 + 0xc);
      if (temp_v1 < 0) break;
      temp_v4 = FUN_00234320(*(unsigned int *)(temp_v0 + 0x5a8));
      if ((*(unsigned int *)(temp_v0 + 0x684) < temp_v4) ||
         (temp_v1 = FUN_00234320(*(unsigned int *)(temp_v0 + 0x5a8)), temp_v1 == 0)) {
        temp_v2 = FUN_003df36c(*(unsigned int *)(temp_v0 + 0x5a8));
        *(unsigned int *)(temp_v0 + 0x67c) = temp_v2;
        temp_v2 = FUN_00234320(*(unsigned int *)(temp_v0 + 0x5a8));
        *(unsigned int *)(temp_v0 + 0x680) = temp_v2;
        temp_v2 = FUN_00234320(*(unsigned int *)(temp_v0 + 0x5a8));
        *(unsigned int *)(temp_v0 + 0x680) = temp_v2;
        puVar7 = (unsigned int *)&temp_v16;
        temp_v16 = 0;
        uStack_24 = 0;
        FUN_003531dc(&temp_v9,temp_v0 + 0x84,puVar7);
        *(unsigned int *)(param_1 + 0xc) = temp_v9;
        *(unsigned int *)(param_1 + 0x10) = uStack_a4;
        temp_v1 = FUN_002a12d8(param_1 + 0xc);
        if (-1 < temp_v1) {
          FUN_002543dc(puVar7);
          FUN_00254384(puVar7);
          FUN_0025432c();
          FUN_002a83ec();
          *(unsigned int **)(param_1 + 0x18) = puVar7;
          temp_v1 = param_1;
          FUN_0038c224();
          FUN_00234974(temp_v0 + 0x28);
          if (-1 < temp_v1) {
            FUN_002341d4(&temp_v9,temp_v0);
            *(unsigned int *)(param_1 + 0xc) = temp_v9;
            *(unsigned int *)(param_1 + 0x10) = uStack_a4;
            FUN_002a12d8(param_1 + 0xc);
          }
          return piVar6;
        }
        break;
      }
      temp_v1 = FUN_00234320(*(unsigned int *)(temp_v0 + 0x5a8));
      *(unsigned int *)(temp_v0 + 0x684) = (((temp_v1 + 0x3fU) >> 6) - 1) * 0x40;
    }
    FUN_00234974(temp_v0 + 0x28);
  }
  return piVar6;
}
