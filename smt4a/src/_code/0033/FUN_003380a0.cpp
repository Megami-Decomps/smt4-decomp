/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003380a0` (_code @ 0x3380a0, 0x27c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c410(int);
int FUN_0016c4b8(int, unsigned int);
int FUN_0016c560(int);
int sysMemClear(unsigned char *, int);
int FUN_002f5020(unsigned char *, unsigned char *, int, int);
int FUN_002ff8e8(unsigned int);
int camSetMatrixB(int, int *);
int FUN_00409bc8(int, unsigned int);
int FUN_00412678(unsigned int, unsigned char [352], int *);
int FUN_00412aec(unsigned int, int *, int, int);
int FUN_00412c54(unsigned int, unsigned char [352]);
int FUN_0042cb74(unsigned char *);

typedef int romwright_code(...);
/* stack frame of param_2: 9 slot(s), 33 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7CC; /* 0x7cc: local_7cc */
    unsigned int sp7DC; /* 0x7dc: local_7dc */
    unsigned int sp7E8; /* 0x7e8: local_7e8 */
    unsigned int sp7EC; /* 0x7ec: local_7ec */
    unsigned int sp7FC; /* 0x7fc: local_7fc */
    unsigned int sp808; /* 0x808: local_808 */
} param_2_stack;

extern unsigned char LAB_0042cb68; /* 0x42cb68 */
extern unsigned char LAB_0042cbb0; /* 0x42cbb0 */
extern int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_002ff8e8. */
/* Supplied declaration required: camSetMatrixB. */
/* Supplied declaration required: FUN_00409bc8. */
/* Supplied declaration required: FUN_00412678. */
/* Supplied declaration required: FUN_00412aec. */
/* Supplied declaration required: FUN_00412c54. */
/* Supplied declaration required: FUN_0042cb74. */


void FUN_003380a0(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  int temp_v8;
  unsigned int uStack_804;
  unsigned int uStack_800;
  unsigned int temp_v9;
  unsigned int uStack_7f8;
  unsigned int uStack_7f4;
  unsigned int uStack_7f0;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int uStack_7e4;
  unsigned int uStack_7e0;
  unsigned int temp_v12;
  unsigned int uStack_7d8;
  unsigned int uStack_7d4;
  unsigned int uStack_7d0;
  unsigned int temp_v13;
  unsigned char temp_v14 [352];
  unsigned char temp_v15 [1584];
  int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18;
  
  FUN_0016c4b8(g_renderCtx,param_1[5]);
  temp_v8 = param_1[6];
  uStack_804 = param_1[7];
  uStack_800 = param_1[8];
  uStack_7f8 = param_1[10];
  uStack_7f4 = param_1[0xb];
  uStack_7f0 = param_1[0xc];
  temp_v7 = 0;
  temp_v11 = param_1[0xe];
  uStack_7e4 = param_1[0xf];
  uStack_7e0 = param_1[0x10];
  uStack_7d8 = param_1[0x12];
  uStack_7d4 = param_1[0x13];
  uStack_7d0 = param_1[0x14];
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v12 = 0;
  temp_v13 = 0x3f800000;
  camSetMatrixB(g_renderCtx,&temp_v8);
  FUN_002ff8e8(param_2);
  temp_v5 = g_renderCtx;
  if ((*(unsigned short *)((int)param_1 + 0x12) & 0x100) != 0) {
    temp_v0 = FUN_001692ac(5,0);
    piVar5 = (int *)(temp_v5 + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 + 1;
    piVar5[temp_v1 + 3] = temp_v0;
    if (!(*(char *)(temp_v5 + 0x1270) == '\0' && temp_v2 == temp_v0)) {
      (**(romwright_code **)(temp_v5 + 0x1274))();
      *(unsigned char *)(temp_v5 + 0x1270) = 0;
    }
  }
  else {
    temp_v0 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v5 + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 + 1;
    piVar5[temp_v1 + 3] = temp_v0;
    if (!(*(char *)(temp_v5 + 0x1270) == '\0' && temp_v2 == temp_v0)) {
      (**(romwright_code **)(temp_v5 + 0x1274))();
      *(unsigned char *)(temp_v5 + 0x1270) = 0;
    }
  }
  puVar2 = temp_v15;
  if (param_1[0x16] != 0) {
    param_1[0x16] = 0;
  }
  FUN_002f5020(puVar2,&LAB_0042cbb0,0x70,0xc);
  puVar2 = puVar2 + 0x540;
  FUN_002f5020(puVar2,&LAB_0042cb68,0x14,0xc);
  *(unsigned int *)(puVar2 + -0x6a0) = 0;
  sysMemClear(puVar2 + -0x69c,0x150);
  temp_v3 = 0;
  do {
    puVar2[temp_v3 - 0x54c] = 0;
    FUN_0042cb74(puVar2 + (temp_v3 * 0x70 - 0x540));
    temp_v4 = temp_v3 + 1;
    temp_v5 = temp_v3 * 0x14;
    puVar2[temp_v5] = 0;
    temp_v6 = (unsigned int)temp_v7;
    *(unsigned int *)(puVar2 + temp_v5 + 4) = temp_v6;
    *(unsigned int *)(puVar2 + temp_v5 + 8) = temp_v6;
    *(unsigned int *)(puVar2 + temp_v5 + 0xc) = temp_v6;
    *(unsigned int *)(puVar2 + temp_v5 + 0x10) = temp_v6;
    temp_v3 = temp_v4;
  } while (temp_v4 < 0xc);
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  FUN_00412c54(*param_1,temp_v14);
  temp_v5 = 0;
  if (temp_v5 < *(short *)(param_1 + 2)) {
    do {
      FUN_00409bc8(g_renderCtx,param_1[1] + temp_v5 * 0x10);
      FUN_00412aec(*param_1,&temp_v16,(int)*(short *)(param_1 + 3) * temp_v5 * 3,
                   *(short *)(param_1 + 3) * 3);
      FUN_00412678(*param_1,temp_v14,&temp_v16);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(short *)(param_1 + 2));
  }
  FUN_0016c410(g_renderCtx);
  FUN_0016c560(g_renderCtx);
  temp_v5 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
