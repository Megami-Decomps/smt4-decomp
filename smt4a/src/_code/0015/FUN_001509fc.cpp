/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001509fc` (_code @ 0x1509fc, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(int, int);
int FUN_0019e3d0(int, int, int, int, int, int, int, double);
int FUN_001a9698(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int g_frameTex; /* 0x57f65c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001546e8(unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a9698. */


void FUN_001509fc(void)

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
  
  temp_v3 = g_frameTex;
  temp_v9 = 400.0f;
  temp_v0 = FUN_001546e8(0);
  temp_v1 = *(int *)(temp_v3 + 0xfa8);
  if (((temp_v0 == 0) && (temp_v1 >= 2)) && (temp_v1 = temp_v1 - 1, temp_v1 < 1)) {
    temp_v1 = 1;
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 2.0f;
    FUN_001a9698();
    temp_v9 = temp_v9 / temp_v8;
  }
  else if (temp_v1 != 0) {
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 2.0f;
    FUN_001a9698();
    temp_v9 = temp_v9 / temp_v8;
  }
  temp_v0 = *(int *)(temp_v3 + 0x1490);
  temp_v7 = *(char *)(temp_v3 + 0xfe4) != '\0';
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
  temp_v1 = g_renderCtx;
  temp_v9 = temp_v9 / temp_v8;
  temp_v2 = FUN_001692ac(1,0);
  piVar8 = (int *)(temp_v1 + 0x1258);
  temp_v4 = *piVar8;
  temp_v5 = piVar8[temp_v4 + 2];
  *piVar8 = temp_v4 + 1;
  piVar8[temp_v4 + 3] = temp_v2;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != temp_v2) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  temp_v1 = g_renderCtx;
  temp_v2 = *(int *)(temp_v3 + 0xfe0);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 == 2) {
        temp_v2 = packNibblesAndByte(6,1,2);
        piVar8 = (int *)(temp_v1 + 0x12b8);
        temp_v4 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v2;
        if (!(*(char *)(temp_v1 + 0x12d0) == '\0' && temp_v4 == temp_v2)) {
          (**(romwright_code **)(temp_v1 + 0x12d4))();
          *(unsigned char *)(temp_v1 + 0x12d0) = 0;
        }
      }
    }
    else {
      temp_v2 = packNibblesAndByte(6,1,0);
      piVar8 = (int *)(temp_v1 + 0x12b8);
      temp_v4 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v2;
      if (!(*(char *)(temp_v1 + 0x12d0) == '\0' && temp_v4 == temp_v2)) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
    }
  }
  else {
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar8 = (int *)(temp_v1 + 0x12b8);
    temp_v4 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v2;
    if (!(*(char *)(temp_v1 + 0x12d0) == '\0' && temp_v4 == temp_v2)) {
      (**(romwright_code **)(temp_v1 + 0x12d4))();
      *(unsigned char *)(temp_v1 + 0x12d0) = 0;
    }
  }
  FUN_0016c4b8(g_renderCtx,temp_v0);
  temp_v6 = *(unsigned int *)(temp_v3 + 0xfd8);
  FUN_0019e3d0(temp_v6,temp_v6,temp_v6,temp_v6,0,0,0,temp_v9);
  temp_v0 = g_renderCtx;
  if (*(int *)(temp_v3 + 0xfe0) != 0) {
    temp_v3 = packNibblesAndByte(6,7,0);
    piVar8 = (int *)(temp_v0 + 0x12b8);
    temp_v1 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v3;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v1 != temp_v3) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
  }
  temp_v3 = g_renderCtx;
  piVar8 = (int *)(g_renderCtx + 0x1258);
  temp_v0 = *piVar8;
  temp_v1 = piVar8[temp_v0 + 2];
  *piVar8 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar8[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
