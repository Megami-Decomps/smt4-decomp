/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418960` (_code @ 0x418960, 0x2cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001835b4(...);
int FUN_001879d0(unsigned int);
int FUN_003d3020(int, int, int);
int VectorSignedToFloat(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_003d3020. */


void FUN_00418960(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned long long temp_v6;
  
  temp_v5 = 0.7f;
  FUN_001879d0(g_renderCtx);
  temp_v6 = (unsigned long long)(unsigned int)(int)temp_v5;
  temp_v4 = 0;
  do {
    temp_v3 = param_1 + temp_v4 * 0x10;
    temp_v0 = *(char *)(temp_v3 + 0x13);
    if (temp_v0 != '\0') {
      temp_v1 = (int)*(char *)(temp_v3 + 0xf);
      if (temp_v1 == 0) {
        temp_v0 = *(char *)(temp_v3 + 0x10);
      }
      if (temp_v1 != 0 || temp_v0 != '\0') {
        VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_003d3020(0x41,temp_v1,(int)*(char *)(temp_v3 + 0x10));
      }
      if (*(char *)(temp_v3 + 0xc) == '\0') {
        temp_v1 = 3;
      }
      else {
        switch(*(unsigned char *)(temp_v3 + 0xd)) {
        case 0:
        case 5:
          if (*(char *)(temp_v3 + 0xe) == '\0') {
            temp_v1 = 0;
            break;
          }
          temp_v1 = 1;
          break;
        case 1:
          if (*(char *)(temp_v3 + 0x12) == '\0') {
            temp_v1 = 4;
          }
          else {
            temp_v1 = 8;
          }
          break;
        case 2:
          if (*(char *)(temp_v3 + 0x11) == '\0') {
            temp_v1 = 2;
          }
          else {
            temp_v1 = 7;
          }
          break;
        case 3:
          temp_v1 = 5;
          break;
        case 4:
          if (*(char *)(temp_v3 + 0x12) == '\0') {
            temp_v1 = 6;
          }
          else {
            temp_v1 = 9;
          }
          break;
        default:
          temp_v1 = 0;
        }
      }
      temp_v2 = 0x33;
                    /* WARNING: Switch table taken from the stored dispatch table */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(temp_v1) {
      case 1:
        temp_v2 = 0x34;
        break;
      case 2:
        temp_v2 = 0x71;
        if (0 < *(int *)(param_1 + 0x54)) {
          temp_v2 = 0x72;
        }
        break;
      case 3:
        temp_v2 = 0x73;
        if (0 < *(int *)(param_1 + 0x54)) {
          temp_v2 = 0x74;
        }
        break;
      case 4:
      case 5:
      case 6:
        temp_v2 = 0x75;
        if (0 < *(int *)(param_1 + 0x54)) {
          temp_v2 = 0x76;
        }
        break;
      case 7:
        temp_v2 = 0x7a;
        if (0 < *(int *)(param_1 + 0x54)) {
          temp_v2 = 0x7b;
        }
        break;
      case 8:
        temp_v2 = 0x7c;
        if (0 < *(int *)(param_1 + 0x54)) {
          temp_v2 = 0x7d;
        }
      }
      temp_v5 = (float)VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001835b4(2,0xc,temp_v2,(int)(*(float *)(temp_v3 + 4) + temp_v5),(int)*(float *)(temp_v3 + 8),0x42)
      ;
      if (temp_v1 == 4 || temp_v1 == 8) {
        temp_v5 = (float)VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,0xc,0x77,(int)(*(float *)(temp_v3 + 4) + temp_v5),(int)*(float *)(temp_v3 + 8),0x43
                    );
      }
      if (temp_v1 != 5) {
        if (temp_v1 == 6 || temp_v1 == 9) {
          temp_v5 = (float)VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001835b4(2,0xc,0x79,(int)(*(float *)(temp_v3 + 4) + temp_v5),(int)*(float *)(temp_v3 + 8),
                       0x43);
        }
      }
      else {
        temp_v5 = (float)VectorSignedToFloat((int)temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,0xc,0x78,(int)(*(float *)(temp_v3 + 4) + temp_v5),(int)*(float *)(temp_v3 + 8),0x43
                    );
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 5) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
