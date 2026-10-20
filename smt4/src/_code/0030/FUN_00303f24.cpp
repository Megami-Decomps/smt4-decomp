/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303f24` (_code @ 0x303f24, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246afc(unsigned short *, int, int, int);
int FUN_00256a50(unsigned short *, unsigned int);
int FUN_00269694(unsigned int, unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00246afc. */
/* Supplied declaration required: FUN_00256a50. */
/* Supplied declaration required: FUN_00269694. */


void FUN_00303f24(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x40);
  puVar3 = (unsigned short *)**(unsigned int **)(param_1 + 0x3c);
  if ((*(unsigned int *)(param_1 + 0x34) <= *(unsigned int *)(temp_v2 + 0x34)) || (*(unsigned int *)(temp_v2 + 0x34) == 0)) {
    temp_v3 = temp_v2;
    FUN_00269694(temp_v2,temp_v2 + 0x24);
    temp_v1 = *(unsigned int *)(param_1 + 0x30);
    DAT_004ea92c = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004ea930 = (float)VectorUnsignedToFloat
                                    ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004ea934 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004ea938 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004ea92c = DAT_004ea92c * 0.003921569f;
    DAT_004ea930 = DAT_004ea930 * 0.003921569f;
    DAT_004ea934 = DAT_004ea934 * 0.003921569f;
    DAT_004ea938 = DAT_004ea938 * 0.003921569f;
    temp_v7 = (float)VectorUnsignedToFloat(temp_v3 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((temp_v3 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorUnsignedToFloat(temp_v3 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorUnsignedToFloat((temp_v3 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_004ea91c = temp_v9 * 0.003921569f * DAT_004ea92c;
    DAT_004ea920 = temp_v8 * 0.003921569f * DAT_004ea930;
    DAT_004ea924 = temp_v6 * 0.003921569f * DAT_004ea934;
    DAT_004ea928 = temp_v7 * 0.003921569f * DAT_004ea938;
    temp_v4 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
    temp_v3 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
    temp_v5 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
    temp_v1 = VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
    *(unsigned int *)(puVar3 + 0x28) =
         (temp_v1 & 0xff) | ((temp_v5 & 0xff) << 8) | ((temp_v3 & 0xff) << 0x10) | (temp_v4 << 0x18);
    if (*(char *)((int)puVar3 + 0x53) != '\0') {
      FUN_00246afc(puVar3,param_1,param_1 + 0x10,param_1 + 0x20);
      if (*(char *)(temp_v2 + 0x3c) == '\0') {
        temp_v0 = *puVar3 & 0xfeff;
      }
      else {
        temp_v0 = *puVar3 | 0x100;
      }
      *puVar3 = temp_v0;
      FUN_00256a50(puVar3,*(unsigned int *)(temp_v2 + 0x28) & 0xffff);
      return;
    }
  }
  return;
}

} /* extern "C" */
