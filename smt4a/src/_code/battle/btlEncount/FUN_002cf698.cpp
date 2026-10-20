/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf698` (_code @ 0x2cf698, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_0019a5a0(...);
int FUN_002e5924(...);
int FUN_00408184(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_002ba964(...); /* 0x2ba964 */
extern unsigned char LAB_002cf800; /* 0x2cf800 */
extern int FUN_0033f9a0(...); /* 0x33f9a0 */
extern unsigned int *DAT_00573828; /* 0x573828 */
extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573888; /* 0x573888 */
extern unsigned int DAT_0057388c; /* 0x57388c */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_00408184. */


void FUN_002cf698(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  
  puVar2 = &LAB_002cf800;
  FUN_0015155c(&LAB_002cf800,4,0,0,FUN_002ba964,FUN_0033f9a0,param_1,*param_1);
  param_1[2] = (unsigned int)puVar2;
  puVar3 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x14,1);
  DAT_00573828 = puVar3;
  *puVar3 = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  if (puVar3[1] != 0) {
    FUN_0019a5a0();
    puVar3[1] = 0;
  }
  temp_v2 = 0x32;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v2 - 1;
    param_1[temp_v1 * 8 + 0x10c] = 0xffffffff;
    *(unsigned char *)((int)param_1 + temp_v1 * 0x20 + 0x436) = 0xff;
    *(unsigned short *)(param_1 + temp_v1 * 8 + 0x10d) = 0xffff;
    temp_v1 = temp_v1 + 1;
  } while (temp_v2 != 0);
  FUN_00408184(2,1);
  if (((*(char *)((int)param_1 + 0x45bb) == '\0') && (-1 < (int)param_1[0x3b])) &&
     ((param_1[0x43] & 0x2000000) == 0)) {
    puVar6 = param_1 + 0x1168;
    if ((DAT_00573858 & *puVar6) == 0 && (DAT_0057385c & param_1[0x1169]) == 0) {
      if ((*puVar6 & DAT_00573888) == 0 && (param_1[0x1169] & DAT_0057388c) == 0) {
        FUN_002e5924(2);
        temp_v0 = DAT_00573888;
        param_1[0x1169] = param_1[0x1169] | DAT_0057388c;
        *puVar6 = temp_v0 | *puVar6;
      }
    }
  }
  return;
}

} /* extern "C" */
