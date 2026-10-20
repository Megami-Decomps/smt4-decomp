/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004324d4` (_code @ 0x4324d4, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b0f4(unsigned int *);
int FUN_0010ccf0(int *, unsigned int, int);
int FUN_0010cd04(int *, unsigned int, int);
int FUN_00111560(void);
int FUN_0011169c(int, unsigned int *, int, int, int);
int FUN_002f5940(void);

typedef struct fn_004324d4_arg0 fn_004324d4_arg0;
struct fn_004324d4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined1 field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    void *field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x1];
    undefined2 field_0x26; /* +0x26 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char DAT_00558cc4; /* 0x558cc4 */
extern unsigned char g_systemTable; /* 0x59935c */

extern unsigned int FUN_00104fe0(int, unsigned char);
/* Supplied declaration required: FUN_0010b0f4. */
/* Supplied declaration required: FUN_0010ccf0. */
/* Supplied declaration required: FUN_0010cd04. */
/* Supplied declaration required: FUN_00111560. */
/* Supplied declaration required: FUN_0011169c. */
extern unsigned int *FUN_00115544(void);
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002eac34(unsigned char);
/* Supplied declaration required: FUN_002f5940. */


unsigned int *
FUN_004324d4(fn_004324d4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  puVar1 = (unsigned int *)FUN_00115544();
  *(char *)(puVar1 + 9) = (char)param_2;
  *puVar1 = (unsigned int)&DAT_00558cc4;
  puVar1[8] = param_3;
  puVar1[5] = 0;
  FUN_002f5940();
  FUN_0010b0f4(puVar1);
  temp_v0 = FUN_002e760a(0x128);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00104fe0(temp_v0,*(unsigned char *)(puVar1 + 9));
  }
  puVar1[3] = temp_v1;
  temp_v1 = FUN_002eac34(*(unsigned char *)(puVar1 + 9));
  FUN_0010ccf0(&uStack_24,temp_v1,30000);
  temp_v1 = FUN_002eac34(*(unsigned char *)(puVar1 + 9));
  FUN_0010cd04(&uStack_24,temp_v1,5000);
  if (0.0f < (*(float *)((unsigned char *)&g_systemTable + 0x14))) {
    (**(romwright_code **)(*(int *)(puVar1[8] + 0x88) + 8))();
    *(float *)(puVar1[8] + 0xa0) = (*(float *)((unsigned char *)&g_systemTable + 0x14));
  }
  temp_v0 = FUN_002e760a(0x78);
  if (temp_v0 != 0) {
    FUN_0011169c(temp_v0,puVar1,2,1,0);
  }
  puVar1[6] = temp_v0;
  FUN_00111560();
  *(unsigned char *)(puVar1 + 7) = 0;
  puVar1[4] = 0;
  *(unsigned short *)((int)puVar1 + 0x26) = 0;
  return puVar1;
}

} /* extern "C" */
