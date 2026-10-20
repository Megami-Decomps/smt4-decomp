/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117a70` (_code @ 0x117a70, 0x318 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b99b8(void);
int FUN_002ba1e0(int, int, int, int, int, int, int, double);
int FUN_002c1b64(int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0043e278; /* 0x43e278 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b99b8. */
/* Supplied declaration required: FUN_002ba1e0. */
extern int FUN_002bff10(unsigned int);
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_00117a70(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  
  temp_v3 = DAT_0043e278;
  temp_v9 = 400.0f;
  temp_v0 = FUN_002bff10(0);
  temp_v1 = *(int *)(temp_v3 + 0xe90);
  if (((temp_v0 == 0) && (temp_v1 >= 2)) && (temp_v1 = temp_v1 - 1, temp_v1 < 1)) {
    temp_v1 = 1;
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 2.0f;
    FUN_002b99b8();
    temp_v9 = temp_v9 / temp_v8;
  }
  else if (temp_v1 != 0) {
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 2.0f;
    FUN_002b99b8();
    temp_v9 = temp_v9 / temp_v8;
  }
  temp_v0 = *(int *)(temp_v3 + 0xfdc);
  temp_v7 = *(char *)(temp_v3 + 0xecc) != '\0';
  if (temp_v7) {
    *(unsigned int *)(temp_v0 + 0x3c) = 1;
    *(unsigned int *)(temp_v0 + 0x40) = 1;
  }
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (!temp_v7) {
    *(unsigned int *)(temp_v0 + 0x3c) = 0;
    *(unsigned int *)(temp_v0 + 0x40) = 0;
  }
  temp_v1 = DAT_0044ea00;
  temp_v9 = temp_v9 / temp_v8;
  temp_v2 = FUN_002c5d80(1,0);
  piVar8 = (int *)(temp_v1 + 0x124c);
  temp_v4 = *piVar8;
  temp_v5 = piVar8[temp_v4 + 2];
  *piVar8 = temp_v4 + 1;
  piVar8[temp_v4 + 3] = temp_v2;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != temp_v2) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  temp_v1 = DAT_0044ea00;
  temp_v2 = *(int *)(temp_v3 + 0xec8);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 == 2) {
        temp_v2 = FUN_002c5da8(6,1,2);
        piVar8 = (int *)(temp_v1 + 0x12ac);
        temp_v4 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v2;
        if (!(*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v4 == temp_v2)) {
          (**(romwright_code **)(temp_v1 + 0x12c8))();
          *(unsigned char *)(temp_v1 + 0x12c4) = 0;
        }
      }
    }
    else {
      temp_v2 = FUN_002c5da8(6,1,0);
      piVar8 = (int *)(temp_v1 + 0x12ac);
      temp_v4 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v2;
      if (!(*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v4 == temp_v2)) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
  }
  else {
    temp_v2 = FUN_002c5da8(6,7,0);
    piVar8 = (int *)(temp_v1 + 0x12ac);
    temp_v4 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v2;
    if (!(*(char *)(temp_v1 + 0x12c4) == '\0' && temp_v4 == temp_v2)) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
  }
  FUN_002c1b64(DAT_0044ea00,temp_v0);
  temp_v6 = *(unsigned int *)(temp_v3 + 0xec0);
  FUN_002ba1e0(temp_v6,temp_v6,temp_v6,temp_v6,0,0,0,temp_v9);
  temp_v0 = DAT_0044ea00;
  if (*(int *)(temp_v3 + 0xec8) != 0) {
    temp_v3 = FUN_002c5da8(6,7,0);
    piVar8 = (int *)(temp_v0 + 0x12ac);
    temp_v1 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v3;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v1 != temp_v3) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
  }
  temp_v3 = DAT_0044ea00;
  piVar8 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar8;
  temp_v1 = piVar8[temp_v0 + 2];
  *piVar8 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != piVar8[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  return;
}

} /* extern "C" */
