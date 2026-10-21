/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd37c` (_code @ 0x2cd37c, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bitsetSetBit(short *, int);
int gameRecordCopy(...);
int FUN_0029c6b0(short *);
int devilGetRecord(void);
int memClear(short *, int);

/* stack frame of param_1: 53 slot(s), 107 byte(s) */
typedef struct {
    unsigned char sp53; /* 0x53: local_53 */
    unsigned char sp60C; /* 0x60c: local_60c */
    unsigned short sp60E; /* 0x60e: local_60e */
    unsigned short sp612; /* 0x612: local_612 */
    unsigned short sp614; /* 0x614: local_614 */
    unsigned short sp616; /* 0x616: local_616 */
    unsigned short sp618; /* 0x618: local_618 */
    unsigned short sp61A; /* 0x61a: local_61a */
    unsigned short sp61C; /* 0x61c: local_61c */
    unsigned short sp61E; /* 0x61e: local_61e */
    unsigned short sp620; /* 0x620: local_620 */
    unsigned int sp624; /* 0x624: local_624 */
    unsigned short sp628; /* 0x628: local_628 */
    unsigned short sp62A; /* 0x62a: local_62a */
    unsigned short sp62C; /* 0x62c: local_62c */
    unsigned short sp62E; /* 0x62e: local_62e */
    unsigned short sp630; /* 0x630: local_630 */
    unsigned short sp632; /* 0x632: local_632 */
    unsigned short sp634; /* 0x634: local_634 */
    unsigned short sp636; /* 0x636: local_636 */
    unsigned short sp638; /* 0x638: local_638 */
    unsigned short sp644; /* 0x644: local_644 */
    unsigned short sp646; /* 0x646: local_646 */
    unsigned short sp648; /* 0x648: local_648 */
    unsigned short sp64A; /* 0x64a: local_64a */
    unsigned short sp64C; /* 0x64c: local_64c */
    unsigned short sp64E; /* 0x64e: local_64e */
    unsigned short sp650; /* 0x650: local_650 */
    unsigned short sp652; /* 0x652: local_652 */
    unsigned short sp654; /* 0x654: local_654 */
    unsigned int sp658; /* 0x658: local_658 */
    unsigned short sp65E; /* 0x65e: local_65e */
    unsigned short sp660; /* 0x660: local_660 */
    unsigned short sp662; /* 0x662: local_662 */
    unsigned short sp664; /* 0x664: local_664 */
    unsigned short sp666; /* 0x666: local_666 */
    unsigned short sp668; /* 0x668: local_668 */
    unsigned short sp66A; /* 0x66a: local_66a */
    unsigned short sp66C; /* 0x66c: local_66c */
    unsigned short sp66E; /* 0x66e: local_66e */
    unsigned short sp670; /* 0x670: local_670 */
    unsigned char sp672; /* 0x672: local_672 */
    unsigned short sp674; /* 0x674: local_674 */
    unsigned short sp676; /* 0x676: local_676 */
    unsigned short sp678; /* 0x678: local_678 */
    unsigned short sp67A; /* 0x67a: local_67a */
    unsigned short sp67C; /* 0x67c: local_67c */
    unsigned short sp67E; /* 0x67e: local_67e */
    unsigned short sp680; /* 0x680: local_680 */
    unsigned short sp682; /* 0x682: local_682 */
    unsigned short sp684; /* 0x684: local_684 */
    unsigned short sp686; /* 0x686: local_686 */
    unsigned short sp688; /* 0x688: local_688 */
} param_1_stack;

/* Supplied declaration required: bitsetSetBit. */
/* Supplied declaration required: gameRecordCopy. */
/* Supplied declaration required: FUN_0029c6b0. */
extern unsigned int flagCountUnlockedSlots(short *);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: memClear. */


unsigned int FUN_002cd37c(short *param_1)

{
/* irregular: 2 unstructured edge(s); 1 goto(s); 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  char temp_v8 [2];
  short temp_v9;
  short temp_v10;
  short temp_v11;
  short temp_v12;
  short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned char temp_v19;
  short temp_v20;
  short temp_v21;
  short temp_v22;
  unsigned short temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26;
  unsigned short temp_v27;
  unsigned short temp_v28;
  unsigned short temp_v29;
  int temp_v30;
  short temp_v31;
  short temp_v32;
  short temp_v33;
  short temp_v34;
  short temp_v35;
  short temp_v36;
  short temp_v37;
  unsigned short temp_v38;
  unsigned short temp_v39;
  unsigned short temp_v40;
  unsigned short temp_v41;
  unsigned short temp_v42;
  unsigned short temp_v43;
  unsigned short temp_v44;
  unsigned short temp_v45;
  unsigned short temp_v46;
  unsigned short temp_v47;
  unsigned short temp_v48;
  int temp_v49;
  short temp_v50 [4];
  unsigned short temp_v51;
  unsigned short temp_v52;
  unsigned short temp_v53;
  unsigned short temp_v54;
  unsigned short temp_v55;
  char temp_v56;
  unsigned char temp_v57;
  unsigned char temp_v58 [56];
  
  temp_v0 = param_1[0x23];
  temp_v7 = (unsigned int)temp_v0;
  temp_v3 = gameRecordCopy(temp_v7,temp_v58);
  temp_v6 = 0;
  if (temp_v3 != 0) {
    temp_v4 = temp_v7;
    devilGetRecord();
    gameRecordCopy(temp_v7,temp_v8);
    memClear(&temp_v31,0x604);
    temp_v56 = temp_v8[0];
    temp_v31 = temp_v20;
    temp_v32 = temp_v21;
    temp_v33 = temp_v9;
    temp_v35 = temp_v11;
    temp_v36 = temp_v12;
    temp_v37 = temp_v13;
    temp_v40 = 0;
    temp_v41 = 0;
    temp_v34 = temp_v10;
    temp_v42 = temp_v14;
    temp_v44 = temp_v16;
    temp_v45 = temp_v17;
    temp_v46 = temp_v18;
    temp_v43 = temp_v15;
    temp_v50[0] = temp_v22;
    temp_v50[1] = temp_v23;
    temp_v50[2] = temp_v24;
    temp_v50[3] = temp_v25;
    temp_v51 = temp_v26;
    temp_v52 = temp_v27;
    temp_v53 = temp_v28;
    temp_v54 = temp_v29;
    temp_v49 = temp_v30;
    temp_v57 = (unsigned char)(((unsigned int)temp_v19 << 0x1a) >> 0x1c);
    temp_v55 = temp_v0;
    bitsetSetBit(&temp_v31,*(unsigned short *)(temp_v4 + 0x38));
    FUN_0029c6b0(&temp_v31);
    temp_v47 = temp_v38;
    temp_v48 = temp_v39;
    if ((temp_v56 != (char)param_1[0x24]) || (temp_v6 = 1, temp_v49 != *(int *)(param_1 + 0x18))) {
      temp_v6 = 0;
    }
    if (temp_v31 != *param_1) {
      temp_v6 = 0;
    }
    if (temp_v32 != param_1[1]) {
      temp_v6 = 0;
    }
    if ((int)param_1[2] + (unsigned int)(unsigned short)param_1[0x2c8] != (int)temp_v33) {
      temp_v6 = 0;
    }
    if ((int)param_1[3] + (unsigned int)(unsigned short)param_1[0x2c9] != (int)temp_v34) {
      temp_v6 = 0;
    }
    if ((int)param_1[4] + (unsigned int)(unsigned short)param_1[0x2ca] != (int)temp_v35) {
      temp_v6 = 0;
    }
    if ((int)param_1[5] + (unsigned int)(unsigned short)param_1[0x2cb] != (int)temp_v36) {
      temp_v6 = 0;
    }
    if ((unsigned int)(unsigned short)param_1[0x2cc] + (int)param_1[6] != (int)temp_v37) {
      temp_v6 = 0;
    }
    temp_v7 = flagCountUnlockedSlots(param_1);
    temp_v3 = 0;
    if (temp_v3 < (int)temp_v7) {
      do {
        temp_v1 = param_1[temp_v3 + 0x1a];
        if (temp_v1 != 0) {
          temp_v4 = temp_v7 & 1;
          temp_v2 = temp_v7 & 1;
          if ((int)temp_v7 < 1) {
            temp_v4 = temp_v7;
            temp_v2 = 0;
          }
          temp_v5 = 0;
          if (0 < (int)temp_v4) {
            do {
              if (temp_v1 == temp_v50[temp_v5]) goto LAB_002cd61c;
              temp_v5 = temp_v5 + 1;
            } while ((int)temp_v5 < (int)temp_v2);
          }
          while ((temp_v5 = temp_v2, (int)temp_v7 > (int)temp_v5 && (temp_v1 != temp_v50[temp_v5]))) {
            if (temp_v1 == temp_v50[temp_v5 + 1]) {
              temp_v5 = temp_v5 + 1;
              break;
            }
            temp_v2 = temp_v5 + 2;
          }
LAB_002cd61c:
          if (temp_v5 == temp_v7) {
            return 0;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)temp_v7);
    }
  }
  return temp_v6;
}

} /* extern "C" */
