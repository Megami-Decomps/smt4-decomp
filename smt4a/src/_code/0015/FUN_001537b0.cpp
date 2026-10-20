/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001537b0` (_code @ 0x1537b0, 0x4a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(...);
int FUN_0019e3d0(int, int, int, int, int, int, int, double);
int FUN_001a9698(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_0057f65c; /* 0x57f65c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001546e8(unsigned int);
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a9698. */


void FUN_001537b0(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v0 = DAT_0057f65c;
  temp_v7 = 400.0f;
  temp_v8 = temp_v7;
  temp_v1 = FUN_001546e8(0);
  temp_v6 = g_renderCtx;
  temp_v5 = *(int *)(temp_v0 + 0xfa8);
  if (((temp_v1 == 0) && (temp_v5 >= 2)) && (temp_v5 = temp_v5 - 1, temp_v5 < 1)) {
    temp_v5 = 1;
  }
  temp_v1 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v6 + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v6 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v6 + 0x1274))();
    *(unsigned char *)(temp_v6 + 0x1270) = 0;
  }
  temp_v10 = 2.0f;
  temp_v9 = 0;
  if ((*(unsigned int *)(temp_v0 + 0xfe8) & 0xff) != 0) {
    temp_v6 = *(int *)(temp_v0 + 0x149c);
    temp_v11 = temp_v10;
    if (temp_v5 != 0) {
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001a9698();
      temp_v7 = temp_v7 / temp_v10;
    }
    *(unsigned int *)(temp_v6 + 0x3c) = 1;
    VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v6 + 0x40) = 1;
    temp_v1 = g_renderCtx;
    temp_v7 = temp_v7 / temp_v10;
    temp_v10 = temp_v11;
    temp_v5 = FUN_00169294(6,1,0);
    piVar6 = (int *)(temp_v1 + 0x12b8);
    temp_v2 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v5;
    if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v2 != temp_v5) {
      (**(romwright_code **)(temp_v1 + 0x12d4))();
      *(unsigned char *)(temp_v1 + 0x12d0) = 0;
    }
    FUN_0016c4b8(g_renderCtx,temp_v6);
    temp_v4 = *(unsigned int *)(temp_v0 + 0xfe8);
    FUN_0019e3d0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v9,temp_v9,temp_v9,temp_v7);
  }
  if ((*(unsigned int *)(temp_v0 + 0xfec) & 0xff) != 0) {
    temp_v6 = *(int *)(temp_v0 + 0x1490);
    *(unsigned int *)(temp_v6 + 0x3c) = 0;
    *(unsigned int *)(temp_v6 + 0x40) = 0;
    VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v8 / temp_v7;
    FUN_0016c4b8(g_renderCtx);
    temp_v6 = g_renderCtx;
    temp_v1 = FUN_00169294(6,7,0);
    piVar6 = (int *)(temp_v6 + 0x12b8);
    temp_v5 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v1;
    if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v6 + 0x12d4))();
      *(unsigned char *)(temp_v6 + 0x12d0) = 0;
    }
    temp_v4 = *(unsigned int *)(temp_v0 + 0xfec);
    FUN_0019e3d0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v9,temp_v9,temp_v9,temp_v7);
  }
  temp_v6 = g_renderCtx;
  if ((*(unsigned int *)(temp_v0 + 0xff0) & 0xff) != 0) {
    temp_v1 = FUN_00169294(6,1,0);
    piVar6 = (int *)(temp_v6 + 0x12b8);
    temp_v5 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v1;
    if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v6 + 0x12d4))();
      *(unsigned char *)(temp_v6 + 0x12d0) = 0;
    }
    temp_v6 = *(int *)(temp_v0 + 0x1498);
    FUN_001a9698();
    *(unsigned int *)(temp_v6 + 0x3c) = 1;
    *(unsigned int *)(temp_v6 + 0x40) = 1;
    VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (temp_v8 / temp_v10) / temp_v7;
    FUN_0016c4b8(g_renderCtx,temp_v6);
    temp_v4 = *(unsigned int *)(temp_v0 + 0xff0);
    FUN_0019e3d0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v9,temp_v9,temp_v9,temp_v7);
  }
  temp_v0 = g_renderCtx;
  temp_v6 = FUN_00169294(6,7,0);
  piVar6 = (int *)(temp_v0 + 0x12b8);
  temp_v1 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v6;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v1 != temp_v6) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v6 = *piVar6;
  temp_v1 = piVar6[temp_v6 + 2];
  *piVar6 = temp_v6 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar6[temp_v6 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
