/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001325d8` (_code @ 0x1325d8, 0x23c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

extern int DAT_00464b7c; /* 0x464b7c */
extern int *DAT_00464b84; /* 0x464b84 */
extern unsigned int DAT_00464b8c; /* 0x464b8c */
extern unsigned int DAT_00464b94; /* 0x464b94 */
extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004c632c; /* 0x4c632c */
extern signed char DAT_004dad84; /* 0x4dad84 */
extern signed char DAT_004dad85; /* 0x4dad85 */
extern unsigned int DAT_004dad88; /* 0x4dad88 */
extern unsigned int *DAT_004dad90; /* 0x4dad90 */

extern int FUN_001384f8(void);
/* Supplied declaration required: FUN_00138bb8. */
/* Supplied declaration required: FUN_0013c030. */
/* Supplied declaration required: FUN_00147994. */
/* Supplied declaration required: FUN_002aa938. */
/* Supplied declaration required: FUN_002abb68. */
/* Supplied declaration required: FUN_002abbb8. */
/* Supplied declaration required: FUN_002abc9c. */
/* Supplied declaration required: FUN_002abde8. */
/* Supplied declaration required: FUN_002abdf4. */
/* Supplied declaration required: FUN_002abe74. */
/* Supplied declaration required: FUN_002b77b8. */
/* Supplied declaration required: FUN_002c028c. */
/* Supplied declaration required: FUN_002c5094. */
/* Supplied declaration required: FUN_002c50d0. */
/* Supplied declaration required: FUN_002c52f0. */


/* WARNING: Type propagation algorithm not settling */

void FUN_001325d8(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 16 native warning(s); review required */
  unsigned int *puVar1;
  char temp_v0;
  int *piVar3;
  int temp_v1;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [260];
  int iStack_34;
  unsigned int temp_v7;
  unsigned int uStack_2c;
  int temp_v8;
  
  temp_v4 = *(unsigned int *)(param_1 + 4);
  iStack_34 = param_1;
  temp_v7 = param_2;
  uStack_2c = param_3;
  temp_v8 = param_4;
  if ((DAT_004dad84 != '\0') && (DAT_004dad85 == '\0')) {
    FUN_002abe74(DAT_00464b84 + 4,DAT_00464b8c);
    piVar3 = DAT_00464b84;
    temp_v1 = DAT_00464b7c;
    FUN_002abdf4(*(unsigned int *)(DAT_00464b7c + 8),*(unsigned int *)(DAT_00464b7c + 4));
    (**(romwright_code **)(*piVar3 + 0x10))(piVar3,*(unsigned int *)(temp_v1 + 8));
    FUN_002abde8(*(unsigned int *)(temp_v1 + 8));
    FUN_002c50d0(DAT_004dad88);
    FUN_002abc9c(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
    FUN_002c52f0(DAT_004dad88,0);
    FUN_002c028c(DAT_00464b84,DAT_00464b8c);
    FUN_002abe74(DAT_00464b84 + 4,DAT_00464b94);
    piVar3 = DAT_00464b84;
    temp_v1 = DAT_00464b7c;
    FUN_002abdf4(*(unsigned int *)(DAT_00464b7c + 8),*(unsigned int *)(DAT_00464b7c + 4));
    (**(romwright_code **)(*piVar3 + 0x10))(piVar3,*(unsigned int *)(temp_v1 + 8));
    FUN_002abde8(*(unsigned int *)(temp_v1 + 8));
    DAT_004dad85 = '\x01';
  }
  temp_v1 = FUN_001384f8();
  if (temp_v1 == 0) {
    FUN_002abb68(DAT_004dad90);
  }
  puVar7 = DAT_004652a0;
  if (temp_v8 != 0) {
    FUN_002abc9c(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
    puVar1 = (unsigned int *)0x0;
    if (puVar7 != (unsigned int *)0x0) {
      puVar1 = DAT_004652a0;
    }
    if ((puVar7 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) && puVar1 != puVar7) {
      puVar9 = (unsigned char *)0x0;
      puVar10 = (unsigned char *)0x0;
      if (puVar7 < puVar1) {
        do {
          puVar5 = temp_v6 + (int)puVar9;
          FUN_0013c030(puVar5,0x100 - (int)puVar9,0xff - (int)puVar9,"0x%08x, ",*puVar7);
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + (int)puVar5;
          if (puVar10 == (unsigned char *)0x4) {
            puVar10 = (unsigned char *)0x0;
            puVar9 = puVar10;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 < puVar1);
      }
    }
  }
  else {
    FUN_002abc9c(temp_v6,*(unsigned int *)(*(int *)(param_1 + 0x14) + 0xc),
                 *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10),temp_v4,
                 *(unsigned int *)(param_1 + 0x18));
  }
  FUN_00138bb8(DAT_004dad90);
  temp_v0 = '\0';
  if (DAT_004dad84 != '\0') {
    temp_v0 = DAT_004dad85;
  }
  if (DAT_004dad84 != '\0' && temp_v0 != '\0') {
    FUN_002abbb8(temp_v4,temp_v7,1);
    FUN_002c5094(DAT_004dad88);
    FUN_002b77b8(temp_v4);
  }
  FUN_002abbb8(temp_v4,temp_v7,1);
  temp_v1 = DAT_004c632c;
  temp_v8 = DAT_004dad90[1];
  if (temp_v8 < 1) {
    return;
  }
  temp_v4 = *DAT_004dad90;
  temp_v3 = (int)DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  temp_v5 = (temp_v3 & 8) != 0;
  puVar7 = DAT_004652a0;
  if (temp_v5) {
    puVar7 = (unsigned int *)(temp_v3 + 0x18);
  }
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v3;
  if (temp_v5) {
    *(unsigned int **)(temp_v1 + 0xc) = puVar7;
  }
  else {
    *(unsigned int *)(temp_v1 + 0xc) = temp_v3 + 0x20;
    if (puVar7 < DAT_004652a4) {
      DAT_004652a0 = puVar7 + 2;
      puVar7[1] = 0x8025e;
      *puVar7 = 0;
    }
  }
  temp_v8 = temp_v8 >> 3;
  FUN_00147994(temp_v4);
  FUN_00147994(*(int *)(temp_v1 + 4) + *(int *)(temp_v1 + 0xc));
  if (*(int *)(temp_v1 + 0x30) == 0) {
    *(int *)(temp_v1 + 0x30) = *(int *)(temp_v1 + 0xc) - *(int *)(temp_v1 + 0x14);
  }
  temp_v2 = *(int *)(temp_v1 + 0x34);
  if (temp_v2 != 0) {
    *(unsigned int *)(temp_v2 + 8) = (unsigned int)((int)DAT_004652a0 - temp_v2) >> 3;
  }
  *(unsigned int **)(temp_v1 + 0x34) = DAT_004652a0;
  FUN_002aa938(0x238,5,&temp_v8);
  return;
}
