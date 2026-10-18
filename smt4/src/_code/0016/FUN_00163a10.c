/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00163a10` (_code @ 0x163a10, 0x738 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


int FUN_00163a10(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  char temp_v4;
  unsigned short temp_v5;
  char temp_v6;
  char temp_v7;
  char temp_v8;
  char temp_v9;
  char temp_v10;
  unsigned char temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned short temp_v22;
  unsigned short temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26;
  char temp_v27;
  char temp_v28;
  char temp_v29;
  char temp_v30;
  char temp_v31;
  char temp_v32;
  int temp_v33;
  int temp_v34;
  int temp_v35;
  int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned int temp_v47;
  unsigned char temp_v48;
  unsigned char temp_v49;
  unsigned char temp_v50;
  unsigned char temp_v51;
  int temp_v52;
  int temp_v53;
  char temp_v54;
  unsigned char temp_v55;
  unsigned char temp_v56;
  unsigned char temp_v57;
  unsigned char temp_v58;
  unsigned char temp_v59;
  unsigned char temp_v60;
  unsigned char temp_v61;
  unsigned char temp_v62;
  unsigned char temp_v63;
  char temp_v64;
  char temp_v65;
  char temp_v66;
  
  temp_v35 = *(int *)(param_1 + 8);
  temp_v53 = *(int *)(param_1 + 0xc);
  temp_v42 = *(unsigned int *)(param_1 + 0x10);
  temp_v45 = *(unsigned int *)(param_1 + 0x14);
  temp_v33 = *(int *)(param_1 + 4);
  temp_v36 = temp_v35 - 0x20;
  temp_v43 = temp_v42 | (temp_v42 << 8);
  temp_v46 = temp_v45 | (temp_v45 << 8);
  temp_v44 = temp_v43 | (temp_v43 << 0x10);
  temp_v47 = temp_v46 | (temp_v46 << 0x10);
  temp_v0 = (char)(temp_v47 >> 0x18);
  temp_v54 = (char)(temp_v44 >> 0x18);
  temp_v29 = (char)(temp_v44 >> 0x10);
  temp_v27 = (char)(temp_v47 >> 0x10);
  temp_v30 = (char)temp_v42;
  temp_v32 = (char)(temp_v43 >> 8);
  temp_v28 = (char)temp_v45;
  temp_v31 = (char)(temp_v46 >> 8);
  temp_v34 = temp_v36;
  if (temp_v36 != 0 && temp_v35 >= 0x20) {
    while( 1 ) {
      do {
        temp_v52 = temp_v34;
        HintPreloadData(temp_v33 + 0x20);
        temp_v45 = ((*(int *)(temp_v33 + 0x104) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x304) & 0xffff0000);
        temp_v44 = ((*(int *)(temp_v33 + 4) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x204) & 0xffff0000);
        temp_v40 = (*(unsigned int *)(temp_v33 + 0x108) & 0xffff) + *(int *)(temp_v33 + 0x308) * 0x10000;
        temp_v39 = (*(unsigned int *)(temp_v33 + 8) & 0xffff) + *(int *)(temp_v33 + 0x208) * 0x10000;
        temp_v43 = temp_v45 & 0xff00ff;
        temp_v42 = temp_v44 & 0xff00ff;
        temp_v37 = (temp_v45 >> 8) & 0xff00ff;
        temp_v45 = (temp_v44 >> 8) & 0xff00ff;
        temp_v44 = temp_v45 | (temp_v37 << 8);
        temp_v38 = temp_v40 & 0xff00ff;
        temp_v46 = temp_v39 & 0xff00ff;
        temp_v47 = temp_v46 | (temp_v38 << 8);
        temp_v40 = (temp_v40 >> 8) & 0xff00ff;
        temp_v39 = (temp_v39 >> 8) & 0xff00ff;
        temp_v41 = ~(temp_v39 | (temp_v40 << 8));
        temp_v2 = (unsigned char)temp_v42;
        temp_v58 = (unsigned char)temp_v43;
        temp_v59 = (unsigned char)(temp_v42 >> 0x10);
        temp_v60 = (unsigned char)(temp_v43 >> 0x10);
        temp_v1 = (unsigned char)temp_v45;
        temp_v3 = (unsigned char)temp_v46;
        temp_v55 = (unsigned char)temp_v37;
        temp_v61 = (unsigned char)temp_v38;
        temp_v56 = (unsigned char)(temp_v45 >> 0x10);
        temp_v62 = (unsigned char)(temp_v46 >> 0x10);
        temp_v57 = (unsigned char)(temp_v37 >> 0x10);
        temp_v63 = (unsigned char)(temp_v38 >> 0x10);
        temp_v7 = UnsignedSaturate(temp_v2 - temp_v1,0x10);
        temp_v12 = UnsignedSaturate(temp_v58 - temp_v55,0x10);
        temp_v17 = UnsignedSaturate(temp_v59 - temp_v56,0x10);
        temp_v21 = UnsignedSaturate(temp_v60 - temp_v57,0x10);
        temp_v8 = UnsignedSaturate(temp_v1 - temp_v2,0x10);
        temp_v13 = UnsignedSaturate(temp_v55 - temp_v58,0x10);
        temp_v18 = UnsignedSaturate(temp_v56 - temp_v59,0x10);
        temp_v22 = UnsignedSaturate(temp_v57 - temp_v60,0x10);
        temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v41 + (unsigned short)temp_v2) >> 1) + 1
                                          ) >> 1) + 1) >> 1);
        temp_v9 = UnsignedSaturate(temp_v6 - ' ',0x10);
        temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 8) + (unsigned short)temp_v58) >>
                                           1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
        temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x10) + (unsigned short)temp_v59)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v19 = UnsignedSaturate(temp_v65 - ' ',0x10);
        temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x18) + (unsigned short)temp_v60
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v23 = UnsignedSaturate(temp_v66 - ' ',0x10);
        temp_v59 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v60 = (unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8);
        temp_v10 = UnsignedSaturate(' ' - temp_v6,0x10);
        temp_v15 = UnsignedSaturate(' ' - temp_v64,0x10);
        temp_v19 = UnsignedSaturate(' ' - temp_v65,0x10);
        temp_v23 = UnsignedSaturate(' ' - temp_v66,0x10);
        temp_v2 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v58 = (unsigned char)temp_v19 | (unsigned char)(temp_v15 >> 8);
        temp_v66 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
        temp_v4 = UnsignedSaturate(temp_v66 + temp_v9,0x10);
        temp_v6 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v61) >> 1);
        temp_v19 = UnsignedSaturate(temp_v6 + (char)temp_v14,0x10);
        temp_v64 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v62) >> 1);
        temp_v23 = UnsignedSaturate(temp_v64 + temp_v60,0x10);
        temp_v65 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v63) >> 1);
        temp_v5 = UnsignedSaturate(temp_v65 + temp_v59,0x10);
        temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 - (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) - temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v23 >> 8)) - temp_v2,0x10);
        temp_v42 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) |
                 (unsigned int)temp_v11;
        temp_v66 = UnsignedSaturate(temp_v66 - temp_v9,0x10);
        temp_v19 = UnsignedSaturate(temp_v6 - (char)temp_v14,0x10);
        temp_v5 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
        temp_v25 = UnsignedSaturate(temp_v65 - temp_v59,0x10);
        temp_v6 = UnsignedSaturate(temp_v3 - (char)temp_v39,0x10);
        temp_v23 = UnsignedSaturate(temp_v61 - (char)temp_v40,0x10);
        temp_v64 = (char)(temp_v39 >> 0x10);
        temp_v14 = UnsignedSaturate(temp_v62 - temp_v64,0x10);
        temp_v65 = (char)(temp_v40 >> 0x10);
        temp_v26 = UnsignedSaturate(temp_v63 - temp_v65,0x10);
        temp_v59 = UnsignedSaturate(temp_v66 + temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 + (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v19 >> 8)) + temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v5 >> 8)) + temp_v2,0x10);
        temp_v45 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) | (unsigned int)temp_v59
        ;
        temp_v66 = UnsignedSaturate((char)temp_v39 - temp_v3,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v40 - temp_v61,0x10);
        temp_v15 = UnsignedSaturate(temp_v64 - temp_v62,0x10);
        temp_v25 = UnsignedSaturate(temp_v65 - temp_v63,0x10);
        temp_v48 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v13 + (char)temp_v12) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v0;
        temp_v43 = ((temp_v48 * temp_v44 + !temp_v48 * temp_v42) & 0xff) |
                 ((temp_v49 * temp_v44 + !temp_v49 * temp_v42) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v42) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v42) & 0xff000000);
        temp_v46 = ((temp_v48 * temp_v47 + !temp_v48 * temp_v45) & 0xff) |
                 ((temp_v49 * temp_v47 + !temp_v49 * temp_v45) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v45) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v45) & 0xff000000);
        temp_v65 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
        temp_v5 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
        temp_v13 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
        temp_v18 = UnsignedSaturate(temp_v57 - temp_v63,0x10);
        temp_v64 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
        temp_v12 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
        temp_v17 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
        temp_v21 = UnsignedSaturate(temp_v63 - temp_v57,0x10);
        temp_v48 = -1 < (int)(char)(temp_v66 + temp_v6) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v19 + (char)temp_v23) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v19 >> 8)) +
                                 ((unsigned char)temp_v14 | (unsigned char)(temp_v23 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v25 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v26 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v0;
        temp_v42 = temp_v48 * temp_v44 + !temp_v48 * temp_v43;
        temp_v45 = (temp_v42 & 0xff) | ((temp_v49 * temp_v44 + !temp_v49 * temp_v43) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v43) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v43) & 0xff000000);
        temp_v43 = temp_v48 * temp_v47 + !temp_v48 * temp_v46;
        temp_v46 = (temp_v43 & 0xff) | ((temp_v49 * temp_v47 + !temp_v49 * temp_v46) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v46) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v46) & 0xff000000);
        temp_v48 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v30;
        temp_v49 = -1 < (int)(char)((char)temp_v5 + (char)temp_v12) - (int)temp_v32;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v13 | (unsigned char)(temp_v5 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v29;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v54;
        *(unsigned char *)(temp_v33 + 7) = temp_v48 * temp_v1 + !temp_v48 * (char)temp_v42;
        *(unsigned char *)(temp_v33 + 8) = temp_v48 * temp_v3 + !temp_v48 * (char)temp_v43;
        *(char *)(temp_v33 + 0x107) = (char)((temp_v49 * temp_v44 + !temp_v49 * temp_v45) >> 8);
        *(char *)(temp_v33 + 0x108) = (char)((temp_v49 * temp_v47 + !temp_v49 * temp_v46) >> 8);
        *(char *)(temp_v33 + 0x207) = (char)((temp_v50 * temp_v44 + !temp_v50 * temp_v45) >> 0x10);
        *(char *)(temp_v33 + 0x208) = (char)((temp_v50 * temp_v47 + !temp_v50 * temp_v46) >> 0x10);
        *(char *)(temp_v33 + 0x307) = (char)((temp_v51 * temp_v44 + !temp_v51 * temp_v45) >> 0x18);
        *(char *)(temp_v33 + 0x308) = (char)((temp_v51 * temp_v47 + !temp_v51 * temp_v46) >> 0x18);
        HintPreloadData(temp_v33 + 0x120);
        temp_v45 = ((*(int *)(temp_v33 + 0x10c) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x30c) & 0xffff0000);
        temp_v44 = ((*(int *)(temp_v33 + 0xc) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x20c) & 0xffff0000);
        temp_v40 = (*(unsigned int *)(temp_v33 + 0x110) & 0xffff) + *(int *)(temp_v33 + 0x310) * 0x10000;
        temp_v39 = (*(unsigned int *)(temp_v33 + 0x10) & 0xffff) + *(int *)(temp_v33 + 0x210) * 0x10000;
        temp_v43 = temp_v45 & 0xff00ff;
        temp_v42 = temp_v44 & 0xff00ff;
        temp_v37 = (temp_v45 >> 8) & 0xff00ff;
        temp_v45 = (temp_v44 >> 8) & 0xff00ff;
        temp_v44 = temp_v45 | (temp_v37 << 8);
        temp_v38 = temp_v40 & 0xff00ff;
        temp_v46 = temp_v39 & 0xff00ff;
        temp_v47 = temp_v46 | (temp_v38 << 8);
        temp_v40 = (temp_v40 >> 8) & 0xff00ff;
        temp_v39 = (temp_v39 >> 8) & 0xff00ff;
        temp_v41 = ~(temp_v39 | (temp_v40 << 8));
        temp_v60 = (unsigned char)temp_v42;
        temp_v58 = (unsigned char)temp_v43;
        temp_v59 = (unsigned char)(temp_v42 >> 0x10);
        temp_v2 = (unsigned char)(temp_v43 >> 0x10);
        temp_v55 = (unsigned char)temp_v45;
        temp_v63 = (unsigned char)temp_v46;
        temp_v1 = (unsigned char)temp_v37;
        temp_v62 = (unsigned char)temp_v38;
        temp_v56 = (unsigned char)(temp_v45 >> 0x10);
        temp_v61 = (unsigned char)(temp_v46 >> 0x10);
        temp_v57 = (unsigned char)(temp_v37 >> 0x10);
        temp_v3 = (unsigned char)(temp_v38 >> 0x10);
        temp_v7 = UnsignedSaturate(temp_v60 - temp_v55,0x10);
        temp_v12 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
        temp_v17 = UnsignedSaturate(temp_v59 - temp_v56,0x10);
        temp_v21 = UnsignedSaturate(temp_v2 - temp_v57,0x10);
        temp_v8 = UnsignedSaturate(temp_v55 - temp_v60,0x10);
        temp_v13 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
        temp_v18 = UnsignedSaturate(temp_v56 - temp_v59,0x10);
        temp_v22 = UnsignedSaturate(temp_v57 - temp_v2,0x10);
        temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v41 + (unsigned short)temp_v60) >> 1) +
                                          1) >> 1) + 1) >> 1);
        temp_v9 = UnsignedSaturate(temp_v65 - ' ',0x10);
        temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 8) + (unsigned short)temp_v58) >>
                                           1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
        temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x10) + (unsigned short)temp_v59)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v19 = UnsignedSaturate(temp_v6 - ' ',0x10);
        temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x18) + (unsigned short)temp_v2)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v23 = UnsignedSaturate(temp_v66 - ' ',0x10);
        temp_v60 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v59 = (unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8);
        temp_v10 = UnsignedSaturate(' ' - temp_v65,0x10);
        temp_v15 = UnsignedSaturate(' ' - temp_v64,0x10);
        temp_v19 = UnsignedSaturate(' ' - temp_v6,0x10);
        temp_v23 = UnsignedSaturate(' ' - temp_v66,0x10);
        temp_v2 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v58 = (unsigned char)temp_v19 | (unsigned char)(temp_v15 >> 8);
        temp_v6 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v63) >> 1);
        temp_v4 = UnsignedSaturate(temp_v6 + temp_v9,0x10);
        temp_v64 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v62) >> 1);
        temp_v19 = UnsignedSaturate(temp_v64 + (char)temp_v14,0x10);
        temp_v66 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v61) >> 1);
        temp_v23 = UnsignedSaturate(temp_v66 + temp_v59,0x10);
        temp_v65 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v3) >> 1);
        temp_v5 = UnsignedSaturate(temp_v65 + temp_v60,0x10);
        temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 - (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) - temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v23 >> 8)) - temp_v2,0x10);
        temp_v42 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) |
                 (unsigned int)temp_v11;
        temp_v6 = UnsignedSaturate(temp_v6 - temp_v9,0x10);
        temp_v19 = UnsignedSaturate(temp_v64 - (char)temp_v14,0x10);
        temp_v5 = UnsignedSaturate(temp_v66 - temp_v59,0x10);
        temp_v25 = UnsignedSaturate(temp_v65 - temp_v60,0x10);
        temp_v66 = UnsignedSaturate(temp_v63 - (char)temp_v39,0x10);
        temp_v23 = UnsignedSaturate(temp_v62 - (char)temp_v40,0x10);
        temp_v64 = (char)(temp_v39 >> 0x10);
        temp_v14 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
        temp_v65 = (char)(temp_v40 >> 0x10);
        temp_v26 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
        temp_v59 = UnsignedSaturate(temp_v6 + temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 + (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v19 >> 8)) + temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v5 >> 8)) + temp_v2,0x10);
        temp_v45 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) | (unsigned int)temp_v59
        ;
        temp_v6 = UnsignedSaturate((char)temp_v39 - temp_v63,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v40 - temp_v62,0x10);
        temp_v15 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
        temp_v25 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
        temp_v48 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v13 + (char)temp_v12) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v0;
        temp_v43 = ((temp_v48 * temp_v44 + !temp_v48 * temp_v42) & 0xff) |
                 ((temp_v49 * temp_v44 + !temp_v49 * temp_v42) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v42) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v42) & 0xff000000);
        temp_v46 = ((temp_v48 * temp_v47 + !temp_v48 * temp_v45) & 0xff) |
                 ((temp_v49 * temp_v47 + !temp_v49 * temp_v45) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v45) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v45) & 0xff000000);
        temp_v65 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
        temp_v5 = UnsignedSaturate(temp_v1 - temp_v62,0x10);
        temp_v13 = UnsignedSaturate(temp_v56 - temp_v61,0x10);
        temp_v18 = UnsignedSaturate(temp_v57 - temp_v3,0x10);
        temp_v64 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
        temp_v12 = UnsignedSaturate(temp_v62 - temp_v1,0x10);
        temp_v17 = UnsignedSaturate(temp_v61 - temp_v56,0x10);
        temp_v21 = UnsignedSaturate(temp_v3 - temp_v57,0x10);
        temp_v48 = -1 < (int)(char)(temp_v6 + temp_v66) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v19 + (char)temp_v23) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v19 >> 8)) +
                                 ((unsigned char)temp_v14 | (unsigned char)(temp_v23 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v25 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v26 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v0;
        temp_v42 = temp_v48 * temp_v44 + !temp_v48 * temp_v43;
        temp_v45 = (temp_v42 & 0xff) | ((temp_v49 * temp_v44 + !temp_v49 * temp_v43) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v43) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v43) & 0xff000000);
        temp_v43 = temp_v48 * temp_v47 + !temp_v48 * temp_v46;
        temp_v46 = (temp_v43 & 0xff) | ((temp_v49 * temp_v47 + !temp_v49 * temp_v46) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v46) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v46) & 0xff000000);
        temp_v48 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v30;
        temp_v49 = -1 < (int)(char)((char)temp_v5 + (char)temp_v12) - (int)temp_v32;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v13 | (unsigned char)(temp_v5 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v29;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v54;
        *(unsigned char *)(temp_v33 + 0xf) = temp_v48 * temp_v55 + !temp_v48 * (char)temp_v42;
        *(unsigned char *)(temp_v33 + 0x10) = temp_v48 * temp_v63 + !temp_v48 * (char)temp_v43;
        *(char *)(temp_v33 + 0x10f) = (char)((temp_v49 * temp_v44 + !temp_v49 * temp_v45) >> 8);
        *(char *)(temp_v33 + 0x110) = (char)((temp_v49 * temp_v47 + !temp_v49 * temp_v46) >> 8);
        *(char *)(temp_v33 + 0x20f) = (char)((temp_v50 * temp_v44 + !temp_v50 * temp_v45) >> 0x10);
        *(char *)(temp_v33 + 0x210) = (char)((temp_v50 * temp_v47 + !temp_v50 * temp_v46) >> 0x10);
        *(char *)(temp_v33 + 0x30f) = (char)((temp_v51 * temp_v44 + !temp_v51 * temp_v45) >> 0x18);
        *(char *)(temp_v33 + 0x310) = (char)((temp_v51 * temp_v47 + !temp_v51 * temp_v46) >> 0x18);
        HintPreloadData(temp_v33 + 0x220);
        temp_v45 = ((*(int *)(temp_v33 + 0x114) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x314) & 0xffff0000);
        temp_v44 = ((*(int *)(temp_v33 + 0x14) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x214) & 0xffff0000);
        temp_v40 = (*(unsigned int *)(temp_v33 + 0x118) & 0xffff) + *(int *)(temp_v33 + 0x318) * 0x10000;
        temp_v39 = (*(unsigned int *)(temp_v33 + 0x18) & 0xffff) + *(int *)(temp_v33 + 0x218) * 0x10000;
        temp_v43 = temp_v45 & 0xff00ff;
        temp_v42 = temp_v44 & 0xff00ff;
        temp_v37 = (temp_v45 >> 8) & 0xff00ff;
        temp_v45 = (temp_v44 >> 8) & 0xff00ff;
        temp_v44 = temp_v45 | (temp_v37 << 8);
        temp_v38 = temp_v40 & 0xff00ff;
        temp_v46 = temp_v39 & 0xff00ff;
        temp_v47 = temp_v46 | (temp_v38 << 8);
        temp_v40 = (temp_v40 >> 8) & 0xff00ff;
        temp_v39 = (temp_v39 >> 8) & 0xff00ff;
        temp_v41 = ~(temp_v39 | (temp_v40 << 8));
        temp_v2 = (unsigned char)temp_v42;
        temp_v58 = (unsigned char)temp_v43;
        temp_v60 = (unsigned char)(temp_v42 >> 0x10);
        temp_v59 = (unsigned char)(temp_v43 >> 0x10);
        temp_v56 = (unsigned char)temp_v45;
        temp_v63 = (unsigned char)temp_v46;
        temp_v57 = (unsigned char)temp_v37;
        temp_v3 = (unsigned char)temp_v38;
        temp_v1 = (unsigned char)(temp_v45 >> 0x10);
        temp_v61 = (unsigned char)(temp_v46 >> 0x10);
        temp_v55 = (unsigned char)(temp_v37 >> 0x10);
        temp_v62 = (unsigned char)(temp_v38 >> 0x10);
        temp_v7 = UnsignedSaturate(temp_v2 - temp_v56,0x10);
        temp_v12 = UnsignedSaturate(temp_v58 - temp_v57,0x10);
        temp_v17 = UnsignedSaturate(temp_v60 - temp_v1,0x10);
        temp_v21 = UnsignedSaturate(temp_v59 - temp_v55,0x10);
        temp_v8 = UnsignedSaturate(temp_v56 - temp_v2,0x10);
        temp_v13 = UnsignedSaturate(temp_v57 - temp_v58,0x10);
        temp_v18 = UnsignedSaturate(temp_v1 - temp_v60,0x10);
        temp_v22 = UnsignedSaturate(temp_v55 - temp_v59,0x10);
        temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v41 + (unsigned short)temp_v2) >> 1) + 1
                                          ) >> 1) + 1) >> 1);
        temp_v9 = UnsignedSaturate(temp_v66 - ' ',0x10);
        temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 8) + (unsigned short)temp_v58) >>
                                           1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v6 - ' ',0x10);
        temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x10) + (unsigned short)temp_v60
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v19 = UnsignedSaturate(temp_v64 - ' ',0x10);
        temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x18) + (unsigned short)temp_v59)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v23 = UnsignedSaturate(temp_v65 - ' ',0x10);
        temp_v60 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v59 = (unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8);
        temp_v10 = UnsignedSaturate(' ' - temp_v66,0x10);
        temp_v15 = UnsignedSaturate(' ' - temp_v6,0x10);
        temp_v19 = UnsignedSaturate(' ' - temp_v64,0x10);
        temp_v23 = UnsignedSaturate(' ' - temp_v65,0x10);
        temp_v2 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v58 = (unsigned char)temp_v19 | (unsigned char)(temp_v15 >> 8);
        temp_v65 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v63) >> 1);
        temp_v4 = UnsignedSaturate(temp_v65 + temp_v9,0x10);
        temp_v64 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v3) >> 1);
        temp_v19 = UnsignedSaturate(temp_v64 + (char)temp_v14,0x10);
        temp_v6 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v61) >> 1);
        temp_v23 = UnsignedSaturate(temp_v6 + temp_v59,0x10);
        temp_v66 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v62) >> 1);
        temp_v5 = UnsignedSaturate(temp_v66 + temp_v60,0x10);
        temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 - (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) - temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v23 >> 8)) - temp_v2,0x10);
        temp_v42 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) |
                 (unsigned int)temp_v11;
        temp_v4 = UnsignedSaturate(temp_v65 - temp_v9,0x10);
        temp_v19 = UnsignedSaturate(temp_v64 - (char)temp_v14,0x10);
        temp_v5 = UnsignedSaturate(temp_v6 - temp_v59,0x10);
        temp_v25 = UnsignedSaturate(temp_v66 - temp_v60,0x10);
        temp_v6 = UnsignedSaturate(temp_v63 - (char)temp_v39,0x10);
        temp_v23 = UnsignedSaturate(temp_v3 - (char)temp_v40,0x10);
        temp_v64 = (char)(temp_v39 >> 0x10);
        temp_v14 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
        temp_v65 = (char)(temp_v40 >> 0x10);
        temp_v26 = UnsignedSaturate(temp_v62 - temp_v65,0x10);
        temp_v59 = UnsignedSaturate(temp_v4 + temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 + (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v19 >> 8)) + temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v5 >> 8)) + temp_v2,0x10);
        temp_v45 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) | (unsigned int)temp_v59
        ;
        temp_v66 = UnsignedSaturate((char)temp_v39 - temp_v63,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v40 - temp_v3,0x10);
        temp_v15 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
        temp_v25 = UnsignedSaturate(temp_v65 - temp_v62,0x10);
        temp_v48 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v13 + (char)temp_v12) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v0;
        temp_v43 = ((temp_v48 * temp_v44 + !temp_v48 * temp_v42) & 0xff) |
                 ((temp_v49 * temp_v44 + !temp_v49 * temp_v42) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v42) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v42) & 0xff000000);
        temp_v46 = ((temp_v48 * temp_v47 + !temp_v48 * temp_v45) & 0xff) |
                 ((temp_v49 * temp_v47 + !temp_v49 * temp_v45) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v45) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v45) & 0xff000000);
        temp_v65 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
        temp_v5 = UnsignedSaturate(temp_v57 - temp_v3,0x10);
        temp_v13 = UnsignedSaturate(temp_v1 - temp_v61,0x10);
        temp_v18 = UnsignedSaturate(temp_v55 - temp_v62,0x10);
        temp_v64 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
        temp_v12 = UnsignedSaturate(temp_v3 - temp_v57,0x10);
        temp_v17 = UnsignedSaturate(temp_v61 - temp_v1,0x10);
        temp_v21 = UnsignedSaturate(temp_v62 - temp_v55,0x10);
        temp_v48 = -1 < (int)(char)(temp_v66 + temp_v6) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v19 + (char)temp_v23) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v19 >> 8)) +
                                 ((unsigned char)temp_v14 | (unsigned char)(temp_v23 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v25 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v26 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v0;
        temp_v42 = temp_v48 * temp_v44 + !temp_v48 * temp_v43;
        temp_v45 = (temp_v42 & 0xff) | ((temp_v49 * temp_v44 + !temp_v49 * temp_v43) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v43) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v43) & 0xff000000);
        temp_v43 = temp_v48 * temp_v47 + !temp_v48 * temp_v46;
        temp_v46 = (temp_v43 & 0xff) | ((temp_v49 * temp_v47 + !temp_v49 * temp_v46) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v46) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v46) & 0xff000000);
        temp_v48 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v30;
        temp_v49 = -1 < (int)(char)((char)temp_v5 + (char)temp_v12) - (int)temp_v32;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v13 | (unsigned char)(temp_v5 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v29;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v54;
        *(unsigned char *)(temp_v33 + 0x17) = temp_v48 * temp_v56 + !temp_v48 * (char)temp_v42;
        *(unsigned char *)(temp_v33 + 0x18) = temp_v48 * temp_v63 + !temp_v48 * (char)temp_v43;
        *(char *)(temp_v33 + 0x117) = (char)((temp_v49 * temp_v44 + !temp_v49 * temp_v45) >> 8);
        *(char *)(temp_v33 + 0x118) = (char)((temp_v49 * temp_v47 + !temp_v49 * temp_v46) >> 8);
        *(char *)(temp_v33 + 0x217) = (char)((temp_v50 * temp_v44 + !temp_v50 * temp_v45) >> 0x10);
        *(char *)(temp_v33 + 0x218) = (char)((temp_v50 * temp_v47 + !temp_v50 * temp_v46) >> 0x10);
        *(char *)(temp_v33 + 0x317) = (char)((temp_v51 * temp_v44 + !temp_v51 * temp_v45) >> 0x18);
        *(char *)(temp_v33 + 0x318) = (char)((temp_v51 * temp_v47 + !temp_v51 * temp_v46) >> 0x18);
        HintPreloadData(temp_v33 + 0x340);
        temp_v45 = ((*(int *)(temp_v33 + 0x11c) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x31c) & 0xffff0000);
        temp_v44 = ((*(int *)(temp_v33 + 0x1c) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v33 + 0x21c) & 0xffff0000);
        temp_v40 = (*(unsigned int *)(temp_v33 + 0x120) & 0xffff) + *(int *)(temp_v33 + 800) * 0x10000;
        temp_v39 = (*(unsigned int *)(temp_v33 + 0x20) & 0xffff) + *(int *)(temp_v33 + 0x220) * 0x10000;
        temp_v43 = temp_v45 & 0xff00ff;
        temp_v42 = temp_v44 & 0xff00ff;
        temp_v37 = (temp_v45 >> 8) & 0xff00ff;
        temp_v45 = (temp_v44 >> 8) & 0xff00ff;
        temp_v44 = temp_v45 | (temp_v37 << 8);
        temp_v38 = temp_v40 & 0xff00ff;
        temp_v46 = temp_v39 & 0xff00ff;
        temp_v47 = temp_v46 | (temp_v38 << 8);
        temp_v40 = (temp_v40 >> 8) & 0xff00ff;
        temp_v39 = (temp_v39 >> 8) & 0xff00ff;
        temp_v41 = ~(temp_v39 | (temp_v40 << 8));
        temp_v59 = (unsigned char)temp_v42;
        temp_v2 = (unsigned char)temp_v43;
        temp_v58 = (unsigned char)(temp_v42 >> 0x10);
        temp_v60 = (unsigned char)(temp_v43 >> 0x10);
        temp_v57 = (unsigned char)temp_v45;
        temp_v61 = (unsigned char)temp_v46;
        temp_v1 = (unsigned char)temp_v37;
        temp_v63 = (unsigned char)temp_v38;
        temp_v55 = (unsigned char)(temp_v45 >> 0x10);
        temp_v62 = (unsigned char)(temp_v46 >> 0x10);
        temp_v56 = (unsigned char)(temp_v37 >> 0x10);
        temp_v3 = (unsigned char)(temp_v38 >> 0x10);
        temp_v7 = UnsignedSaturate(temp_v59 - temp_v57,0x10);
        temp_v12 = UnsignedSaturate(temp_v2 - temp_v1,0x10);
        temp_v17 = UnsignedSaturate(temp_v58 - temp_v55,0x10);
        temp_v21 = UnsignedSaturate(temp_v60 - temp_v56,0x10);
        temp_v8 = UnsignedSaturate(temp_v57 - temp_v59,0x10);
        temp_v13 = UnsignedSaturate(temp_v1 - temp_v2,0x10);
        temp_v18 = UnsignedSaturate(temp_v55 - temp_v58,0x10);
        temp_v22 = UnsignedSaturate(temp_v56 - temp_v60,0x10);
        temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v41 + (unsigned short)temp_v59) >> 1) + 1
                                          ) >> 1) + 1) >> 1);
        temp_v9 = UnsignedSaturate(temp_v66 - ' ',0x10);
        temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 8) + (unsigned short)temp_v2) >>
                                           1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v6 - ' ',0x10);
        temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x10) + (unsigned short)temp_v58)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v19 = UnsignedSaturate(temp_v64 - ' ',0x10);
        temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x18) + (unsigned short)temp_v60
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v23 = UnsignedSaturate(temp_v65 - ' ',0x10);
        temp_v60 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v59 = (unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8);
        temp_v10 = UnsignedSaturate(' ' - temp_v66,0x10);
        temp_v15 = UnsignedSaturate(' ' - temp_v6,0x10);
        temp_v19 = UnsignedSaturate(' ' - temp_v64,0x10);
        temp_v23 = UnsignedSaturate(' ' - temp_v65,0x10);
        temp_v2 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
        temp_v58 = (unsigned char)temp_v19 | (unsigned char)(temp_v15 >> 8);
        temp_v65 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v61) >> 1);
        temp_v4 = UnsignedSaturate(temp_v65 + temp_v9,0x10);
        temp_v64 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v63) >> 1);
        temp_v19 = UnsignedSaturate(temp_v64 + (char)temp_v14,0x10);
        temp_v6 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v62) >> 1);
        temp_v23 = UnsignedSaturate(temp_v6 + temp_v59,0x10);
        temp_v66 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v3) >> 1);
        temp_v5 = UnsignedSaturate(temp_v66 + temp_v60,0x10);
        temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 - (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) - temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v23 >> 8)) - temp_v2,0x10);
        temp_v42 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) |
                 (unsigned int)temp_v11;
        temp_v4 = UnsignedSaturate(temp_v65 - temp_v9,0x10);
        temp_v19 = UnsignedSaturate(temp_v64 - (char)temp_v14,0x10);
        temp_v5 = UnsignedSaturate(temp_v6 - temp_v59,0x10);
        temp_v25 = UnsignedSaturate(temp_v66 - temp_v60,0x10);
        temp_v6 = UnsignedSaturate(temp_v61 - (char)temp_v39,0x10);
        temp_v23 = UnsignedSaturate(temp_v63 - (char)temp_v40,0x10);
        temp_v65 = (char)(temp_v39 >> 0x10);
        temp_v14 = UnsignedSaturate(temp_v62 - temp_v65,0x10);
        temp_v64 = (char)(temp_v40 >> 0x10);
        temp_v26 = UnsignedSaturate(temp_v3 - temp_v64,0x10);
        temp_v59 = UnsignedSaturate(temp_v4 + temp_v10,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v19 + (char)temp_v15,0x10);
        temp_v20 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v19 >> 8)) + temp_v58,0x10);
        temp_v24 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v5 >> 8)) + temp_v2,0x10);
        temp_v45 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) | (unsigned int)temp_v59
        ;
        temp_v66 = UnsignedSaturate((char)temp_v39 - temp_v61,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v40 - temp_v63,0x10);
        temp_v15 = UnsignedSaturate(temp_v65 - temp_v62,0x10);
        temp_v25 = UnsignedSaturate(temp_v64 - temp_v3,0x10);
        temp_v48 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v13 + (char)temp_v12) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v0;
        temp_v43 = ((temp_v48 * temp_v44 + !temp_v48 * temp_v42) & 0xff) |
                 ((temp_v49 * temp_v44 + !temp_v49 * temp_v42) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v42) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v42) & 0xff000000);
        temp_v46 = ((temp_v48 * temp_v47 + !temp_v48 * temp_v45) & 0xff) |
                 ((temp_v49 * temp_v47 + !temp_v49 * temp_v45) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v45) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v45) & 0xff000000);
        temp_v65 = UnsignedSaturate(temp_v57 - temp_v61,0x10);
        temp_v5 = UnsignedSaturate(temp_v1 - temp_v63,0x10);
        temp_v13 = UnsignedSaturate(temp_v55 - temp_v62,0x10);
        temp_v18 = UnsignedSaturate(temp_v56 - temp_v3,0x10);
        temp_v64 = UnsignedSaturate(temp_v61 - temp_v57,0x10);
        temp_v12 = UnsignedSaturate(temp_v63 - temp_v1,0x10);
        temp_v17 = UnsignedSaturate(temp_v62 - temp_v55,0x10);
        temp_v21 = UnsignedSaturate(temp_v3 - temp_v56,0x10);
        temp_v48 = -1 < (int)(char)(temp_v66 + temp_v6) - (int)temp_v28;
        temp_v49 = -1 < (int)(char)((char)temp_v19 + (char)temp_v23) - (int)temp_v31;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v19 >> 8)) +
                                 ((unsigned char)temp_v14 | (unsigned char)(temp_v23 >> 8))) - (int)temp_v27;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v25 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v26 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v0;
        temp_v42 = temp_v48 * temp_v44 + !temp_v48 * temp_v43;
        temp_v45 = (temp_v42 & 0xff) | ((temp_v49 * temp_v44 + !temp_v49 * temp_v43) & 0xff00) |
                 ((temp_v50 * temp_v44 + !temp_v50 * temp_v43) & 0xff0000) |
                 ((temp_v51 * temp_v44 + !temp_v51 * temp_v43) & 0xff000000);
        temp_v43 = temp_v48 * temp_v47 + !temp_v48 * temp_v46;
        temp_v46 = (temp_v43 & 0xff) | ((temp_v49 * temp_v47 + !temp_v49 * temp_v46) & 0xff00) |
                 ((temp_v50 * temp_v47 + !temp_v50 * temp_v46) & 0xff0000) |
                 ((temp_v51 * temp_v47 + !temp_v51 * temp_v46) & 0xff000000);
        temp_v48 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v30;
        temp_v49 = -1 < (int)(char)((char)temp_v5 + (char)temp_v12) - (int)temp_v32;
        temp_v50 = -1 < (int)(char)(((unsigned char)temp_v13 | (unsigned char)(temp_v5 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v29;
        temp_v51 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v54;
        *(unsigned char *)(temp_v33 + 0x1f) = temp_v48 * temp_v57 + !temp_v48 * (char)temp_v42;
        *(unsigned char *)(temp_v33 + 0x20) = temp_v48 * temp_v61 + !temp_v48 * (char)temp_v43;
        *(char *)(temp_v33 + 0x11f) = (char)((temp_v49 * temp_v44 + !temp_v49 * temp_v45) >> 8);
        *(char *)(temp_v33 + 0x120) = (char)((temp_v49 * temp_v47 + !temp_v49 * temp_v46) >> 8);
        *(char *)(temp_v33 + 0x21f) = (char)((temp_v50 * temp_v44 + !temp_v50 * temp_v45) >> 0x10);
        *(char *)(temp_v33 + 0x220) = (char)((temp_v50 * temp_v47 + !temp_v50 * temp_v46) >> 0x10);
        *(char *)(temp_v33 + 799) = (char)((temp_v51 * temp_v44 + !temp_v51 * temp_v45) >> 0x18);
        *(char *)(temp_v33 + 800) = (char)((temp_v51 * temp_v47 + !temp_v51 * temp_v46) >> 0x18);
        temp_v33 = temp_v33 + 0x20;
        temp_v34 = temp_v52 - 0x20;
      } while (temp_v52 - 0x20 != 0 && temp_v52 >= 0x20);
      temp_v52 = temp_v52 - 8;
      if (temp_v52 != 0) {
        do {
          temp_v45 = ((*(int *)(temp_v33 + 0x104) >> 0x10) & 0xffffU) +
                   (*(unsigned int *)(temp_v33 + 0x304) & 0xffff0000);
          temp_v44 = ((*(int *)(temp_v33 + 4) >> 0x10) & 0xffffU) +
                   (*(unsigned int *)(temp_v33 + 0x204) & 0xffff0000);
          temp_v40 = (*(unsigned int *)(temp_v33 + 0x108) & 0xffff) + *(int *)(temp_v33 + 0x308) * 0x10000;
          temp_v39 = (*(unsigned int *)(temp_v33 + 8) & 0xffff) + *(int *)(temp_v33 + 0x208) * 0x10000;
          temp_v43 = temp_v45 & 0xff00ff;
          temp_v42 = temp_v44 & 0xff00ff;
          temp_v37 = (temp_v45 >> 8) & 0xff00ff;
          temp_v45 = (temp_v44 >> 8) & 0xff00ff;
          temp_v44 = temp_v45 | (temp_v37 << 8);
          temp_v38 = temp_v40 & 0xff00ff;
          temp_v46 = temp_v39 & 0xff00ff;
          temp_v47 = temp_v46 | (temp_v38 << 8);
          temp_v40 = (temp_v40 >> 8) & 0xff00ff;
          temp_v39 = (temp_v39 >> 8) & 0xff00ff;
          temp_v41 = ~(temp_v39 | (temp_v40 << 8));
          temp_v59 = (unsigned char)temp_v42;
          temp_v2 = (unsigned char)temp_v43;
          temp_v58 = (unsigned char)(temp_v42 >> 0x10);
          temp_v60 = (unsigned char)(temp_v43 >> 0x10);
          temp_v56 = (unsigned char)temp_v45;
          temp_v63 = (unsigned char)temp_v46;
          temp_v57 = (unsigned char)temp_v37;
          temp_v62 = (unsigned char)temp_v38;
          temp_v55 = (unsigned char)(temp_v45 >> 0x10);
          temp_v61 = (unsigned char)(temp_v46 >> 0x10);
          temp_v1 = (unsigned char)(temp_v37 >> 0x10);
          temp_v3 = (unsigned char)(temp_v38 >> 0x10);
          temp_v7 = UnsignedSaturate(temp_v59 - temp_v56,0x10);
          temp_v12 = UnsignedSaturate(temp_v2 - temp_v57,0x10);
          temp_v17 = UnsignedSaturate(temp_v58 - temp_v55,0x10);
          temp_v21 = UnsignedSaturate(temp_v60 - temp_v1,0x10);
          temp_v8 = UnsignedSaturate(temp_v56 - temp_v59,0x10);
          temp_v13 = UnsignedSaturate(temp_v57 - temp_v2,0x10);
          temp_v18 = UnsignedSaturate(temp_v55 - temp_v58,0x10);
          temp_v22 = UnsignedSaturate(temp_v1 - temp_v60,0x10);
          temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v41 + (unsigned short)temp_v59) >> 1) +
                                            1) >> 1) + 1) >> 1);
          temp_v9 = UnsignedSaturate(temp_v64 - ' ',0x10);
          temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 8) + (unsigned short)temp_v2)
                                             >> 1) + 1) >> 1) + 1) >> 1);
          temp_v14 = UnsignedSaturate(temp_v6 - ' ',0x10);
          temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x10) +
                                                      (unsigned short)temp_v58) >> 1) + 1) >> 1) + 1) >> 1);
          temp_v19 = UnsignedSaturate(temp_v66 - ' ',0x10);
          temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x18) +
                                                      (unsigned short)temp_v60) >> 1) + 1) >> 1) + 1) >> 1);
          temp_v23 = UnsignedSaturate(temp_v65 - ' ',0x10);
          temp_v60 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
          temp_v59 = (unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8);
          temp_v10 = UnsignedSaturate(' ' - temp_v64,0x10);
          temp_v15 = UnsignedSaturate(' ' - temp_v6,0x10);
          temp_v19 = UnsignedSaturate(' ' - temp_v66,0x10);
          temp_v23 = UnsignedSaturate(' ' - temp_v65,0x10);
          temp_v2 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
          temp_v58 = (unsigned char)temp_v19 | (unsigned char)(temp_v15 >> 8);
          temp_v66 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v63) >> 1);
          temp_v4 = UnsignedSaturate(temp_v66 + temp_v9,0x10);
          temp_v6 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v62) >> 1);
          temp_v19 = UnsignedSaturate(temp_v6 + (char)temp_v14,0x10);
          temp_v65 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v61) >> 1);
          temp_v23 = UnsignedSaturate(temp_v65 + temp_v59,0x10);
          temp_v64 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
          temp_v5 = UnsignedSaturate(temp_v64 + temp_v60,0x10);
          temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
          temp_v16 = UnsignedSaturate((char)temp_v19 - (char)temp_v15,0x10);
          temp_v20 = UnsignedSaturate(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) - temp_v58,0x10);
          temp_v24 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v23 >> 8)) - temp_v2,0x10);
          temp_v42 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) |
                   (unsigned int)temp_v11;
          temp_v66 = UnsignedSaturate(temp_v66 - temp_v9,0x10);
          temp_v19 = UnsignedSaturate(temp_v6 - (char)temp_v14,0x10);
          temp_v5 = UnsignedSaturate(temp_v65 - temp_v59,0x10);
          temp_v25 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
          temp_v6 = UnsignedSaturate(temp_v63 - (char)temp_v39,0x10);
          temp_v23 = UnsignedSaturate(temp_v62 - (char)temp_v40,0x10);
          temp_v64 = (char)(temp_v39 >> 0x10);
          temp_v14 = UnsignedSaturate(temp_v61 - temp_v64,0x10);
          temp_v65 = (char)(temp_v40 >> 0x10);
          temp_v26 = UnsignedSaturate(temp_v3 - temp_v65,0x10);
          temp_v59 = UnsignedSaturate(temp_v66 + temp_v10,0x10);
          temp_v16 = UnsignedSaturate((char)temp_v19 + (char)temp_v15,0x10);
          temp_v20 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v19 >> 8)) + temp_v58,0x10);
          temp_v24 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v5 >> 8)) + temp_v2,0x10);
          temp_v45 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) |
                   (unsigned int)temp_v59;
          temp_v66 = UnsignedSaturate((char)temp_v39 - temp_v63,0x10);
          temp_v19 = UnsignedSaturate((char)temp_v40 - temp_v62,0x10);
          temp_v15 = UnsignedSaturate(temp_v64 - temp_v61,0x10);
          temp_v25 = UnsignedSaturate(temp_v65 - temp_v3,0x10);
          temp_v48 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v28;
          temp_v49 = -1 < (int)(char)((char)temp_v13 + (char)temp_v12) - (int)temp_v31;
          temp_v50 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                   ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v27;
          temp_v51 = -1 < (int)(char)(((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8)) +
                                   ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v0;
          temp_v43 = ((temp_v48 * temp_v44 + !temp_v48 * temp_v42) & 0xff) |
                   ((temp_v49 * temp_v44 + !temp_v49 * temp_v42) & 0xff00) |
                   ((temp_v50 * temp_v44 + !temp_v50 * temp_v42) & 0xff0000) |
                   ((temp_v51 * temp_v44 + !temp_v51 * temp_v42) & 0xff000000);
          temp_v46 = ((temp_v48 * temp_v47 + !temp_v48 * temp_v45) & 0xff) |
                   ((temp_v49 * temp_v47 + !temp_v49 * temp_v45) & 0xff00) |
                   ((temp_v50 * temp_v47 + !temp_v50 * temp_v45) & 0xff0000) |
                   ((temp_v51 * temp_v47 + !temp_v51 * temp_v45) & 0xff000000);
          temp_v65 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
          temp_v5 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
          temp_v13 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
          temp_v18 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
          temp_v64 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
          temp_v12 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
          temp_v17 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
          temp_v21 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
          temp_v48 = -1 < (int)(char)(temp_v66 + temp_v6) - (int)temp_v28;
          temp_v49 = -1 < (int)(char)((char)temp_v19 + (char)temp_v23) - (int)temp_v31;
          temp_v50 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v19 >> 8)) +
                                   ((unsigned char)temp_v14 | (unsigned char)(temp_v23 >> 8))) - (int)temp_v27;
          temp_v51 = -1 < (int)(char)(((unsigned char)temp_v25 | (unsigned char)(temp_v15 >> 8)) +
                                   ((unsigned char)temp_v26 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v0;
          temp_v42 = temp_v48 * temp_v44 + !temp_v48 * temp_v43;
          temp_v45 = (temp_v42 & 0xff) | ((temp_v49 * temp_v44 + !temp_v49 * temp_v43) & 0xff00) |
                   ((temp_v50 * temp_v44 + !temp_v50 * temp_v43) & 0xff0000) |
                   ((temp_v51 * temp_v44 + !temp_v51 * temp_v43) & 0xff000000);
          temp_v43 = temp_v48 * temp_v47 + !temp_v48 * temp_v46;
          temp_v46 = (temp_v43 & 0xff) | ((temp_v49 * temp_v47 + !temp_v49 * temp_v46) & 0xff00) |
                   ((temp_v50 * temp_v47 + !temp_v50 * temp_v46) & 0xff0000) |
                   ((temp_v51 * temp_v47 + !temp_v51 * temp_v46) & 0xff000000);
          temp_v48 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v30;
          temp_v49 = -1 < (int)(char)((char)temp_v5 + (char)temp_v12) - (int)temp_v32;
          temp_v50 = -1 < (int)(char)(((unsigned char)temp_v13 | (unsigned char)(temp_v5 >> 8)) +
                                   ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v29;
          temp_v51 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                                   ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v54;
          *(unsigned char *)(temp_v33 + 7) = temp_v48 * temp_v56 + !temp_v48 * (char)temp_v42;
          *(unsigned char *)(temp_v33 + 8) = temp_v48 * temp_v63 + !temp_v48 * (char)temp_v43;
          *(char *)(temp_v33 + 0x107) = (char)((temp_v49 * temp_v44 + !temp_v49 * temp_v45) >> 8);
          *(char *)(temp_v33 + 0x108) = (char)((temp_v49 * temp_v47 + !temp_v49 * temp_v46) >> 8);
          *(char *)(temp_v33 + 0x207) = (char)((temp_v50 * temp_v44 + !temp_v50 * temp_v45) >> 0x10);
          *(char *)(temp_v33 + 0x208) = (char)((temp_v50 * temp_v47 + !temp_v50 * temp_v46) >> 0x10);
          *(char *)(temp_v33 + 0x307) = (char)((temp_v51 * temp_v44 + !temp_v51 * temp_v45) >> 0x18);
          *(char *)(temp_v33 + 0x308) = (char)((temp_v51 * temp_v47 + !temp_v51 * temp_v46) >> 0x18);
          temp_v33 = temp_v33 + 8;
          temp_v34 = temp_v52 - 8;
          temp_v48 = temp_v52 >= 8;
          temp_v52 = temp_v34;
        } while (temp_v34 != 0 && temp_v48);
      }
      temp_v53 = temp_v53 - 4;
      if (temp_v53 == 0) break;
      temp_v33 = (temp_v33 + 1000) - temp_v36;
      temp_v34 = temp_v36;
    }
    return param_1;
  }
  temp_v35 = temp_v35 - 8;
  temp_v52 = temp_v35;
  while( 1 ) {
    do {
      temp_v34 = temp_v33;
      temp_v45 = ((*(int *)(temp_v34 + 0x104) >> 0x10) & 0xffffU) +
               (*(unsigned int *)(temp_v34 + 0x304) & 0xffff0000);
      temp_v44 = ((*(int *)(temp_v34 + 4) >> 0x10) & 0xffffU) + (*(unsigned int *)(temp_v34 + 0x204) & 0xffff0000)
      ;
      temp_v40 = (*(unsigned int *)(temp_v34 + 0x108) & 0xffff) + *(int *)(temp_v34 + 0x308) * 0x10000;
      temp_v39 = (*(unsigned int *)(temp_v34 + 8) & 0xffff) + *(int *)(temp_v34 + 0x208) * 0x10000;
      temp_v43 = temp_v45 & 0xff00ff;
      temp_v42 = temp_v44 & 0xff00ff;
      temp_v37 = (temp_v45 >> 8) & 0xff00ff;
      temp_v45 = (temp_v44 >> 8) & 0xff00ff;
      temp_v44 = temp_v45 | (temp_v37 << 8);
      temp_v38 = temp_v40 & 0xff00ff;
      temp_v46 = temp_v39 & 0xff00ff;
      temp_v47 = temp_v46 | (temp_v38 << 8);
      temp_v40 = (temp_v40 >> 8) & 0xff00ff;
      temp_v39 = (temp_v39 >> 8) & 0xff00ff;
      temp_v41 = ~(temp_v39 | (temp_v40 << 8));
      temp_v59 = (unsigned char)temp_v42;
      temp_v60 = (unsigned char)temp_v43;
      temp_v58 = (unsigned char)(temp_v42 >> 0x10);
      temp_v2 = (unsigned char)(temp_v43 >> 0x10);
      temp_v55 = (unsigned char)temp_v45;
      temp_v61 = (unsigned char)temp_v46;
      temp_v1 = (unsigned char)temp_v37;
      temp_v3 = (unsigned char)temp_v38;
      temp_v57 = (unsigned char)(temp_v45 >> 0x10);
      temp_v62 = (unsigned char)(temp_v46 >> 0x10);
      temp_v56 = (unsigned char)(temp_v37 >> 0x10);
      temp_v63 = (unsigned char)(temp_v38 >> 0x10);
      temp_v7 = UnsignedSaturate(temp_v59 - temp_v55,0x10);
      temp_v12 = UnsignedSaturate(temp_v60 - temp_v1,0x10);
      temp_v17 = UnsignedSaturate(temp_v58 - temp_v57,0x10);
      temp_v21 = UnsignedSaturate(temp_v2 - temp_v56,0x10);
      temp_v8 = UnsignedSaturate(temp_v55 - temp_v59,0x10);
      temp_v13 = UnsignedSaturate(temp_v1 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v57 - temp_v58,0x10);
      temp_v22 = UnsignedSaturate(temp_v56 - temp_v2,0x10);
      temp_v65 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v41 + (unsigned short)temp_v59) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v9 = UnsignedSaturate(temp_v65 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 8) + (unsigned short)temp_v60) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v6 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x10) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v19 = UnsignedSaturate(temp_v6 - ' ',0x10);
      temp_v66 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v41 >> 0x18) + (unsigned short)temp_v2)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v23 = UnsignedSaturate(temp_v66 - ' ',0x10);
      temp_v59 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
      temp_v60 = (unsigned char)temp_v19 | (unsigned char)(temp_v14 >> 8);
      temp_v10 = UnsignedSaturate(' ' - temp_v65,0x10);
      temp_v15 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v19 = UnsignedSaturate(' ' - temp_v6,0x10);
      temp_v23 = UnsignedSaturate(' ' - temp_v66,0x10);
      temp_v58 = (unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8);
      temp_v2 = (unsigned char)temp_v19 | (unsigned char)(temp_v15 >> 8);
      temp_v66 = (char)((unsigned short)((unsigned short)temp_v55 + (unsigned short)temp_v61) >> 1);
      temp_v4 = UnsignedSaturate(temp_v66 + temp_v9,0x10);
      temp_v6 = (char)((unsigned short)((unsigned short)temp_v1 + (unsigned short)temp_v3) >> 1);
      temp_v19 = UnsignedSaturate(temp_v6 + (char)temp_v14,0x10);
      temp_v64 = (char)((unsigned short)((unsigned short)temp_v57 + (unsigned short)temp_v62) >> 1);
      temp_v23 = UnsignedSaturate(temp_v64 + temp_v60,0x10);
      temp_v65 = (char)((unsigned short)((unsigned short)temp_v56 + (unsigned short)temp_v63) >> 1);
      temp_v5 = UnsignedSaturate(temp_v65 + temp_v59,0x10);
      temp_v11 = UnsignedSaturate(temp_v4 - temp_v10,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v19 - (char)temp_v15,0x10);
      temp_v20 = UnsignedSaturate(((unsigned char)temp_v23 | (unsigned char)(temp_v19 >> 8)) - temp_v2,0x10);
      temp_v24 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v23 >> 8)) - temp_v58,0x10);
      temp_v42 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) | (unsigned int)temp_v11;
      temp_v66 = UnsignedSaturate(temp_v66 - temp_v9,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - (char)temp_v14,0x10);
      temp_v5 = UnsignedSaturate(temp_v64 - temp_v60,0x10);
      temp_v25 = UnsignedSaturate(temp_v65 - temp_v59,0x10);
      temp_v6 = UnsignedSaturate(temp_v61 - (char)temp_v39,0x10);
      temp_v23 = UnsignedSaturate(temp_v3 - (char)temp_v40,0x10);
      temp_v65 = (char)(temp_v39 >> 0x10);
      temp_v14 = UnsignedSaturate(temp_v62 - temp_v65,0x10);
      temp_v64 = (char)(temp_v40 >> 0x10);
      temp_v26 = UnsignedSaturate(temp_v63 - temp_v64,0x10);
      temp_v59 = UnsignedSaturate(temp_v66 + temp_v10,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v19 + (char)temp_v15,0x10);
      temp_v20 = UnsignedSaturate(((unsigned char)temp_v5 | (unsigned char)(temp_v19 >> 8)) + temp_v2,0x10);
      temp_v24 = UnsignedSaturate(((unsigned char)temp_v25 | (unsigned char)(temp_v5 >> 8)) + temp_v58,0x10);
      temp_v45 = ((unsigned int)temp_v24 << 0x18) | ((unsigned int)temp_v20 << 0x10) | ((unsigned int)temp_v16 << 8) | (unsigned int)temp_v59;
      temp_v66 = UnsignedSaturate((char)temp_v39 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v40 - temp_v3,0x10);
      temp_v15 = UnsignedSaturate(temp_v65 - temp_v62,0x10);
      temp_v25 = UnsignedSaturate(temp_v64 - temp_v63,0x10);
      temp_v48 = -1 < (int)(char)(temp_v8 + temp_v7) - (int)temp_v28;
      temp_v49 = -1 < (int)(char)((char)temp_v13 + (char)temp_v12) - (int)temp_v31;
      temp_v50 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v27;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v22 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v0;
      temp_v43 = ((temp_v48 * temp_v44 + !temp_v48 * temp_v42) & 0xff) |
               ((temp_v49 * temp_v44 + !temp_v49 * temp_v42) & 0xff00) |
               ((temp_v50 * temp_v44 + !temp_v50 * temp_v42) & 0xff0000) |
               ((temp_v51 * temp_v44 + !temp_v51 * temp_v42) & 0xff000000);
      temp_v46 = ((temp_v48 * temp_v47 + !temp_v48 * temp_v45) & 0xff) |
               ((temp_v49 * temp_v47 + !temp_v49 * temp_v45) & 0xff00) |
               ((temp_v50 * temp_v47 + !temp_v50 * temp_v45) & 0xff0000) |
               ((temp_v51 * temp_v47 + !temp_v51 * temp_v45) & 0xff000000);
      temp_v65 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v5 = UnsignedSaturate(temp_v1 - temp_v3,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
      temp_v64 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v12 = UnsignedSaturate(temp_v3 - temp_v1,0x10);
      temp_v17 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v21 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
      temp_v48 = -1 < (int)(char)(temp_v66 + temp_v6) - (int)temp_v28;
      temp_v49 = -1 < (int)(char)((char)temp_v19 + (char)temp_v23) - (int)temp_v31;
      temp_v50 = -1 < (int)(char)(((unsigned char)temp_v15 | (unsigned char)(temp_v19 >> 8)) +
                               ((unsigned char)temp_v14 | (unsigned char)(temp_v23 >> 8))) - (int)temp_v27;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v25 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v26 | (unsigned char)(temp_v14 >> 8))) - (int)temp_v0;
      temp_v42 = temp_v48 * temp_v44 + !temp_v48 * temp_v43;
      temp_v45 = (temp_v42 & 0xff) | ((temp_v49 * temp_v44 + !temp_v49 * temp_v43) & 0xff00) |
               ((temp_v50 * temp_v44 + !temp_v50 * temp_v43) & 0xff0000) |
               ((temp_v51 * temp_v44 + !temp_v51 * temp_v43) & 0xff000000);
      temp_v43 = temp_v48 * temp_v47 + !temp_v48 * temp_v46;
      temp_v46 = (temp_v43 & 0xff) | ((temp_v49 * temp_v47 + !temp_v49 * temp_v46) & 0xff00) |
               ((temp_v50 * temp_v47 + !temp_v50 * temp_v46) & 0xff0000) |
               ((temp_v51 * temp_v47 + !temp_v51 * temp_v46) & 0xff000000);
      temp_v48 = -1 < (int)(char)(temp_v65 + temp_v64) - (int)temp_v30;
      temp_v49 = -1 < (int)(char)((char)temp_v5 + (char)temp_v12) - (int)temp_v32;
      temp_v50 = -1 < (int)(char)(((unsigned char)temp_v13 | (unsigned char)(temp_v5 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v12 >> 8))) - (int)temp_v29;
      temp_v51 = -1 < (int)(char)(((unsigned char)temp_v18 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v21 | (unsigned char)(temp_v17 >> 8))) - (int)temp_v54;
      *(unsigned char *)(temp_v34 + 7) = temp_v48 * temp_v55 + !temp_v48 * (char)temp_v42;
      *(unsigned char *)(temp_v34 + 8) = temp_v48 * temp_v61 + !temp_v48 * (char)temp_v43;
      *(char *)(temp_v34 + 0x107) = (char)((temp_v49 * temp_v44 + !temp_v49 * temp_v45) >> 8);
      *(char *)(temp_v34 + 0x108) = (char)((temp_v49 * temp_v47 + !temp_v49 * temp_v46) >> 8);
      *(char *)(temp_v34 + 0x207) = (char)((temp_v50 * temp_v44 + !temp_v50 * temp_v45) >> 0x10);
      *(char *)(temp_v34 + 0x208) = (char)((temp_v50 * temp_v47 + !temp_v50 * temp_v46) >> 0x10);
      *(char *)(temp_v34 + 0x307) = (char)((temp_v51 * temp_v44 + !temp_v51 * temp_v45) >> 0x18);
      *(char *)(temp_v34 + 0x308) = (char)((temp_v51 * temp_v47 + !temp_v51 * temp_v46) >> 0x18);
      temp_v36 = temp_v52 - 8;
      temp_v48 = temp_v52 >= 8;
      temp_v33 = temp_v34 + 8;
      temp_v52 = temp_v36;
    } while (temp_v36 != 0 && temp_v48);
    temp_v53 = temp_v53 - 4;
    if (temp_v53 == 0) break;
    temp_v33 = (temp_v34 + 0x408) - temp_v35;
    temp_v52 = temp_v35;
  }
  return param_1;
}
