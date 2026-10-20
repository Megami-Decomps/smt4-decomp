/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ef10` (_code @ 0x21ef10, 0x374 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024f5d4(...);
int FUN_0025090c(int, int, int, unsigned char [144]);
int FUN_0025b750(void);
int FUN_002be5a4(int, unsigned int, unsigned char [144]);
int FUN_002bf288(int, int, int, int, int, int);
int FUN_002c0944(unsigned int);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);
int FUN_002f472c(int, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0024f594(int);
/* Supplied declaration required: FUN_0024f5d4. */
/* Supplied declaration required: FUN_0025090c. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
extern unsigned long long FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f472c. */


unsigned int FUN_0021ef10(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned long long temp_v8;
  long long temp_v9;
  unsigned long long temp_v10;
  unsigned char temp_v11 [144];
  
  temp_v4 = DAT_0044ea00;
  temp_v8 = 0;
  if (*(int *)(DAT_00447a78 + 0x30) != 0) {
    temp_v6 = *(unsigned int *)(DAT_00447a78 + 0x34);
    temp_v1 = FUN_002c5d80(5,1);
    piVar7 = (int *)(temp_v4 + 0x124c);
    temp_v2 = *piVar7;
    temp_v3 = piVar7[temp_v2 + 2];
    *piVar7 = temp_v2 + 1;
    piVar7[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x1268))(temp_v1);
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
    FUN_002c39a4(DAT_0044ea00);
    FUN_002c1b64(DAT_0044ea00,0);
    FUN_002c0944(temp_v6);
    FUN_0025b750();
    temp_v4 = DAT_0044ea00;
    piVar7 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar7;
    temp_v2 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x1268))();
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
  }
  temp_v1 = DAT_00447a78;
  temp_v10 = FUN_002bf4f8(0xe,0x10b);
  temp_v4 = (int)((unsigned long long)temp_v10 >> 0x20);
  temp_v8 = temp_v8 & 0xffffffff;
  temp_v2 = (int)*(short *)(temp_v1 + 0xccb8);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 != 2) {
        if (temp_v2 == 3) {
          temp_v0 = *(short *)(temp_v1 + 0xccba) + 1;
          temp_v2 = (int)temp_v0;
          *(short *)(temp_v1 + 0xccba) = temp_v0;
          if (temp_v2 >= 0x32) {
            temp_v4 = (temp_v2 - 0x32) * 0x28;
            temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v8 = (unsigned long long)(unsigned int)-temp_v7;
          }
          if (temp_v2 >= 0x3d) {
            *(unsigned short *)(temp_v1 + 0xccb8) = 0;
            *(unsigned short *)(temp_v1 + 0xccba) = 0;
            return 0;
          }
        }
      }
      else {
        temp_v2 = *(unsigned short *)(temp_v1 + 0xccba) + 1;
        *(short *)(temp_v1 + 0xccba) = (short)temp_v2;
      }
    }
    else {
      temp_v0 = *(short *)(temp_v1 + 0xccba) + 1;
      temp_v2 = (int)temp_v0;
      *(short *)(temp_v1 + 0xccba) = temp_v0;
      temp_v4 = temp_v2 * 0x28;
      temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (unsigned long long)(unsigned int)(temp_v7 + -400.0f);
      if (temp_v2 >= 10) {
        temp_v2 = 2;
        *(unsigned short *)(temp_v1 + 0xccb8) = 2;
        *(unsigned short *)(temp_v1 + 0xccba) = 0;
      }
    }
    temp_v3 = 0;
    FUN_0024f5d4(temp_v2,temp_v4);
    temp_v7 = (float)temp_v8;
    if (0 < temp_v2) {
      do {
        temp_v4 = FUN_0024f594(temp_v3);
        temp_v7 = (float)temp_v8;
        temp_v4 = (int)*(short *)(temp_v4 + 0x20);
        if (temp_v4 == -1) {
          return 0;
        }
        if (temp_v4 == *(short *)(temp_v1 + 0xccbc)) break;
        temp_v3 = temp_v3 + 1;
        FUN_0024f5d4();
        temp_v7 = (float)temp_v8;
      } while (temp_v3 < temp_v4);
    }
    temp_v4 = (int)*(short *)(temp_v1 + 0xccbc);
    if ((temp_v4 == 0x18) || (FUN_002f472c(temp_v4,(int)*(short *)(temp_v1 + 0xccbe)), temp_v4 != 0)) {
      temp_v4 = DAT_0044ea00;
      temp_v2 = FUN_002c5d80(1,0);
      piVar7 = (int *)(temp_v4 + 0x124c);
      temp_v3 = *piVar7;
      temp_v5 = piVar7[temp_v3 + 2];
      *piVar7 = temp_v3 + 1;
      piVar7[temp_v3 + 3] = temp_v2;
      if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v5 != temp_v2) {
        (**(romwright_code **)(temp_v4 + 0x1268))();
        *(unsigned char *)(temp_v4 + 0x1264) = 0;
      }
      temp_v9 = (unsigned long long)(unsigned int)(int)temp_v7 << 0x20;
      temp_v4 = 0x107;
      do {
        FUN_002bf288(2,0xe,temp_v4,(int)((unsigned long long)temp_v9 >> 0x20),0,0xb);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x10b);
      FUN_0025090c((int)*(short *)(temp_v1 + 0xccbc),(int)*(short *)(temp_v1 + 0xccbe),0,temp_v11);
      VectorSignedToFloat((int)*(short *)((int)temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)((int)temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,0xffffffff,temp_v11);
      temp_v4 = DAT_0044ea00;
      piVar7 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v1 = *piVar7;
      temp_v2 = piVar7[temp_v1 + 2];
      *piVar7 = temp_v1 - 1;
      if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v4 + 0x1268))();
        *(unsigned char *)(temp_v4 + 0x1264) = 0;
      }
    }
  }
  return 0;
}

} /* extern "C" */
