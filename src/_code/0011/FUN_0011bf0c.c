/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bf0c` (_code @ 0x11bf0c, 0x274 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;


unsigned int FUN_0011bf0c(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  int *piVar5;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar8;
  unsigned int temp_v2;
  unsigned short *puVar10;
  int temp_v3;
  unsigned short *puVar12;
  unsigned char temp_v4;
  
  piVar5 = (int *)(param_1 + 0x3c);
  temp_v2 = (param_3 + 3U) & 0xfffffffc;
  temp_v0 = *(unsigned int *)(param_2 - 0xc);
  if (temp_v0 != temp_v2) {
    if (temp_v2 <= temp_v0) {
      *(unsigned int *)(param_2 - 0xc) = temp_v2;
      puVar12 = (unsigned short *)(temp_v0 + param_2);
      puVar2 = (unsigned short *)(param_2 + temp_v2);
      puVar10 = (unsigned short *)0x0;
      puVar3 = (unsigned short *)0x0;
      puVar4 = (unsigned short *)*piVar5;
      if ((unsigned short *)*piVar5 != (unsigned short *)0x0) {
        do {
          if (puVar2 <= puVar4) {
            if (puVar12 == puVar4) {
              puVar12 = (unsigned short *)((int)puVar4 + *(int *)(puVar4 + 2) + 0x10);
              temp_v1 = *(int *)(puVar4 + 4);
              temp_v3 = *(int *)(puVar4 + 6);
              if (temp_v1 != 0) {
                *(int *)(temp_v1 + 0xc) = temp_v3;
              }
              else {
                *piVar5 = temp_v3;
              }
              if (temp_v3 != 0) {
                *(int *)(temp_v3 + 8) = temp_v1;
              }
              else {
                *(int *)(param_1 + 0x40) = temp_v1;
              }
            }
            break;
          }
          puVar8 = (unsigned int *)(puVar4 + 6);
          puVar3 = puVar4;
          puVar4 = (unsigned short *)*puVar8;
        } while ((unsigned short *)*puVar8 != (unsigned short *)0x0);
        puVar10 = puVar3;
        if ((puVar3 != (unsigned short *)0x0) &&
           ((unsigned short *)((int)puVar3 + *(int *)(puVar3 + 2) + 0x10) == puVar2)) {
          puVar10 = *(unsigned short **)(puVar3 + 4);
          temp_v3 = *(int *)(puVar3 + 6);
          if (puVar10 != (unsigned short *)0x0) {
            *(int *)(puVar10 + 6) = temp_v3;
          }
          else {
            *piVar5 = temp_v3;
          }
          puVar2 = puVar3;
          if (temp_v3 != 0) {
            *(unsigned short **)(temp_v3 + 8) = puVar10;
          }
          else {
            *(unsigned short **)(param_1 + 0x40) = puVar10;
          }
        }
      }
      if ((unsigned int)((int)puVar12 - (int)puVar2) < 0x10) {
        *(unsigned int *)(param_2 - 0xc) = temp_v0;
      }
      else {
        *puVar2 = 0x4652;
        puVar2[1] = 0;
        *(unsigned int *)(puVar2 + 2) = ((int)puVar12 - (int)puVar2) - 0x10;
        *(unsigned short **)(puVar2 + 4) = puVar10;
        *(unsigned int *)(puVar2 + 6) = 0;
        if (puVar10 != (unsigned short *)0x0) {
          temp_v3 = *(int *)(puVar10 + 6);
          *(unsigned short **)(puVar10 + 6) = puVar2;
        }
        else {
          temp_v3 = *piVar5;
          *piVar5 = (int)puVar2;
        }
        *(int *)(puVar2 + 6) = temp_v3;
        if (temp_v3 != 0) {
          *(unsigned short **)(temp_v3 + 8) = puVar2;
        }
        else {
          *(unsigned short **)(param_1 + 0x40) = puVar2;
        }
      }
      return *(unsigned int *)(param_2 - 0xc);
    }
    for (temp_v3 = *piVar5; temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0xc)) {
      if (temp_v3 == temp_v0 + param_2) {
        if ((temp_v3 != 0) && (temp_v2 <= temp_v0 + *(int *)(temp_v3 + 4) + 0x10)) {
          puVar10 = (unsigned short *)(*(int *)(temp_v3 + 4) + temp_v3 + 0x10);
          puVar8 = (unsigned int *)(temp_v3 - ((*(unsigned short *)(temp_v3 + 2) & 0x7fff) >> 8));
          temp_v1 = *(int *)(temp_v3 + 8);
          temp_v3 = *(int *)(temp_v3 + 0xc);
          if (temp_v1 != 0) {
            *(int *)(temp_v1 + 0xc) = temp_v3;
          }
          else {
            *piVar5 = temp_v3;
          }
          if (temp_v3 != 0) {
            *(int *)(temp_v3 + 8) = temp_v1;
          }
          if (temp_v3 == 0) {
            *(int *)(param_1 + 0x40) = temp_v1;
          }
          puVar3 = (unsigned short *)(param_2 + temp_v2);
          if ((unsigned int)((int)puVar10 - (int)(param_2 + temp_v2)) < 0x10) {
            puVar3 = puVar10;
          }
          *(int *)(param_2 - 0xc) = (int)puVar3 - param_2;
          if ((unsigned int)((int)puVar10 - (int)puVar3) >= 0x10) {
            *puVar3 = 0x4652;
            puVar3[1] = 0;
            *(unsigned int *)(puVar3 + 2) = ((int)puVar10 - (int)puVar3) - 0x10;
            *(int *)(puVar3 + 4) = temp_v1;
            *(unsigned int *)(puVar3 + 6) = 0;
            if (temp_v1 != 0) {
              temp_v3 = *(int *)(temp_v1 + 0xc);
              *(unsigned short **)(temp_v1 + 0xc) = puVar3;
            }
            else {
              temp_v3 = *piVar5;
              *piVar5 = (int)puVar3;
            }
            *(int *)(puVar3 + 6) = temp_v3;
            if (temp_v3 != 0) {
              *(unsigned short **)(temp_v3 + 8) = puVar3;
            }
            else {
              *(unsigned short **)(param_1 + 0x40) = puVar3;
            }
          }
          temp_v2 = (int)puVar3 - (int)puVar8;
          temp_v4 = (*(unsigned int *)(param_1 + 0x38) & 1) != 0;
          if (temp_v4) {
            puVar3 = (unsigned short *)0x0;
          }
          if (temp_v4 && temp_v2 >= 4) {
            puVar1 = puVar8 + -1;
            if ((int)(temp_v2 * 0x20000000) < 0) {
              *puVar8 = (unsigned int)puVar3;
              puVar1 = puVar8;
            }
            for (temp_v2 = temp_v2 >> 3; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
              puVar1[1] = (unsigned int)puVar3;
              puVar1 = puVar1 + 2;
              *puVar1 = (unsigned int)puVar3;
            }
          }
          return *(unsigned int *)(param_2 - 0xc);
        }
        break;
      }
    }
    temp_v2 = 0;
  }
  return temp_v2;
}
