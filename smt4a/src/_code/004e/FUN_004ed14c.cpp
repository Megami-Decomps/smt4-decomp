/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ed14c` (_code @ 0x4ed14c, 0x45c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, int);
int FUN_004a9308(...);
int FUN_004c571c(...);
int FUN_004c9160(...);
int FUN_004dd800(...);
int FUN_004e0114(...);
int FUN_004e5c10(...);
int FUN_004e626c(int *, unsigned int);
int FUN_004fd508(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_005711a0; /* 0x5711a0 */
extern unsigned int DAT_005711a4; /* 0x5711a4 */
extern unsigned int DAT_005711a8; /* 0x5711a8 */
extern unsigned int DAT_005711ac; /* 0x5711ac */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004a9308. */
extern int FUN_004c3a98(int, unsigned int);
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004dd800. */
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004e5c10. */
/* Supplied declaration required: FUN_004e626c. */
/* Supplied declaration required: FUN_004fd508. */


unsigned int FUN_004ed14c(int *param_1,unsigned int *param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar9;
  unsigned int temp_v8;
  int temp_v9;
  
  FUN_004e626c(param_1,*(unsigned int *)(*param_1 + 0xa4));
  temp_v9 = 0;
  do {
    param_2[temp_v9 * 4 + 0x279] = 0;
    temp_v2 = *param_1;
    FUN_003f0e20(temp_v2,temp_v9);
    if (temp_v2 != 0) {
      param_2[temp_v9 * 4 + 0x279] = *(unsigned int *)(temp_v2 + 600);
      param_2[temp_v9 * 4 + 0x27a] = *(unsigned int *)(temp_v2 + 0x25c);
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x6d);
  if ((*param_2 & 0x1080) == 0) {
    temp_v3 = 0x32;
  }
  else {
    temp_v3 = 0;
  }
  temp_v1 = *(unsigned short *)(param_2[10] + 0x110);
  if ((temp_v1 & 0x80) != 0) {
    if (((DAT_00571168 | DAT_00571170) & *(unsigned int *)param_2[8]) == 0 &&
        ((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) == 0) {
      FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
    }
    FUN_004c9160(0xb,param_2[8],0,1);
    FUN_004fd508(temp_v3,param_2,0,param_2[9],1);
    FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
  }
  else if ((temp_v1 & 0x100) != 0) {
    if (((DAT_00571168 | DAT_00571170) & *(unsigned int *)param_2[8]) == 0 &&
        ((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) == 0) {
      FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
    }
    puVar9 = (unsigned int *)param_2[8];
    temp_v4 = 0xc;
    FUN_004c9160(temp_v4,puVar9,0,1);
    FUN_004fd508(temp_v3,param_2,0,param_2[9],1);
    FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
  }
  else {
    temp_v5 = *(unsigned int *)param_2[8];
    temp_v7 = ((unsigned int *)param_2[8])[1];
    if (!((temp_v5 & (DAT_005711a0 | DAT_005711a8)) == 0 &&
         (temp_v7 & (DAT_005711a4 | DAT_005711ac)) == 0)) {
      if ((temp_v5 & (DAT_00571168 | DAT_00571170)) == 0 &&
          (temp_v7 & (DAT_0057116c | DAT_00571174)) == 0) {
        FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
      }
      temp_v9 = FUN_004c3a98((int)*(short *)(param_2[9] + 0x6a),0x1a);
      puVar9 = (unsigned int *)param_2[8];
      if (!((*puVar9 & DAT_005711a0) == 0 && (puVar9[1] & DAT_005711a4) == 0)) {
        temp_v4 = 0xd;
      }
      else if (temp_v9 == 2) {
        temp_v4 = 0xe;
      }
      else {
        temp_v4 = 0xf;
      }
      FUN_004c9160(temp_v4,puVar9,0,1);
      FUN_004fd508(temp_v3,param_2,0,param_2[9],1);
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    }
    else if ((temp_v1 & 0x40) != 0) {
      FUN_004e5c10(param_1,param_2);
    }
    else if ((temp_v1 & 0x800) != 0) {
      FUN_004dd800(param_1,param_2);
    }
    else if ((temp_v1 & 0x1000) != 0) {
      if ((temp_v5 & (DAT_00571168 | DAT_00571170)) == 0 &&
          (temp_v7 & (DAT_0057116c | DAT_00571174)) == 0) {
        FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
      }
      FUN_004c571c((int)*(short *)(param_2[9] + 0x6a),0x20,1,0);
      FUN_004c9160(0x26,param_2[8],0,1);
      FUN_004fd508(temp_v3,param_2,0,param_2[9],1);
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    }
  }
  if (((DAT_005711a4 | DAT_005711ac) & ((unsigned int *)param_2[8])[1]) != 0 ||
      ((DAT_005711a8 | DAT_005711a0) & *(unsigned int *)param_2[8]) != 0) {
    FUN_004c571c((int)*(short *)(param_2[9] + 0x6a),0x1a,0xffffffff,0);
    temp_v9 = FUN_004c3a98((int)*(short *)(param_2[9] + 0x6a),0x1a);
    if (temp_v9 == 0) {
      puVar9 = (unsigned int *)param_2[8];
      temp_v6 = *puVar9;
      temp_v8 = puVar9[1];
      temp_v5 = ~DAT_005711a0;
      temp_v7 = ~DAT_005711a4;
      puVar9[1] = temp_v8 & temp_v7;
      *puVar9 = temp_v6 & temp_v5;
      temp_v0 = ~DAT_005711ac;
      puVar9 = (unsigned int *)param_2[8];
      *puVar9 = temp_v6 & temp_v5 & ~DAT_005711a8;
      puVar9[1] = temp_v8 & temp_v7 & temp_v0;
    }
  }
  return 1;
}

} /* extern "C" */
