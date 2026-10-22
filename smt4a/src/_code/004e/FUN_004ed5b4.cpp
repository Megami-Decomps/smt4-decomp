/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ed5b4` (_code @ 0x4ed5b4, 0xfb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(...);
int FUN_003e8bb0(...);
int FUN_004e5b5c(...);
int FUN_004e7080(...);
int FUN_004e7c04(...);
int FUN_004e8454(...);
int btlUnitMarkTargetCandidates(...);
int FUN_004eb838(...);

int btlScriptUnitHasFlags(...);
int FUN_003eaf20(void);
int FUN_003ee0c0(int);
int FUN_003f1244(void);
int btlUIClearWorkTables(void);
int FUN_004abfd0(...);
int FUN_004c1114(int, int);
int btlSlotSetStoreValue(...);
int FUN_004c571c(...);
int FUN_004c8ee0(...);
int FUN_004c9160(...);
int clearTwo200Buffers(unsigned int);
int FUN_004fb670(int, unsigned int *);
int FUN_004fcffc(int, int, unsigned int, int);
int FUN_004fd508(int, unsigned int *, int, unsigned int);
int btlReflectRequestPairScalar(int, unsigned int *, int);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571198; /* 0x571198 */
extern unsigned int DAT_0057119c; /* 0x57119c */
extern unsigned int DAT_005711a0; /* 0x5711a0 */
extern unsigned int DAT_005711a4; /* 0x5711a4 */
extern unsigned int DAT_005711a8; /* 0x5711a8 */
extern unsigned int DAT_005711ac; /* 0x5711ac */
extern unsigned int DAT_005711c0; /* 0x5711c0 */
extern unsigned int DAT_005711c4; /* 0x5711c4 */
extern unsigned int DAT_005711c8; /* 0x5711c8 */
extern unsigned int DAT_005711cc; /* 0x5711cc */
extern unsigned int DAT_005711d0; /* 0x5711d0 */
extern unsigned int DAT_005711d4; /* 0x5711d4 */
extern unsigned int DAT_005711d8; /* 0x5711d8 */
extern unsigned int DAT_005711dc; /* 0x5711dc */
extern unsigned int DAT_005711e0; /* 0x5711e0 */
extern unsigned int DAT_005711e4; /* 0x5711e4 */
extern unsigned int DAT_005711e8; /* 0x5711e8 */
extern unsigned int DAT_005711ec; /* 0x5711ec */
extern unsigned int DAT_005711f8; /* 0x5711f8 */
extern unsigned int DAT_005711fc; /* 0x5711fc */
extern unsigned int DAT_00571200; /* 0x571200 */
extern unsigned int DAT_00571204; /* 0x571204 */
extern unsigned int DAT_00571208; /* 0x571208 */
extern unsigned int DAT_0057120c; /* 0x57120c */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571220; /* 0x571220 */
extern unsigned int DAT_00571224; /* 0x571224 */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_00571248; /* 0x571248 */
extern unsigned int DAT_0057124c; /* 0x57124c */
extern unsigned int DAT_00571258; /* 0x571258 */
extern unsigned int DAT_0057125c; /* 0x57125c */
extern unsigned int DAT_00571260; /* 0x571260 */
extern unsigned int DAT_00571264; /* 0x571264 */
extern unsigned int DAT_00571278; /* 0x571278 */
extern unsigned int DAT_0057127c; /* 0x57127c */
extern unsigned int DAT_00571280; /* 0x571280 */
extern unsigned int DAT_00571284; /* 0x571284 */
extern unsigned int DAT_00571288; /* 0x571288 */
extern unsigned int DAT_0057128c; /* 0x57128c */
extern unsigned int DAT_00571290; /* 0x571290 */
extern unsigned int DAT_00571294; /* 0x571294 */
extern unsigned int DAT_00571298; /* 0x571298 */
extern unsigned int DAT_0057129c; /* 0x57129c */
extern unsigned int DAT_005712b8; /* 0x5712b8 */
extern unsigned int DAT_005712bc; /* 0x5712bc */
extern int g_btlCamera; /* 0x571508 */
extern unsigned int g_btlAux; /* 0x573808 */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: btlScriptUnitHasFlags. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003ee0c0. */
/* Supplied declaration required: FUN_003f1244. */
/* Supplied declaration required: btlUIClearWorkTables. */
extern int FUN_004abac8(int);
/* Supplied declaration required: FUN_004abfd0. */
extern int btlUiIsMenuSceneActive(int);
/* Supplied declaration required: FUN_004c1114. */
/* Supplied declaration required: btlSlotSetStoreValue. */
extern unsigned int FUN_004c53fc(unsigned int);
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_004c8ee0. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e7080. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e8454. */
/* Supplied declaration required: btlUnitMarkTargetCandidates. */
/* Supplied declaration required: FUN_004eb838. */
extern int FUN_004f2708(int, int, unsigned int);
/* Supplied declaration required: clearTwo200Buffers. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fd508. */
/* Supplied declaration required: btlReflectRequestPairScalar. */


unsigned int FUN_004ed5b4(int *param_1,unsigned int *param_2)

{
/* irregular: 24 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  short temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int *piVar16;
  unsigned int temp_v15;
  unsigned char temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned short temp_v24;
  unsigned int *puVar27;
  int temp_v25;
  unsigned char temp_v26;
  unsigned int temp_v27 [7];
  char temp_v28;
  
  *(unsigned char *)(*param_1 + 0x4c84) = 0;
  *(unsigned int *)(*param_1 + 0x2358) = 0;
  *(unsigned int *)(*param_1 + 0x235c) = 0;
  *(unsigned int *)(*param_1 + 0x2360) = 0;
  *(unsigned short *)(*param_1 + 0x2354) = 0;
  *(unsigned short *)(*param_1 + 0x2356) = 0;
  *(unsigned int *)(*param_1 + 0x4cf0) = 0;
  *(unsigned int *)(*param_1 + 0x4bc0) = 0;
  param_2[0x16b] = 0xffffffff;
  *(unsigned char *)((int)param_2 + 0x59d) = 0;
  *(unsigned short *)(param_2 + 0x491) = 0;
  param_2[0x492] = 0;
  *(unsigned char *)(*param_1 + 0x3004) = 0;
  temp_v19 = *param_1;
  *(unsigned int *)(temp_v19 + 0x2008) = 0;
  *(unsigned int *)(temp_v19 + 0x200c) = 0;
  temp_v19 = *param_1;
  *(unsigned int *)(temp_v19 + 0x2010) = 0;
  *(unsigned int *)(temp_v19 + 0x2014) = 0;
  temp_v19 = *param_1;
  temp_v20 = ~DAT_00571280;
  *(unsigned int *)(temp_v19 + 0x45a4) = *(unsigned int *)(temp_v19 + 0x45a4) & ~DAT_00571284;
  *(unsigned int *)(temp_v19 + 0x45a0) = temp_v20 & *(unsigned int *)(temp_v19 + 0x45a0);
  *(unsigned char *)(*param_1 + 0xa0) = 0xff;
  *(unsigned char *)(*param_1 + 0xa1) = 0xff;
  FUN_003ee0c0(*param_1);
  *(unsigned short *)(param_2 + 0x16c) = 0xffff;
  *(unsigned short *)((int)param_2 + 0x5b2) = 0xffff;
  *(unsigned short *)(param_2 + 0x16d) = 0xffff;
  *(unsigned short *)((int)param_2 + 0x5b6) = 0xffff;
  temp_v19 = 0;
  do {
    puVar27 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v19 * 0x408);
    if (param_2[0xc] != 5) {
      temp_v20 = FUN_004c53fc(2);
      puVar27[0x1f] = temp_v20;
    }
    temp_v14 = DAT_0057120c;
    temp_v13 = DAT_00571208;
    temp_v20 = ~DAT_005711c0;
    temp_v17 = ~DAT_005711c4;
    temp_v18 = ~DAT_005711cc;
    temp_v0 = ~DAT_005711c8;
    temp_v21 = ~DAT_005711d0;
    temp_v1 = ~DAT_005711d4;
    temp_v22 = ~DAT_005711d8;
    temp_v2 = ~DAT_005711dc;
    temp_v3 = ~DAT_0057119c;
    temp_v4 = ~DAT_00571198;
    temp_v5 = ~DAT_005711e4;
    temp_v6 = ~DAT_005711e0;
    temp_v7 = ~DAT_005711ec;
    temp_v8 = ~DAT_005711e8;
    temp_v9 = ~DAT_005711f8;
    temp_v10 = ~DAT_005711fc;
    temp_v23 = ~DAT_00571200;
    temp_v11 = ~DAT_00571204;
    puVar27[0x56] = 0;
    *puVar27 = *puVar27 & temp_v20 & temp_v0 & temp_v21 & temp_v22 & temp_v4 & temp_v6 & temp_v8 & temp_v9 & temp_v23
               & ~temp_v13;
    puVar27[1] = puVar27[1] & temp_v17 & temp_v18 & temp_v1 & temp_v2 & temp_v3 & temp_v5 & temp_v7 & temp_v10 &
                 temp_v11 & ~temp_v14;
    temp_v20 = FUN_004c53fc(0x2d);
    puVar27[0x4a] = temp_v20;
    temp_v20 = FUN_004c53fc(0x2e);
    puVar27[0x4b] = temp_v20;
    temp_v20 = FUN_004c53fc(0x2f);
    puVar27[0x4c] = temp_v20;
    temp_v20 = FUN_004c53fc(0x30);
    puVar27[0x4d] = temp_v20;
    temp_v20 = FUN_004c53fc(0x31);
    puVar27[0x4e] = temp_v20;
    temp_v25 = temp_v19 + 1;
    temp_v19 = *(int *)(*param_1 + 0x1ed4) + temp_v19 * 0x1d0;
    *(unsigned int *)(temp_v19 + 0x50) = *(unsigned int *)(temp_v19 + 0x50) & 0xff7fffff;
    temp_v19 = temp_v25;
  } while (temp_v25 < 0x6d);
  clearTwo200Buffers(g_btlAux);
  *(unsigned short *)(param_2[10] + 0x1be) = 0;
  *(unsigned short *)(param_2[10] + 0x1c0) = 0;
  *(unsigned int *)(param_2[8] + 0x150) = 0;
  param_2[0x493] = 0;
  temp_v19 = 0;
  do {
    temp_v25 = temp_v19 + 1;
    temp_v19 = *(int *)(*param_1 + 0x1ffc) + temp_v19 * 0x408;
    *(unsigned short *)(temp_v19 + 0x276) = 0;
    *(unsigned short *)(temp_v19 + 0x278) = 0;
    temp_v19 = temp_v25;
  } while (temp_v25 < 0x6d);
  temp_v20 = *(unsigned int *)(*param_1 + 0x45a0);
  temp_v17 = *(unsigned int *)(*param_1 + 0x45a4);
  if (!((DAT_00571218 & temp_v20) == 0 && (DAT_0057121c & temp_v17) == 0)) {
    temp_v20 = *param_2 | 0x80;
    *param_2 = temp_v20;
  }
  else if ((temp_v20 & DAT_00571228) != 0 || (temp_v17 & DAT_0057122c) != 0) {
    temp_v20 = *param_2 | 0x1000;
    *param_2 = temp_v20;
  }
  temp_v19 = btlScriptUnitHasFlags(*param_1);
  if ((temp_v19 != 0) && (temp_v19 = btlUiIsMenuSceneActive(g_btlUiBlock), temp_v19 == 0)) {
    return 0;
  }
  temp_v19 = *param_1;
  puVar27 = (unsigned int *)(temp_v19 + 0x45a0);
  temp_v20 = *puVar27;
  temp_v17 = *(unsigned int *)(temp_v19 + 0x45a4);
  if ((DAT_00571290 & temp_v20) != 0 || (DAT_00571294 & temp_v17) != 0) {
    *(unsigned char *)(g_btlScriptUnit + *(int *)(temp_v19 + 0xa4) * 0x1254 + 9) = 0x11;
    return 1;
  }
  if ((DAT_00571258 & temp_v20) != 0 || (temp_v17 & DAT_0057125c) != 0) {
    temp_v19 = FUN_004abac8(g_btlUiBlock);
    if (temp_v19 == 0) {
      return 0;
    }
    temp_v27[0] = 1;
    FUN_004fd508(0,param_2,0xf,param_2[9]);
    temp_v19 = *param_1;
    temp_v18 = DAT_00571248 | *(unsigned int *)(temp_v19 + 0x45a0);
    temp_v17 = DAT_0057124c | *(unsigned int *)(temp_v19 + 0x45a4);
    *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17;
    *(unsigned int *)(temp_v19 + 0x45a0) = temp_v18;
    temp_v18 = temp_v18 | DAT_00571288;
    temp_v19 = *param_1;
    temp_v17 = temp_v17 | DAT_0057128c;
    *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17;
    *(unsigned int *)(temp_v19 + 0x45a0) = temp_v18;
    temp_v20 = ~DAT_0057125c;
    temp_v19 = *param_1;
    *(unsigned int *)(temp_v19 + 0x45a0) = temp_v18 & ~DAT_00571258;
    *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17 & temp_v20;
    *(unsigned int *)(g_btlUiBlock + 0x74a0) = 0;
    btlUIClearWorkTables();
    temp_v16 = 0x1f;
    temp_v19 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
  }
  else {
    switch(param_2[0xc]) {
    default:
      temp_v19 = FUN_004f2708(g_btlCamera,temp_v19,1);
      if (temp_v19 != 0) {
        temp_v15 = 0xffffffff;
        temp_v12 = *(short *)(*param_1 + 0x2004);
        if (temp_v12 == 0) {
          temp_v15 = 1;
        }
        else if (temp_v12 == 1) {
          temp_v15 = 2;
        }
        else if (temp_v12 == 2) {
          temp_v15 = 3;
        }
        else if (temp_v12 == 3) {
          temp_v15 = 4;
        }
        *(unsigned int *)(g_btlCamera + 0x7cc) = temp_v15;
      }
      if (((*(int *)(g_btlCamera + 0x7cc) != (int)*(short *)(*param_1 + 0x2004)) &&
          (-1 < *(int *)(g_btlCamera + 0x7cc))) &&
         (temp_v19 = FUN_004f2708(g_btlCamera,*param_1,1), temp_v19 != 0)) {
        FUN_004fb670(0,param_2);
      }
      temp_v27[0] = 1;
      btlReflectRequestPairScalar(1,param_2,(int)*(short *)(*param_1 + 0x2004));
      temp_v24 = 0;
      temp_v19 = (int)*(short *)(param_2[9] + 0x6a);
      if (((*(unsigned short *)(param_2[10] + 0x110) & 0x80) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,7), temp_v25 != 0)) {
        temp_v24 = 0x80;
      }
      if (((*(unsigned short *)(param_2[10] + 0x110) & 0x40) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,6), temp_v25 != 0)) {
        temp_v24 = temp_v24 | 0x40;
      }
      if (((*(unsigned short *)(param_2[10] + 0x110) & 0x100) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,8), temp_v25 != 0)) {
        temp_v24 = temp_v24 | 0x100;
      }
      if (((*(unsigned short *)(param_2[10] + 0x110) & 8) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,3), temp_v25 != 0)) {
        temp_v24 = temp_v24 | 8;
      }
      if (((*(unsigned short *)(param_2[10] + 0x110) & 0x800) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,0xb), temp_v25 != 0)) {
        temp_v24 = temp_v24 | 0x800;
      }
      if (((*(unsigned short *)(param_2[10] + 0x110) & 0x1000) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,0xc), temp_v25 != 0)) {
        temp_v24 = temp_v24 | 0x1000;
      }
      if (((*(unsigned short *)(param_2[10] + 0x110) & 0x2000) != 0) &&
         (temp_v25 = temp_v19, FUN_004c1114(temp_v19,0xd), temp_v25 != 0)) {
        temp_v24 = temp_v24 | 0x2000;
      }
      if (temp_v24 != 0) {
        FUN_004fcffc(0,0,param_2[9],temp_v24);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x80) != 0) {
        if ((DAT_00571264 & *(unsigned int *)(*param_1 + 0x45a4)) != 0 ||
            (DAT_00571260 & *(unsigned int *)(*param_1 + 0x45a0)) != 0) {
          FUN_004c571c(temp_v19,0x1b,1,0);
        }
      }
      else {
        temp_v15 = FUN_004c53fc(0x1b);
        btlSlotSetStoreValue(temp_v19,0x1b,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x40) != 0) {
        if ((DAT_00571264 & *(unsigned int *)(*param_1 + 0x45a4)) != 0 ||
            (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) != 0) {
          FUN_004c571c(temp_v19,0x1c,1,0);
        }
      }
      else {
        temp_v15 = FUN_004c53fc(0x1c);
        btlSlotSetStoreValue(temp_v19,0x1c,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x100) != 0) {
        if ((*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) != 0 ||
            (DAT_00571264 & *(unsigned int *)(*param_1 + 0x45a4)) != 0) {
          FUN_004c571c(temp_v19,0x1d,1,0);
        }
      }
      else {
        temp_v15 = FUN_004c53fc(0x1d);
        btlSlotSetStoreValue(temp_v19,0x1d,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 8) != 0) {
        if ((*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571264) != 0 ||
            (DAT_00571260 & *(unsigned int *)(*param_1 + 0x45a0)) != 0) {
          FUN_004c571c(temp_v19,0x1e,1,0);
        }
      }
      else {
        temp_v15 = FUN_004c53fc(0x1e);
        btlSlotSetStoreValue(temp_v19,0x1e,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x800) != 0) {
        if ((DAT_00571264 & *(unsigned int *)(*param_1 + 0x45a4)) != 0 ||
            (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571260) != 0) {
          FUN_004c571c(temp_v19,0x1f,1,0);
        }
      }
      else {
        temp_v15 = FUN_004c53fc(0x1f);
        btlSlotSetStoreValue(temp_v19,0x1f,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x1000) == 0) {
        temp_v15 = FUN_004c53fc(0x20);
        btlSlotSetStoreValue(temp_v19,0x20,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & 0x2000) != 0) {
        if ((DAT_00571260 & *(unsigned int *)(*param_1 + 0x45a0)) != 0 ||
            (DAT_00571264 & *(unsigned int *)(*param_1 + 0x45a4)) != 0) {
          FUN_004c571c(temp_v19,0x21,1,0);
        }
      }
      else {
        temp_v15 = FUN_004c53fc(0x21);
        btlSlotSetStoreValue(temp_v19,0x21,temp_v15);
      }
      if ((*(unsigned short *)(param_2[10] + 0x110) & ~temp_v24 & 0x19c0) != 0) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 5;
        return 1;
      }
      puVar27 = (unsigned int *)param_2[8];
      if ((puVar27[1] & (DAT_005711a4 | DAT_005711ac)) != 0 ||
          (*puVar27 & (DAT_005711a0 | DAT_005711a8)) != 0) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 5;
        return 1;
      }
      if (0 < (short)puVar27[0xcd]) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x13;
        return 1;
      }
      FUN_004c8ee0(puVar27,temp_v24,1);
      if (((DAT_00571168 | DAT_00571170) & *(unsigned int *)param_2[8]) == 0 &&
          ((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) == 0) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
        return 1;
      }
      temp_v19 = *param_1;
      FUN_003f1244();
      if ((temp_v19 != 0) &&
         (!((*(unsigned int *)(*param_1 + 0x45a4) & DAT_0057129c) != 0 ||
           (*(unsigned int *)(*param_1 + 0x45a0) & DAT_00571298) != 0))) {
        FUN_004c9160(0x35,param_2[8],0,1);
        temp_v19 = *param_1;
        FUN_003eaf20();
        *(unsigned int *)(*param_1 + 0x4d68) = *(unsigned int *)(temp_v19 + 0x400);
        temp_v20 = btlScriptUnitHasFlags(*param_1);
        FUN_004abfd0(g_btlUiBlock,temp_v20 ^ 1);
        temp_v19 = *param_1;
        temp_v20 = *(unsigned int *)(temp_v19 + 0x45a0) | DAT_00571298;
        *(unsigned int *)(temp_v19 + 0x45a4) = *(unsigned int *)(temp_v19 + 0x45a4) | DAT_0057129c;
        *(unsigned int *)(temp_v19 + 0x45a0) = temp_v20;
      }
      else if ((*(unsigned int *)(*param_1 + 0x45a4) & DAT_005712bc) != 0 ||
               (*(unsigned int *)(*param_1 + 0x45a0) & DAT_005712b8) != 0) {
        FUN_004c9160(0x35,param_2[8],0,1);
        temp_v19 = *param_1;
        FUN_003eaf20();
        *(unsigned int *)(*param_1 + 0x4d68) = *(unsigned int *)(temp_v19 + 0x400);
        temp_v20 = btlScriptUnitHasFlags(*param_1);
        FUN_004abfd0(g_btlUiBlock,temp_v20 ^ 1);
      }
      temp_v19 = *param_1;
      if (*(int *)(temp_v19 + 0x4cd4) != 0) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(temp_v19 + 0xa4) * 0x1254 + 9) = 3;
        return 1;
      }
      *(unsigned char *)(g_btlScriptUnit + *(int *)(temp_v19 + 0xa4) * 0x1254 + 9) = 2;
      return 1;
    case 1:
      *(unsigned short *)(param_2[10] + 0x1be) = 7;
      *(unsigned short *)(param_2[10] + 0x1c0) = 5;
      param_2[0x16a] = 0;
      sysMemClear(param_2 + 0xe,0x85);
      FUN_004e7080(param_1,param_2,param_2[0xd]);
      *(unsigned short *)(*param_1 + 0x2356) =
           *(unsigned short *)(*(int *)(*param_1 + 0x1ffc) + param_2[0xd] * 0x408 + 8);
      temp_v16 = 0xb;
      temp_v19 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
      break;
    case 4:
      if (((((unsigned int *)param_2[8])[1] & DAT_0057114c) != 0 ||
           (*(unsigned int *)param_2[8] & DAT_00571148) != 0) &&
         ((*(unsigned short *)(param_2[10] + 0x110) & 0x11c0) == 0)) {
        *(unsigned short *)(param_2[10] + 0x1be) = 1;
        *(unsigned int *)(param_2[8] + 0x150) = param_2[0x160];
        if (!((*(unsigned int *)param_2[8] & DAT_00571150) == 0 &&
             (DAT_00571154 & ((unsigned int *)param_2[8])[1]) == 0)) {
          *(unsigned short *)(param_2[10] + 0x1c0) = 1;
        }
        else {
          *(unsigned short *)(param_2[10] + 0x1c0) = 0;
        }
        sysMemClear(param_2 + 0xe,0x85);
        piVar16 = param_1;
        FUN_004e7080(param_1,param_2,param_2[0xd]);
        if (piVar16 == (int *)0x0) {
          *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
          return 1;
        }
        *param_2 = *param_2 | 0x204;
        FUN_004eb838(param_1,param_2);
        return 1;
      }
      temp_v17 = temp_v17 | DAT_0057127c;
      *puVar27 = temp_v20 | DAT_00571278;
      *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17;
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
      return 1;
    case 5:
      if (((DAT_00571148 & *(unsigned int *)param_2[8]) != 0 ||
           (((unsigned int *)param_2[8])[1] & DAT_0057114c) != 0) &&
         ((*(unsigned short *)(param_2[10] + 0x110) & 0x11c0) == 0)) {
        *(unsigned short *)(param_2[10] + 0x1be) = 2;
        *(short *)(param_2[10] + 0x1c0) = (short)param_2[0x160];
        sysMemClear(param_2 + 0xe,0x85);
        FUN_004e8454(param_1);
        temp_v26 = (((unsigned int *)param_2[8])[1] & DAT_0057116c) == 0 &&
                 (DAT_00571168 & *(unsigned int *)param_2[8]) == 0;
        FUN_004e7c04(param_1,temp_v26);
        FUN_003e8bb0(temp_v27,*param_1,param_2[8]);
        if (temp_v28 != '\0') {
          if (temp_v28 != '\x01') {
            if (temp_v28 == '\x02') {
              btlUnitMarkTargetCandidates(param_1,temp_v26,2);
            }
          }
          else {
            btlUnitMarkTargetCandidates(param_1,temp_v26,1);
          }
        }
        else {
          FUN_004e5b5c(param_1);
        }
        *param_2 = *param_2 | 0x204;
        FUN_004eb838(param_1,param_2);
        return 1;
      }
      temp_v17 = temp_v17 | DAT_0057127c;
      *puVar27 = temp_v20 | DAT_00571278;
      *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17;
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
      return 1;
    case 6:
      temp_v16 = 0x1e;
      temp_v19 = g_btlScriptUnit + *(int *)(temp_v19 + 0xa4) * 0x1254;
      break;
    case 7:
      if ((((unsigned int *)param_2[8])[1] & DAT_0057114c) == 0 && (DAT_00571148 & *(unsigned int *)param_2[8]) == 0
         ) {
        temp_v17 = temp_v17 | DAT_0057127c;
        *puVar27 = temp_v20 | DAT_00571278;
        *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17;
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
        return 1;
      }
      temp_v17 = temp_v17 | DAT_00571224;
      *puVar27 = temp_v20 | DAT_00571220;
      *(unsigned int *)(temp_v19 + 0x45a4) = temp_v17;
      *param_2 = *param_2 | 4;
      temp_v16 = 0x16;
      temp_v19 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
    }
  }
  *(unsigned char *)(temp_v19 + 9) = temp_v16;
  return 1;
}

} /* extern "C" */
