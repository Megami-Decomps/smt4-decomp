/* NON_MATCHING: Retail instruction scheduling/register allocation differs (158 retail versus 110 compiled rows). */
#include "classes/Obj42080c.h"
#include "romwright_types.h"

extern "C" {

int FUN_0023b4f4(int *, unsigned char [64], int *, int);
int FUN_0023b5e0(int, unsigned char [64], int);
int gpuSubmitFloatVectorsOrDefault(int *);
int forwardRecoveredCallback(void);
int FUN_002b011c(void);
int FUN_002c1b64(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0023b4f4. */
/* Supplied declaration required: FUN_0023b5e0. */
/* Supplied declaration required: gpuSubmitFloatVectorsOrDefault. */
/* Supplied declaration required: forwardRecoveredCallback. */
/* Supplied declaration required: FUN_002b011c. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);


} /* extern "C" */

void Obj42080c::draw()

{
    int param_1 = (int)this;
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  float temp_v4;
  int temp_v5;
  unsigned int uStack_a4;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_98;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int uStack_80;
  float temp_v13;
  unsigned char temp_v14 [64];
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  
  temp_v4 = -11.0f;
  FUN_002c1b64(g_titleScene,*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  FUN_0023b5e0(param_1,temp_v14,param_1 + 0x18);
  temp_v1 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x12ac);
  temp_v0 = *(int *)(*(int *)(param_1 + 0x60) + 0x18);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x12c8))();
    *(unsigned char *)(temp_v1 + 0x12c4) = 0;
  }
  temp_v1 = g_titleScene;
  temp_v0 = FUN_002c5d80(1,0);
  piVar6 = (int *)(temp_v1 + 0x124c);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  temp_v18 = *(unsigned int *)(*(int *)(param_1 + 0x14) + 8);
  temp_v15 = 0x3f800000;
  temp_v16 = 0x3f800000;
  temp_v17 = 0x3f800000;
  puVar2 = *(unsigned int **)(param_1 + 4);
  temp_v5 = *puVar2;
  uStack_a4 = puVar2[1];
  temp_v6 = (float)puVar2[2] + temp_v4;
  temp_v1 = *(int *)(param_1 + 4);
  temp_v8 = *(float *)(temp_v1 + 0x1c) + temp_v4;
  temp_v7 = *(unsigned int *)(temp_v1 + 0x14);
  uStack_98 = *(unsigned int *)(temp_v1 + 0x18);
  temp_v1 = *(int *)(param_1 + 4);
  temp_v9 = *(unsigned int *)(temp_v1 + 0x28);
  temp_v10 = *(unsigned int *)(temp_v1 + 0x2c);
  temp_v11 = *(float *)(temp_v1 + 0x30) + temp_v4;
  temp_v1 = *(int *)(param_1 + 4);
  temp_v12 = *(unsigned int *)(temp_v1 + 0x3c);
  uStack_80 = *(unsigned int *)(temp_v1 + 0x40);
  temp_v13 = *(float *)(temp_v1 + 0x44) + temp_v4;
  FUN_0023b4f4(&temp_v5,temp_v14,&temp_v5,4);
  FUN_002b011c();
  temp_v1 = 0;
  do {
    gpuSubmitFloatVectorsOrDefault(&temp_v15);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  forwardRecoveredCallback();
  temp_v1 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x124c);
  temp_v0 = *piVar6;
  temp_v2 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  temp_v1 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x12ac);
  temp_v0 = *piVar6;
  temp_v2 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v2 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x12c8))();
    *(unsigned char *)(temp_v1 + 0x12c4) = 0;
  }
  return;
}

