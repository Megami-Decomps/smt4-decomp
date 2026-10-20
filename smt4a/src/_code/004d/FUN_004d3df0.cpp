/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d3df0` (_code @ 0x4d3df0, 0x83c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_00317464(...);
int FUN_0031f0f4(...);
int FUN_0032c450(...);
int FUN_00340edc(...);
int FUN_004c3c84(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_00571618; /* 0x571618 */
extern unsigned int DAT_0057161c; /* 0x57161c */
extern unsigned int DAT_00571628; /* 0x571628 */
extern unsigned int DAT_0057162c; /* 0x57162c */
extern unsigned int DAT_00571630; /* 0x571630 */
extern unsigned int DAT_00571634; /* 0x571634 */

/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int *FUN_00317450(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00317464. */
extern unsigned int FUN_0031cfd0(unsigned short);
/* Supplied declaration required: FUN_0031f0f4. */
extern int FUN_0032c430(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0032c450. */
extern unsigned int *FUN_00340ec8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00340edc. */
extern unsigned int FUN_003874fc(unsigned int);
extern unsigned int *FUN_003e83b4(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_004c3a98(int, unsigned int);
/* Supplied declaration required: FUN_004c3c84. */


void FUN_004d3df0(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  
  temp_v0 = FUN_003874fc(*(unsigned int *)(param_1 + 0x10));
  puVar2 = (unsigned int *)FUN_003e83b4(param_2,*(unsigned int *)(param_1 + 0x1c),1);
  puVar7 = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar7 = puVar2 + 0x96;
  }
  switch(temp_v0) {
  case 0:
    puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_1 + 0x1c) = *puVar6;
    temp_v0 = FUN_0014aa78();
    puVar2 = (unsigned int *)FUN_003e83b4(temp_v0,*(unsigned int *)(param_1 + 0x1c),1);
    if (puVar2 != (unsigned int *)0x0) {
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),1,puVar2[0x96],1,9999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),2,puVar2[0x97],1,9999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),3,puVar2[0x98],0,9999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),4,puVar2[0x99],1,9999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),5,(int)(short)puVar2[0x9a],1,999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),6,(int)*(short *)((int)puVar2 + 0x26a),1,999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),7,(int)(short)puVar2[0x9b],1,999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),8,(int)*(short *)((int)puVar2 + 0x26e),1,999,0);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),9,(int)(short)puVar2[0x9c],1,999,0);
      FUN_0032c450(*(unsigned int *)(param_1 + 0x10),10,
                   (DAT_00571628 & *puVar2) != 0 || (puVar2[1] & DAT_0057162c) != 0);
      FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0xb,
                   (*puVar2 & DAT_00571630) != 0 || (puVar2[1] & DAT_00571634) != 0);
      if (!((*puVar2 & DAT_00571618) == 0 && (DAT_0057161c & puVar2[1]) == 0)) {
        temp_v0 = FUN_0031cfd0(*(unsigned short *)((int)puVar2 + 0x166));
        temp_v3 = *(unsigned int *)(param_1 + 0x10);
      }
      else {
        temp_v3 = *(unsigned int *)(param_1 + 0x10);
        temp_v0 = 0;
      }
      FUN_00317464(temp_v3,0xc,temp_v0,0,100,0);
      if ((-1 < (short)puVar2[2]) &&
         ((*puVar2 & DAT_00571618) != 0 || (puVar2[1] & DAT_0057161c) != 0)) {
        FUN_0014aa78();
        FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xd,0xffffffce,0x32);
        FUN_00340edc(*(unsigned int *)(param_1 + 0x10),0xe,0xffffffce,0x32);
      }
      temp_v0 = FUN_004c3a98((int)(short)puVar2[2],7);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x10,temp_v0,0xfffffffd,3,0);
      temp_v0 = FUN_004c3a98((int)(short)puVar2[2],8);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x11,temp_v0,0xfffffffd,3,0);
      temp_v0 = FUN_004c3a98((int)(short)puVar2[2],10);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x12,temp_v0,0xfffffffd,3,0);
      temp_v0 = FUN_004c3a98((int)(short)puVar2[2],9);
      FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x13,temp_v0,0xfffffffd,3,0);
    }
    break;
  case 1:
    if (puVar7 != (unsigned int *)0x0) {
      puVar3 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v1 = *puVar3;
      *puVar7 = temp_v1;
      if (puVar2[0xfe] != 0) {
        *(short *)(puVar2[0xfe] + 0x2a) = (short)temp_v1;
      }
      if (puVar2[0xff] != 0) {
        *(short *)(puVar2[0xff] + 0x2a) = (short)*puVar7;
      }
      if (puVar2[0x100] != 0) {
        *(short *)(puVar2[0x100] + 0x2a) = (short)*puVar7;
      }
      return;
    }
    break;
  case 2:
    if (puVar7 != (unsigned int *)0x0) {
      puVar2 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      puVar7[1] = *puVar2;
      return;
    }
    break;
  case 3:
    if (puVar7 != (unsigned int *)0x0) {
      puVar3 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v1 = *puVar3;
      puVar7[2] = temp_v1;
      if (puVar2[0xfe] != 0) {
        *(short *)(puVar2[0xfe] + 0x2c) = (short)temp_v1;
      }
      if (puVar2[0xff] != 0) {
        *(short *)(puVar2[0xff] + 0x2c) = (short)puVar7[2];
      }
      if (puVar2[0x100] != 0) {
        *(short *)(puVar2[0x100] + 0x2c) = (short)puVar7[2];
      }
      return;
    }
    break;
  case 4:
    if (puVar7 != (unsigned int *)0x0) {
      puVar2 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      puVar7[3] = *puVar2;
      return;
    }
    break;
  case 5:
    if (puVar7 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)(puVar7 + 4) = (short)*puVar6;
      return;
    }
    break;
  case 6:
    if (puVar7 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)((int)puVar7 + 0x12) = (short)*puVar6;
      return;
    }
    break;
  case 7:
    if (puVar7 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)(puVar7 + 5) = (short)*puVar6;
      return;
    }
    break;
  case 8:
    if (puVar7 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)((int)puVar7 + 0x16) = (short)*puVar6;
      return;
    }
    break;
  case 9:
    if (puVar7 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(short *)(puVar7 + 6) = (short)*puVar6;
      return;
    }
    break;
  case 10:
    if (puVar2 != (unsigned int *)0x0) {
      temp_v2 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v1 = DAT_0057162c;
      if (temp_v2 != 0) {
        temp_v1 = DAT_00571628 | *puVar2;
        puVar2[1] = DAT_0057162c | puVar2[1];
        *puVar2 = temp_v1;
        return;
      }
      *puVar2 = *puVar2 & ~DAT_00571628;
      temp_v1 = puVar2[1] & ~temp_v1;
      puVar2[1] = temp_v1;
      return;
    }
    break;
  case 0xb:
    if (puVar2 != (unsigned int *)0x0) {
      temp_v2 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v1 = DAT_00571634;
      if (temp_v2 == 0) {
        temp_v1 = ~DAT_00571634;
        *puVar2 = *puVar2 & ~DAT_00571630;
        puVar2[1] = puVar2[1] & temp_v1;
        return;
      }
      *puVar2 = DAT_00571630 | *puVar2;
      temp_v1 = puVar2[1] | temp_v1;
      puVar2[1] = temp_v1;
      return;
    }
    break;
  case 0xc:
    if ((puVar2 != (unsigned int *)0x0) &&
       ((puVar2[1] & DAT_0057161c) != 0 || (DAT_00571618 & *puVar2) != 0)) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      FUN_0031f0f4(*(unsigned short *)((int)puVar2 + 0x166),*puVar6);
      return;
    }
    break;
  case 0xd:
    if (((puVar2 != (unsigned int *)0x0) && (-1 < (short)puVar2[2])) &&
       ((puVar2[1] & DAT_0057161c) != 0 || (*puVar2 & DAT_00571618) != 0)) {
      temp_v2 = FUN_0014aa78();
      temp_v1 = puVar2[2];
      temp_v2 = *(int *)(temp_v2 + 0x1ed4);
      puVar6 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(unsigned int *)(temp_v2 + (short)temp_v1 * 0x1d0 + 0x1b0) = *puVar6;
      return;
    }
    break;
  case 0xe:
    if (((puVar2 != (unsigned int *)0x0) && (-1 < (short)puVar2[2])) &&
       ((DAT_0057161c & puVar2[1]) != 0 || (*puVar2 & DAT_00571618) != 0)) {
      temp_v2 = FUN_0014aa78();
      temp_v1 = puVar2[2];
      temp_v2 = *(int *)(temp_v2 + 0x1ed4);
      puVar6 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10),temp_v0);
      *(unsigned int *)(temp_v2 + (short)temp_v1 * 0x1d0 + 0x1b4) = *puVar6;
      return;
    }
    break;
  case 0xf:
    if (puVar2 != (unsigned int *)0x0) {
      puVar7 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      puVar2[0x57] = *puVar7;
      return;
    }
    break;
  case 0x10:
    if (puVar2 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      FUN_004c3c84((int)*(short *)((int)puVar2 + 0x6e),7,*puVar6);
      return;
    }
    break;
  case 0x11:
    if (puVar2 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      FUN_004c3c84((int)*(short *)((int)puVar2 + 0x6e),8,*puVar6);
      return;
    }
    break;
  case 0x12:
    if (puVar2 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      FUN_004c3c84((int)*(short *)((int)puVar2 + 0x6e),10,*puVar6);
      return;
    }
    break;
  case 0x13:
    if (puVar2 != (unsigned int *)0x0) {
      puVar6 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
      temp_v0 = *puVar6;
      FUN_004c3c84((int)*(short *)((int)puVar2 + 0x6e),9,temp_v0);
      FUN_004c3c84((int)*(short *)((int)puVar2 + 0x6e),0xb,temp_v0);
      return;
    }
  }
  return;
}

} /* extern "C" */
