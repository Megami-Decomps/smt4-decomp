/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003276f0` (_code @ 0x3276f0, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162e8c(void);
int FUN_00178b04(int, unsigned char *, int);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_00327864; /* 0x327864 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */

/* Supplied declaration required: FUN_00162e8c. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_003276f0(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_d0, in_d1; 5 native warning(s); review required */
  int *piVar1;
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned long long in_d0;
  unsigned long long in_d1;
  
  FUN_00162e8c();
  temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
  *(unsigned short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 8) = 0;
  *(unsigned short *)(temp_v2 + 4) = 0x18;
  *(unsigned short *)(temp_v2 + 6) = 1;
  *(unsigned int *)(temp_v2 + 0x18) = 0;
  *(unsigned int *)(temp_v2 + 0xce0) = 0;
  *(unsigned short *)(temp_v2 + 10) = 1;
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_00327864,0x3cb);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20) = temp_v2
  ;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)
                ((*(unsigned int *)&s__a_a_00587f08.u1[0]) + *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10) * 8 + 0x20),0);
  temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
  temp_v1 = 0;
  do {
    if (*(char *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v1 * 0x58 + 0xa4) == '\0') goto LAB_003277b0;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  temp_v1 = -1;
LAB_003277b0:
  piVar1 = (int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x10);
  *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xc) = (short)temp_v1;
  temp_v1 = temp_v2 + (short)temp_v1 * 0x58;
  *(int *)(temp_v2 + 0x10) = *piVar1 + 1;
  if (param_2 != 0) {
    *(unsigned char *)(temp_v1 + 0xa4) = 1;
    *(unsigned int *)(temp_v1 + 0xc0) = 2;
    *(unsigned int *)(temp_v1 + 0xa8) = 0xb;
  }
  else {
    *(unsigned char *)(temp_v1 + 0xa4) = 1;
    *(unsigned int *)(temp_v1 + 0xc0) = 0;
    *(unsigned int *)(temp_v1 + 0xa8) = 1;
  }
  *(unsigned int *)(temp_v1 + 0xac) = 0;
  *(int *)(temp_v1 + 0xb0) = (int)in_d0;
  *(int *)(temp_v1 + 0xb4) = (int)((unsigned long long)in_d0 >> 0x20);
  *(int *)(temp_v1 + 0xb8) = (int)in_d1;
  *(int *)(temp_v1 + 0xbc) = (int)((unsigned long long)in_d1 >> 0x20);
  *(unsigned char *)(temp_v1 + 0xc4) = 1;
  *(unsigned short *)(temp_v1 + 0xc6) = 0;
  *(unsigned short *)(temp_v1 + 200) = 4;
  *(int *)(temp_v1 + 0xcc) = -param_1;
  *(unsigned char *)(temp_v1 + 0xd0) = 0;
  *(unsigned int *)(temp_v1 + 0xd4) = 0;
  *(unsigned char *)(temp_v1 + 0xd8) = 0;
  temp_v2 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
  temp_v0 = *(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 10);
  *(int *)(temp_v1 + 0xdc) = (int)temp_v0;
  FUN_0040ace8(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v2 + temp_v0 * 8 + 0x20) + 4));
  return;
}

} /* extern "C" */
