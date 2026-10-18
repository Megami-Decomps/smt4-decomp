/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eeb2c` (_code @ 0x2eeb2c, 0x30c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_004474d8; /* 0x4474d8 */
extern signed char DAT_00447518; /* 0x447518 */
extern signed char DAT_00447519; /* 0x447519 */
extern signed char DAT_0044751a; /* 0x44751a */
extern int DAT_0044751c; /* 0x44751c */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern int DAT_0049f930; /* 0x49f930 */
extern unsigned char DAT_0049f93e; /* 0x49f93e */
extern signed char DAT_0049f93f; /* 0x49f93f */
extern unsigned char DAT_0049fb48; /* 0x49fb48 */

/* Supplied declaration required: FUN_001b4b74. */
extern int FUN_0020e984(void);
/* Supplied declaration required: FUN_00215958. */
/* Supplied declaration required: FUN_00274200. */
/* Supplied declaration required: FUN_00274230. */
/* Supplied declaration required: FUN_00274a08. */
/* Supplied declaration required: FUN_0027521c. */
/* Supplied declaration required: FUN_0027549c. */
/* Supplied declaration required: FUN_002755d4. */
/* Supplied declaration required: FUN_00275984. */
/* Supplied declaration required: FUN_00275a18. */
/* Supplied declaration required: FUN_00275a8c. */
/* Supplied declaration required: FUN_00275b48. */
/* Supplied declaration required: FUN_00275c2c. */
/* Supplied declaration required: FUN_00275ca0. */
/* Supplied declaration required: FUN_00275e38. */
/* Supplied declaration required: FUN_00275e58. */
/* Supplied declaration required: FUN_00276034. */
/* Supplied declaration required: FUN_002767ac. */
/* Supplied declaration required: FUN_0027d700. */
/* Supplied declaration required: FUN_0027de14. */
/* Supplied declaration required: FUN_00280d30. */
/* Supplied declaration required: FUN_0028a688. */
/* Supplied declaration required: FUN_00294ad8. */
/* Supplied declaration required: FUN_0029b0fc. */
extern int FUN_002b89d4(void);
extern int FUN_0031b960(void);


unsigned int FUN_002eeb2c(void)

{
/* irregular: 24 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  if ((DAT_0049f93f != '\0') && (DAT_0044751a == '\0')) {
    DAT_0044751a = '\x01';
    FUN_00215958(1);
  }
  temp_v0 = DAT_00447e88;
  if (DAT_0049f930 == 3) {
    if (DAT_00447518 == '\0') {
      FUN_001b4b74();
      DAT_00447518 = '\x01';
    }
    temp_v0 = FUN_0020e984();
    if (temp_v0 == 0) {
      return 0;
    }
    DAT_00447518 = 0;
    if (DAT_0044751a != '\0') {
      FUN_00215958(0);
      DAT_0044751a = '\0';
    }
    return 1;
  }
  if (DAT_00447518 == '\0') {
    DAT_0044751c = 0;
    DAT_00447518 = '\x01';
    DAT_00447519 = '\0';
  }
  if (DAT_00447519 != '\0') {
    DAT_0049f93f = '\0';
    FUN_00275e58(0);
    DAT_00447519 = '\0';
    DAT_00447518 = 0;
    if (DAT_0044751a != '\0') {
      FUN_00215958(0);
      DAT_0044751a = '\0';
    }
    return 1;
  }
  if (DAT_0044751c != 0) {
    if (DAT_0044751c == 10) {
      DAT_0049fb48 = 1;
      FUN_0027de14();
      FUN_00276034();
      FUN_00275e58(1);
      FUN_00275e38();
    }
    if (DAT_0044751c == 0xb) {
      DAT_0049f93e = 1;
      *(unsigned char *)(DAT_004474d8 + 10) = 0;
      FUN_00275ca0();
      FUN_0027de14();
    }
    if (0x13 >= DAT_0044751c) {
      DAT_0044751c = DAT_0044751c + 1;
    }
  }
  else {
    puVar3 = (unsigned int *)(DAT_00447e88 + 0x20);
    temp_v1 = *(unsigned int *)(DAT_00447e88 + 0x24);
    *(unsigned int *)(DAT_00447e88 + 0x28) = *(unsigned int *)(DAT_00447e88 + 0x1c);
    *(unsigned int *)(temp_v0 + 0x2c) = *puVar3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v1;
    DAT_0044751c = DAT_0044751c + 1;
  }
  if (DAT_0044751c < 100) {
    if ((DAT_0044751c >= 0xd) && (temp_v0 = FUN_0031b960(), temp_v0 != 0)) {
      FUN_00275c2c();
      FUN_00275b48();
      FUN_00275a8c();
      FUN_0028a688(0);
      FUN_00294ad8(200,200,200,0x82,0x82,0x82,0x1e,0x1e,0x1e,0x96,0x96,0x96);
      DAT_0044751c = 100;
      DAT_0049f93f = '\x01';
      FUN_002767ac();
    }
  }
  else {
    temp_v0 = FUN_002b89d4();
    if (temp_v0 == 0) {
      DAT_0049fb48 = 0;
      FUN_00280d30(1);
      DAT_0049f93e = 0;
      FUN_00275a18();
      FUN_00275984();
      FUN_0027d700(DAT_0049f920);
      FUN_002755d4();
      FUN_0027549c();
      FUN_0027521c();
      FUN_00274a08();
      *(unsigned char *)(DAT_004474d8 + 10) = 1;
      FUN_00275ca0();
      FUN_0029b0fc(*(unsigned int *)(DAT_00447e88 + 0x194));
      FUN_00274230();
      FUN_00274200();
      DAT_00447519 = 1;
      return 0;
    }
  }
  return 0;
}
