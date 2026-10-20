/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214dc4` (_code @ 0x214dc4, 0x47c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0018408c(...);
int FUN_002c0940(...);
int FUN_00344cd0(...);
int VectorSignedToFloat(...);

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} void_stack;

extern unsigned char LAB_00215170; /* 0x215170 */
extern unsigned char LAB_00215178; /* 0x215178 */
extern unsigned char LAB_00215248; /* 0x215248 */
extern int g_playLog; /* 0x57f278 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern int FUN_002a4860(int);
/* Supplied declaration required: FUN_002c0940. */
/* Supplied declaration required: FUN_00344cd0. */
extern int FUN_00348ed0(int);


void FUN_00214dc4(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
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
  unsigned char temp_v12 [16];
  int temp_v13;
  
  temp_v0 = g_playLog;
  temp_v8 = 0;
  temp_v1 = FUN_00348ed0(g_playLog + 0x2dc);
  if (0 < temp_v1) {
    temp_v13 = temp_v0 + 0x400;
    do {
      temp_v1 = vec2GetXInt(temp_v0 + temp_v8 * 0x8c + 0x20);
      efctSetSpeed();
      if (temp_v8 == 0) {
        if (*(char *)(temp_v13 + 0x88) != '\0') {
          FUN_001835b4(2,0x25,0,temp_v1,0,0xb);
          FUN_001835b4(2,0x25,1,temp_v1,0,0xb);
          if (*(char *)(temp_v0 + 0x489) != '\0') {
            FUN_001835b4(2,0x25,0x1e,temp_v1,0,0x10);
          }
          else {
            FUN_001835b4(2,0x25,0x1f,temp_v1,0,0x10);
          }
        }
        else {
          FUN_00164b5c(2,0x25,0,temp_v1,0,0xb);
        }
      }
      temp_v2 = FUN_00348ed0(temp_v0 + 0x2dc);
      if (temp_v2 - 1 == temp_v8) {
        FUN_001835b4(2,0x25,0x1d,temp_v1,0,0xb);
        FUN_00344cd0(temp_v0 + 0x2dc,temp_v1,0,0x25,7,8,9,3,5,4,6,(int)*(short *)(temp_v0 + 0x34c),
                     (int)*(short *)(temp_v0 + 0x348),(int)*(short *)(temp_v0 + 0x34a),0xb,0);
      }
      temp_v2 = FUN_001834a4(0x25,temp_v8 + 0x15);
      FUN_00164b5c(2,0x25,1,*(short *)(temp_v2 + 8) + temp_v1,(int)*(short *)(temp_v2 + 10),0xb);
      temp_v3 = FUN_002a4860(temp_v0 + 0x2dc);
      temp_v9 = (unsigned int)*(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424);
      temp_v4 = dataTableGet(0x37,0);
      temp_v3 = dataTableGetEntries();
      temp_v5 = dataTableGetCount(temp_v4);
      if ((temp_v9 < temp_v5) && (temp_v3 = temp_v3 + temp_v9 * 0x40, temp_v3 != 0)) {
        temp_v6 = FUN_001834a4(0x25,0x13);
        FUN_00100388(temp_v10,&LAB_00215170,temp_v3 + 2);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0x57d8ffff,temp_v10,(int)*(short *)(temp_v6 + 10));
        temp_v6 = FUN_001834a4(0x25,0x14);
        if (*(char *)(temp_v3 + 0x3f) != '\x01') {
          if (*(char *)(temp_v3 + 0x37) != '0') {
            temp_v7 = FUN_002a4860(temp_v0 + 0x2dc);
            FUN_002c0940(temp_v11,
                         *(unsigned int *)
                          (temp_v0 + *(short *)(temp_v0 + (temp_v7 + temp_v8) * 2 + 0x424) * 4 + 0x35c));
            FUN_00100388(temp_v10,&LAB_00215178,temp_v11,temp_v3 + 0x37);
          }
          else {
            temp_v3 = FUN_002a4860(temp_v0 + 0x2dc);
            FUN_002c0940(temp_v11,
                         *(unsigned int *)
                          (temp_v0 + *(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424) * 4 + 0x35c));
            FUN_00100388(temp_v10,&LAB_00215170,temp_v11);
          }
        }
        else {
          temp_v3 = FUN_002a4860(temp_v0 + 0x2dc);
          temp_v5 = *(unsigned int *)(temp_v0 + *(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424) * 4 + 0x35c);
          temp_v9 = temp_v5 % 0xe10;
          FUN_002c0940(temp_v11,temp_v5 / 0xe10,temp_v9 * -0x77777777);
          FUN_002c0940(temp_v12,temp_v9 / 0x3c);
          FUN_00100388(temp_v10,&LAB_00215248,temp_v11,temp_v12);
        }
        puVar9 = temp_v10;
        FUN_0018408c(puVar9,2);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((((int)**(short **)(temp_v6 + 0xc) + (int)*(short *)(temp_v6 + 8)) -
                            (int)puVar9) + temp_v1 + (int)*(short *)(temp_v2 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xffffffff,temp_v10,(int)*(short *)(temp_v2 + 8));
      }
      efctSetSpeed();
      temp_v8 = temp_v8 + 1;
      temp_v1 = FUN_00348ed0(temp_v0 + 0x2dc);
    } while (temp_v8 < temp_v1);
  }
  return;
}

} /* extern "C" */
