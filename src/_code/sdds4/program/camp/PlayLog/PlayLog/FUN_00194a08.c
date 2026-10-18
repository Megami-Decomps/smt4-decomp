/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00194a08` (_code @ 0x194a08, 0x3b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern unsigned char LAB_00194d54; /* 0x194d54 */
extern unsigned char LAB_00194d5c; /* 0x194d5c */
extern unsigned char LAB_00194d6c; /* 0x194d6c */
extern int DAT_0043dd08; /* 0x43dd08 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00290c38. */
extern int FUN_0029d8e4(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_00194a08(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *puVar9;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  unsigned char temp_v10 [64];
  unsigned char temp_v11 [16];
  unsigned char temp_v12 [28];
  
  temp_v0 = DAT_0043dd08;
  temp_v8 = 0;
  temp_v1 = FUN_0029d8e4(DAT_0043dd08 + 0x2dc);
  if (0 < temp_v1) {
    do {
      temp_v1 = FUN_002bef7c(temp_v0 + temp_v8 * 0x8c + 0x20);
      if (temp_v8 == 0) {
        FUN_002bf558(2,0x30,0,temp_v1,0,0xb);
      }
      temp_v2 = FUN_0029d8e4(temp_v0 + 0x2dc);
      if (temp_v2 - 1 == temp_v8) {
        FUN_00290c38(temp_v0 + 0x2dc,temp_v1,0,0x30,7,8,9,3,5,4,6,(int)*(short *)(temp_v0 + 0x34c),
                     (int)*(short *)(temp_v0 + 0x348),(int)*(short *)(temp_v0 + 0x34a),0xb,0);
      }
      temp_v2 = FUN_002bf6d0(0x30,temp_v8 + 0x15);
      FUN_002bf558(2,0x30,1,*(short *)(temp_v2 + 8) + temp_v1,(int)*(short *)(temp_v2 + 10),0xb);
      temp_v3 = FUN_0029f260(temp_v0 + 0x2dc);
      temp_v9 = (unsigned int)*(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424);
      temp_v4 = FUN_002c0ec4(0x37,0);
      temp_v3 = FUN_002c0e9c();
      temp_v5 = FUN_002c0e4c(temp_v4);
      if ((temp_v9 < temp_v5) && (temp_v3 = temp_v3 + temp_v9 * 0x40, temp_v3 != 0)) {
        temp_v6 = FUN_002bf6d0(0x30,0x13);
        FUN_002be7fc(temp_v10,&LAB_00194d54,temp_v3 + 2);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,0xe09800ff,temp_v10,(int)*(short *)(temp_v2 + 10));
        temp_v6 = FUN_002bf6d0(0x30,0x14);
        if (*(char *)(temp_v3 + 0x3f) != '\x01') {
          if (*(char *)(temp_v3 + 0x37) != '0') {
            temp_v7 = FUN_0029f260(temp_v0 + 0x2dc);
            FUN_00290a68(temp_v11,
                         *(unsigned int *)
                          (temp_v0 + *(short *)(temp_v0 + (temp_v7 + temp_v8) * 2 + 0x424) * 4 + 0x35c));
            FUN_002be7fc(temp_v10,&LAB_00194d5c,temp_v11,temp_v3 + 0x37);
          }
          else {
            temp_v3 = FUN_0029f260(temp_v0 + 0x2dc);
            FUN_00290a68(temp_v11,
                         *(unsigned int *)
                          (temp_v0 + *(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424) * 4 + 0x35c));
            FUN_002be7fc(temp_v10,&LAB_00194d54,temp_v11);
          }
        }
        else {
          temp_v3 = FUN_0029f260(temp_v0 + 0x2dc);
          temp_v5 = *(unsigned int *)(temp_v0 + *(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424) * 4 + 0x35c);
          temp_v9 = temp_v5 % 0xe10;
          FUN_00290a68(temp_v11,temp_v5 / 0xe10,temp_v9 * -0x77777777);
          FUN_00290a68(temp_v12,temp_v9 / 0x3c);
          FUN_002be7fc(temp_v10,&LAB_00194d6c,temp_v11,temp_v12);
        }
        puVar9 = temp_v10;
        FUN_002b7118(puVar9,2);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 8) +
                            temp_v1 + (((int)*(short *)(temp_v6 + 8) + (int)**(short **)(temp_v6 + 0xc)) -
                                    (int)puVar9),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,0xff,temp_v10,(int)*(short *)(temp_v2 + 8));
      }
      temp_v8 = temp_v8 + 1;
      temp_v1 = FUN_0029d8e4(temp_v0 + 0x2dc);
    } while (temp_v8 < temp_v1);
  }
  return;
}
