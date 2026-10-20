/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef048` (_code @ 0x2ef048, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00272e64(void);
int FUN_00352bc4(int, int);
int FUN_003857c8(int);
int FUN_003fd76c(unsigned int, float *);
int FUN_003fdb18(unsigned int);
int FUN_0040aa6c(void);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_002ef21c; /* 0x2ef21c */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_006105dc; /* 0x6105dc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00272e64. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_003857c8. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_002ef048(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v2 = FUN_00162e8c();
  if (*(char *)(temp_v2 + 0xe09) != '\0') {
    temp_v0 = *(char *)(temp_v2 + 0xe0a);
    temp_v1 = *(char *)(temp_v2 + 0xe0b);
    FUN_003857c8((int)*(float *)(temp_v2 + 0x15c4));
    temp_v7 = 0.0f;
    temp_v5 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe00),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe01),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00352bc4((int)*(char *)(temp_v2 + 0xe00),(int)*(char *)(temp_v2 + 0xe01));
    FUN_00272e64();
    temp_v0 = *(char *)(temp_v2 + 0x166c);
    temp_v6 = temp_v5;
    if (((temp_v0 != '\0') && (temp_v6 = 90.0f, temp_v0 != '@' && temp_v0 != 'B')) &&
       (temp_v6 = temp_v5, temp_v0 == 'A' || temp_v0 == 'C')) {
      temp_v6 = temp_v7;
    }
    temp_v8 = (float)VectorSignedToFloat((short)*(char *)(temp_v2 + 0xe0a) * 700 + 0x15e,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat((short)*(char *)(temp_v2 + 0xe0b) * 700 + 0x15e,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v6 * 0.017453292f;
    temp_v9 = temp_v7;
    FUN_001bc124();
    FUN_001bbf0c();
    temp_v5 = temp_v6;
    FUN_001bc124();
    temp_v7 = 330.0f;
    temp_v8 = temp_v8 - temp_v6 * 330.0f;
    FUN_001bbf0c();
    temp_v10 = temp_v10 - temp_v5 * temp_v7;
    temp_v3 = 0x20;
    FUN_00178b04(0x20,&LAB_002ef21c,0x12e1);
    temp_v2 = 0;
    if (temp_v3 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    DAT_006105dc = temp_v2;
    FUN_0040aa6c();
    FUN_0040aad4(DAT_006105dc,0);
    temp_v4 = *(unsigned int *)(DAT_006105dc + 4);
    FUN_0040ace8(DAT_0056fcc0,temp_v4);
    FUN_003fd76c(temp_v4,&temp_v8);
    FUN_003fdb18(temp_v4);
  }
  return;
}

} /* extern "C" */
