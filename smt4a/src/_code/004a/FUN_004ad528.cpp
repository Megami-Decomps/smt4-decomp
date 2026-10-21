/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ad528` (_code @ 0x4ad528, 0x5a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a5d84(...);
int FUN_004adbb4(void);
int FUN_004adcec(unsigned int *);
int moviePacketReadHeader(unsigned int *, int, unsigned int [3], unsigned int);
int FUN_004adf7c(unsigned int *, int, unsigned int [3], unsigned int);
int FUN_004af3b4(unsigned int *, int, unsigned int [3], unsigned int);
int FUN_00521c8c(unsigned int *, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 10 slot(s), 36 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

/* Supplied declaration required: FUN_002a5d84. */
extern int FUN_004adb08(unsigned int *);
/* Supplied declaration required: FUN_004adbb4. */
/* Supplied declaration required: FUN_004adcec. */
/* Supplied declaration required: moviePacketReadHeader. */
/* Supplied declaration required: FUN_004adf7c. */
extern int FUN_004af1c0(unsigned int *);
/* Supplied declaration required: FUN_004af3b4. */
/* Supplied declaration required: FUN_00521c8c. */


unsigned int * FUN_004ad528(unsigned int *param_1)

{
/* irregular: 7 goto(s); 7 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned long long temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6 [2];
  unsigned int *temp_v7;
  unsigned int temp_v8 [3];
  unsigned int temp_v9;
  unsigned int uStack_54;
  unsigned int *temp_v10;
  unsigned short temp_v11 [12];
  unsigned char temp_v12 [4];
  unsigned int uStack_2c;
  unsigned short temp_v13 [2];
  
  puVar6 = param_1 + 0x51e;
  temp_v4 = 0;
  temp_v3 = (**(romwright_code **)(*(int *)*puVar6 + 0x14))((int *)*puVar6,temp_v6,&temp_v4);
  if ((int)temp_v3 == 0) {
    temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x28))();
    if (temp_v0 == 0) {
      return (unsigned int *)0x1;
    }
    FUN_004adbb4();
    if (param_1 == (unsigned int *)0x0) {
      return (unsigned int *)0x44;
    }
    return (unsigned int *)0x3;
  }
  temp_v2 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  if (temp_v6[0] != 0) {
    temp_v2 = temp_v4;
  }
  puVar7 = param_1 + 0x521;
  puVar8 = param_1 + 0x520;
  puVar9 = (unsigned char *)((int)param_1 + 0x148f);
  if (!(temp_v6[0] == 0 || temp_v2 == 0)) {
    puVar10 = (unsigned char *)((int)param_1 + 0x148e);
    if (*(char *)((int)param_1 + 0x148f) != '\0') {
      temp_v7 = param_1 + 0x51f;
      temp_v10 = param_1 + 0x522;
      temp_v1 = *temp_v7;
      if (temp_v1 != 0) {
        if (*(char *)((int)param_1 + 0x148d) != '\0') {
          if (temp_v1 < temp_v2) {
            pcVar5 = (romwright_code *)*temp_v10;
            if (pcVar5 != (romwright_code *)0x0) {
              pcVar1 = 
              "error: synchronized variable packet size reader returned a packet with an unexpected size (%d > %d)\n"
              ;
LAB_004ad5f8:
              (*pcVar5)(pcVar1);
            }
            goto LAB_004ad898;
          }
        }
        else if (temp_v1 != temp_v2) {
          pcVar5 = (romwright_code *)*temp_v10;
          if (pcVar5 == (romwright_code *)0x0) goto LAB_004ad898;
          pcVar1 = 
          "error: synchronized fixe packet size reader returned a packet with an unexpected size (%d != %d)\n"
          ;
          goto LAB_004ad5f8;
        }
      }
      temp_v8[0] = 0;
      if ((temp_v2 >= 0xf) && (temp_v0 = FUN_002a5d84(temp_v6[0],&temp_v9,temp_v11), temp_v0 != 0)) {
        if ((int)uStack_54 >= 0) {
          *puVar10 = 0;
        }
        else {
          uStack_54 = uStack_54 & 0x7fffffff;
          *puVar10 = 1;
        }
        if (temp_v11[0] < 0x10) {
LAB_004ad898:
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          *puVar8 = 0x40;
          *puVar7 = 0x10000;
          *puVar9 = 0;
          *(unsigned char *)((int)param_1 + 0x1491) = 0;
          return (unsigned int *)0x49;
        }
        if (temp_v9 != 0 || uStack_54 != 0) {
          temp_v2 = *param_1;
          if ((temp_v2 != 0 || param_1[1] != 0) && (param_1[3] == 0 && param_1[2] == 0)) {
            param_1[2] = temp_v9 - temp_v2;
            param_1[3] = uStack_54 - (param_1[1] + (unsigned int)(temp_v9 < temp_v2));
          }
          *param_1 = temp_v9;
          param_1[1] = uStack_54;
          puVar7 = param_1;
          FUN_004adbb4();
          if (puVar7 == (unsigned int *)0x0) {
            return (unsigned int *)0x44;
          }
          FUN_004adcec(param_1);
          puVar7 = param_1 + 0x50f;
          FUN_00521c8c(puVar7,0,param_1[0x512]);
          param_1[0x512] = 0;
          *puVar8 = 0x40;
        }
        temp_v1 = (unsigned int)temp_v11[0];
        temp_v2 = *temp_v7;
        if (temp_v2 >= temp_v1 && temp_v2 != temp_v1) {
          puVar7 = (unsigned int *)0x0;
        }
        if (temp_v2 < temp_v1) {
          puVar7 = (unsigned int *)0x1;
        }
        if (temp_v2 != temp_v1) {
          *temp_v7 = temp_v1;
          temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 8))();
          if (temp_v0 == 0) {
            if ((romwright_code *)*temp_v10 != (romwright_code *)0x0) {
              (*(romwright_code *)*temp_v10)(0x4adad4);
            }
            return (unsigned int *)0x42;
          }
          if (puVar7 != (unsigned int *)0x0) {
            return (unsigned int *)0x0;
          }
        }
        temp_v3 = (**(romwright_code **)(*(int *)*puVar6 + 0x24))();
        *(unsigned long long *)(param_1 + 4) = temp_v3;
        temp_v8[0] = 0xe;
        temp_v2 = *temp_v7;
        if (temp_v4 < *temp_v7) {
          temp_v2 = temp_v4;
        }
        while (temp_v4 = temp_v2, puVar7 = param_1,
              FUN_004adf7c(param_1,temp_v6[0],temp_v8,temp_v4), puVar7 != (unsigned int *)0x100) {
          temp_v2 = temp_v4;
          if (puVar7 != (unsigned int *)0x0) {
            return puVar7;
          }
        }
        if (temp_v4 < temp_v8[0]) {
          return (unsigned int *)0x43;
        }
      }
      puVar7 = param_1;
      moviePacketReadHeader(param_1,temp_v6[0],temp_v8,temp_v4);
      if (*(char *)((int)param_1 + 0x148f) == '\0') {
        return (unsigned int *)0x0;
      }
      if (puVar7 != (unsigned int *)0x0) {
        return puVar7;
      }
      while (puVar7 = param_1, FUN_004af3b4(param_1,temp_v6[0],temp_v8,temp_v4),
            puVar7 != (unsigned int *)0x101) {
        if (puVar7 != (unsigned int *)0x0) {
          return puVar7;
        }
      }
      if (temp_v4 < temp_v8[0]) {
        return (unsigned int *)0x43;
      }
      temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))();
    }
    else {
      if (temp_v2 >= 0xe) {
        temp_v5 = temp_v6[0];
        temp_v10 = (unsigned int *)((temp_v2 + temp_v6[0]) - 0xd);
        do {
          temp_v0 = FUN_002a5d84(temp_v6[0],temp_v12,temp_v13);
          if (temp_v0 != 0) {
            if ((int)uStack_2c >= 0) {
              *puVar10 = 0;
            }
            else {
              uStack_2c = uStack_2c & 0x7fffffff;
              *puVar10 = 1;
            }
            if (temp_v13[0] < 0x10) goto LAB_004ad898;
            *puVar9 = 1;
            temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,temp_v6[0] - temp_v5);
            goto joined_r0x004ad7c8;
          }
          if ((char)param_1[0x524] != '\0') {
            temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,temp_v4);
            goto joined_r0x004ad7f4;
          }
          temp_v6[0] = temp_v6[0] + 1;
        } while ((unsigned int *)temp_v6[0] != temp_v10);
        temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,temp_v6[0] - temp_v5);
        goto joined_r0x004ad7f4;
      }
      temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))();
    }
joined_r0x004ad7c8:
    if (temp_v0 != 0) {
      return (unsigned int *)0x0;
    }
  }
  else {
    if ((char)param_1[0x524] != '\0') {
      *puVar7 = 0x10000;
      temp_v0 = FUN_004af1c0(param_1);
      if (temp_v0 == 0) {
        return (unsigned int *)0x44;
      }
      temp_v0 = FUN_004adb08(param_1);
      if (temp_v0 == 0) {
        return (unsigned int *)0x44;
      }
      temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,0);
      if (temp_v0 == 0) {
        return (unsigned int *)0x80;
      }
      if (*(char *)((int)param_1 + 0x148f) != '\0') {
        return (unsigned int *)0x0;
      }
      return (unsigned int *)0x2;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *puVar8 = 0x40;
    *puVar7 = 0x10000;
    *puVar9 = 0;
    *(unsigned char *)((int)param_1 + 0x1491) = 0;
    temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,0);
joined_r0x004ad7f4:
    if (temp_v0 != 0) {
      return (unsigned int *)0x2;
    }
  }
  return (unsigned int *)0x80;
}

} /* extern "C" */
