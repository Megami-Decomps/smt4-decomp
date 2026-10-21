/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247c74` (_code @ 0x247c74, 0x27c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e70c(...);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int efctSetSpeed(void);
int VectorSignedToFloat(int, int);

typedef struct fn_00247c74_arg0 fn_00247c74_arg0;
struct fn_00247c74_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x10];
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0026e70c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_00247c74(fn_00247c74_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  int temp_v4;
  
  FUN_002bf380(2,0x2d,2,0,0,param_2 + 1);
  temp_v3 = param_2 + 2;
  if (param_1->field_0x4 != 1) {
    FUN_002bf288(2,0x2d,0x11,0,0,temp_v3);
    temp_v4 = 0;
  }
  else {
    temp_v4 = (int)*(char *)(param_1->field_0x18 + 0x43dc48);
    FUN_002bf288(2,0x2d,0x11,0,temp_v4,temp_v3);
    temp_v0 = param_1->field_0x1c;
    if (temp_v0 < 0x14) {
      VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0026e70c();
    }
    else {
      VectorSignedToFloat(temp_v0 - 0x14,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0026e70c(temp_v0 - 0x14);
    }
    temp_v0 = g_titleScene;
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar5 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    efctSetSpeed();
    FUN_002bf288(2,0x2d,0x12,0,temp_v4,param_2 + 3);
    efctSetSpeed();
    temp_v0 = g_titleScene;
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar5 = (int *)(temp_v0 + 0x12ac);
    temp_v2 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
  }
  FUN_002bf288(2,0x2d,0x13,0,temp_v4,param_2 + 4);
  FUN_002bf288(2,0x2d,0x14,0,0,param_2 + 5);
  FUN_002bf288(2,0x2d,0xd,0,0,temp_v3);
  FUN_002bf288(2,0x2d,0xe,0,0,temp_v3);
  FUN_002bf288(2,0x2d,0xf,0,0,temp_v3);
  FUN_002bf288(2,0x2d,0x10,0,0,temp_v3);
  return;
}

} /* extern "C" */
