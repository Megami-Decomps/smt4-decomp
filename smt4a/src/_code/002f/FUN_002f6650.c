/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6650` (_code @ 0x2f6650, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
} void_stack;

extern unsigned int DAT_00589370; /* 0x589370 */
extern int DAT_00589374; /* 0x589374 */

/* Supplied declaration required: FUN_001208fe. */
extern unsigned long long FUN_0012237c(void);
/* Supplied declaration required: FUN_001223c8. */
extern unsigned long long FUN_001780a4(unsigned long long *, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned long long FUN_002e49c4(int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */
/* Supplied declaration required: FUN_0030fc80. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_002f6650(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned long long temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17 [112];
  
  rt_memcpy_w(&temp_v3,
              "킈砹趂ɏ\xf409袞ሷྃ獃襹禇ꬷD:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstantiationContext.h"
              ,0x18);
  FUN_0030fc80(&temp_v10);
  temp_v9 = FUN_002e49c4(temp_v10 - DAT_00589370,
                          (temp_v11 - DAT_00589374) - (unsigned int)(temp_v10 < DAT_00589370),1000000,0);
  temp_v12 = temp_v9;
  temp_v2 = FUN_001780a4(&temp_v12,0x12,0xd7b634db,0x431bde82,0x12);
  temp_v0 = (unsigned int)temp_v2 ^ temp_v3;
  temp_v4 = (unsigned int)((unsigned long long)temp_v2 >> 0x20) ^ temp_v4;
  temp_v3 = temp_v0;
  FUN_001223c8();
  temp_v5 = temp_v0 ^ temp_v5;
  temp_v6 = temp_v1 ^ temp_v6;
  temp_v2 = FUN_0012237c();
  temp_v7 = (unsigned int)temp_v2 ^ temp_v7;
  temp_v8 = (unsigned int)((unsigned long long)temp_v2 >> 0x20) ^ temp_v8;
  FUN_002ea668(temp_v17);
  FUN_002ea6bc(temp_v17,&temp_v3,0x18);
  FUN_002ea6cc(temp_v17);
  FUN_001208fe(temp_v17,&temp_v13);
  return temp_v13 ^ temp_v14 ^ temp_v15 ^ temp_v16;
}
