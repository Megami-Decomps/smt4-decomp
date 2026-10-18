/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a478` (_code @ 0x38a478, 0x5fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char DAT_003ff700; /* 0x3ff700 */
extern float DAT_00433180; /* 0x433180 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bed98(unsigned int *);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern unsigned int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0038a478(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar11;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  int temp_v11;
  int aiStack_78 [21];
  
  puVar2 = (unsigned int *)FUN_002c08f0();
  if ((*puVar2 & 0x10) != 0) {
    temp_v10 = DAT_00433180;
    FUN_002ba12c(DAT_0044ea00);
    temp_v4 = DAT_0044ea00;
    temp_v11 = (int)temp_v10;
    temp_v1 = FUN_002c5d80(1,0);
    piVar11 = (int *)(temp_v4 + 0x124c);
    temp_v2 = *piVar11;
    temp_v3 = piVar11[temp_v2 + 2];
    *piVar11 = temp_v2 + 1;
    piVar11[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x1268))(temp_v1);
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
    FUN_002bf538();
    FUN_002bf288(2,0xe,0x106,0,0,6);
    FUN_002bf538();
    temp_v4 = DAT_0044ea00;
    temp_v1 = FUN_002c5da8(6,1,0);
    piVar11 = (int *)(temp_v4 + 0x12ac);
    temp_v2 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v1;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x12c8))(temp_v1);
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
    VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(puVar2 + 0x156);
    temp_v4 = DAT_0044ea00;
    temp_v1 = FUN_002c5da8(6,7,0);
    piVar11 = (int *)(temp_v4 + 0x12ac);
    temp_v2 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v1;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x12c8))(temp_v1);
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
    VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(puVar2 + 0x110);
    temp_v4 = DAT_0044ea00;
    piVar11 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar11;
    temp_v2 = piVar11[temp_v1 + 2];
    *piVar11 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar11[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x1268))(piVar11[temp_v1 + 1]);
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
    if (((*(char *)((int)puVar2 + 0x4ca) != '\0') && ((char)puVar2[0x132] != '\0')) &&
       ((*puVar2 & 0x20) != 0)) {
      temp_v4 = FUN_002beda4();
      temp_v4 = temp_v4 + temp_v11;
      temp_v2 = FUN_002bed98(puVar2 + 0x133);
      temp_v1 = DAT_0044ea00;
      temp_v3 = FUN_002c5d80(1,0);
      piVar11 = (int *)(temp_v1 + 0x124c);
      temp_v7 = *piVar11;
      temp_v8 = piVar11[temp_v7 + 2];
      *piVar11 = temp_v7 + 1;
      piVar11[temp_v7 + 3] = temp_v3;
      if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v8 != temp_v3) {
        (**(romwright_code **)(temp_v1 + 0x1268))();
        *(unsigned char *)(temp_v1 + 0x1264) = 0;
      }
      if ((int)puVar2[4] < 5) {
        temp_v1 = FUN_002bf4f8(0xe,0xe1);
      }
      else {
        temp_v1 = FUN_002bf4f8(0xe,0xe0);
      }
      if ((char)puVar2[0x105] != '\x01') {
        if ((char)puVar2[0x105] == '\x02') {
          rt_memcpy_w(aiStack_78,&DAT_003ff700,0x48);
          temp_v2 = 0;
          temp_v6 = puVar2[0x106] / 5;
          temp_v9 = temp_v6 - (temp_v6 & 0xfffffff8);
          aiStack_78[0x12] = (int)(temp_v9 + 7) % 8;
          temp_v6 = (temp_v6 + 4) % 8;
          do {
            temp_v3 = 0;
            temp_v4 = temp_v2 * 3;
            do {
              temp_v5 = temp_v4 + temp_v3;
              temp_v8 = (int)*(short *)(temp_v1 + 8) + aiStack_78[temp_v5 * 2];
              temp_v7 = aiStack_78[temp_v5 * 2 + 1] + (int)*(short *)(temp_v1 + 10);
              if (temp_v9 == temp_v5 || temp_v6 == temp_v5) {
                FUN_002bf288(2,0xe,0x155,temp_v8,temp_v7,0x15);
              }
              else {
                temp_v0 = (int)*(short *)(temp_v1 + 10);
                if (aiStack_78[0x12] != temp_v5) {
                  temp_v0 = (temp_v6 + 7) % 8;
                }
                if (!(aiStack_78[0x12] != temp_v5 && temp_v0 != temp_v5)) {
                  FUN_002bf288(2,0xe,0x156,temp_v8,temp_v7,0x15);
                }
                else {
                  FUN_002bf288(2,0xe,0x154,temp_v8,temp_v7,0x15);
                }
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 3);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 3);
        }
      }
      else {
        FUN_002bf288(2,0xe,0xdf,*(short *)(temp_v1 + 8) + temp_v4,*(short *)(temp_v1 + 10) + temp_v2,0x13);
        FUN_002bf288(2,0xe,0xde,*(short *)(temp_v1 + 8) + temp_v4,*(short *)(temp_v1 + 10) + temp_v2,0x15);
      }
      temp_v6 = puVar2[4];
      if ((int)temp_v6 < 5) {
        temp_v1 = 0x6b;
      }
      else {
        temp_v1 = 0x69;
      }
      if ((*puVar2 & 0x40) != 0) {
        temp_v4 = 0;
        if (0 < (int)temp_v6) {
          do {
            temp_v2 = FUN_002bf4f8(0xe,temp_v1 + temp_v4);
            FUN_002b75ec(puVar2[0x107],*(short *)(temp_v2 + 8) + temp_v11,(int)*(short *)(temp_v2 + 10),
                         0x13,6,temp_v4);
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < (int)puVar2[4]);
        }
      }
      else {
        if (0 < (int)temp_v6) {
          temp_v4 = 0x320202ff;
        }
        temp_v2 = 0;
        if (0 < (int)temp_v6) {
          do {
            temp_v3 = FUN_002bf4f8(0xe,temp_v1 + temp_v2);
            temp_v7 = *(short *)(temp_v3 + 8) + temp_v11;
            VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002be5a4(3,temp_v4,puVar2 + temp_v2 * 0x20 + 5,temp_v7);
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)puVar2[4]);
        }
      }
      temp_v4 = DAT_0044ea00;
      piVar11 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v1 = *piVar11;
      temp_v2 = piVar11[temp_v1 + 2];
      *piVar11 = temp_v1 - 1;
      if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar11[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x1268))();
        *(unsigned char *)(temp_v4 + 0x1264) = 0;
      }
      FUN_002bed3c();
      FUN_002bf538();
      FUN_002c198c(DAT_0044ea00);
      FUN_002c18e4(DAT_0044ea00);
    }
  }
  return 0;
}
