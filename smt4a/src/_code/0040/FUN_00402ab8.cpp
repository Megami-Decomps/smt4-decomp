/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00402ab8` (_code @ 0x402ab8, 0x350 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00162790(...);
int FUN_00164168(...);
int efctSetSpeed(...);
int gameGetPlayerData(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0018408c(...);
int FUN_001879d0(...);
int libc_strcmp(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern unsigned char LAB_00402e14; /* 0x402e14 */
extern unsigned char LAB_00402e20; /* 0x402e20 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: textFormatBuffer. */
extern int FUN_0015687c(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: gameGetPlayerData. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: libc_strcmp. */


void FUN_00402ab8(int param_1,int param_2,int param_3)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  int temp_v10;
  unsigned long long temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [84];
  
  temp_v11 = 0x3e851eb800000000;
  FUN_001879d0(g_renderCtx);
  temp_v12 = 0xffffffff;
  efctSetSpeed();
  temp_v6 = *(int *)(param_1 + 0x664) + 0x36;
  temp_v0 = temp_v6;
  libc_strcmp(temp_v6,"<pc 0>");
  if (temp_v0 == 0) {
    gameGetPlayerData();
    temp_v6 = FUN_0015687c();
  }
  textFormatBuffer(temp_v13,&LAB_00402e14,temp_v6);
  puVar1 = temp_v13;
  FUN_0018408c(puVar1,2);
  temp_v0 = FUN_001834a4(0x32,9);
  temp_v9 = (float)((unsigned long long)temp_v11 >> 0x20);
  FUN_001879d0(g_renderCtx);
  temp_v10 = (int)temp_v9;
  temp_v6 = *(short *)(temp_v0 + 10) + param_3;
  VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((int)*(short *)(temp_v0 + 8) - (int)puVar1) + param_2 + temp_v10,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v12,temp_v13,temp_v6);
  textFormatBuffer(temp_v13,&LAB_00402e20);
  puVar3 = temp_v13;
  FUN_0018408c(puVar3,2);
  temp_v6 = FUN_001834a4(0x32,10);
  temp_v5 = *(short *)(temp_v0 + 10) + param_3;
  VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((((int)*(short *)(temp_v0 + 8) - (int)puVar1) - (int)**(short **)(temp_v6 + 0xc))
                      - (int)puVar3) + param_2 + temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,temp_v12,temp_v13,temp_v5,temp_v12,puVar3);
  temp_v6 = (((int)*(short *)(temp_v0 + 8) - (int)puVar1) - (int)**(short **)(temp_v6 + 0xc)) + param_2 +
          temp_v10;
  FUN_001835b4(2,0x32,10,temp_v6,*(short *)(temp_v0 + 10) + param_3,0xc9);
  temp_v0 = 0;
  do {
    temp_v7 = 0;
    temp_v5 = *(int *)(param_1 + 0x8c) + temp_v0;
    do {
      temp_v1 = param_1 + temp_v7 * 8;
      temp_v3 = *(int *)(temp_v1 + 0x688);
      temp_v8 = SBORROW4(temp_v3,temp_v5);
      temp_v2 = temp_v3 - temp_v5;
      if (temp_v3 <= temp_v5) {
        temp_v2 = *(int *)(temp_v1 + 0x68c);
        temp_v8 = SBORROW4(temp_v5,temp_v2);
        temp_v2 = temp_v5 - temp_v2;
      }
      if (temp_v2 < 0 != temp_v8) {
        temp_v2 = *(int *)(param_1 + temp_v7 * 8 + 0x688);
        if (-1 < temp_v7) {
          temp_v6 = *(int *)(param_1 + 0x664);
        }
        if (-1 < temp_v7) {
          temp_v1 = 0;
          do {
            temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + temp_v1 * 2 + 0x68);
            if ((temp_v4 != 0) && (temp_v4 - 1 == temp_v5)) {
              temp_v8 = 1;
              goto LAB_00402d00;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 10);
          temp_v8 = 0;
LAB_00402d00:
          temp_v1 = 0;
          if (temp_v8) {
            temp_v6 = FUN_001834a4(0x32,temp_v0 + 0x3a);
            temp_v9 = (float)((unsigned long long)temp_v11 >> 0x20);
            FUN_001879d0(g_renderCtx);
            FUN_001835b4(2,0x32,0x39,(int)*(short *)(temp_v6 + 8) + (int)temp_v9 + temp_v10 + param_2,
                         *(short *)(temp_v6 + 10) + param_3,0xc9);
            temp_v3 = FUN_001834a4(0x32,temp_v0 + 0x42);
            temp_v9 = (float)((unsigned long long)temp_v11 >> 0x20);
            FUN_001879d0(g_renderCtx);
            temp_v1 = 6;
          }
          else {
            temp_v3 = FUN_001834a4(0x32,temp_v0 + 0x12);
            temp_v9 = (float)((unsigned long long)temp_v11 >> 0x20);
            FUN_001879d0(g_renderCtx);
          }
          temp_v6 = 0xc9;
          FUN_00164168(*(unsigned int *)(param_1 + temp_v7 * 4 + 0x66c),
                       (int)temp_v9 + temp_v1 + (int)*(short *)(temp_v3 + 8) + temp_v10 + param_2,
                       *(short *)(temp_v3 + 10) + param_3,0xc9,6,temp_v5 - temp_v2);
        }
        break;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 8) {
      efctSetSpeed();
      return;
    }
  } while( 1 );
}

} /* extern "C" */
