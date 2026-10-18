/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0c5c` (_code @ 0x2c0c5c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern int FUN_001008c8(unsigned int *, unsigned char, int);
extern int *FUN_002c0cec(unsigned int, unsigned int);
extern unsigned int *FUN_002c6644(void);
extern int FUN_002c66f2(unsigned int, unsigned int, int, int);


unsigned int FUN_002c0c5c(void)

{
/* irregular: 3 goto(s); irregular input(s): in_lr, in_stack_00000000, in_stack_0000000c; 2 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *unaff_r4;
  int unaff_r7;
  unsigned int in_lr;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned short *in_stack_00000000;
  int in_stack_0000000c;
  unsigned int uStack_4;
  
  uStack_4 = in_lr;
  piVar2 = (int *)FUN_002c0cec(0x18,0);
  if (((piVar2 == (int *)0x0) || (*piVar2 != 0x314c4254)) || (temp_v2 = piVar2[2], temp_v2 == 0)) {
    return 0;
  }
  temp_v1 = piVar2[1];
  temp_v4 = 0;
  if (temp_v2 <= temp_v1 >> 2) {
    if (temp_v2 <= temp_v1 >> 5) {
      temp_v3 = temp_v2;
      if (temp_v2 <= temp_v1 >> 8) {
        if (temp_v1 >> 0xc < temp_v2) goto LAB_002c5fec;
        if (temp_v1 >> 0x10 < temp_v2) goto LAB_002c5fbc;
        temp_v3 = temp_v2 << 8;
        temp_v4 = -0x1000000;
        if (temp_v3 <= temp_v1 >> 0x10) {
          temp_v4 = -0x10000;
          temp_v3 = temp_v2 << 0x10;
        }
        if (temp_v1 >> 0xc < temp_v3) goto LAB_002c5fec;
        temp_v5 = 0;
        if (temp_v3 == 0) {
          return temp_v1;
        }
        do {
          if (temp_v5) {
            temp_v3 = temp_v3 >> 8;
          }
LAB_002c5fbc:
          temp_v5 = temp_v3 <= temp_v1 >> 0xf;
          if (temp_v5) {
            temp_v1 = temp_v1 + temp_v3 * -0x8000;
          }
          temp_v6 = temp_v3 <= temp_v1 >> 0xe;
          if (temp_v6) {
            temp_v1 = temp_v1 + temp_v3 * -0x4000;
          }
          temp_v7 = temp_v3 <= temp_v1 >> 0xd;
          if (temp_v7) {
            temp_v1 = temp_v1 + temp_v3 * -0x2000;
          }
          temp_v8 = temp_v3 <= temp_v1 >> 0xc;
          if (temp_v8) {
            temp_v1 = temp_v1 + temp_v3 * -0x1000;
          }
          temp_v4 = (((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7) * 2 +
                  (unsigned int)temp_v8;
LAB_002c5fec:
          temp_v5 = temp_v3 <= temp_v1 >> 0xb;
          if (temp_v5) {
            temp_v1 = temp_v1 + temp_v3 * -0x800;
          }
          temp_v6 = temp_v3 <= temp_v1 >> 10;
          if (temp_v6) {
            temp_v1 = temp_v1 + temp_v3 * -0x400;
          }
          temp_v7 = temp_v3 <= temp_v1 >> 9;
          if (temp_v7) {
            temp_v1 = temp_v1 + temp_v3 * -0x200;
          }
          temp_v2 = ((temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
          temp_v6 = temp_v3 <= temp_v1 >> 8;
          if (temp_v6) {
            temp_v1 = temp_v1 + temp_v3 * -0x100;
          }
          temp_v4 = temp_v2 * 2 + (unsigned int)temp_v6;
          temp_v5 = 1;
        } while (romwright_carry_4(temp_v2,temp_v2) || romwright_carry_4(temp_v2 * 2,(unsigned int)temp_v6));
      }
      temp_v2 = 0;
      if (temp_v3 == 0) {
        unaff_r7 = 1;
        unaff_r4 = (unsigned char *)0x2c61fc;
        in_stack_00000000 = (unsigned short *)0x0;
      }
      if (in_stack_0000000c == 0) {
        in_stack_0000000c = FUN_002c66f2(0,5,temp_v4,(temp_v1 >> 7) - temp_v3);
      }
      while( 1 ) {
        temp_v5 = unaff_r7 == 0;
        unaff_r7 = unaff_r7 - 1;
        if (temp_v5) {
          return 0xfffffffe;
        }
        temp_v0 = *unaff_r4;
        unaff_r4 = unaff_r4 + 1;
        temp_v4 = FUN_001008c8(&uStack_4,temp_v0,in_stack_0000000c);
        temp_v2 = temp_v2 + 1;
        if (temp_v4 == -1) break;
        if (temp_v4 != -2) {
          if (in_stack_00000000 != (unsigned short *)0x0) {
            *in_stack_00000000 = (unsigned short)uStack_4;
          }
          temp_v1 = 0;
          if ((uStack_4 & 0xffff) != 0) {
            temp_v1 = temp_v2;
          }
          return temp_v1;
        }
      }
      puVar4 = (unsigned int *)FUN_002c6644();
      *puVar4 = 4;
      return 0xffffffff;
    }
    temp_v5 = temp_v2 <= temp_v1 >> 4;
    if (temp_v5) {
      temp_v1 = temp_v1 + temp_v2 * -0x10;
    }
    temp_v6 = temp_v2 <= temp_v1 >> 3;
    if (temp_v6) {
      temp_v1 = temp_v1 + temp_v2 * -8;
    }
    temp_v7 = temp_v2 <= temp_v1 >> 2;
    if (temp_v7) {
      temp_v1 = temp_v1 + temp_v2 * -4;
    }
    temp_v4 = ((unsigned int)temp_v5 * 2 + (unsigned int)temp_v6) * 2 + (unsigned int)temp_v7;
  }
  temp_v5 = temp_v2 <= temp_v1 >> 1;
  if (temp_v5) {
    temp_v1 = temp_v1 + temp_v2 * -2;
  }
  return (temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)(temp_v2 <= temp_v1);
}
