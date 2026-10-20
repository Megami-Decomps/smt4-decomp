/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0780` (_code @ 0x3c0780, 0x57c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int padButtonIsPressed(...);
int memAlloc(int, int, int, int, int, int);
int FUN_001bc460(void);
int FUN_00200bcc(unsigned char *);
int FUN_00202178(int);
int effEditorNodeChainApply(unsigned char *);
int FUN_002b3ed8(unsigned int *, float *, unsigned int, int);
int FUN_002f8794(void);
int FUN_00300124(void);
int FUN_0038b810(void);
int FUN_00390038(int);

/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int sp110; /* 0x110: local_110 */
} param_2_stack;

extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern unsigned char DAT_0059ea88; /* 0x59ea88 */
extern unsigned int DAT_0059ea98; /* 0x59ea98 */
extern float DAT_005c1110; /* 0x5c1110 */
extern float DAT_005c1114; /* 0x5c1114 */
extern float DAT_005c1118; /* 0x5c1118 */
extern float DAT_005c111c; /* 0x5c111c */
extern float DAT_00634c90; /* 0x634c90 */
extern float DAT_00634c94; /* 0x634c94 */
extern float DAT_00634c98; /* 0x634c98 */
extern float DAT_00634c9c; /* 0x634c9c */
extern float DAT_006352f0; /* 0x6352f0 */
extern float DAT_006352f4; /* 0x6352f4 */
extern float DAT_006352f8; /* 0x6352f8 */
extern float DAT_006352fc; /* 0x6352fc */
extern unsigned int DAT_00635300; /* 0x635300 */
extern unsigned int DAT_00635304; /* 0x635304 */
extern unsigned int DAT_00635308; /* 0x635308 */
extern unsigned int DAT_0063530c; /* 0x63530c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */
extern float DAT_0064734c; /* 0x64734c */
extern float DAT_00647350; /* 0x647350 */
extern float DAT_00647354; /* 0x647354 */
extern float DAT_00647358; /* 0x647358 */

/* Supplied declaration required: padButtonIsPressed. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_00200bcc. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: FUN_002b3ed8. */
/* Supplied declaration required: FUN_002f8794. */
/* Supplied declaration required: FUN_00300124. */
/* Supplied declaration required: FUN_0038b810. */
/* Supplied declaration required: FUN_00390038. */


unsigned int FUN_003c0780(int param_1,int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float fStack_bc;
  float fStack_b8;
  float temp_v26;
  unsigned int temp_v27;
  float uStack_8c;
  float uStack_88;
  float temp_v28;
  
  temp_v4 = 1;
  if ((DAT_0059ea98 & 2) == 0) {
    temp_v3 = padButtonIsPressed(1);
    if (temp_v3 == 0) {
      FUN_00202178(1);
      temp_v3 = padButtonIsPressed();
      if (temp_v3 != 0) {
        temp_v4 = 0;
      }
    }
    else {
      temp_v4 = 0;
    }
  }
  DAT_00635300 = *(unsigned int *)(param_1 + 0x50);
  DAT_00635304 = *(unsigned int *)(param_1 + 0x54);
  DAT_00635308 = *(unsigned int *)(param_1 + 0x58);
  DAT_0063530c = *(unsigned int *)(param_1 + 0x5c);
  if (param_2 != 0) {
    FUN_00390038(param_1);
  }
  else {
    DAT_006472dc = *(float *)(param_1 + 0x40);
    DAT_006472e0 = *(float *)(param_1 + 0x44);
    DAT_006472e4 = *(float *)(param_1 + 0x48);
    DAT_006472e8 = *(float *)(param_1 + 0x4c);
  }
  temp_v17 = DAT_006472e8;
  temp_v15 = DAT_006472e4;
  temp_v14 = DAT_006472e0;
  temp_v1 = DAT_006472dc;
  DAT_006352f0 = DAT_006472dc;
  DAT_006352f4 = DAT_006472e0;
  DAT_006352f8 = DAT_006472e4;
  DAT_006352fc = DAT_006472e8;
  if (DAT_0059dbe9 == '\0') {
    FUN_00200bcc(&DAT_0059ea88);
  }
  effEditorNodeChainApply(&DAT_0059ea88);
  temp_v0 = DAT_0063530c;
  temp_v13 = DAT_00635308;
  temp_v12 = DAT_00635304;
  *(unsigned int *)(param_1 + 0x50) = DAT_00635300;
  *(unsigned int *)(param_1 + 0x54) = temp_v12;
  *(unsigned int *)(param_1 + 0x58) = temp_v13;
  *(unsigned int *)(param_1 + 0x5c) = temp_v0;
  if ((DAT_0059ea98 & 8) != 0) {
    temp_v4 = temp_v4 | 2;
  }
  DAT_006472ec = DAT_00634c90;
  DAT_006472f0 = DAT_00634c94;
  DAT_006472f4 = DAT_00634c98;
  DAT_006472f8 = DAT_00634c9c;
  DAT_006472dc = (float)temp_v1;
  DAT_006472e0 = (float)temp_v14;
  DAT_006472e4 = (float)temp_v15;
  DAT_006472e8 = (float)temp_v17;
  FUN_002f8794();
  temp_v27 = DAT_006472dc;
  uStack_8c = DAT_006472e0;
  uStack_88 = DAT_006472e4;
  temp_v28 = DAT_006472e8;
  DAT_006472dc = *(float *)(param_1 + 0x50);
  DAT_006472e0 = *(float *)(param_1 + 0x54);
  DAT_006472e4 = *(float *)(param_1 + 0x58);
  DAT_006472e8 = *(float *)(param_1 + 0x5c);
  FUN_001bc460();
  temp_v10 = DAT_00647354;
  temp_v8 = DAT_00647350;
  temp_v6 = DAT_0064734c;
  temp_v2 = DAT_00647348;
  DAT_006472e8 = (DAT_005c1110 * DAT_00647328 + DAT_005c1114 * DAT_00647338 +
                  DAT_005c1118 * DAT_00647348 + DAT_005c111c * DAT_00647358) * 250.0f;
  DAT_006472dc = (DAT_005c1110 * DAT_0064731c + DAT_005c1114 * DAT_0064732c +
                  DAT_005c1118 * DAT_0064733c + DAT_005c111c * DAT_0064734c) * 250.0f;
  DAT_006472e0 = (DAT_005c1110 * DAT_00647320 + DAT_005c1114 * DAT_00647330 +
                  DAT_005c1118 * DAT_00647340 + DAT_005c111c * DAT_00647350) * 250.0f;
  DAT_006472e4 = (DAT_005c1110 * DAT_00647324 + DAT_005c1114 * DAT_00647334 +
                  DAT_005c1118 * DAT_00647344 + DAT_005c111c * DAT_00647354) * 250.0f;
  DAT_006472ec = temp_v27;
  DAT_006472f0 = uStack_8c;
  DAT_006472f4 = uStack_88;
  DAT_006472f8 = temp_v28;
  temp_v16 = DAT_0064732c;
  temp_v18 = DAT_00647330;
  temp_v23 = DAT_00647344;
  temp_v24 = DAT_00647358;
  temp_v5 = DAT_0064731c;
  temp_v7 = DAT_00647320;
  temp_v9 = DAT_00647324;
  temp_v11 = DAT_00647328;
  temp_v19 = DAT_00647334;
  temp_v20 = DAT_00647338;
  temp_v21 = DAT_0064733c;
  temp_v22 = DAT_00647340;
  FUN_002f8794();
  temp_v25 = DAT_006472dc;
  fStack_bc = DAT_006472e0;
  fStack_b8 = DAT_006472e4;
  temp_v26 = DAT_006472e8;
  temp_v12 = 0x41f00000;
  temp_v13 = 0x42480000;
  temp_v3 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v3 + 8) = temp_v27;
  *(float *)&*(unsigned int *)(temp_v3 + 0xc) = uStack_8c;
  *(float *)&*(unsigned int *)(temp_v3 + 0x10) = uStack_88;
  *(float *)&*(unsigned int *)(temp_v3 + 0x14) = temp_v28;
  *(float *)(temp_v3 + 0x34) = temp_v16;
  *(float *)(temp_v3 + 0x24) = temp_v5;
  *(float *)(temp_v3 + 0x28) = temp_v7;
  *(float *)(temp_v3 + 0x2c) = temp_v9;
  *(float *)(temp_v3 + 0x30) = temp_v11;
  *(float *)(temp_v3 + 0x38) = temp_v18;
  *(float *)(temp_v3 + 0x3c) = temp_v19;
  *(float *)(temp_v3 + 0x40) = temp_v20;
  *(float *)(temp_v3 + 0x44) = temp_v21;
  *(float *)(temp_v3 + 0x48) = temp_v22;
  *(float *)(temp_v3 + 0x4c) = temp_v23;
  *(float *)(temp_v3 + 0x50) = temp_v2;
  *(float *)(temp_v3 + 0x54) = temp_v6;
  *(float *)(temp_v3 + 0x58) = temp_v8;
  *(float *)(temp_v3 + 0x5c) = temp_v10;
  *(float *)(temp_v3 + 0x60) = temp_v24;
  *(unsigned int *)(temp_v3 + 0x18) = temp_v12;
  *(unsigned int *)(temp_v3 + 0x1c) = temp_v13;
  *(unsigned int *)(temp_v3 + 4) = 10;
  *(unsigned int *)(temp_v3 + 0x20) = 0xff00c0c0;
  *(unsigned int *)(temp_v3 + 100) = 0;
  FUN_00300124();
  FUN_002b3ed8(&temp_v27,&temp_v25,0xff0000ff,0);
  temp_v3 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v3 + 0x18) = 0;
  *(unsigned int *)(temp_v3 + 4) = 9;
  *(unsigned int *)(temp_v3 + 8) = temp_v27;
  *(float *)&*(unsigned int *)(temp_v3 + 0xc) = uStack_8c;
  *(float *)&*(unsigned int *)(temp_v3 + 0x10) = uStack_88;
  *(float *)&*(unsigned int *)(temp_v3 + 0x14) = temp_v28;
  FUN_00300124();
  DAT_00647340 = temp_v22;
  DAT_0064733c = temp_v21;
  DAT_00647338 = temp_v20;
  DAT_00647334 = temp_v19;
  DAT_00647328 = temp_v11;
  DAT_00647324 = temp_v9;
  DAT_00647320 = temp_v7;
  DAT_0064731c = temp_v5;
  temp_v12 = 0x3f800000;
  DAT_006472ec = DAT_00634c90;
  DAT_006472f0 = DAT_00634c94;
  DAT_006472f4 = DAT_00634c98;
  DAT_006472f8 = DAT_00634c9c;
  DAT_0064734c = (float)temp_v1;
  DAT_00647358 = (float)temp_v17;
  DAT_00647350 = (float)temp_v14;
  DAT_00647354 = (float)temp_v15;
  DAT_006472e0 = 0.0f;
  DAT_006472e4 = 0.0f;
  DAT_006472e8 = 1.0f;
  DAT_006472dc = -100.0f;
  DAT_0064732c = temp_v16;
  DAT_00647330 = temp_v18;
  DAT_00647344 = temp_v23;
  DAT_00647348 = temp_v2;
  temp_v6 = DAT_0064731c;
  temp_v8 = DAT_00647320;
  temp_v10 = DAT_00647324;
  temp_v24 = DAT_00647328;
  temp_v5 = DAT_00647334;
  temp_v7 = DAT_00647338;
  temp_v9 = DAT_0064733c;
  temp_v11 = DAT_00647340;
  FUN_0038b810();
  FUN_002f8794();
  temp_v27 = DAT_006472dc;
  uStack_8c = DAT_006472e0;
  uStack_88 = DAT_006472e4;
  temp_v28 = DAT_006472e8;
  DAT_006472e0 = 0.0f;
  DAT_006472e4 = 0.0f;
  DAT_006472dc = 100.0f;
  DAT_006472e8 = (float)temp_v12;
  FUN_0038b810();
  FUN_002f8794();
  temp_v25 = DAT_006472dc;
  fStack_bc = DAT_006472e0;
  fStack_b8 = DAT_006472e4;
  temp_v26 = DAT_006472e8;
  FUN_002b3ed8(&temp_v27,&temp_v25,0xff00c0c0,0);
  DAT_00647340 = temp_v11;
  DAT_0064733c = temp_v9;
  DAT_00647338 = temp_v7;
  DAT_00647334 = temp_v5;
  DAT_00647328 = temp_v24;
  DAT_00647324 = temp_v10;
  DAT_00647320 = temp_v8;
  DAT_0064731c = temp_v6;
  DAT_006472ec = DAT_00634c90;
  DAT_006472f0 = DAT_00634c94;
  DAT_006472f4 = DAT_00634c98;
  DAT_006472f8 = DAT_00634c9c;
  DAT_0064734c = (float)temp_v1;
  DAT_006472dc = 0.0f;
  DAT_006472e0 = 0.0f;
  DAT_006472e4 = -25.0f;
  DAT_006472e8 = (float)temp_v12;
  DAT_0064732c = temp_v16;
  DAT_00647330 = temp_v18;
  DAT_00647344 = temp_v23;
  DAT_00647348 = temp_v2;
  DAT_00647350 = (float)temp_v14;
  DAT_00647354 = (float)temp_v15;
  DAT_00647358 = (float)temp_v17;
  FUN_0038b810();
  FUN_002f8794();
  temp_v27 = DAT_006472dc;
  uStack_8c = DAT_006472e0;
  uStack_88 = DAT_006472e4;
  temp_v28 = DAT_006472e8;
  DAT_006472dc = 0.0f;
  DAT_006472e0 = 0.0f;
  DAT_006472e4 = 25.0f;
  DAT_006472e8 = (float)temp_v12;
  FUN_0038b810();
  FUN_002f8794();
  temp_v25 = DAT_006472dc;
  fStack_bc = DAT_006472e0;
  fStack_b8 = DAT_006472e4;
  temp_v26 = DAT_006472e8;
  FUN_002b3ed8(&temp_v27,&temp_v25,0xff00c0c0,0);
  return temp_v4;
}

} /* extern "C" */
