/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003138a4` (_code @ 0x3138a4, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd420(char *, unsigned int, unsigned int);
int memAlloc(...);
int FUN_002c3944(void);
int FUN_00313760(unsigned int *, int, int);
int FUN_0031ce4c(unsigned int *);
int rt_memcpy_w(unsigned int *, int, int);

typedef struct fn_003138a4_arg0 fn_003138a4_arg0;
struct fn_003138a4_arg0 {
    byte field_0x0; /* +0x0 */
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x8];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x6];
    undefined4 field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x3c];
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x90];
    undefined4 field_0xfc; /* +0xfc */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern char *FUN_0024c3d8(fn_003138a4_arg0 *);
extern int FUN_0024c3f8(void);
extern unsigned int asdMdlManagerCreateFromSource(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_00313760. */
/* Supplied declaration required: FUN_0031ce4c. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_003138a4(fn_003138a4_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  char *pcVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = FUN_0024c3f8();
  temp_v2 = *(int *)(temp_v1 + 100);
  if (temp_v2 == 0) {
    temp_v2 = *(int *)(temp_v1 + 0xfc);
  }
  temp_v3 = temp_v2 * *(int *)(temp_v1 + 0x68);
  if (temp_v3 >= 101) {
    temp_v3 = 100;
  }
  puVar4 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0xa8,0x10,1);
  FUN_002c3944();
  puVar4[1] = 0xffffffff;
  *puVar4 = temp_v3;
  puVar4[2] = 0x3f800000;
  rt_memcpy_w(puVar4 + 4,temp_v1,0x44);
  FUN_00313760(puVar4,param_1->field_0xc,temp_v1 + 0x44);
  if ((*(int *)(puVar4[0x27] + 8) != 0) &&
     (pcVar5 = (char *)FUN_0024c3d8(param_1), pcVar5 != (char *)0x0)) {
    if ((param_1->field_0x1c == 3) && (param_1 != (fn_003138a4_arg0 *)0x0)) {
      temp_v4 = param_1->field_0x24;
      if (*pcVar5 == 'C') {
        temp_v0 = pcVar5[1];
        temp_v5 = temp_v0 == 'G';
        if (temp_v5) {
          temp_v0 = pcVar5[2];
        }
        temp_v6 = temp_v5 && temp_v0 == 'F';
        if (temp_v5 && temp_v0 == 'F') {
          temp_v6 = pcVar5[3] == 'X';
        }
        if (temp_v6) {
          temp_v3 = 0x10000;
          memAlloc(0x10000,0x100,0,temp_v4,0x10,1);
          puVar4[0x16] = temp_v3;
          FUN_002bd420(pcVar5,temp_v3,temp_v4);
          temp_v3 = asdMdlManagerCreateFromSource(puVar4[0x16],temp_v4,7);
          puVar4[0x15] = temp_v3;
          *(unsigned int *)
           (*(int *)(*(int *)(*(int *)(*(int *)(temp_v3 + 8) + 0x2c) + 0x220) + 8) + 0x28) = 1;
        }
      }
      FUN_0031ce4c(puVar4);
    }
    *(unsigned short *)(puVar4 + 3) = param_1->field_0x1c;
  }
  return puVar4;
}

} /* extern "C" */
