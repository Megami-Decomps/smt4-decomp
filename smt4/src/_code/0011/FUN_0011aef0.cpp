/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011aef0` (_code @ 0x11aef0, 0x274 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b64b8(void);
int FUN_002b659c(int, int, int, int);
int FUN_002b75ec(...);
int FUN_002ba12c(int);
int FUN_002bf288(...);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_infoWin; /* 0x43e128 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002b64b8. */
/* Supplied declaration required: FUN_002b659c. */
/* Supplied declaration required: FUN_002b75ec. */
/* Supplied declaration required: FUN_002ba12c. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


char FUN_0011aef0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned char temp_v6;
  float temp_v7;
  
  temp_v0 = g_infoWin;
  temp_v6 = *(int *)(g_infoWin + 8) != 0;
  temp_v1 = '\0';
  if (temp_v6) {
    temp_v1 = *(char *)(g_infoWin + 0x20);
  }
  if (temp_v6 && temp_v1 != '\0') {
    FUN_002c39a4(g_titleScene);
    temp_v3 = g_titleScene;
    temp_v2 = FUN_002c5d80(1,0);
    piVar7 = (int *)(temp_v3 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = vec2GetXInt(temp_v0 + 0x44);
    temp_v7 = 0.27f;
    FUN_002ba12c(g_titleScene);
    temp_v3 = temp_v3 + (int)temp_v7;
    temp_v2 = vec2GetYInt(temp_v0 + 0x44);
    FUN_002bf288(2,0xe,0x87,temp_v3,temp_v2,0x15);
    FUN_002bf288(2,0xe,0x88,temp_v3,temp_v2,0x15);
    if (*(char *)(temp_v0 + 0x21) != '\0') {
      temp_v4 = FUN_002bf4f8(0xe,0x87);
      FUN_002b659c(*(short *)(temp_v4 + 8) + temp_v3,*(short *)(temp_v4 + 10) + temp_v2,
                   (int)**(short **)(temp_v4 + 0xc),(int)(*(short **)(temp_v4 + 0xc))[1]);
      temp_v4 = FUN_002bf4f8(0xe,0x89);
      if (*(char *)(temp_v0 + 0x23) != '\0') {
        FUN_002b75ec(*(unsigned int *)(temp_v0 + 0x1b8),*(short *)(temp_v4 + 8) + temp_v3,
                     *(short *)(temp_v4 + 10) + temp_v2,0xc9,6,0);
      }
      else {
        FUN_002b75ec(*(unsigned int *)(temp_v0 + 0x1b8),
                     (int)*(short *)(temp_v4 + 8) + *(int *)(temp_v0 + 0x18) + temp_v3,
                     *(short *)(temp_v4 + 10) + temp_v2,0xc9,6,0);
        if (*(char *)(temp_v0 + 0x22) != '\0') {
          FUN_002b75ec(*(unsigned int *)(temp_v0 + 0x1b8),
                       (int)*(short *)(temp_v4 + 8) + *(int *)(temp_v0 + 0x1c) + temp_v3,
                       *(short *)(temp_v4 + 10) + temp_v2,0xc9,6,0);
        }
      }
      FUN_002b64b8();
    }
    FUN_002bf288(2,0xe,0x86,temp_v3,temp_v2,0x1f);
    FUN_002bf288(2,0xe,0x102,temp_v3,temp_v2,0x1f);
    temp_v0 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v3 = *piVar7;
    temp_v2 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    temp_v1 = '\0';
  }
  return temp_v1;
}

} /* extern "C" */
