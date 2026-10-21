/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036aa04` (_code @ 0x36aa04, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int controllerSetDestination(...);
int controllerSetPosition(int);
int FUN_003fd7c0(int, int, int);
int FUN_003fe86c(...);

typedef struct fn_0036aa04_arg0 fn_0036aa04_arg0;
struct fn_0036aa04_arg0 {
    unsigned char pad_0x0[0xb];
    unsigned char field_0xb; /* +0xb */
    unsigned char pad_0xc[0x2e];
    unsigned char field_0x3a; /* +0x3a */
    unsigned char pad_0x3b[0x81];
    void *field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x8];
    unsigned char field_0xc8; /* +0xc8 */
    unsigned char pad_0xc9[0xf];
    void *field_0xd8; /* +0xd8 */
    unsigned char pad_0xdc[0x10];
    void *field_0xec; /* +0xec */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int g_lmapScene; /* 0x581288 */
extern unsigned char g_gameState; /* 0x5f15fc */

extern int gameFlagsGetBlock(void);
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fe86c. */
extern int slots4FGetActiveValue(int);


void FUN_0036aa04(fn_0036aa04_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  float temp_v5;
  unsigned int uStack_30;
  
  temp_v0 = *(int *)((int)param_1->field_0xd8 + 4);
  temp_v2 = *(int *)((int)param_1->field_0xec + 4);
  temp_v3 = *(int *)((int)param_1->field_0xbc + 4);
  if ((*(signed char *)((unsigned char *)&g_gameState + 0x23)) != '\0') {
    *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
    *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
  }
  else {
    if (*(int *)&param_1->field_0xc8 >= 0x3dccccce) {
      *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) & 0xfffffffc;
    }
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffc;
    if (*(int *)&param_1->field_0xc8 >= 0x3dccccce) {
      *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) & 0xfffffffc;
    }
    if (param_1->field_0xb != '\0') {
      *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
      *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffc;
      *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
    }
    else {
      if (*(int *)&param_1->field_0xc8 >= 0x3dccccce) {
        temp_v1 = *(unsigned int *)(temp_v3 + 4) & 0xfffffffc;
      }
      else {
        temp_v1 = *(unsigned int *)(temp_v3 + 4) | 3;
      }
      *(unsigned int *)(temp_v3 + 4) = temp_v1;
      *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
      if (*(int *)&param_1->field_0xc8 >= 0x3dccccce) {
        temp_v1 = *(unsigned int *)(temp_v2 + 4) & 0xfffffffc;
      }
      else {
        temp_v1 = *(unsigned int *)(temp_v2 + 4) | 3;
      }
      *(unsigned int *)(temp_v2 + 4) = temp_v1;
    }
    controllerSetDestination(temp_v3,g_lmapScene + 0x1c);
    controllerSetPosition(temp_v3);
    temp_v0 = slots4FGetActiveValue(temp_v3);
    if (temp_v0 != 0) {
      FUN_003fe86c(temp_v3,0,2);
    }
    temp_v0 = gameFlagsGetBlock();
    if (param_1->field_0xec != (void *)0x0) {
      if (*(int *)(temp_v0 + 0xdf4) == 0) {
        temp_v3 = *(int *)(temp_v0 + 0x15b4);
        if ((temp_v3 != 3) && (temp_v3 != 4)) {
          *(int *)(temp_v0 + 0x15b4) = 0;
          *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
          return;
        }
      }
      if (*(int *)&param_1->field_0xc8 >= 0x3dccccce) {
        temp_v1 = *(unsigned int *)(temp_v2 + 4) & 0xfffffffc;
      }
      else {
        temp_v1 = *(unsigned int *)(temp_v2 + 4) | 3;
      }
      *(unsigned int *)(temp_v2 + 4) = temp_v1;
      temp_v4 = *(unsigned int *)(g_lmapScene + 0x1c);
      uStack_30 = *(unsigned int *)(g_lmapScene + 0x24);
      temp_v5 = *(float *)(g_lmapScene + 0x20) + 20.0f;
      controllerSetDestination(temp_v2,&temp_v4);
      controllerSetPosition(temp_v2);
      piVar5 = (int *)(temp_v0 + 0x15b4);
      temp_v0 = *piVar5;
      if (temp_v0 == 0) {
        FUN_003fe86c(temp_v2,0,2);
        *piVar5 = 1;
        *(unsigned int *)(param_1 + 1) = 0;
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          if (temp_v0 == 3) {
            FUN_003fe86c(temp_v2,2);
            *piVar5 = 4;
            *(unsigned int *)(param_1 + 1) = 0;
            return;
          }
          if (temp_v0 == 4) {
            *(unsigned int *)(param_1 + 1) = 0;
            *piVar5 = 0;
            *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
            return;
          }
        }
        else if (param_1[0x9d].field_0x3a == '\0') {
          FUN_003fd7c0(temp_v2,1,2);
          param_1[0x9d].field_0x3a = 1;
          return;
        }
      }
      else {
        temp_v0 = *(int *)(param_1 + 1);
        *(int *)(param_1 + 1) = temp_v0 + 1;
        if (temp_v0 + 1 >= 11) {
          FUN_003fd7c0(temp_v2,1,2);
          *piVar5 = 2;
          param_1[0x9d].field_0x3a = 1;
          *(unsigned int *)(param_1 + 1) = 0;
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
