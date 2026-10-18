/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a91f4` (_code @ 0x2a91f4, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002a91f4_arg0 fn_002a91f4_arg0;
typedef struct fn_002a91f4_arg0_p2c fn_002a91f4_arg0_p2c;
struct fn_002a91f4_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x23];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    fn_002a91f4_arg0_p2c *field_0x2c; /* +0x2c */
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x7];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0xb];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x3];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x7];
    unsigned char field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x3];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    unsigned char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x3];
    undefined4 field_0x64; /* +0x64 */
    int field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char field_0x70; /* +0x70 */
    unsigned char pad_0x71[0xb];
    unsigned char field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    undefined4 field_0x80; /* +0x80 */
};
struct fn_002a91f4_arg0_p2c {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x23];
    undefined4 field_0x28; /* +0x28 */
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x7];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0xb];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x3];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x7];
    unsigned char field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x3];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    unsigned char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x3];
    unsigned char field_0x64; /* +0x64 */
    unsigned char pad_0x65[0x3];
    unsigned char field_0x68; /* +0x68 */
    unsigned char pad_0x69[0x3];
    unsigned char field_0x6c; /* +0x6c */
    unsigned char pad_0x6d[0x3];
    unsigned char field_0x70; /* +0x70 */
    unsigned char pad_0x71[0xb];
    unsigned char field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    unsigned char field_0x80; /* +0x80 */
    unsigned char pad_0x81[0x4f];
    unsigned char field_0xd0; /* +0xd0 */
    unsigned char pad_0xd1[0x3];
    unsigned char field_0xd4; /* +0xd4 */
    unsigned char pad_0xd5[0x4];
    unsigned char field_0xd9; /* +0xd9 */
    unsigned char pad_0xda[0x6e];
    unsigned char field_0x148; /* +0x148 */
    unsigned char pad_0x149[0x3];
    unsigned char field_0x14c; /* +0x14c */
    unsigned char pad_0x14d[0x3];
    undefined4 field_0x150; /* +0x150 */
    undefined4 field_0x154; /* +0x154 */
};

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001457ec. */
/* Supplied declaration required: FUN_0014f07c. */
/* Supplied declaration required: FUN_0015156c. */
/* Supplied declaration required: FUN_002a5710. */
/* Supplied declaration required: FUN_002a5960. */
/* Supplied declaration required: FUN_002a5dc4. */
/* Supplied declaration required: FUN_002a9834. */
extern int *FUN_002c2ff0(void);
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, int, unsigned int);


void FUN_002a91f4(fn_002a91f4_arg0 *param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  fn_002a91f4_arg0 *pfVar4;
  int *piVar5;
  int temp_v2;
  int temp_v3;
  fn_002a91f4_arg0_p2c *pfVar8;
  int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  int iStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  char cStack_2c;
  unsigned char temp_v8;
  
  *(unsigned int *)(*(int *)&param_1->field_0x4 + 0x18) =
       *(unsigned int *)(*(int *)&param_1->field_0x4 + 8);
  FUN_002a9834(&temp_v8,param_1,param_2,0);
  FUN_001457ec(param_1,*(unsigned int *)(*(int *)&param_1->field_0x4 + 0xc));
  temp_v4 = -1;
  temp_v6 = 0x3f800000;
  if (param_1->field_0x2c != (fn_002a91f4_arg0_p2c *)0x0) {
    temp_v0 = *(int *)(*(int *)(*(int *)&param_1->field_0x4 + 0x18) + 100);
    *(int *)&param_1->field_0x34 = temp_v0;
    if (temp_v0 < 1) {
      *(unsigned int *)&param_1->field_0x30 = 0;
      *(unsigned int *)&param_1->field_0x4c = 0;
    }
    else {
      temp_v1 = FUN_002c5300(0x100,0x100,0,*(int *)&param_1->field_0x34 << 2,1);
      *(unsigned int *)&param_1->field_0x30 = temp_v1;
      temp_v0 = 0;
      if (temp_v0 < *(int *)&param_1->field_0x34) {
        do {
          piVar3 = (int *)(*(int *)(*(int *)&param_1->field_0x4 + 0x18) + 0x68);
          temp_v2 = *piVar3;
          if (temp_v2 != 0) {
            temp_v2 = (int)piVar3 + temp_v2;
          }
          else {
            temp_v2 = 0;
          }
          temp_v3 = 0;
          if (temp_v2 != 0) {
            piVar3 = (int *)(temp_v2 + temp_v0 * 0x10 + 0x28);
            temp_v3 = *piVar3;
            if (temp_v3 == 0) {
              temp_v3 = 0;
            }
            else {
              temp_v3 = (int)piVar3 + temp_v3;
            }
          }
          *(int *)(*(int *)&param_1->field_0x30 + temp_v0 * 4) = temp_v3;
          temp_v0 = temp_v0 + 1;
          if (temp_v4 < *(int *)(temp_v3 + 0x18)) {
            temp_v4 = *(int *)(temp_v3 + 0x18);
          }
        } while (temp_v0 < *(int *)&param_1->field_0x34);
      }
      *(int *)&param_1->field_0x3c = temp_v4;
      pfVar4 = param_1;
      FUN_0015156c();
      *(fn_002a91f4_arg0 **)&param_1->field_0x48 = pfVar4;
      pfVar8 = param_1->field_0x2c;
      FUN_0014f07c(pfVar8,**(unsigned int **)&param_1->field_0x30,temp_v4);
      *(fn_002a91f4_arg0_p2c **)&param_1->field_0x4c = pfVar8;
      temp_v4 = *(int *)&param_1->field_0x48;
      **(unsigned int **)(temp_v4 + 0x14) = (unsigned int)pfVar8;
      **(unsigned int **)(temp_v4 + 0x24) = temp_v6;
      **(unsigned int **)(temp_v4 + 0x34) = temp_v6;
      *(unsigned char *)(temp_v4 + 0x41) = 1;
      pfVar8 = param_1->field_0x2c;
      if (pfVar8[1].field_0xd9 != '\0') {
        temp_v1 = *(unsigned int *)&param_1->field_0x4c;
        if (*(int *)&pfVar8[1].field_0xd0 != 0) {
          temp_v4 = pfVar8->field_0x28;
          temp_v0 = *(int *)&pfVar8[1].field_0xd4;
          if ((-1 < temp_v0) && (temp_v0 < (*(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0xc)) >> 2)) {
            temp_v2 = *(int *)(temp_v4 + 0x28);
            if (0 < temp_v2) {
              *(unsigned int *)(*(int *)(temp_v4 + 0x1c) + temp_v0 * temp_v2 * 4) = temp_v1;
            }
          }
        }
      }
      else {
        temp_v1 = *(unsigned int *)&param_1->field_0x48;
        if (*(int *)&pfVar8[1].field_0xd0 != 0) {
          temp_v4 = pfVar8->field_0x28;
          temp_v0 = *(int *)&pfVar8[1].field_0xd4;
          if ((-1 < temp_v0) && (temp_v0 < (*(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0xc)) >> 2)) {
            temp_v2 = *(int *)(temp_v4 + 0x28);
            if (0 < temp_v2) {
              *(unsigned int *)(*(int *)(temp_v4 + 0x1c) + temp_v0 * temp_v2 * 4) = temp_v1;
            }
          }
        }
      }
    }
    temp_v4 = *(int *)(*(int *)(*(int *)&param_1->field_0x4 + 0x18) + 0x6c);
    *(int *)&param_1->field_0x58 = temp_v4;
    if (temp_v4 < 1) {
      *(unsigned int *)&param_1->field_0x54 = 0;
    }
    else {
      temp_v1 = FUN_002c5300(0x100,0x100,0,*(int *)&param_1->field_0x58 << 2,1);
      temp_v4 = 0;
      *(unsigned int *)&param_1->field_0x54 = temp_v1;
      if (0 < *(int *)&param_1->field_0x58) {
        do {
          piVar3 = (int *)(*(int *)(*(int *)&param_1->field_0x4 + 0x18) + 0x70);
          temp_v0 = *piVar3;
          if (temp_v0 != 0) {
            temp_v0 = (int)piVar3 + temp_v0;
          }
          else {
            temp_v0 = 0;
          }
          temp_v2 = 0;
          if (temp_v0 != 0) {
            piVar3 = (int *)(temp_v0 + temp_v4 * 0x10 + 0x28);
            temp_v2 = *piVar3;
            if (temp_v2 == 0) {
              temp_v2 = 0;
            }
            else {
              temp_v2 = (int)piVar3 + temp_v2;
            }
          }
          temp_v0 = temp_v4 * 4;
          temp_v4 = temp_v4 + 1;
          *(int *)(*(int *)&param_1->field_0x54 + temp_v0) = temp_v2;
        } while (temp_v4 < *(int *)&param_1->field_0x58);
      }
      pfVar8 = param_1->field_0x2c;
      temp_v4 = *(int *)&pfVar8->field_0x148;
      if ((temp_v4 != 0) &&
         (temp_v1 = *(unsigned int *)(*(int *)(temp_v4 + 8) + 0x10), **(int **)&param_1->field_0x54 != 0))
      {
        cStack_2c = '\x01';
        iStack_38 = **(int **)&param_1->field_0x54;
        uStack_34 = temp_v1;
        uStack_30 = temp_v1;
        piVar3 = (int *)FUN_002c2ff0();
        piVar5 = (int *)(**(romwright_code **)(*piVar3 + 8))(piVar3,0x74,4);
        if (piVar5 != (int *)0x0) {
          FUN_002a5dc4(piVar5,piVar3);
          FUN_002a5960(piVar5,&iStack_38,uStack_34,uStack_30,(int)cStack_2c);
          if ((piVar5 != (int *)0x0) &&
             ((**(romwright_code **)(*piVar5 + 0xc))(piVar5,temp_v4), *(int *)&pfVar8->field_0x148 != 0)) {
            temp_v4 = pfVar8->field_0x28;
            temp_v0 = *(int *)&pfVar8->field_0x14c;
            if ((-1 < temp_v0) &&
               ((temp_v0 < (*(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0xc)) >> 2 &&
                (0 < *(int *)(temp_v4 + 0x28))))) {
              *(int **)(*(int *)(temp_v4 + 0x1c) + temp_v0 * *(int *)(temp_v4 + 0x28) * 4) = piVar5;
            }
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
      }
      else {
        piVar5 = (int *)0x0;
      }
      *(int **)&param_1->field_0x60 = piVar5;
    }
    temp_v4 = *(int *)(*(int *)(*(int *)&param_1->field_0x4 + 0x18) + 0x74);
    param_1->field_0x68 = temp_v4;
    if (temp_v4 < 1) {
      param_1->field_0x64 = 0;
    }
    else {
      temp_v1 = FUN_002c5300(0x100,0x100,0,param_1->field_0x68 << 2,1);
      temp_v4 = 0;
      param_1->field_0x64 = temp_v1;
      if (0 < param_1->field_0x68) {
        do {
          piVar3 = (int *)(*(int *)(*(int *)&param_1->field_0x4 + 0x18) + 0x78);
          temp_v0 = *piVar3;
          if (temp_v0 != 0) {
            temp_v0 = (int)piVar3 + temp_v0;
          }
          else {
            temp_v0 = 0;
          }
          temp_v2 = 0;
          if (temp_v0 != 0) {
            piVar3 = (int *)(temp_v0 + temp_v4 * 0x10 + 0x28);
            temp_v2 = *piVar3;
            if (temp_v2 == 0) {
              temp_v2 = 0;
            }
            else {
              temp_v2 = (int)piVar3 + temp_v2;
            }
          }
          temp_v0 = temp_v4 * 4;
          temp_v4 = temp_v4 + 1;
          *(int *)(param_1->field_0x64 + temp_v0) = temp_v2;
        } while (temp_v4 < param_1->field_0x68);
      }
      pfVar8 = param_1->field_0x2c;
      temp_v4 = pfVar8->field_0x150;
      if ((temp_v4 != 0) &&
         (temp_v1 = *(unsigned int *)(*(int *)(temp_v4 + 8) + 0x10), *(int *)param_1->field_0x64 != 0)) {
        cStack_2c = '\x01';
        iStack_38 = *(int *)param_1->field_0x64;
        uStack_34 = temp_v1;
        uStack_30 = temp_v1;
        piVar3 = (int *)FUN_002c2ff0();
        piVar5 = (int *)(**(romwright_code **)(*piVar3 + 8))(piVar3,0x74,4);
        if (piVar5 != (int *)0x0) {
          FUN_002a5dc4(piVar5,piVar3);
          FUN_002a5960(piVar5,&iStack_38,uStack_34,uStack_30,(int)cStack_2c);
          if ((piVar5 != (int *)0x0) &&
             ((**(romwright_code **)(*piVar5 + 0xc))(piVar5,temp_v4), pfVar8->field_0x150 != 0)) {
            temp_v4 = pfVar8->field_0x28;
            temp_v0 = pfVar8->field_0x154;
            if ((-1 < temp_v0) &&
               ((temp_v0 < (*(int *)(temp_v4 + 0x10) - *(int *)(temp_v4 + 0xc)) >> 2 &&
                (0 < *(int *)(temp_v4 + 0x28))))) {
              *(int **)(*(int *)(temp_v4 + 0x1c) + temp_v0 * *(int *)(temp_v4 + 0x28) * 4) = piVar5;
            }
          }
        }
        else {
          piVar5 = (int *)0x0;
        }
      }
      else {
        piVar5 = (int *)0x0;
      }
      *(int **)&param_1->field_0x70 = piVar5;
    }
  }
  temp_v7 = (unsigned long long)temp_v6;
  FUN_002a5710(param_1,0);
  *(int *)&param_1->field_0x7c = (int)temp_v7;
  if ((0 < *(int *)&param_1->field_0x58) &&
     (piVar3 = *(int **)&param_1->field_0x60, piVar3 != (int *)0x0)) {
    (**(romwright_code **)(*piVar3 + 0x24))(piVar3,**(unsigned int **)&param_1->field_0x54);
    *(unsigned int *)&param_1->field_0x5c = 0;
  }
  temp_v5 = (float)(temp_v7 >> 0x20);
  param_1->field_0x80 = 0x3f800000;
  if ((((0 < param_1->field_0x68) && (0 < param_1->field_0x68)) &&
      (pfVar8 = param_1->field_0x2c, pfVar8->field_0x150 != 0)) &&
     (piVar3 = *(int **)(*(int *)(pfVar8->field_0x28 + 0x1c) +
                        pfVar8->field_0x154 * *(int *)(pfVar8->field_0x28 + 0x28) * 4),
     piVar3 != (int *)0x0)) {
    (**(romwright_code **)(*piVar3 + 0x24))(piVar3,*(unsigned int *)param_1->field_0x64);
    param_1->field_0x6c = 0;
    if (temp_v5 != 0.0f) {
      temp_v0 = piVar3[0x11];
      (*(romwright_code *)piVar3[0x13])(piVar3[0x14]);
      temp_v4 = piVar3[0xe];
      piVar3[0xe] = temp_v0;
      piVar3[0xf] = temp_v4;
      *(unsigned char *)(piVar3 + 0x16) = 1;
    }
  }
  return;
}
