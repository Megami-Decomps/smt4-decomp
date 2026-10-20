#include "romwright_types.h"

extern "C" {

int FUN_00299370(int);
int FUN_002c4938(unsigned short *, int);
int FUN_003c1b18(unsigned short *, int, int);
int FUN_003c1ef4(int);
int strncpy(unsigned short *, unsigned int, int);

typedef struct fn_00333ef8_arg0 fn_00333ef8_arg0;
struct fn_00333ef8_arg0 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined2 field_0x4; /* +0x4 */
    undefined2 field_0x6; /* +0x6 */
    undefined2 field_0x8; /* +0x8 */
    undefined2 field_0xa; /* +0xa */
    undefined2 field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
    ushort field_0x1e; /* +0x1e */
    unsigned char pad_0x20[0xa];
    undefined2 field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x2f];
    undefined1 field_0x5d; /* +0x5d */
    unsigned char pad_0x5e[0x16];
    undefined2 field_0x74; /* +0x74 */
    undefined1 field_0x76; /* +0x76 */
};

/* Supplied declaration required: FUN_00299370. */
extern unsigned short *FUN_002b63ac(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_003c1b18. */
/* Supplied declaration required: FUN_003c1ef4. */


void FUN_00333ef8(fn_00333ef8_arg0 *param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)FUN_002b63ac();
  FUN_002c4938(puVar1,0x8c);
  *(char *)(puVar1 + 0x3b) = (char)(int)param_1;
  puVar1[0x3a] = 0;
  strncpy(puVar1 + 0x26,param_2,0x12);
  *(unsigned char *)((int)puVar1 + 0x5d) = 0;
  FUN_003c1ef4(0);
  if ((int)param_1 > 1) {
    FUN_003c1b18(puVar1,(int)(signed char)((int)param_1 - 1),1);
  }
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  puVar1[4] = param_3[4];
  puVar1[5] = param_3[5];
  puVar1[6] = param_3[6];
  FUN_00299370(0);
  puVar1[0x15] = puVar1[0xe];
  puVar1[0x16] = puVar1[0xf];
  return;
}

} /* extern "C" */
