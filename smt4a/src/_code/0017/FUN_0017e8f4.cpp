/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017e8f4` (_code @ 0x17e8f4, 0x5d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned int *DAT_005b4400; /* 0x5b4400 */
extern unsigned int DAT_005b4404; /* 0x5b4404 */
extern unsigned int DAT_005b4408; /* 0x5b4408 */
extern unsigned int DAT_005b440c; /* 0x5b440c */
extern unsigned int DAT_005b4410; /* 0x5b4410 */
extern unsigned int DAT_005b4414; /* 0x5b4414 */
extern unsigned int DAT_005b4418; /* 0x5b4418 */
extern unsigned int DAT_005b441c; /* 0x5b441c */
extern unsigned int DAT_005b4420; /* 0x5b4420 */
extern unsigned int DAT_005b4424; /* 0x5b4424 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_0017e8f4(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int *puStack_2c;
  
  puVar1 = DAT_005b4400;
  temp_v5 = (float)VectorSignedToFloat(DAT_005b4400[10],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * 0.5f;
  temp_v0 = 0;
  if (romwright_fabs_4(temp_v5) != 0.0f) {
    temp_v0 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40;
  }
  temp_v4 = -1 < (int)temp_v0;
  if (temp_v4) {
    temp_v0 = (((unsigned int)temp_v5 & 0x7fffff) >> 7) | (temp_v0 << 0x10);
  }
  if (temp_v4) {
    temp_v0 = temp_v0 | (((unsigned int)temp_v5 >> 0x1f) << 0x17);
  }
  else {
    temp_v0 = ((unsigned int)temp_v5 >> 0x1f) << 0x17;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = temp_v0;
    DAT_005b40e0[1] = 0xf0041;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  puStack_2c = DAT_005b40e0;
  temp_v5 = (float)VectorSignedToFloat(puVar1[0xb],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = temp_v5 * 0.5f;
  temp_v1 = 0;
  if (romwright_fabs_4(temp_v5) != 0.0f) {
    temp_v1 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40;
  }
  if (temp_v1 >= 0) {
    temp_v0 = (((unsigned int)temp_v5 & 0x7fffff) >> 7) | (temp_v1 << 0x10) | (((unsigned int)temp_v5 >> 0x1f) << 0x17);
  }
  else {
    temp_v0 = ((unsigned int)temp_v5 >> 0x1f) << 0x17;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = temp_v0;
    DAT_005b40e0[1] = 0xf0043;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v6 = puVar1[10];
  if (temp_v6 != 0) {
    puStack_2c = (unsigned int *)puVar1[0xb];
  }
  if (temp_v6 != 0 && puStack_2c != (unsigned int *)0x0) {
    temp_v1 = 0;
    do {
      temp_v0 = (&temp_v6)[temp_v1];
      if (temp_v0 == 0x280) {
        (&temp_v6)[temp_v1] = 0x36999999;
      }
      else if ((int)temp_v0 < 0x281) {
        if (temp_v0 == 400) {
          (&temp_v6)[temp_v1] = 0x3747ae14;
        }
        else {
          if ((int)temp_v0 < 0x191) {
            if (temp_v0 == 0xf0) {
              temp_v0 = 0x38111111;
            }
            else if (temp_v0 == 0x140) {
              temp_v0 = 0x37999999;
            }
            else {
LAB_0017ea98:
              temp_v5 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v5 = 2.0f / temp_v5;
              if (romwright_fabs_4(temp_v5) != 0.0f) {
                temp_v2 = ((unsigned int)romwright_fabs_4(temp_v5) >> 0x17) - 0x40;
                if (-1 >= temp_v2) {
                  temp_v0 = ((unsigned int)temp_v5 >> 0x1f) << 0x1e;
                }
                else {
                  temp_v0 = ((unsigned int)temp_v5 & 0x7fffff) | (temp_v2 << 0x17) |
                          (((unsigned int)temp_v5 >> 0x1f) << 0x1e);
                }
              }
              else {
                temp_v2 = 0;
                temp_v0 = ((unsigned int)temp_v5 & 0x7fffff) | (temp_v2 << 0x17) | (((unsigned int)temp_v5 >> 0x1f) << 0x1e)
                ;
              }
              (&temp_v6)[temp_v1] = temp_v0;
              temp_v0 = temp_v0 << 1;
            }
          }
          else if (temp_v0 == 0x1e0) {
            temp_v0 = 0x37111111;
          }
          else {
            if (temp_v0 != 600) goto LAB_0017ea98;
            temp_v0 = 0x36b4e81b;
          }
          (&temp_v6)[temp_v1] = temp_v0;
        }
      }
      else if (temp_v0 == 800) {
        (&temp_v6)[temp_v1] = 0x3647ae14;
      }
      else {
        if (temp_v0 == 0x400) {
          temp_v0 = 0x36000000;
        }
        else if (temp_v0 == 0x4b0) {
          temp_v0 = 0x35b4e81b;
        }
        else {
          if (temp_v0 != 0x500) goto LAB_0017ea98;
          temp_v0 = 0x35999999;
        }
        (&temp_v6)[temp_v1] = temp_v0;
      }
      if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
        *DAT_005b40e0 = (&temp_v6)[temp_v1];
        DAT_005b40e0[1] = (temp_v1 * 2 + 0x42U) | 0xf0000;
        DAT_005b40e0 = DAT_005b40e0 + 2;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 2);
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    temp_v0 = puVar1[8];
    temp_v3 = puVar1[9];
    DAT_005b40e0[1] = 0xf0068;
    *DAT_005b40e0 = temp_v0 | (temp_v3 << 0x10);
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b4408;
    DAT_005b40e0[1] = 0x30107;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  temp_v0 = DAT_005b4424;
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    DAT_005b40e0[1] = 0x80126;
    *DAT_005b40e0 = temp_v0;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (*(char *)((int)puVar1 + 0x64f) != '\0') {
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = 1;
      DAT_005b40e0[1] = 0x10062;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      DAT_005b40e0[1] = 0x10118;
      *DAT_005b40e0 = 1;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
  }
  else {
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = 0;
      DAT_005b40e0[1] = 0x10062;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = 0;
      DAT_005b40e0[1] = 0x10118;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b441c;
    DAT_005b40e0[1] = 0x10061;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b4420;
    DAT_005b40e0[1] = 0x7006a;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b4414;
    DAT_005b40e0[1] = 0xf0102;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if (*(char *)((int)puVar1 + 0x64d) != '\0') {
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      *DAT_005b40e0 = 0;
      DAT_005b40e0[1] = 0x20100;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
  }
  else {
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      temp_v0 = DAT_005b4404;
      if ((char)puVar1[0x193] == '\0') {
        temp_v0 = 0x1010000;
      }
      *DAT_005b40e0 = temp_v0;
      DAT_005b40e0[1] = 0xf0101;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      DAT_005b40e0[1] = 0x20100;
      *DAT_005b40e0 = 0x100;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
  }
  if ((char)puVar1[0xf] != '\0') {
    if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
      if ((puVar1[0xe] == 0x404) == (puVar1[0xd] == 0x901)) {
        temp_v0 = 1;
      }
      else {
        temp_v0 = 2;
      }
      *DAT_005b40e0 = temp_v0;
      DAT_005b40e0[1] = 0xf0040;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
  }
  else if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = 0;
    DAT_005b40e0[1] = 0xf0040;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = (unsigned int)(*(char *)((int)puVar1 + 0x693) != '\0');
    DAT_005b40e0[1] = 0x1011b;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b440c;
    DAT_005b40e0[1] = 0xf0105;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b4410;
    DAT_005b40e0[1] = 0xf0106;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  if ((unsigned int)DAT_005b40e0 < DAT_005b40e4) {
    *DAT_005b40e0 = DAT_005b4418;
    DAT_005b40e0[1] = 0xf0103;
    DAT_005b40e0 = DAT_005b40e0 + 2;
  }
  *puVar1 = *puVar1 | 0x100;
  return;
}

} /* extern "C" */
