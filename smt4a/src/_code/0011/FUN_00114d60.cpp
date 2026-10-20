/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114d60` (_code @ 0x114d60, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9300(unsigned char [12], unsigned int);
int FUN_002e9318(unsigned char [12]);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(unsigned char [4]);
int FUN_002f32f8(...);
int FUN_002f6be2(unsigned char [12], int *);
int FUN_002f6bf0(int);
int FUN_002fbd0a(int, unsigned int, int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp230; /* 0x230: local_230 */
    unsigned int sp238; /* 0x238: local_238 */
} param_4_stack;

extern unsigned char LAB_00114dec; /* 0x114dec */
extern unsigned char LAB_00114dfc; /* 0x114dfc */
extern unsigned char DAT_00537f3c; /* 0x537f3c */

extern int FUN_002e3390(int);
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
/* Supplied declaration required: FUN_002f32f8. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
extern unsigned int FUN_002fbd00(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fbd0a. */


void FUN_00114d60(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned int temp_v4;
  unsigned char temp_v5 [12];
  
  FUN_002ea2e8(temp_v3);
  temp_v0 = FUN_002f32f8(temp_v3,&LAB_00114dec);
  temp_v0 = FUN_002fbd00(temp_v0,param_2);
  temp_v0 = FUN_002f32f8(temp_v0,&DAT_00537f3c);
  temp_v0 = FUN_002f32f8(temp_v0,"Content-Disposition: form-data; name=\"");
  temp_v0 = FUN_002fbd00(temp_v0,param_3);
  temp_v0 = FUN_002f32f8(temp_v0,&LAB_00114dfc);
  temp_v0 = FUN_002f32f8(temp_v0,&DAT_00537f3c);
  temp_v0 = FUN_002f32f8(temp_v0,&DAT_00537f3c);
  temp_v0 = FUN_002fbd00(temp_v0,param_4);
  FUN_002f32f8(temp_v0,&DAT_00537f3c);
  FUN_002e9300(temp_v5,temp_v4);
  FUN_002f6be2(temp_v5,&temp_v2);
  temp_v1 = FUN_002e3390(temp_v2);
  FUN_002fbd0a(param_1,*(unsigned int *)(param_1 + 4),temp_v2,temp_v1 + temp_v2);
  FUN_002f6bf0(temp_v2);
  FUN_002e9318(temp_v5);
  FUN_002ea3a8(temp_v3);
  return;
}

} /* extern "C" */
