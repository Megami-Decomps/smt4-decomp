/* NON_MATCHING: Retail instruction scheduling/register allocation differs (192 retail versus 182 compiled rows). */
#include "classes/Obj422540.h"
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char DAT_0055c9ec; /* 0x55c9ec */


} /* extern "C" */

Obj422540::~Obj422540()

{
    unsigned int *param_1 = (unsigned int *)this;
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  romwright_code *pcVar7;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = param_1[4];
  if (temp_v3 != 0) {
    pcVar7 = *(romwright_code **)(**(int **)(temp_v3 + 0x54) + 4);
    (*pcVar7)(*(int **)(temp_v3 + 0x54),*(unsigned int *)(temp_v3 + 0x58),pcVar7);
    *(unsigned int *)(temp_v3 + 0x58) = 0;
    *(unsigned int *)(temp_v3 + 0x5c) = 0;
    puVar1 = *(unsigned int **)(temp_v3 + 0x4c);
    if (puVar1 == (unsigned int *)0x0 || puVar1 == (unsigned int *)(temp_v3 + 0x44)) {
      if (*(int *)(temp_v3 + 0x48) != 0) {
        (**(romwright_code **)(**(int **)(temp_v3 + 0x44) + 4))();
      }
    }
    else {
      puVar1[3] = *(unsigned int *)(temp_v3 + 0x50);
      *(unsigned int *)(*(int *)(temp_v3 + 0x50) + 8) = *(unsigned int *)(temp_v3 + 0x4c);
      *(unsigned int *)(temp_v3 + 0x4c) = 0;
      *(unsigned int *)(temp_v3 + 0x50) = 0;
    }
    *(unsigned int *)(temp_v3 + 0x48) = 0;
    temp_v0 = *(int *)(temp_v3 + 0x3c);
    if (*(int *)(temp_v3 + 0x38) != 0) {
      temp_v4 = *(unsigned int *)(temp_v3 + 0x34);
      temp_v1 = *(int *)(temp_v3 + 0x38) + temp_v0;
      if (temp_v4 >= temp_v1) {
        temp_v2 = *(int *)(temp_v3 + 0x30);
        puVar1 = (unsigned int *)(temp_v2 + temp_v0 * 0x10);
        while (puVar1 < (unsigned int *)(temp_v2 + temp_v1 * 0x10)) {
          puVar3 = (unsigned int *)puVar1[2];
          if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar1) {
            if (puVar1[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar1 + 4))();
            }
          }
          else {
            puVar3[3] = puVar1[3];
            *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          puVar1[1] = 0;
          puVar1 = puVar1 + 4;
        }
      }
      else {
        temp_v2 = *(int *)(temp_v3 + 0x30);
        puVar1 = (unsigned int *)(temp_v2 + temp_v0 * 0x10);
        while (puVar1 < (unsigned int *)(temp_v2 + temp_v4 * 0x10)) {
          puVar3 = (unsigned int *)puVar1[2];
          if (puVar3 == (unsigned int *)0x0 || puVar3 == puVar1) {
            if (puVar1[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar1 + 4))();
            }
          }
          else {
            puVar3[3] = puVar1[3];
            *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          puVar1[1] = 0;
          puVar1 = puVar1 + 4;
        }
        puVar3 = *(unsigned int **)(temp_v3 + 0x30);
        puVar1 = puVar3;
        while (puVar1 < puVar3 + (temp_v1 - temp_v4) * 4) {
          puVar4 = (unsigned int *)puVar1[2];
          if (puVar4 == (unsigned int *)0x0 || puVar4 == puVar1) {
            if (puVar1[1] != 0) {
              (**(romwright_code **)(*(int *)*puVar1 + 4))();
            }
          }
          else {
            puVar4[3] = puVar1[3];
            *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          puVar1[1] = 0;
          puVar1 = puVar1 + 4;
        }
      }
    }
    *(unsigned int *)(temp_v3 + 0x3c) = 0;
    *(unsigned int *)(temp_v3 + 0x38) = 0;
    (**(romwright_code **)(**(int **)(temp_v3 + 0x2c) + 4))
              (*(int **)(temp_v3 + 0x2c),*(unsigned int *)(temp_v3 + 0x30));
    *(unsigned int *)(temp_v3 + 0x30) = 0;
    *(unsigned int *)(temp_v3 + 0x34) = 0;
    temp_v0 = *(int *)(temp_v3 + 0x28);
    puVar3 = *(unsigned int **)(temp_v3 + 0x20);
    puVar1 = puVar3;
    while (puVar1 < puVar3 + temp_v0 * 4) {
      puVar4 = (unsigned int *)puVar1[2];
      if (puVar4 == (unsigned int *)0x0 || puVar4 == puVar1) {
        if (puVar1[1] != 0) {
          (**(romwright_code **)(*(int *)*puVar1 + 4))();
        }
      }
      else {
        puVar4[3] = puVar1[3];
        *(unsigned int *)(puVar1[3] + 8) = puVar1[2];
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
    }
    (**(romwright_code **)(**(int **)(temp_v3 + 0x1c) + 4))
              (*(int **)(temp_v3 + 0x1c),*(unsigned int *)(temp_v3 + 0x20));
    *(unsigned int *)(temp_v3 + 0x20) = 0;
    *(unsigned int *)(temp_v3 + 0x24) = 0;
    *(unsigned int *)(temp_v3 + 0x14) = 0;
    *(unsigned int *)(temp_v3 + 0x10) = 0;
    (**(romwright_code **)(**(int **)(temp_v3 + 4) + 4))(*(int **)(temp_v3 + 4),*(unsigned int *)(temp_v3 + 8));
    *(unsigned int *)(temp_v3 + 8) = 0;
    *(unsigned int *)(temp_v3 + 0xc) = 0;
    (**(romwright_code **)(*(int *)param_1[3] + 4))((int *)param_1[3],param_1[4]);
    param_1[4] = 0;
  }
  return;
}

