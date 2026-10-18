/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b05cc` (_code @ 0x3b05cc, 0x57c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 11 slot(s), 40 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

/* Supplied declaration required: FUN_001ed7c0. */
/* Supplied declaration required: FUN_0022c6f8. */
extern int FUN_003b0b84(unsigned int *);
/* Supplied declaration required: FUN_003b0c30. */
/* Supplied declaration required: FUN_003b0f14. */
/* Supplied declaration required: FUN_003b0fd8. */
/* Supplied declaration required: FUN_003b11a8. */
/* Supplied declaration required: FUN_003b2538. */


unsigned int * FUN_003b05cc(unsigned int *param_1)

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
  int temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned short temp_v12 [14];
  unsigned int *temp_v13;
  unsigned int uStack_2c;
  unsigned short temp_v14 [2];
  
  puVar6 = param_1 + 0x51c;
  temp_v3 = (**(romwright_code **)(*(int *)*puVar6 + 0x14))((int *)*puVar6,&temp_v6,&temp_v4);
  if ((int)temp_v3 == 0) {
    temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x28))();
    if (temp_v0 == 0) {
      return (unsigned int *)0x1;
    }
    FUN_003b0c30();
    if (param_1 == (unsigned int *)0x0) {
      return (unsigned int *)0x44;
    }
    return (unsigned int *)0x3;
  }
  temp_v2 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  if (temp_v6 != 0) {
    temp_v2 = temp_v4;
  }
  puVar7 = param_1 + 0x51f;
  puVar8 = param_1 + 0x51e;
  puVar9 = (unsigned char *)((int)param_1 + 0x1487);
  if (!(temp_v6 == 0 || temp_v2 == 0)) {
    puVar10 = (unsigned char *)((int)param_1 + 0x1486);
    if (*(char *)((int)param_1 + 0x1487) != '\0') {
      temp_v8 = param_1 + 0x51d;
      temp_v13 = param_1 + 0x520;
      temp_v1 = *temp_v8;
      if (temp_v1 != 0) {
        if (*(char *)((int)param_1 + 0x1485) != '\0') {
          if (temp_v1 < temp_v2) {
            pcVar5 = (romwright_code *)*temp_v13;
            if (pcVar5 != (romwright_code *)0x0) {
              pcVar1 = 
              "error: synchronized variable packet size reader returned a packet with an unexpected size (%d > %d)\n"
              ;
LAB_003b0694:
              (*pcVar5)(pcVar1);
            }
            goto LAB_003b0920;
          }
        }
        else if (temp_v1 != temp_v2) {
          pcVar5 = (romwright_code *)*temp_v13;
          if (pcVar5 == (romwright_code *)0x0) goto LAB_003b0920;
          pcVar1 = 
          "error: synchronized fixe packet size reader returned a packet with an unexpected size (%d != %d)\n"
          ;
          goto LAB_003b0694;
        }
      }
      temp_v7 = 0;
      if ((temp_v2 >= 0xf) && (temp_v0 = FUN_001ed7c0(temp_v6,&temp_v9,temp_v12), temp_v0 != 0)) {
        if ((int)temp_v10 >= 0) {
          *puVar10 = 0;
        }
        else {
          temp_v10 = temp_v10 & 0x7fffffff;
          *puVar10 = 1;
        }
        if (temp_v12[0] < 0x10) {
LAB_003b0920:
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          *puVar8 = 0x40;
          *puVar7 = 0x10000;
          *puVar9 = 0;
          *(unsigned char *)((int)param_1 + 0x1489) = 0;
          return (unsigned int *)0x49;
        }
        if (temp_v9 != 0 || temp_v10 != 0) {
          temp_v2 = *param_1;
          if ((temp_v2 != 0 || param_1[1] != 0) && (param_1[2] == 0 && param_1[3] == 0)) {
            param_1[2] = temp_v9 - temp_v2;
            param_1[3] = temp_v10 - (param_1[1] + (unsigned int)(temp_v9 < temp_v2));
          }
          param_1[1] = temp_v10;
          *param_1 = temp_v9;
          puVar7 = param_1;
          FUN_003b0c30();
          if (puVar7 == (unsigned int *)0x0) {
            return (unsigned int *)0x44;
          }
          FUN_003b0f14(param_1);
          puVar7 = param_1 + 0x50d;
          FUN_0022c6f8(puVar7,0,param_1[0x510]);
          param_1[0x510] = 0;
          *puVar8 = 0x40;
        }
        temp_v1 = (unsigned int)temp_v12[0];
        temp_v2 = *temp_v8;
        if (temp_v2 >= temp_v1 && temp_v2 != temp_v1) {
          puVar7 = (unsigned int *)0x0;
        }
        if (temp_v2 < temp_v1) {
          puVar7 = (unsigned int *)0x1;
        }
        if (temp_v2 != temp_v1) {
          *temp_v8 = temp_v1;
          temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 8))();
          if (temp_v0 == 0) {
            if ((romwright_code *)*temp_v13 != (romwright_code *)0x0) {
              (*(romwright_code *)*temp_v13)(0x3b0b50);
            }
            return (unsigned int *)0x42;
          }
          if (puVar7 != (unsigned int *)0x0) {
            return (unsigned int *)0x0;
          }
        }
        temp_v7 = 0xe;
        temp_v2 = *temp_v8;
        if (temp_v4 < *temp_v8) {
          temp_v2 = temp_v4;
        }
        while (temp_v4 = temp_v2, puVar7 = param_1, FUN_003b11a8(param_1,temp_v6,&temp_v7,temp_v4)
              , puVar7 != (unsigned int *)0x100) {
          temp_v2 = temp_v4;
          if (puVar7 != (unsigned int *)0x0) {
            return puVar7;
          }
        }
        if (temp_v4 < temp_v7) {
          return (unsigned int *)0x43;
        }
      }
      puVar7 = param_1;
      FUN_003b0fd8(param_1,temp_v6,&temp_v7,temp_v4);
      if (*(char *)((int)param_1 + 0x1487) == '\0') {
        return (unsigned int *)0x0;
      }
      if (puVar7 != (unsigned int *)0x0) {
        return puVar7;
      }
      while (puVar7 = param_1, FUN_003b2538(param_1,temp_v6,&temp_v7,temp_v4),
            puVar7 != (unsigned int *)0x101) {
        if (puVar7 != (unsigned int *)0x0) {
          return puVar7;
        }
      }
      if (temp_v4 < temp_v7) {
        return (unsigned int *)0x43;
      }
      temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))();
    }
    else {
      if (temp_v2 >= 0xe) {
        temp_v5 = temp_v6;
        temp_v11 = (temp_v2 + temp_v6) - 0xd;
        do {
          temp_v0 = FUN_001ed7c0(temp_v6,&temp_v13,temp_v14);
          if (temp_v0 != 0) {
            if ((int)uStack_2c >= 0) {
              *puVar10 = 0;
            }
            else {
              uStack_2c = uStack_2c & 0x7fffffff;
              *puVar10 = 1;
            }
            if (temp_v14[0] < 0x10) goto LAB_003b0920;
            *puVar9 = 1;
            temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,temp_v6 - temp_v5);
            goto joined_r0x003b0850;
          }
          if ((char)param_1[0x522] != '\0') {
            temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,temp_v4);
            goto joined_r0x003b087c;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 != temp_v11);
        temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,temp_v6 - temp_v5);
        goto joined_r0x003b087c;
      }
      temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))();
    }
joined_r0x003b0850:
    if (temp_v0 != 0) {
      return (unsigned int *)0x0;
    }
  }
  else {
    if ((char)param_1[0x522] != '\0') {
      *puVar7 = 0x10000;
      temp_v0 = FUN_003b0b84(param_1);
      if (temp_v0 == 0) {
        return (unsigned int *)0x44;
      }
      temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,0);
      if (temp_v0 == 0) {
        return (unsigned int *)0x80;
      }
      if (*(char *)((int)param_1 + 0x1487) != '\0') {
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
    *(unsigned char *)((int)param_1 + 0x1489) = 0;
    temp_v0 = (**(romwright_code **)(*(int *)*puVar6 + 0x18))((int *)*puVar6,0);
joined_r0x003b087c:
    if (temp_v0 != 0) {
      return (unsigned int *)0x2;
    }
  }
  return (unsigned int *)0x80;
}
