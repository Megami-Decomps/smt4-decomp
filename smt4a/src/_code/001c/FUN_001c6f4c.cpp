/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c6f4c` (_code @ 0x1c6f4c, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bd540(int, int);
int FUN_001bda0c(unsigned int, int, unsigned short [3]);
int rt_memclr(int, int);
int VectorFloatToUnsigned(double, int);

/* stack frame of param_4: 6 slot(s), 12 byte(s) */
typedef struct {
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
    unsigned short sp12; /* 0x12: local_12 */
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp1A; /* 0x1a: local_1a */
    unsigned short sp20; /* 0x20: local_20 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001bd540. */
extern unsigned int FUN_001bd5f8(void);
/* Supplied declaration required: FUN_001bda0c. */
/* Supplied declaration required: rt_memclr. */


unsigned int FUN_001c6f4c(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  unsigned short temp_v5 [3];
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  
  if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
    if (*param_1 != 0) {
      param_4 = param_1[2];
    }
    if ((((*param_1 != 0 && param_4 != 0) && (0.0f <= (float)param_2[2])) &&
        (param_2[2] < 0x3f800001)) && ((0.0f <= (float)param_2[1] && (param_2[1] < 0x3f800001)))) {
      temp_v1 = (unsigned int)(*param_2 * 1000) / 0x1318;
      if (temp_v1 == 0) {
        temp_v1 = 1;
      }
      if ((char)param_2[3] == '\0') {
        temp_v2 = 2;
      }
      else {
        temp_v2 = 4;
      }
      if (temp_v2 * temp_v1 * 0x280 <= param_4) {
        temp_v7 = (unsigned short)temp_v1;
        temp_v6 = (unsigned short)temp_v2;
        temp_v3 = VectorFloatToUnsigned((float)param_2[1] * 128.0f,3);
        temp_v8 = (unsigned short)temp_v3;
        temp_v4 = (float)param_2[2];
        temp_v5[0] = 4;
        if ((int)temp_v4 >= 0x3f733334) {
          temp_v4 = 0.95f;
        }
        temp_v9 = (unsigned short)(int)((1.0f - temp_v4) * 128.0f);
        temp_v10 = (unsigned short)(int)(temp_v4 * 128.0f);
        rt_memclr(*param_1,param_1[2]);
        FUN_001bd540(*param_1,param_1[2]);
        temp_v0 = *(char *)((int)param_1 + 0xd);
        temp_v3 = FUN_001bd5f8();
        FUN_001bda0c(temp_v3,(int)temp_v0,temp_v5);
        return temp_v3;
      }
    }
  }
  return 0;
}

} /* extern "C" */
