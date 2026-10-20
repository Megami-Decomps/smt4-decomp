/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d1af8` (_code @ 0x4d1af8, 0x624 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00280328(unsigned int, int, int);
int FUN_002ea508(unsigned int, unsigned char *);
int FUN_00317464(...);
int FUN_00317508(unsigned int, int);
int FUN_0032c1bc(void);
int FUN_0032c450(...);
int FUN_003592dc(unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_004d1efc; /* 0x4d1efc */
extern unsigned int DAT_00571640; /* 0x571640 */
extern unsigned int DAT_00571644; /* 0x571644 */
extern unsigned int DAT_00571648; /* 0x571648 */
extern unsigned int DAT_0057164c; /* 0x57164c */
extern unsigned int DAT_00571650; /* 0x571650 */
extern unsigned int DAT_00571654; /* 0x571654 */
extern unsigned int DAT_00571658; /* 0x571658 */
extern unsigned int DAT_0057165c; /* 0x57165c */
extern unsigned int DAT_00571660; /* 0x571660 */
extern unsigned int DAT_00571664; /* 0x571664 */
extern unsigned int DAT_00571668; /* 0x571668 */
extern unsigned int DAT_0057166c; /* 0x57166c */
extern unsigned int DAT_00571670; /* 0x571670 */
extern unsigned int DAT_00571674; /* 0x571674 */
extern unsigned int DAT_00571678; /* 0x571678 */
extern unsigned int DAT_0057167c; /* 0x57167c */
extern unsigned int DAT_00571680; /* 0x571680 */
extern unsigned int DAT_00571684; /* 0x571684 */
extern unsigned int DAT_00571688; /* 0x571688 */
extern unsigned int DAT_0057168c; /* 0x57168c */
extern unsigned int DAT_005716b8; /* 0x5716b8 */
extern unsigned int DAT_005716bc; /* 0x5716bc */
extern unsigned int DAT_005716d8; /* 0x5716d8 */
extern unsigned int DAT_005716dc; /* 0x5716dc */
extern unsigned int DAT_005716e0; /* 0x5716e0 */
extern unsigned int DAT_005716e4; /* 0x5716e4 */
extern unsigned int DAT_005716e8; /* 0x5716e8 */
extern unsigned int DAT_005716ec; /* 0x5716ec */
extern unsigned int DAT_005716f0; /* 0x5716f0 */
extern unsigned int DAT_005716f4; /* 0x5716f4 */
extern unsigned int DAT_005716f8; /* 0x5716f8 */
extern unsigned int DAT_005716fc; /* 0x5716fc */
extern unsigned int DAT_00571700; /* 0x571700 */
extern unsigned int DAT_00571704; /* 0x571704 */
extern unsigned int DAT_00571708; /* 0x571708 */
extern unsigned int DAT_0057170c; /* 0x57170c */
extern unsigned int DAT_00571710; /* 0x571710 */
extern unsigned int DAT_00571714; /* 0x571714 */
extern unsigned int DAT_00571728; /* 0x571728 */
extern unsigned int DAT_0057172c; /* 0x57172c */
extern unsigned int DAT_00571730; /* 0x571730 */
extern unsigned int DAT_00571734; /* 0x571734 */
extern unsigned int DAT_00571738; /* 0x571738 */
extern unsigned int DAT_0057173c; /* 0x57173c */
extern unsigned int DAT_00571758; /* 0x571758 */
extern unsigned int DAT_0057175c; /* 0x57175c */
extern unsigned int DAT_00571768; /* 0x571768 */
extern unsigned int DAT_0057176c; /* 0x57176c */
extern unsigned int DAT_00571778; /* 0x571778 */
extern unsigned int DAT_0057177c; /* 0x57177c */
extern unsigned int DAT_0057a6e8; /* 0x57a6e8 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern unsigned int *FUN_001ab888(void);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317464. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: FUN_0032c1bc. */
/* Supplied declaration required: FUN_0032c450. */
/* Supplied declaration required: FUN_003592dc. */
extern unsigned int FUN_003e53ec(void);


void FUN_004d1af8(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  temp_v0 = FUN_00163e40(*(unsigned int *)(param_1 + 0x10));
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)(param_1 + 0x10));
    FUN_001631d0(*(unsigned int *)(param_1 + 0x10),0);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x80);
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v1;
  FUN_0032c1bc();
  FUN_00317508(*(unsigned int *)(param_1 + 0x10),1);
  FUN_002ea508(*(unsigned int *)(param_1 + 0x10),&LAB_004d1efc);
  puVar4 = (unsigned int *)(param_2 + 0x45a8);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0,
               (*puVar4 & DAT_00571640) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571644) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),1,
               (*puVar4 & DAT_00571648) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057164c) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),2,
               (DAT_00571654 & *(unsigned int *)(param_2 + 0x45ac)) != 0 || (DAT_00571650 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),3,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057165c) != 0 || (DAT_00571658 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),5,
               (*puVar4 & DAT_00571660) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571664) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),6,
               (DAT_00571668 & *puVar4) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057166c) != 0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),4,*(unsigned int *)(param_2 + 0x4d5c),0,99999,0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),7,
               (*puVar4 & DAT_00571670) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571674) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),8,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057176c) != 0 || (DAT_00571768 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),9,
               (*puVar4 & DAT_00571678) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057167c) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),10,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571684) != 0 || (*puVar4 & DAT_00571680) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0xb,
               (*puVar4 & DAT_00571688) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057168c) != 0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0xc,*(unsigned int *)(param_2 + 0x4cd4),0,400,0);
  puVar3 = (unsigned int *)FUN_001ab888();
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0xd,*puVar3,0,999999999,0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0xe,
               (DAT_005716b8 & *puVar4) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_005716bc) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0xf,
               (*puVar4 & DAT_005716d8) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_005716dc) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x10,
               (DAT_005716e4 & *(unsigned int *)(param_2 + 0x45ac)) != 0 || (*puVar4 & DAT_005716e0) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x11,
               (DAT_005716ec & *(unsigned int *)(param_2 + 0x45ac)) != 0 || (*puVar4 & DAT_005716e8) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x12,
               (*puVar4 & DAT_005716f0) != 0 || (DAT_005716f4 & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x13,
               (DAT_005716f8 & *puVar4) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_005716fc) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x14,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571704) != 0 || (DAT_00571700 & *puVar4) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x15,
               (*puVar4 & DAT_00571708) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057170c) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x16,
               (*puVar4 & DAT_00571710) != 0 || (DAT_00571714 & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x17,
               (*puVar4 & DAT_00571728) != 0 || (DAT_0057172c & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x18,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571734) != 0 || (DAT_00571730 & *puVar4) != 0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x19,*(unsigned int *)(param_2 + 0x302c),0xffffffff,999
               ,0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x1a,
               (*puVar4 & DAT_00571738) != 0 || (DAT_0057173c & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x1b,*(unsigned int *)(param_2 + 0x3034),0,4,0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x1c,DAT_0057a6e8,0xffffffff,999,0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x1d,
               (*puVar4 & DAT_00571758) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057175c) != 0);
  temp_v1 = FUN_003e53ec();
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x1e,temp_v1,0,8,0);
  FUN_0032c450(*(unsigned int *)(param_1 + 0x10),0x1f,
               (DAT_00571778 & *puVar4) != 0 || (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057177c) != 0);
  FUN_00317464(*(unsigned int *)(param_1 + 0x10),0x20,*(unsigned int *)(param_2 + 0x4d6c),0,10,0);
  return;
}

} /* extern "C" */
