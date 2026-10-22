/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032fe34` (_code @ 0x32fe34, 0xc94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_00262210(...);
int FUN_002963ec(...);
int effectRenderTransformedInstance(...);
int vec2GetYInt(...);
int vec2GetXInt(...);
int FUN_002bf288(...);
int efctSetSpeed(void);
int FUN_003881b0(unsigned int, unsigned int, unsigned int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x433158 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_00262210. */
/* Supplied declaration required: FUN_002963ec. */
extern int aocRunByName(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: effectRenderTransformedInstance. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003881b0. */


void FUN_0032fe34(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 11 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  
  temp_v8 = g_titleScene;
  switch(*(unsigned int *)(param_1 + 0x2f0)) {
  case 0:
  case 1:
  case 8:
    temp_v8 = aocRunByName(g_aocSystem,0x18,*(unsigned int *)(param_1 + 0x2f8),1);
    if (temp_v8 != 0) {
      FUN_003881b0(g_aocSystem,*(unsigned int *)(param_1 + 0x308),*(unsigned int *)(param_1 + 0x2f8),
                   param_1 + 0x20);
      break;
    }
    param_1 = param_1 + 0x20;
    effectRenderTransformedInstance(param_1);
    break;
  case 2:
  case 0x11:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      effectRenderTransformedInstance(param_1 + 0xac);
      temp_v8 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
    }
    effectRenderTransformedInstance(param_1 + 0x20);
    break;
  case 3:
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    effectRenderTransformedInstance(param_1 + 0x20);
    temp_v8 = g_titleScene;
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    param_1 = param_1 + 0xac;
    effectRenderTransformedInstance(param_1);
    break;
  case 4:
    effectRenderTransformedInstance(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v5 = vec2GetXInt(param_1 + 0x20);
      temp_v14 = CONCAT44(temp_v5,in_s0);
      temp_v8 = vec2GetYInt(param_1 + 0x20);
      temp_v6 = 0;
      temp_v15 = 0;
      do {
        temp_v12 = *(float *)(param_1 + temp_v6 * 0x8c + 0xcc);
        temp_v13 = (float)temp_v15;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v13) << 0x1f) |
                ((unsigned int)(temp_v12 == temp_v13) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v13 != temp_v13)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          efctSetSpeed();
          temp_v9 = g_titleScene;
          temp_v3 = packNibblesAndByte(6,1,0);
          piVar11 = (int *)(temp_v9 + 0x12ac);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v3;
          if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v7 != temp_v3) {
            (**(romwright_code **)(temp_v9 + 0x12c8))();
            *(unsigned char *)(temp_v9 + 0x12c4) = 0;
          }
          temp_v9 = FUN_002bf4f8(0x18,temp_v6 + 0x426d);
          temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 8),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002bf288(2,0x18,temp_v6 + 0x4269,(int)(temp_v12 + (float)temp_v14 + temp_v13),
                       *(short *)(temp_v9 + 10) + temp_v8,0xc9);
          temp_v9 = g_titleScene;
          temp_v3 = packNibblesAndByte(6,7,0);
          piVar11 = (int *)(temp_v9 + 0x12ac);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v3;
          if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v7 != temp_v3) {
            (**(romwright_code **)(temp_v9 + 0x12c8))();
            *(unsigned char *)(temp_v9 + 0x12c4) = 0;
          }
          efctSetSpeed();
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      effectRenderTransformedInstance(param_1 + 0xac);
    }
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    effectRenderTransformedInstance(param_1 + 0x20);
    temp_v8 = g_titleScene;
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      effectRenderTransformedInstance(param_1 + 0x138);
    }
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    break;
  case 6:
  case 0xf:
    effectRenderTransformedInstance(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v11 = *(unsigned int *)(param_1 + 0xb0);
    temp_v5 = vec2GetXInt(param_1 + 0x20);
    temp_v14 = CONCAT44(temp_v5,in_s0);
    temp_v5 = vec2GetYInt(param_1 + 0x20);
    efctSetSpeed();
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x18,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (*(romwright_code *)piVar11[7])();
      *(unsigned char *)(piVar11 + 6) = 0;
    }
    efctSetSpeed();
    break;
  case 7:
  case 0x12:
    effectRenderTransformedInstance(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v1 = vec2GetXInt(param_1 + 0x20);
    temp_v2 = vec2GetYInt(param_1 + 0x20);
    FUN_00262210(param_1 + 0xac,0x18,*(int *)(param_1 + 0xb0) - 1);
    FUN_002963ec(param_1 + 0xac,(int)temp_v1,(int)temp_v2);
    temp_v8 = g_titleScene;
    if (*(int *)(param_1 + 0x2f0) == 7) {
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
    }
    param_1 = param_1 + 0xac;
    effectRenderTransformedInstance(param_1);
    break;
  case 9:
  case 0xb:
  case 0xe:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      effectRenderTransformedInstance(param_1 + 0x20);
      temp_v8 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      goto LAB_00330840;
    }
    param_1 = param_1 + 0x20;
    effectRenderTransformedInstance(param_1);
    break;
  case 10:
    effectRenderTransformedInstance(param_1 + 0x20);
    if ((*(char *)(param_1 + 0x2f5) == '\0') ||
       (temp_v4 = *(unsigned int *)(param_1 + 0x2ec),
       temp_v8 = (int)(((long long)(int)temp_v4 * -0x53896e7b + ((unsigned long long)temp_v4 << 0x20)) >> 0x20),
       temp_v8 = temp_v4 + ((temp_v8 >> 7) - (temp_v8 >> 0x1f)) * -0xbe, temp_v8 != 0x15 && temp_v8 != 0x17))
    break;
    efctSetSpeed();
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    effectRenderTransformedInstance(param_1 + 0xac);
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    efctSetSpeed();
    break;
  case 0xc:
  case 0x10:
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    effectRenderTransformedInstance(param_1 + 0x20);
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    effectRenderTransformedInstance(param_1 + 0xac);
    temp_v11 = *(unsigned int *)(param_1 + 0x13c);
    temp_v5 = vec2GetXInt(param_1 + 0x20);
    temp_v14 = CONCAT44(temp_v5,in_s0);
    temp_v5 = vec2GetYInt(param_1 + 0x20);
    efctSetSpeed();
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x18,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
    temp_v8 = g_titleScene;
    temp_v6 = packNibblesAndByte(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (*(romwright_code *)piVar11[7])();
      *(unsigned char *)(piVar11 + 6) = 0;
    }
    efctSetSpeed();
    break;
  case 0xd:
    effectRenderTransformedInstance(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
LAB_00330840:
    temp_v10 = *(unsigned int *)(param_1 + 0xb0);
    temp_v5 = vec2GetXInt(param_1 + 0x20);
    temp_v11 = vec2GetYInt(param_1 + 0x20);
    efctSetSpeed();
    temp_v12 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf288(2,0x18,temp_v10,(int)(temp_v12 + in_s0),temp_v11,0xc9);
    efctSetSpeed();
    break;
  case 0x13:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v11 = *(unsigned int *)(param_1 + 0xb0);
      temp_v5 = vec2GetXInt(param_1 + 0x20);
      temp_v14 = CONCAT44(temp_v5,in_s0);
      temp_v5 = vec2GetYInt(param_1 + 0x20);
      temp_v8 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002bf288(2,0x18,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
      temp_v8 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
    }
    effectRenderTransformedInstance(param_1 + 0x20);
  }
  temp_v8 = g_titleScene;
  temp_v6 = packNibblesAndByte(6,7,0);
  piVar11 = (int *)(temp_v8 + 0x12ac);
  temp_v9 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v6;
  if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
    (**(romwright_code **)(temp_v8 + 0x12c8))();
    *(unsigned char *)(temp_v8 + 0x12c4) = 0;
  }
  return;
}

} /* extern "C" */
