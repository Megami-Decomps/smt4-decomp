/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129d08` (_code @ 0x129d08, 0x4a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_0042c000; /* 0x42c000 */
extern signed char DAT_0044e3b0; /* 0x44e3b0 */
extern int DAT_0044e3b4; /* 0x44e3b4 */
extern romwright_code *DAT_0044e3bc; /* 0x44e3bc */
extern romwright_code *DAT_0044e3c0; /* 0x44e3c0 */
extern romwright_code *DAT_0044e3c4; /* 0x44e3c4 */
extern romwright_code *DAT_0044e3c8; /* 0x44e3c8 */
extern romwright_code *DAT_0044e3cc; /* 0x44e3cc */
extern romwright_code *DAT_0044e3d0; /* 0x44e3d0 */
extern romwright_code *DAT_0044e3d4; /* 0x44e3d4 */
extern romwright_code *DAT_0044e3d8; /* 0x44e3d8 */
extern romwright_code *DAT_0044e3dc; /* 0x44e3dc */
extern romwright_code *DAT_0044e3e0; /* 0x44e3e0 */
extern romwright_code *DAT_0044e3e4; /* 0x44e3e4 */
extern romwright_code *DAT_0044e3ec; /* 0x44e3ec */
extern unsigned int DAT_0044e3fc; /* 0x44e3fc */
extern unsigned int DAT_0044e400; /* 0x44e400 */
extern unsigned int DAT_0044e404; /* 0x44e404 */
extern unsigned int DAT_0044e408; /* 0x44e408 */
extern unsigned int DAT_0044e40c; /* 0x44e40c */
extern unsigned int DAT_0044e410; /* 0x44e410 */
extern unsigned int DAT_0044e414; /* 0x44e414 */
extern unsigned int DAT_0044e418; /* 0x44e418 */
extern unsigned int DAT_0044e41c; /* 0x44e41c */
extern unsigned int DAT_0044e420; /* 0x44e420 */
extern unsigned int DAT_0044e424; /* 0x44e424 */
extern unsigned int DAT_0044e42c; /* 0x44e42c */
extern unsigned int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */
extern unsigned int DAT_004c644c; /* 0x4c644c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00139cc4. */
extern int FUN_0013afb8(void);
/* Supplied declaration required: FUN_0013afc8. */
extern int FUN_0013aff0(void);
/* Supplied declaration required: FUN_0013b000. */
/* Supplied declaration required: FUN_0013b148. */
extern int FUN_0013b19c(void);
/* Supplied declaration required: FUN_0013b1cc. */
/* Supplied declaration required: FUN_0013b1fc. */
/* Supplied declaration required: FUN_0013b210. */
/* Supplied declaration required: FUN_0013b46c. */
/* Supplied declaration required: FUN_002ad4c0. */
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002b5ae8. */
/* Supplied declaration required: FUN_002bb7a0. */
extern int FUN_002bc9c8(void);
/* Supplied declaration required: FUN_002c14a8. */
/* Supplied declaration required: FUN_002c14b8. */
/* Supplied declaration required: FUN_002c14e4. */
/* Supplied declaration required: FUN_002c14f4. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
extern int FUN_002c57a4(void);
extern int FUN_002c57b4(void);


unsigned int FUN_00129d08(void)

{
/* irregular: 1 goto(s); 19 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int *temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_34;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9 [2];
  
  temp_v0 = FUN_002ad4c0();
  temp_v1 = FUN_0013afb8();
  if (temp_v1 != 0) {
    if (DAT_0044e3e0 != (romwright_code *)0x0) {
      (*DAT_0044e3e0)(DAT_0044e420);
    }
    FUN_0013afc8();
  }
  temp_v1 = FUN_002c57b4();
  if (temp_v1 != 0) {
    if (DAT_0044e3ec == (romwright_code *)0x0) {
      return 1;
    }
    (*DAT_0044e3ec)(DAT_0044e42c);
    return 1;
  }
  if ((temp_v0 == 1) || (temp_v0 == 2)) {
    temp_v0 = FUN_002bc9c8();
    temp_v2 = FUN_002ad4c0();
    FUN_0013b1fc();
    if (((DAT_0044e3bc == (romwright_code *)0x0) ||
        (temp_v1 = (*DAT_0044e3bc)(DAT_0044e3fc,temp_v0,temp_v2), temp_v1 != 0)) &&
       ((temp_v0 != 0 && (temp_v0 = FUN_002c14a8(), temp_v0 == 0)))) {
      FUN_002bb7a0(temp_v2);
      temp_v0 = FUN_002c14a8();
      if (temp_v0 != 1) {
        FUN_002c14a8();
      }
    }
    return 0;
  }
  temp_v0 = FUN_0013b19c();
  if (temp_v0 == 0) {
    temp_v0 = FUN_0013aff0();
    if (temp_v0 != 0) {
      if (DAT_0044e3e4 != (romwright_code *)0x0) {
        (*DAT_0044e3e4)(DAT_0044e424);
      }
      FUN_0013b000();
      return 1;
    }
    temp_v4 = &temp_v6;
    temp_v2 = 1;
    puVar4 = (unsigned int *)&temp_v7;
    temp_v6 = 0;
    FUN_0013b46c(puVar4,temp_v9,&DAT_0042c000,0x1000,&temp_v8);
    if ((int)puVar4 < 0) {
      FUN_002c14f4();
    }
    temp_v0 = temp_v6;
    if (temp_v9[0] != 2) {
      if (temp_v9[0] != 5) {
        if (temp_v9[0] != 8) {
          if (temp_v9[0] == 9) {
            FUN_002b5ae8(1);
            if (DAT_0044e3cc != (romwright_code *)0x0) {
              (*DAT_0044e3cc)(DAT_0044e40c);
            }
            temp_v2 = 0;
          }
        }
        else {
          if (DAT_0044e3c8 != (romwright_code *)0x0) {
            (*DAT_0044e3c8)(DAT_0044e408);
          }
          FUN_002b5ae8(0);
          temp_v2 = 0;
        }
      }
      else {
        FUN_0013b148(1,temp_v7,0);
        if (DAT_0044e3c4 != (romwright_code *)0x0) {
          (*DAT_0044e3c4)(DAT_0044e404,temp_v7,&DAT_0042c000,temp_v8,temp_v0);
        }
        temp_v2 = 0;
      }
    }
    else {
      temp_v4 = (int *)0x0;
      temp_v3 = DAT_0042c000;
      if (temp_v8 < 0x20) {
        temp_v3 = 0;
      }
      temp_v2 = 0;
      if (DAT_0044e3c0 != (romwright_code *)0x0) {
        (*DAT_0044e3c0)(DAT_0044e400,temp_v3,&temp_v4);
      }
      FUN_0013b148(1,temp_v7,0);
      temp_v5 = DAT_0044e440;
      uStack_34 = DAT_0044e444;
      FUN_002b5820(temp_v7,3,0,0,temp_v4);
    }
    if (temp_v6 == 0) {
      return temp_v2;
    }
    software_interrupt(0x23);
    return temp_v2;
  }
  temp_v0 = FUN_0013b19c();
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 != 3) {
        if (((temp_v0 == 4) && (DAT_0044e3d4 != (romwright_code *)0x0)) &&
           ((temp_v0 = FUN_002c57b4(), temp_v0 == 0 && (temp_v0 = FUN_002c57a4(), temp_v0 == 0)))) {
          (*DAT_0044e3d4)(DAT_0044e414);
        }
      }
      else {
        FUN_00139cc4();
        if (((DAT_0044e3dc != (romwright_code *)0x0) && (temp_v0 = FUN_002c57b4(), temp_v0 == 0)) &&
           (temp_v0 = FUN_002c57a4(), temp_v0 == 0)) {
          (*DAT_0044e3dc)(DAT_0044e41c);
        }
        temp_v2 = 5;
        FUN_002c14e4(temp_v2);
      }
    }
    else {
      FUN_002c14e4(4);
      if (((DAT_0044e3d8 != (romwright_code *)0x0) && (temp_v0 = FUN_002c57b4(), temp_v0 == 0)) &&
         (temp_v0 = FUN_002c57a4(), temp_v0 == 0)) {
        (*DAT_0044e3d8)(DAT_0044e418);
      }
      FUN_002c3aa8(&DAT_004c644c);
      for (temp_v0 = DAT_0044e3b4; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 4)) {
        if (*(romwright_code **)(temp_v0 + 8) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v0 + 8))(*(unsigned int *)(temp_v0 + 0xc));
        }
      }
      FUN_002c3a24(&DAT_004c644c);
      FUN_0013b210();
    }
  }
  else {
    temp_v1 = FUN_002c57b4();
    temp_v0 = 0;
    if (temp_v1 == 0) {
      temp_v1 = FUN_002c57a4();
      if (temp_v1 == 0) {
        if (DAT_0044e3d0 != (romwright_code *)0x0) {
          temp_v0 = (*DAT_0044e3d0)(DAT_0044e410);
        }
        if ((DAT_0044e3b0 != '\0') || (temp_v1 = FUN_002bc9c8(), temp_v1 == 0)) goto LAB_00129e94;
        temp_v0 = 0;
      }
      temp_v2 = 3;
    }
    else {
LAB_00129e94:
      if (temp_v0 == 0) {
        temp_v2 = 3;
        FUN_002c14e4(temp_v2);
        FUN_002c14b8(temp_v0);
        FUN_0013b1cc();
        return 0;
      }
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          FUN_0013b1cc();
          return 0;
        }
        temp_v2 = 1;
        FUN_002c14e4(temp_v2);
        FUN_0013b1cc();
        return 0;
      }
      temp_v2 = 2;
    }
    FUN_002c14e4(temp_v2);
    FUN_002c14b8(temp_v0);
  }
  FUN_0013b1cc();
  return 0;
}
