/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011dda0` (_code @ 0x11dda0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int, unsigned int);

typedef struct fn_0011dda0_arg0 fn_0011dda0_arg0;
struct fn_0011dda0_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
};

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

extern unsigned char LAB_0011de08; /* 0x11de08 */
extern unsigned char DAT_0055aa64; /* 0x55aa64 */

extern int strInit(int);
extern int FUN_002e9ff4(int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int *FUN_002eca10(fn_0011dda0_arg0 *, unsigned int, unsigned char *);
extern int FUN_002fafd8(unsigned int *, unsigned int);


int FUN_0011dda0(fn_0011dda0_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int *param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [4];
  fn_0011dda0_arg0 *pfStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v4;
  
  pfStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v4 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v3);
  *puVar1 = (unsigned int)&DAT_0055aa64;
  temp_v0 = FUN_002fafd8(puVar1 + 0x20,0);
  temp_v0 = strInit(temp_v0 + 0x78);
  temp_v0 = FUN_002e9ff4(temp_v0 + 0x20);
  *(unsigned int *)(temp_v0 - 0xac) = param_3;
  *(unsigned int *)(temp_v0 - 0xb0) = param_2;
  *(unsigned int *)(temp_v0 - 0xa8) = temp_v4;
  *(unsigned int **)(temp_v0 - 0xa0) = param_6;
  *(unsigned int *)(temp_v0 - 0xa4) = param_5;
  *param_6 = 0;
  temp_v1 = FUN_002ea3c0(temp_v2,0x11dbcd,0,&LAB_0011de08);
  FUN_002ea3d0(temp_v0 - 0x118,temp_v1);
  *(unsigned char *)(temp_v0 - 0xe0) = 1;
  return temp_v0 - 0x118;
}

} /* extern "C" */
