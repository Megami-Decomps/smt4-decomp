/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a15b0` (_code @ 0x1a15b0, 0x394 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0044dc20; /* 0x44dc20 */
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_00296cbc(int);
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003b35a8. */


unsigned int FUN_001a15b0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  
  temp_v0 = DAT_0044dc20;
  if ((DAT_0044dc20 != 0) && (temp_v1 = FUN_00296cbc(DAT_0044dc20), temp_v1 != 0)) {
    FUN_002c3ba8(DAT_0044ea00);
    temp_v1 = DAT_0044ea00;
    temp_v2 = FUN_002c5f7c(1,0);
    piVar8 = (int *)(temp_v1 + 0x124c);
    temp_v5 = *piVar8;
    temp_v6 = piVar8[temp_v5 + 2];
    *piVar8 = temp_v5 + 1;
    piVar8[temp_v5 + 3] = temp_v2;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v6 != temp_v2) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = DAT_0044ea00;
    if (((*(int *)(temp_v0 + 0x352c) == 0xc) && (*(int *)(temp_v0 + 0x3534) == 5)) &&
       (*(char *)(temp_v0 + 0x7c6) == '\0')) {
      temp_v2 = *(int *)(temp_v0 + 0x3544);
      if (temp_v2 < 0x10) {
        temp_v2 = temp_v2 * -0x1e;
        if (temp_v2 < -0xf0) {
          temp_v2 = -0xf0;
        }
        temp_v5 = FUN_002c5fa4(6,1,0);
        piVar8 = (int *)(temp_v1 + 0x12ac);
        temp_v6 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v5;
        if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
          (**(romwright_code **)(temp_v1 + 0x12c8))();
          *(unsigned char *)(temp_v1 + 0x12c4) = 0;
        }
        if (-0xf0 < temp_v2) {
          FUN_002bf460(2,0x28,0x113,0,temp_v2,0xf1);
        }
        FUN_002bf460(2,0x28,0x114,0,temp_v2 + 0xf0,0xf1);
        temp_v1 = DAT_0044ea00;
        temp_v2 = FUN_002c5fa4(6,7,0);
        piVar8 = (int *)(temp_v1 + 0x12ac);
        temp_v5 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v2;
        if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
          (**(romwright_code **)(temp_v1 + 0x12c8))();
          *(unsigned char *)(temp_v1 + 0x12c4) = 0;
        }
      }
      if (*(int *)(temp_v0 + 0x3544) >= 9) {
        FUN_002bf710();
        FUN_002bf460(2,0x28,0x115,0,0,0xf2);
        FUN_002bf710();
      }
    }
    temp_v1 = DAT_0044ea00;
    piVar8 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v2 = *piVar8;
    temp_v5 = piVar8[temp_v2 + 2];
    *piVar8 = temp_v2 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != piVar8[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))(piVar8[temp_v2 + 1]);
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = DAT_0044ea00;
    temp_v2 = *(int *)(temp_v0 + 0x352c);
    if (temp_v2 < 9) {
      if (temp_v2 != 0) {
        temp_v2 = FUN_002c5f7c(1,0);
        piVar8 = (int *)(temp_v1 + 0x124c);
        temp_v5 = *piVar8;
        temp_v6 = piVar8[temp_v5 + 2];
        *piVar8 = temp_v5 + 1;
        piVar8[temp_v5 + 3] = temp_v2;
        if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v6 != temp_v2) {
          (**(romwright_code **)(temp_v1 + 0x1268))();
          *(unsigned char *)(temp_v1 + 0x1264) = 0;
        }
        temp_v3 = FUN_002bef7c(temp_v0 + 0x20);
        temp_v4 = FUN_002bef70(temp_v0 + 0x20);
        FUN_003b35a8(temp_v0,temp_v3,temp_v4);
        temp_v0 = DAT_0044ea00;
        piVar8 = (int *)(DAT_0044ea00 + 0x124c);
        temp_v1 = *piVar8;
        temp_v2 = piVar8[temp_v1 + 2];
        *piVar8 = temp_v1 - 1;
        if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar8[temp_v1 + 1]) {
          (**(romwright_code **)(temp_v0 + 0x1268))();
          *(unsigned char *)(temp_v0 + 0x1264) = 0;
        }
      }
      temp_v0 = DAT_0044ea00;
      temp_v1 = FUN_002c5fa4(6,7,0);
      piVar8 = (int *)(temp_v0 + 0x12ac);
      temp_v2 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v1;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      FUN_002c1b64(DAT_0044ea00);
      FUN_002c1abc(DAT_0044ea00);
      return 0;
    }
  }
  return 0;
}
