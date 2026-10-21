/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aaebc` (_code @ 0x4aaebc, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00336b64(int, unsigned short *);
int FUN_0036d318(unsigned int, unsigned char [304]);
int randomGetUpperSixBits(unsigned char *, unsigned int);

/* stack frame of param_7: 12 slot(s), 37 byte(s) */
typedef struct {
    unsigned char sp153; /* 0x153: local_153 */
    unsigned int sp157; /* 0x157: local_157 */
    unsigned int sp15B; /* 0x15b: local_15b */
    unsigned int sp15F; /* 0x15f: local_15f */
    unsigned int sp163; /* 0x163: local_163 */
    unsigned int sp167; /* 0x167: local_167 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned short sp17A; /* 0x17a: local_17a */
    unsigned short sp17C; /* 0x17c: local_17c */
    unsigned short sp17E; /* 0x17e: local_17e */
    unsigned short sp180; /* 0x180: local_180 */
} param_7_stack;

extern unsigned char g_btlUi; /* 0x57a9b8 */

/* Supplied declaration required: FUN_00336b64. */
/* Supplied declaration required: FUN_0036d318. */
/* Supplied declaration required: randomGetUpperSixBits. */


void FUN_004aaebc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned short param_5,unsigned short param_6,unsigned int *param_7)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14 [304];
  
  temp_v0 = (*(int *)((unsigned char *)&g_btlUi + 0x10));
  temp_v3 = (unsigned short)param_2;
  temp_v5 = param_5;
  temp_v6 = param_6;
  temp_v4 = param_4;
  temp_v7 = param_3;
  if (param_7 != (unsigned int *)0x0) {
    temp_v8 = *param_7;
    temp_v9 = param_7[1];
    temp_v10 = param_7[2];
    temp_v11 = param_7[3];
    temp_v12 = param_7[4];
    temp_v13 = *(unsigned char *)(param_7 + 5);
  }
  else {
    FUN_0036d318(param_2,temp_v14);
    temp_v1 = 0;
    do {
      puVar2 = temp_v14;
      randomGetUpperSixBits(puVar2,temp_v1 & 0xff);
      temp_v2 = temp_v1 + 1;
      *(char *)((int)&temp_v8 + temp_v1) = (char)(int)puVar2;
      temp_v1 = temp_v2;
    } while ((int)temp_v2 < 8);
  }
  FUN_00336b64(temp_v0 + 0x28c4,&temp_v3);
  return;
}

} /* extern "C" */
