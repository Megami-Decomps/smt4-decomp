/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003721b0` (_code @ 0x3721b0, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_0018152c(int, int, int, int, int);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_0018408c(...);
int FUN_00184e64(...);
int FUN_001879d0(unsigned int);
int FUN_0019d880(void);
int VectorSignedToFloat(...);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_5_stack;

extern unsigned char LAB_0037243c; /* 0x37243c */
extern unsigned char LAB_00372450; /* 0x372450 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern unsigned int FUN_00180114(void);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019d880. */
extern short FUN_0019e52c(unsigned short);


void FUN_003721b0(unsigned int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  unsigned char temp_v8 [64];
  unsigned char temp_v9 [84];
  
  temp_v7 = 0.26f;
  FUN_001879d0(g_renderCtx);
  FUN_0019d880();
  efctSetSpeed();
  temp_v2 = FUN_0019e52c(*(unsigned short *)(param_2 + 300));
  temp_v0 = *(unsigned short *)(param_2 + 100);
  temp_v3 = FUN_00180114();
  FUN_00100388(temp_v8,&LAB_0037243c,temp_v3);
  temp_v6 = temp_v7;
  FUN_001879d0(g_renderCtx);
  temp_v3 = 0xbba;
  if (param_3 == 0) {
    temp_v3 = 0xbb9;
  }
  temp_v4 = FUN_001834a4(0x14,param_3 + 0xbbb);
  temp_v5 = (int)*(short *)(temp_v4 + 8) + param_4 + (int)temp_v7;
  temp_v4 = *(short *)(temp_v4 + 10) + param_5;
  FUN_001835b4(2,0x14,0xc12,temp_v5,temp_v4,0xbf);
  FUN_001835b4(2,0x14,temp_v3,temp_v5,temp_v4,0xbf);
  FUN_001879d0(g_renderCtx);
  temp_v4 = FUN_001834a4(0x14,param_3 + 0xbda);
  temp_v5 = param_4 + (int)temp_v6;
  FUN_0018152c((int)temp_v2,*(short *)(temp_v4 + 8) + temp_v5,*(short *)(temp_v4 + 10) + param_5,0xc4,0);
  temp_v4 = FUN_001834a4(0x14,param_3 + 0xbc3);
  FUN_001835b4(2,0x14,0xbc2,*(short *)(temp_v4 + 8) + temp_v5,*(short *)(temp_v4 + 10) + param_5,0xbf);
  temp_v3 = 2;
  temp_v4 = param_3 * 2 + 0xc68;
  if (temp_v0 >= 100) {
    temp_v3 = 3;
    temp_v4 = param_3 * 3 + 0xbee;
  }
  FUN_00100388(temp_v9,&LAB_00372450,temp_v0);
  temp_v4 = FUN_001834a4(0x14,temp_v4);
  temp_v2 = *(short *)(temp_v4 + 8);
  temp_v1 = *(short *)(temp_v4 + 10);
  FUN_00184e64(0xffffffff);
  FUN_00180310(0,temp_v5 + temp_v2,temp_v1 + param_5,1,temp_v3,0xce,temp_v9);
  FUN_00183bb0();
  temp_v4 = FUN_001834a4(0x14,param_3 + 0xbe5);
  puVar6 = temp_v8;
  FUN_0018408c(puVar6,2);
  temp_v5 = (int)*(short *)(temp_v4 + 8) + ((int)**(short **)(temp_v4 + 0xc) - (int)puVar6) / 2 + param_4
          + (int)temp_v6;
  VectorSignedToFloat(*(short *)(temp_v4 + 10) + param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xff,temp_v8,temp_v5);
  efctSetSpeed();
  return;
}

} /* extern "C" */
