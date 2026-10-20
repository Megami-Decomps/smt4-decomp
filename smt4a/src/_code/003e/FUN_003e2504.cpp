/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2504` (_code @ 0x3e2504, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013cab8(int, int, int);
int FUN_002e5924(int);
int FUN_003e0cd4(unsigned int *, int);
int FUN_003ed6e8(int);
int FUN_003eebf4(int, int);
int FUN_003f26d4(int);
int FUN_0047f444(int);
int FUN_004aa2e0(unsigned int, int);
int FUN_004d7a70(int, int, unsigned int, int);
int FUN_004d7fe4(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573888; /* 0x573888 */
extern unsigned int DAT_0057388c; /* 0x57388c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */
extern int g_btlEvent; /* 0x573898 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_003e0cd4. */
/* Supplied declaration required: FUN_003ed6e8. */
/* Supplied declaration required: FUN_003eebf4. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_0047f444. */
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004d7a70. */
/* Supplied declaration required: FUN_004d7fe4. */
extern int isEntryUsable(void);


unsigned int * FUN_003e2504(unsigned int *param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_2 + 0x45a0);
  if (param_1[4] != 0) {
    temp_v0 = isEntryUsable();
    if (temp_v0 == 0) {
      if ((*(unsigned int *)(param_2 + 0x45a4) & DAT_0057385c) == 0 && (*puVar3 & DAT_00573858) == 0) {
        FUN_003ed6e8(param_2);
        FUN_003f26d4(param_2);
        temp_v1 = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057387c | DAT_00573894;
        *puVar3 = *puVar3 | DAT_00573878 | DAT_00573890;
        *(unsigned int *)(param_2 + 0x45a4) = temp_v1;
        FUN_004aa2e0(DAT_0057a9c8,0);
      }
      else {
        FUN_003ed6e8(param_2);
        FUN_003f26d4(param_2);
        temp_v1 = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057387c | DAT_00573894;
        *puVar3 = *puVar3 | DAT_00573878 | DAT_00573890;
        *(unsigned int *)(param_2 + 0x45a4) = temp_v1;
        temp_v0 = param_2;
        FUN_003eebf4(param_2,1);
        if ((temp_v0 < 0) && ((*(unsigned int *)(param_2 + 0x110) & 0x20) == 0)) {
          FUN_0047f444(3);
        }
      }
      param_1[4] = 0;
      param_1[3] = 0;
      *param_1 = 0x19;
      FUN_003e0cd4(param_1,param_2);
      return param_1;
    }
  }
  else {
    temp_v0 = g_btlEvent;
    FUN_004d7a70(g_btlEvent,0xb,0xffffffff,0);
    if (temp_v0 != 0) {
      if ((*puVar3 & DAT_00573888) == 0 && (*(unsigned int *)(param_2 + 0x45a4) & DAT_0057388c) == 0) {
        FUN_002e5924(2);
        temp_v1 = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057388c;
        *puVar3 = *puVar3 | DAT_00573888;
        *(unsigned int *)(param_2 + 0x45a4) = temp_v1;
      }
      temp_v0 = FUN_0013def0(0);
      if (temp_v0 == 3) {
        FUN_0013cab8(0,10,0xff);
      }
      temp_v0 = FUN_0013def0(1);
      if (temp_v0 == 3) {
        FUN_0013cab8(1,10,0xff);
      }
      FUN_004d7fe4(g_btlEvent);
    }
    param_1[4] = param_1[4] + 1;
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
