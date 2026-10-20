/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a16c0` (_code @ 0x1a16c0, 0x394 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf538(void);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c39a4(int);
int FUN_003b3388(int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0044dc20; /* 0x44dc20 */
extern int g_titleScene; /* 0x44ea00 */

extern int FUN_00296a18(int);
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003b3388. */


unsigned int FUN_001a16c0(void)

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
  if ((DAT_0044dc20 != 0) && (temp_v1 = FUN_00296a18(DAT_0044dc20), temp_v1 != 0)) {
    FUN_002c39a4(g_titleScene);
    temp_v1 = g_titleScene;
    temp_v2 = FUN_002c5d80(1,0);
    piVar8 = (int *)(temp_v1 + 0x124c);
    temp_v5 = *piVar8;
    temp_v6 = piVar8[temp_v5 + 2];
    *piVar8 = temp_v5 + 1;
    piVar8[temp_v5 + 3] = temp_v2;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v6 != temp_v2) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = g_titleScene;
    if (((*(int *)(temp_v0 + 0x352c) == 0xc) && (*(int *)(temp_v0 + 0x3534) == 5)) &&
       (*(char *)(temp_v0 + 0x7c6) == '\0')) {
      temp_v2 = *(int *)(temp_v0 + 0x3544);
      if (temp_v2 < 0x10) {
        temp_v2 = temp_v2 * -0x1e;
        if (temp_v2 < -0xf0) {
          temp_v2 = -0xf0;
        }
        temp_v5 = FUN_002c5da8(6,1,0);
        piVar8 = (int *)(temp_v1 + 0x12ac);
        temp_v6 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v5;
        if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
          (**(romwright_code **)(temp_v1 + 0x12c8))();
          *(unsigned char *)(temp_v1 + 0x12c4) = 0;
        }
        if (-0xf0 < temp_v2) {
          FUN_002bf288(2,0x28,0x113,0,temp_v2,0xf1);
        }
        FUN_002bf288(2,0x28,0x114,0,temp_v2 + 0xf0,0xf1);
        temp_v1 = g_titleScene;
        temp_v2 = FUN_002c5da8(6,7,0);
        piVar8 = (int *)(temp_v1 + 0x12ac);
        temp_v5 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v2;
        if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
          (**(romwright_code **)(temp_v1 + 0x12c8))();
          *(unsigned char *)(temp_v1 + 0x12c4) = 0;
        }
      }
      if (*(int *)(temp_v0 + 0x3544) >= 9) {
        FUN_002bf538();
        FUN_002bf288(2,0x28,0x115,0,0,0xf2);
        FUN_002bf538();
      }
    }
    temp_v1 = g_titleScene;
    piVar8 = (int *)(g_titleScene + 0x124c);
    temp_v2 = *piVar8;
    temp_v5 = piVar8[temp_v2 + 2];
    *piVar8 = temp_v2 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != piVar8[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))(piVar8[temp_v2 + 1]);
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = g_titleScene;
    temp_v2 = *(int *)(temp_v0 + 0x352c);
    if (temp_v2 < 9) {
      if (temp_v2 != 0) {
        temp_v2 = FUN_002c5d80(1,0);
        piVar8 = (int *)(temp_v1 + 0x124c);
        temp_v5 = *piVar8;
        temp_v6 = piVar8[temp_v5 + 2];
        *piVar8 = temp_v5 + 1;
        piVar8[temp_v5 + 3] = temp_v2;
        if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v6 != temp_v2) {
          (**(romwright_code **)(temp_v1 + 0x1268))();
          *(unsigned char *)(temp_v1 + 0x1264) = 0;
        }
        temp_v3 = FUN_002beda4(temp_v0 + 0x20);
        temp_v4 = FUN_002bed98(temp_v0 + 0x20);
        FUN_003b3388(temp_v0,temp_v3,temp_v4);
        temp_v0 = g_titleScene;
        piVar8 = (int *)(g_titleScene + 0x124c);
        temp_v1 = *piVar8;
        temp_v2 = piVar8[temp_v1 + 2];
        *piVar8 = temp_v1 - 1;
        if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar8[temp_v1 + 1]) {
          (**(romwright_code **)(temp_v0 + 0x1268))();
          *(unsigned char *)(temp_v0 + 0x1264) = 0;
        }
      }
      temp_v0 = g_titleScene;
      temp_v1 = FUN_002c5da8(6,7,0);
      piVar8 = (int *)(temp_v0 + 0x12ac);
      temp_v2 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v1;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      FUN_002c198c(g_titleScene);
      FUN_002c18e4(g_titleScene);
      return 0;
    }
  }
  return 0;
}

} /* extern "C" */
