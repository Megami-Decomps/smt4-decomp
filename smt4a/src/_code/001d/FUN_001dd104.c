/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd104` (_code @ 0x1dd104, 0xeb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */


int FUN_001dd104(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  char temp_v8;
  char temp_v9;
  char temp_v10;
  char temp_v11;
  char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned char temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned char temp_v43;
  unsigned char temp_v44;
  unsigned char temp_v45;
  unsigned char temp_v46;
  int temp_v47;
  int temp_v48;
  unsigned char temp_v49;
  unsigned char temp_v50;
  unsigned char temp_v51;
  unsigned char temp_v52;
  unsigned char temp_v53;
  unsigned char temp_v54;
  unsigned char temp_v55;
  unsigned char temp_v56;
  unsigned char temp_v57;
  unsigned char temp_v58;
  unsigned char temp_v59;
  unsigned char temp_v60;
  char temp_v61;
  unsigned char temp_v62;
  unsigned char temp_v63;
  unsigned char temp_v64;
  unsigned char temp_v65;
  unsigned char temp_v66;
  unsigned char temp_v67;
  unsigned char temp_v68;
  
  temp_v48 = *(int *)(param_1 + 0xc);
  temp_v33 = *(unsigned int *)(param_1 + 0x10);
  temp_v36 = *(unsigned int *)(param_1 + 0x14);
  temp_v23 = *(int *)(param_1 + 4);
  temp_v26 = *(int *)(param_1 + 8) - 0x20;
  temp_v34 = temp_v33 | (temp_v33 << 8);
  temp_v37 = temp_v36 | (temp_v36 << 8);
  temp_v35 = temp_v34 | (temp_v34 << 0x10);
  temp_v38 = temp_v37 | (temp_v37 << 0x10);
  temp_v22 = (unsigned char)temp_v36;
  temp_v62 = (unsigned char)(temp_v38 >> 0x10);
  temp_v63 = (unsigned char)(temp_v38 >> 0x18);
  temp_v64 = (unsigned char)(temp_v37 >> 8);
  temp_v65 = (unsigned char)temp_v33;
  temp_v66 = (unsigned char)(temp_v34 >> 8);
  temp_v67 = (unsigned char)(temp_v35 >> 0x10);
  temp_v68 = (unsigned char)(temp_v35 >> 0x18);
  temp_v24 = temp_v26;
  if (temp_v26 != 0) {
    while( 1 ) {
      do {
        temp_v47 = temp_v24;
        temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x204) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x604) & 0xffff0000);
        temp_v34 = (((int)*(unsigned int *)(temp_v23 + 4) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x404) & 0xffff0000);
        temp_v29 = (*(unsigned int *)(temp_v23 + 0x208) & 0xffff) + *(unsigned int *)(temp_v23 + 0x608) * 0x10000;
        temp_v28 = (*(unsigned int *)(temp_v23 + 8) & 0xffff) + *(unsigned int *)(temp_v23 + 0x408) * 0x10000;
        temp_v33 = temp_v35 & 0xff00ff;
        temp_v42 = temp_v34 & 0xff00ff;
        temp_v37 = temp_v42 | (temp_v33 << 8);
        temp_v35 = (temp_v35 >> 8) & 0xff00ff;
        temp_v34 = (temp_v34 >> 8) & 0xff00ff;
        temp_v38 = temp_v34 | (temp_v35 << 8);
        temp_v39 = (((*(unsigned int *)(temp_v23 + 0x204) & 0xffff) + *(unsigned int *)(temp_v23 + 0x604) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v31 = (((*(unsigned int *)(temp_v23 + 4) & 0xffff) + *(unsigned int *)(temp_v23 + 0x404) * 0x10000) >> 8) &
                 0xff00ff;
        temp_v36 = temp_v29 & 0xff00ff;
        temp_v40 = temp_v28 & 0xff00ff;
        temp_v27 = temp_v40 | (temp_v36 << 8);
        temp_v30 = (temp_v29 >> 8) & 0xff00ff;
        temp_v28 = (temp_v28 >> 8) & 0xff00ff;
        temp_v29 = temp_v28 | (temp_v30 << 8);
        temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x208) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x608) & 0xffff0000)) & 0xff00ff;
        temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 8) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x408) & 0xffff0000)) & 0xff00ff;
        temp_v0 = (unsigned char)temp_v34;
        temp_v1 = (unsigned char)temp_v40;
        temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
        temp_v49 = (unsigned char)temp_v35;
        temp_v52 = (unsigned char)temp_v36;
        temp_v3 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v52) >> 1;
        temp_v50 = (unsigned char)(temp_v34 >> 0x10);
        temp_v53 = (unsigned char)(temp_v40 >> 0x10);
        temp_v4 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v53) >> 1;
        temp_v51 = (unsigned char)(temp_v35 >> 0x10);
        temp_v54 = (unsigned char)(temp_v36 >> 0x10);
        temp_v5 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v54) >> 1;
        temp_v6 = (unsigned char)temp_v31;
        temp_v9 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
        temp_v55 = (unsigned char)temp_v39;
        temp_v13 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
        temp_v56 = (unsigned char)(temp_v31 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
        temp_v57 = (unsigned char)(temp_v39 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v57 - temp_v51,0x10);
        temp_v10 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
        temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
        temp_v18 = UnsignedSaturate(temp_v51 - temp_v57,0x10);
        temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v55) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v7 = (unsigned char)temp_v41;
        temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
        temp_v58 = (unsigned char)temp_v32;
        temp_v13 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
        temp_v59 = (unsigned char)(temp_v41 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
        temp_v60 = (unsigned char)(temp_v32 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
        temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
        temp_v14 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
        temp_v16 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
        temp_v18 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
        temp_v34 = ~temp_v29;
        temp_v55 = (unsigned char)temp_v42;
        temp_v56 = (unsigned char)temp_v33;
        temp_v57 = (unsigned char)(temp_v42 >> 0x10);
        temp_v6 = (unsigned char)(temp_v33 >> 0x10);
        temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v55) >> 1) +
                                          1) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
        temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v56)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
        temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v57
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
        temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v6
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v61 - ' ',0x10);
        temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v58 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
        temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
        temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
        temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
        temp_v14 = UnsignedSaturate(' ' - temp_v61,0x10);
        temp_v60 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v59 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
        temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
        temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v58,0x10);
        temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
        temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
        temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v58,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
        temp_v7 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v59,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v60,0x10);
        temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v7 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v59,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v60,0x10);
        temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v61 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
        temp_v13 = UnsignedSaturate(temp_v56 - temp_v49,0x10);
        temp_v16 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
        temp_v19 = UnsignedSaturate(temp_v6 - temp_v51,0x10);
        temp_v11 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v56,0x10);
        temp_v17 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
        temp_v20 = UnsignedSaturate(temp_v51 - temp_v6,0x10);
        temp_v8 = (char)temp_v28;
        temp_v12 = UnsignedSaturate(temp_v1 - temp_v8,0x10);
        temp_v15 = UnsignedSaturate(temp_v52 - (char)temp_v30,0x10);
        temp_v9 = (char)(temp_v28 >> 0x10);
        temp_v18 = UnsignedSaturate(temp_v53 - temp_v9,0x10);
        temp_v10 = (char)(temp_v30 >> 0x10);
        temp_v21 = UnsignedSaturate(temp_v54 - temp_v10,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
        temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
                 ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v61 = UnsignedSaturate(temp_v8 - temp_v1,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v52,0x10);
        temp_v16 = UnsignedSaturate(temp_v9 - temp_v53,0x10);
        temp_v19 = UnsignedSaturate(temp_v10 - temp_v54,0x10);
        temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v52,0x10);
        temp_v17 = UnsignedSaturate(temp_v50 - temp_v53,0x10);
        temp_v20 = UnsignedSaturate(temp_v51 - temp_v54,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
        temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
        temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
        temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
        temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
        temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
        temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
        temp_v13 = UnsignedSaturate(temp_v52 - temp_v49,0x10);
        temp_v15 = UnsignedSaturate(temp_v53 - temp_v50,0x10);
        temp_v16 = UnsignedSaturate(temp_v54 - temp_v51,0x10);
        HintPreloadData(temp_v23 + 0x20);
        temp_v43 = temp_v65 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
        temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
        *(unsigned char *)(temp_v23 + 6) = temp_v43 * temp_v55 + !temp_v43 * (char)temp_v35;
        *(unsigned char *)(temp_v23 + 7) = temp_v43 * temp_v0 + !temp_v43 * (char)temp_v33;
        *(unsigned char *)(temp_v23 + 8) = temp_v43 * temp_v1 + !temp_v43 * (char)temp_v34;
        *(char *)(temp_v23 + 9) = temp_v43 * temp_v8 + !temp_v43 * (char)temp_v36;
        *(char *)(temp_v23 + 0x206) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
        *(char *)(temp_v23 + 0x207) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
        *(char *)(temp_v23 + 0x208) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
        *(char *)(temp_v23 + 0x209) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
        *(char *)(temp_v23 + 0x406) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
        *(char *)(temp_v23 + 0x407) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
        *(char *)(temp_v23 + 0x408) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
        *(char *)(temp_v23 + 0x409) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
        *(char *)(temp_v23 + 0x606) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
        *(char *)(temp_v23 + 0x607) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
        *(char *)(temp_v23 + 0x608) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
        *(char *)(temp_v23 + 0x609) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
        temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x20c) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x60c) & 0xffff0000);
        temp_v34 = (((int)*(unsigned int *)(temp_v23 + 0xc) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x40c) & 0xffff0000);
        temp_v29 = (*(unsigned int *)(temp_v23 + 0x210) & 0xffff) + *(unsigned int *)(temp_v23 + 0x610) * 0x10000;
        temp_v28 = (*(unsigned int *)(temp_v23 + 0x10) & 0xffff) + *(unsigned int *)(temp_v23 + 0x410) * 0x10000;
        temp_v33 = temp_v35 & 0xff00ff;
        temp_v42 = temp_v34 & 0xff00ff;
        temp_v37 = temp_v42 | (temp_v33 << 8);
        temp_v35 = (temp_v35 >> 8) & 0xff00ff;
        temp_v34 = (temp_v34 >> 8) & 0xff00ff;
        temp_v38 = temp_v34 | (temp_v35 << 8);
        temp_v39 = (((*(unsigned int *)(temp_v23 + 0x20c) & 0xffff) + *(unsigned int *)(temp_v23 + 0x60c) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v31 = (((*(unsigned int *)(temp_v23 + 0xc) & 0xffff) + *(unsigned int *)(temp_v23 + 0x40c) * 0x10000) >> 8) &
                 0xff00ff;
        temp_v36 = temp_v29 & 0xff00ff;
        temp_v40 = temp_v28 & 0xff00ff;
        temp_v27 = temp_v40 | (temp_v36 << 8);
        temp_v30 = (temp_v29 >> 8) & 0xff00ff;
        temp_v28 = (temp_v28 >> 8) & 0xff00ff;
        temp_v29 = temp_v28 | (temp_v30 << 8);
        temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x210) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x610) & 0xffff0000)) & 0xff00ff;
        temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 0x10) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x410) & 0xffff0000)) & 0xff00ff;
        temp_v51 = (unsigned char)temp_v34;
        temp_v53 = (unsigned char)temp_v40;
        temp_v2 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v53) >> 1;
        temp_v50 = (unsigned char)temp_v35;
        temp_v54 = (unsigned char)temp_v36;
        temp_v3 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v54) >> 1;
        temp_v49 = (unsigned char)(temp_v34 >> 0x10);
        temp_v1 = (unsigned char)(temp_v40 >> 0x10);
        temp_v4 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v1) >> 1;
        temp_v0 = (unsigned char)(temp_v35 >> 0x10);
        temp_v52 = (unsigned char)(temp_v36 >> 0x10);
        temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v52) >> 1;
        temp_v6 = (unsigned char)temp_v31;
        temp_v9 = UnsignedSaturate(temp_v6 - temp_v51,0x10);
        temp_v57 = (unsigned char)temp_v39;
        temp_v13 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
        temp_v56 = (unsigned char)(temp_v31 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v56 - temp_v49,0x10);
        temp_v55 = (unsigned char)(temp_v39 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
        temp_v10 = UnsignedSaturate(temp_v51 - temp_v6,0x10);
        temp_v14 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
        temp_v16 = UnsignedSaturate(temp_v49 - temp_v56,0x10);
        temp_v18 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
        temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v57) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v7 = (unsigned char)temp_v41;
        temp_v9 = UnsignedSaturate(temp_v7 - temp_v53,0x10);
        temp_v60 = (unsigned char)temp_v32;
        temp_v13 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
        temp_v59 = (unsigned char)(temp_v41 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v59 - temp_v1,0x10);
        temp_v58 = (unsigned char)(temp_v32 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
        temp_v10 = UnsignedSaturate(temp_v53 - temp_v7,0x10);
        temp_v14 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
        temp_v16 = UnsignedSaturate(temp_v1 - temp_v59,0x10);
        temp_v18 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
        temp_v34 = ~temp_v29;
        temp_v55 = (unsigned char)temp_v42;
        temp_v56 = (unsigned char)temp_v33;
        temp_v57 = (unsigned char)(temp_v42 >> 0x10);
        temp_v6 = (unsigned char)(temp_v33 >> 0x10);
        temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v58) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v60) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v55) >> 1) +
                                          1) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
        temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v56)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
        temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v57
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
        temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v6
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v61 - ' ',0x10);
        temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v58 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
        temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
        temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
        temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
        temp_v14 = UnsignedSaturate(' ' - temp_v61,0x10);
        temp_v60 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v59 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
        temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
        temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v58,0x10);
        temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
        temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
        temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v58,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
        temp_v7 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v59,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v60,0x10);
        temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v7 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v59,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v60,0x10);
        temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v61 = UnsignedSaturate(temp_v55 - temp_v51,0x10);
        temp_v13 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
        temp_v16 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
        temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
        temp_v11 = UnsignedSaturate(temp_v51 - temp_v55,0x10);
        temp_v14 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
        temp_v17 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
        temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
        temp_v8 = (char)temp_v28;
        temp_v12 = UnsignedSaturate(temp_v53 - temp_v8,0x10);
        temp_v15 = UnsignedSaturate(temp_v54 - (char)temp_v30,0x10);
        temp_v9 = (char)(temp_v28 >> 0x10);
        temp_v18 = UnsignedSaturate(temp_v1 - temp_v9,0x10);
        temp_v10 = (char)(temp_v30 >> 0x10);
        temp_v21 = UnsignedSaturate(temp_v52 - temp_v10,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
        temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
                 ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v61 = UnsignedSaturate(temp_v8 - temp_v53,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v54,0x10);
        temp_v16 = UnsignedSaturate(temp_v9 - temp_v1,0x10);
        temp_v19 = UnsignedSaturate(temp_v10 - temp_v52,0x10);
        temp_v9 = UnsignedSaturate(temp_v51 - temp_v53,0x10);
        temp_v14 = UnsignedSaturate(temp_v50 - temp_v54,0x10);
        temp_v17 = UnsignedSaturate(temp_v49 - temp_v1,0x10);
        temp_v20 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
        temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
        temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
        temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
        temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
        temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
        temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v10 = UnsignedSaturate(temp_v53 - temp_v51,0x10);
        temp_v13 = UnsignedSaturate(temp_v54 - temp_v50,0x10);
        temp_v15 = UnsignedSaturate(temp_v1 - temp_v49,0x10);
        temp_v16 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
        HintPreloadData(temp_v23 + 0x220);
        temp_v43 = temp_v65 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
        temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
        *(unsigned char *)(temp_v23 + 0xe) = temp_v43 * temp_v55 + !temp_v43 * (char)temp_v35;
        *(unsigned char *)(temp_v23 + 0xf) = temp_v43 * temp_v51 + !temp_v43 * (char)temp_v33;
        *(unsigned char *)(temp_v23 + 0x10) = temp_v43 * temp_v53 + !temp_v43 * (char)temp_v34;
        *(char *)(temp_v23 + 0x11) = temp_v43 * temp_v8 + !temp_v43 * (char)temp_v36;
        *(char *)(temp_v23 + 0x20e) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
        *(char *)(temp_v23 + 0x20f) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
        *(char *)(temp_v23 + 0x210) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
        *(char *)(temp_v23 + 0x211) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
        *(char *)(temp_v23 + 0x40e) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
        *(char *)(temp_v23 + 0x40f) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
        *(char *)(temp_v23 + 0x410) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
        *(char *)(temp_v23 + 0x411) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
        *(char *)(temp_v23 + 0x60e) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
        *(char *)(temp_v23 + 0x60f) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
        *(char *)(temp_v23 + 0x610) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
        *(char *)(temp_v23 + 0x611) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
        temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x214) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x614) & 0xffff0000);
        temp_v34 = (((int)*(unsigned int *)(temp_v23 + 0x14) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x414) & 0xffff0000);
        temp_v29 = (*(unsigned int *)(temp_v23 + 0x218) & 0xffff) + *(unsigned int *)(temp_v23 + 0x618) * 0x10000;
        temp_v28 = (*(unsigned int *)(temp_v23 + 0x18) & 0xffff) + *(unsigned int *)(temp_v23 + 0x418) * 0x10000;
        temp_v33 = temp_v35 & 0xff00ff;
        temp_v42 = temp_v34 & 0xff00ff;
        temp_v37 = temp_v42 | (temp_v33 << 8);
        temp_v35 = (temp_v35 >> 8) & 0xff00ff;
        temp_v34 = (temp_v34 >> 8) & 0xff00ff;
        temp_v38 = temp_v34 | (temp_v35 << 8);
        temp_v39 = (((*(unsigned int *)(temp_v23 + 0x214) & 0xffff) + *(unsigned int *)(temp_v23 + 0x614) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v31 = (((*(unsigned int *)(temp_v23 + 0x14) & 0xffff) + *(unsigned int *)(temp_v23 + 0x414) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v36 = temp_v29 & 0xff00ff;
        temp_v40 = temp_v28 & 0xff00ff;
        temp_v27 = temp_v40 | (temp_v36 << 8);
        temp_v30 = (temp_v29 >> 8) & 0xff00ff;
        temp_v28 = (temp_v28 >> 8) & 0xff00ff;
        temp_v29 = temp_v28 | (temp_v30 << 8);
        temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x218) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x618) & 0xffff0000)) & 0xff00ff;
        temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 0x18) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x418) & 0xffff0000)) & 0xff00ff;
        temp_v0 = (unsigned char)temp_v34;
        temp_v1 = (unsigned char)temp_v40;
        temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
        temp_v49 = (unsigned char)temp_v35;
        temp_v52 = (unsigned char)temp_v36;
        temp_v3 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v52) >> 1;
        temp_v50 = (unsigned char)(temp_v34 >> 0x10);
        temp_v54 = (unsigned char)(temp_v40 >> 0x10);
        temp_v4 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v54) >> 1;
        temp_v51 = (unsigned char)(temp_v35 >> 0x10);
        temp_v53 = (unsigned char)(temp_v36 >> 0x10);
        temp_v5 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v53) >> 1;
        temp_v6 = (unsigned char)temp_v31;
        temp_v9 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
        temp_v57 = (unsigned char)temp_v39;
        temp_v13 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
        temp_v56 = (unsigned char)(temp_v31 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
        temp_v55 = (unsigned char)(temp_v39 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v55 - temp_v51,0x10);
        temp_v10 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
        temp_v16 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
        temp_v18 = UnsignedSaturate(temp_v51 - temp_v55,0x10);
        temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v57) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v58 = (unsigned char)temp_v41;
        temp_v9 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
        temp_v59 = (unsigned char)temp_v32;
        temp_v13 = UnsignedSaturate(temp_v59 - temp_v52,0x10);
        temp_v60 = (unsigned char)(temp_v41 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
        temp_v7 = (unsigned char)(temp_v32 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v7 - temp_v53,0x10);
        temp_v10 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
        temp_v14 = UnsignedSaturate(temp_v52 - temp_v59,0x10);
        temp_v16 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
        temp_v18 = UnsignedSaturate(temp_v53 - temp_v7,0x10);
        temp_v34 = ~temp_v29;
        temp_v6 = (unsigned char)temp_v42;
        temp_v57 = (unsigned char)temp_v33;
        temp_v56 = (unsigned char)(temp_v42 >> 0x10);
        temp_v55 = (unsigned char)(temp_v33 >> 0x10);
        temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v7) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v60) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v59) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v58) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v6) >> 1) +
                                          1) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
        temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v57)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
        temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v56
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
        temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v55
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v61 - ' ',0x10);
        temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v58 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
        temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
        temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
        temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
        temp_v14 = UnsignedSaturate(' ' - temp_v61,0x10);
        temp_v59 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v60 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
        temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
        temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v58,0x10);
        temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
        temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
        temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v58,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
        temp_v7 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v60,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v59,0x10);
        temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v7 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v60,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v59,0x10);
        temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v61 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
        temp_v13 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
        temp_v16 = UnsignedSaturate(temp_v56 - temp_v50,0x10);
        temp_v19 = UnsignedSaturate(temp_v55 - temp_v51,0x10);
        temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
        temp_v17 = UnsignedSaturate(temp_v50 - temp_v56,0x10);
        temp_v20 = UnsignedSaturate(temp_v51 - temp_v55,0x10);
        temp_v8 = (char)temp_v28;
        temp_v12 = UnsignedSaturate(temp_v1 - temp_v8,0x10);
        temp_v15 = UnsignedSaturate(temp_v52 - (char)temp_v30,0x10);
        temp_v9 = (char)(temp_v28 >> 0x10);
        temp_v18 = UnsignedSaturate(temp_v54 - temp_v9,0x10);
        temp_v10 = (char)(temp_v30 >> 0x10);
        temp_v21 = UnsignedSaturate(temp_v53 - temp_v10,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
        temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
                 ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v61 = UnsignedSaturate(temp_v8 - temp_v1,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v52,0x10);
        temp_v16 = UnsignedSaturate(temp_v9 - temp_v54,0x10);
        temp_v19 = UnsignedSaturate(temp_v10 - temp_v53,0x10);
        temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v52,0x10);
        temp_v17 = UnsignedSaturate(temp_v50 - temp_v54,0x10);
        temp_v20 = UnsignedSaturate(temp_v51 - temp_v53,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
        temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
        temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
        temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
        temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
        temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
        temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
        temp_v13 = UnsignedSaturate(temp_v52 - temp_v49,0x10);
        temp_v15 = UnsignedSaturate(temp_v54 - temp_v50,0x10);
        temp_v16 = UnsignedSaturate(temp_v53 - temp_v51,0x10);
        HintPreloadData(temp_v23 + 0x420);
        temp_v43 = temp_v65 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
        temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
        *(unsigned char *)(temp_v23 + 0x16) = temp_v43 * temp_v6 + !temp_v43 * (char)temp_v35;
        *(unsigned char *)(temp_v23 + 0x17) = temp_v43 * temp_v0 + !temp_v43 * (char)temp_v33;
        *(unsigned char *)(temp_v23 + 0x18) = temp_v43 * temp_v1 + !temp_v43 * (char)temp_v34;
        *(char *)(temp_v23 + 0x19) = temp_v43 * temp_v8 + !temp_v43 * (char)temp_v36;
        *(char *)(temp_v23 + 0x216) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
        *(char *)(temp_v23 + 0x217) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
        *(char *)(temp_v23 + 0x218) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
        *(char *)(temp_v23 + 0x219) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
        *(char *)(temp_v23 + 0x416) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
        *(char *)(temp_v23 + 0x417) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
        *(char *)(temp_v23 + 0x418) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
        *(char *)(temp_v23 + 0x419) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
        *(char *)(temp_v23 + 0x616) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
        *(char *)(temp_v23 + 0x617) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
        *(char *)(temp_v23 + 0x618) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
        *(char *)(temp_v23 + 0x619) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
        temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x21c) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x61c) & 0xffff0000);
        temp_v34 = (((int)*(unsigned int *)(temp_v23 + 0x1c) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x41c) & 0xffff0000);
        temp_v29 = (*(unsigned int *)(temp_v23 + 0x220) & 0xffff) + *(unsigned int *)(temp_v23 + 0x620) * 0x10000;
        temp_v28 = (*(unsigned int *)(temp_v23 + 0x20) & 0xffff) + *(unsigned int *)(temp_v23 + 0x420) * 0x10000;
        temp_v33 = temp_v35 & 0xff00ff;
        temp_v42 = temp_v34 & 0xff00ff;
        temp_v37 = temp_v42 | (temp_v33 << 8);
        temp_v35 = (temp_v35 >> 8) & 0xff00ff;
        temp_v34 = (temp_v34 >> 8) & 0xff00ff;
        temp_v38 = temp_v34 | (temp_v35 << 8);
        temp_v39 = (((*(unsigned int *)(temp_v23 + 0x21c) & 0xffff) + *(unsigned int *)(temp_v23 + 0x61c) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v31 = (((*(unsigned int *)(temp_v23 + 0x1c) & 0xffff) + *(unsigned int *)(temp_v23 + 0x41c) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v36 = temp_v29 & 0xff00ff;
        temp_v40 = temp_v28 & 0xff00ff;
        temp_v27 = temp_v40 | (temp_v36 << 8);
        temp_v30 = (temp_v29 >> 8) & 0xff00ff;
        temp_v28 = (temp_v28 >> 8) & 0xff00ff;
        temp_v29 = temp_v28 | (temp_v30 << 8);
        temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x220) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x620) & 0xffff0000)) & 0xff00ff;
        temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 0x20) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v23 + 0x420) & 0xffff0000)) & 0xff00ff;
        temp_v51 = (unsigned char)temp_v34;
        temp_v53 = (unsigned char)temp_v40;
        temp_v2 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v53) >> 1;
        temp_v50 = (unsigned char)temp_v35;
        temp_v54 = (unsigned char)temp_v36;
        temp_v3 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v54) >> 1;
        temp_v49 = (unsigned char)(temp_v34 >> 0x10);
        temp_v1 = (unsigned char)(temp_v40 >> 0x10);
        temp_v4 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v1) >> 1;
        temp_v0 = (unsigned char)(temp_v35 >> 0x10);
        temp_v52 = (unsigned char)(temp_v36 >> 0x10);
        temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v52) >> 1;
        temp_v6 = (unsigned char)temp_v31;
        temp_v9 = UnsignedSaturate(temp_v6 - temp_v51,0x10);
        temp_v55 = (unsigned char)temp_v39;
        temp_v13 = UnsignedSaturate(temp_v55 - temp_v50,0x10);
        temp_v56 = (unsigned char)(temp_v31 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v56 - temp_v49,0x10);
        temp_v57 = (unsigned char)(temp_v39 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v57 - temp_v0,0x10);
        temp_v10 = UnsignedSaturate(temp_v51 - temp_v6,0x10);
        temp_v14 = UnsignedSaturate(temp_v50 - temp_v55,0x10);
        temp_v16 = UnsignedSaturate(temp_v49 - temp_v56,0x10);
        temp_v18 = UnsignedSaturate(temp_v0 - temp_v57,0x10);
        temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v57) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v55) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v60 = (unsigned char)temp_v41;
        temp_v9 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
        temp_v59 = (unsigned char)temp_v32;
        temp_v13 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
        temp_v58 = (unsigned char)(temp_v41 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
        temp_v7 = (unsigned char)(temp_v32 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v7 - temp_v52,0x10);
        temp_v10 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
        temp_v14 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
        temp_v16 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
        temp_v18 = UnsignedSaturate(temp_v52 - temp_v7,0x10);
        temp_v34 = ~temp_v29;
        temp_v6 = (unsigned char)temp_v42;
        temp_v57 = (unsigned char)temp_v33;
        temp_v56 = (unsigned char)(temp_v42 >> 0x10);
        temp_v55 = (unsigned char)(temp_v33 >> 0x10);
        temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v7) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v58) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v59) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v60) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v6) >> 1) +
                                          1) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v61 - ' ',0x10);
        temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v57)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v16 = UnsignedSaturate(temp_v9 - ' ',0x10);
        temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v56
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
        temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v55
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v10 - ' ',0x10);
        temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v58 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
        temp_v61 = UnsignedSaturate(' ' - temp_v61,0x10);
        temp_v17 = UnsignedSaturate(' ' - temp_v9,0x10);
        temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
        temp_v14 = UnsignedSaturate(' ' - temp_v10,0x10);
        temp_v59 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v60 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
        temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
        temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v58,0x10);
        temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
        temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
        temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v58,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
        temp_v7 = UnsignedSaturate(temp_v9 - temp_v61,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v60,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v59,0x10);
        temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v7 = UnsignedSaturate(temp_v10 + temp_v61,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v60,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v59,0x10);
        temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v61 = UnsignedSaturate(temp_v6 - temp_v51,0x10);
        temp_v13 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
        temp_v16 = UnsignedSaturate(temp_v56 - temp_v49,0x10);
        temp_v19 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
        temp_v11 = UnsignedSaturate(temp_v51 - temp_v6,0x10);
        temp_v14 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
        temp_v17 = UnsignedSaturate(temp_v49 - temp_v56,0x10);
        temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
        temp_v9 = (char)temp_v28;
        temp_v12 = UnsignedSaturate(temp_v53 - temp_v9,0x10);
        temp_v15 = UnsignedSaturate(temp_v54 - (char)temp_v30,0x10);
        temp_v10 = (char)(temp_v28 >> 0x10);
        temp_v18 = UnsignedSaturate(temp_v1 - temp_v10,0x10);
        temp_v8 = (char)(temp_v30 >> 0x10);
        temp_v21 = UnsignedSaturate(temp_v52 - temp_v8,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
        temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
                 ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v61 = UnsignedSaturate(temp_v9 - temp_v53,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v54,0x10);
        temp_v16 = UnsignedSaturate(temp_v10 - temp_v1,0x10);
        temp_v19 = UnsignedSaturate(temp_v8 - temp_v52,0x10);
        temp_v10 = UnsignedSaturate(temp_v51 - temp_v53,0x10);
        temp_v14 = UnsignedSaturate(temp_v50 - temp_v54,0x10);
        temp_v17 = UnsignedSaturate(temp_v49 - temp_v1,0x10);
        temp_v20 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
        temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
        temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
        temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
        temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
        temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
        temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v8 = UnsignedSaturate(temp_v53 - temp_v51,0x10);
        temp_v13 = UnsignedSaturate(temp_v54 - temp_v50,0x10);
        temp_v15 = UnsignedSaturate(temp_v1 - temp_v49,0x10);
        temp_v16 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
        HintPreloadData(temp_v23 + 0x640);
        temp_v43 = temp_v65 <= (unsigned char)(temp_v10 + temp_v8);
        temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
        temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
        *(unsigned char *)(temp_v23 + 0x1e) = temp_v43 * temp_v6 + !temp_v43 * (char)temp_v35;
        *(unsigned char *)(temp_v23 + 0x1f) = temp_v43 * temp_v51 + !temp_v43 * (char)temp_v33;
        *(unsigned char *)(temp_v23 + 0x20) = temp_v43 * temp_v53 + !temp_v43 * (char)temp_v34;
        *(char *)(temp_v23 + 0x21) = temp_v43 * temp_v9 + !temp_v43 * (char)temp_v36;
        *(char *)(temp_v23 + 0x21e) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
        *(char *)(temp_v23 + 0x21f) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
        *(char *)(temp_v23 + 0x220) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
        *(char *)(temp_v23 + 0x221) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
        *(char *)(temp_v23 + 0x41e) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
        *(char *)(temp_v23 + 0x41f) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
        *(char *)(temp_v23 + 0x420) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
        *(char *)(temp_v23 + 0x421) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
        *(char *)(temp_v23 + 0x61e) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
        *(char *)(temp_v23 + 0x61f) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
        *(char *)(temp_v23 + 0x620) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
        *(char *)(temp_v23 + 0x621) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
        temp_v23 = temp_v23 + 0x20;
        temp_v24 = temp_v47 - 0x20;
      } while (temp_v47 - 0x20 != 0 && temp_v47 >= 0x20);
      temp_v47 = temp_v47 - 8;
      do {
        temp_v24 = temp_v23;
        temp_v35 = (((int)*(unsigned int *)(temp_v24 + 0x204) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v24 + 0x604) & 0xffff0000);
        temp_v34 = (((int)*(unsigned int *)(temp_v24 + 4) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v24 + 0x404) & 0xffff0000);
        temp_v29 = (*(unsigned int *)(temp_v24 + 0x208) & 0xffff) + *(unsigned int *)(temp_v24 + 0x608) * 0x10000;
        temp_v28 = (*(unsigned int *)(temp_v24 + 8) & 0xffff) + *(unsigned int *)(temp_v24 + 0x408) * 0x10000;
        temp_v33 = temp_v35 & 0xff00ff;
        temp_v42 = temp_v34 & 0xff00ff;
        temp_v37 = temp_v42 | (temp_v33 << 8);
        temp_v35 = (temp_v35 >> 8) & 0xff00ff;
        temp_v34 = (temp_v34 >> 8) & 0xff00ff;
        temp_v38 = temp_v34 | (temp_v35 << 8);
        temp_v39 = (((*(unsigned int *)(temp_v24 + 0x204) & 0xffff) + *(unsigned int *)(temp_v24 + 0x604) * 0x10000) >> 8)
                 & 0xff00ff;
        temp_v31 = (((*(unsigned int *)(temp_v24 + 4) & 0xffff) + *(unsigned int *)(temp_v24 + 0x404) * 0x10000) >> 8) &
                 0xff00ff;
        temp_v36 = temp_v29 & 0xff00ff;
        temp_v40 = temp_v28 & 0xff00ff;
        temp_v27 = temp_v40 | (temp_v36 << 8);
        temp_v30 = (temp_v29 >> 8) & 0xff00ff;
        temp_v28 = (temp_v28 >> 8) & 0xff00ff;
        temp_v29 = temp_v28 | (temp_v30 << 8);
        temp_v32 = ((((int)*(unsigned int *)(temp_v24 + 0x208) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v24 + 0x608) & 0xffff0000)) & 0xff00ff;
        temp_v41 = ((((int)*(unsigned int *)(temp_v24 + 8) >> 0x10) & 0xffffU) +
                 (*(unsigned int *)(temp_v24 + 0x408) & 0xffff0000)) & 0xff00ff;
        temp_v0 = (unsigned char)temp_v34;
        temp_v1 = (unsigned char)temp_v40;
        temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
        temp_v49 = (unsigned char)temp_v35;
        temp_v54 = (unsigned char)temp_v36;
        temp_v3 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v54) >> 1;
        temp_v51 = (unsigned char)(temp_v34 >> 0x10);
        temp_v52 = (unsigned char)(temp_v40 >> 0x10);
        temp_v4 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v52) >> 1;
        temp_v50 = (unsigned char)(temp_v35 >> 0x10);
        temp_v53 = (unsigned char)(temp_v36 >> 0x10);
        temp_v5 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v53) >> 1;
        temp_v57 = (unsigned char)temp_v31;
        temp_v9 = UnsignedSaturate(temp_v57 - temp_v0,0x10);
        temp_v6 = (unsigned char)temp_v39;
        temp_v13 = UnsignedSaturate(temp_v6 - temp_v49,0x10);
        temp_v56 = (unsigned char)(temp_v31 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
        temp_v55 = (unsigned char)(temp_v39 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v55 - temp_v50,0x10);
        temp_v10 = UnsignedSaturate(temp_v0 - temp_v57,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v6,0x10);
        temp_v16 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
        temp_v18 = UnsignedSaturate(temp_v50 - temp_v55,0x10);
        temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v55) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v56) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v6) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v57) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v7 = (unsigned char)temp_v41;
        temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
        temp_v58 = (unsigned char)temp_v32;
        temp_v13 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
        temp_v59 = (unsigned char)(temp_v41 >> 0x10);
        temp_v15 = UnsignedSaturate(temp_v59 - temp_v52,0x10);
        temp_v60 = (unsigned char)(temp_v32 >> 0x10);
        temp_v17 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
        temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
        temp_v14 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
        temp_v16 = UnsignedSaturate(temp_v52 - temp_v59,0x10);
        temp_v18 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
        temp_v34 = ~temp_v29;
        temp_v55 = (unsigned char)temp_v42;
        temp_v56 = (unsigned char)temp_v33;
        temp_v57 = (unsigned char)(temp_v42 >> 0x10);
        temp_v6 = (unsigned char)(temp_v33 >> 0x10);
        temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
                 ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
                 ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) |
                 (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v55) >> 1) +
                                          1) >> 1) + 1) >> 1);
        temp_v11 = UnsignedSaturate(temp_v61 - ' ',0x10);
        temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v56)
                                           >> 1) + 1) >> 1) + 1) >> 1);
        temp_v16 = UnsignedSaturate(temp_v8 - ' ',0x10);
        temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v57
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v13 = UnsignedSaturate(temp_v10 - ' ',0x10);
        temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v6
                                                    ) >> 1) + 1) >> 1) + 1) >> 1);
        temp_v14 = UnsignedSaturate(temp_v9 - ' ',0x10);
        temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v58 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
        temp_v61 = UnsignedSaturate(' ' - temp_v61,0x10);
        temp_v17 = UnsignedSaturate(' ' - temp_v8,0x10);
        temp_v13 = UnsignedSaturate(' ' - temp_v10,0x10);
        temp_v14 = UnsignedSaturate(' ' - temp_v9,0x10);
        temp_v60 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
        temp_v59 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
        temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
        temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v58,0x10);
        temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
        temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
        temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
        temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v58,0x10);
        temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
        temp_v7 = UnsignedSaturate(temp_v9 - temp_v61,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v59,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v60,0x10);
        temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v7 = UnsignedSaturate(temp_v10 + temp_v61,0x10);
        temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
        temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v59,0x10);
        temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v60,0x10);
        temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7
        ;
        temp_v61 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
        temp_v13 = UnsignedSaturate(temp_v56 - temp_v49,0x10);
        temp_v16 = UnsignedSaturate(temp_v57 - temp_v51,0x10);
        temp_v19 = UnsignedSaturate(temp_v6 - temp_v50,0x10);
        temp_v11 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v56,0x10);
        temp_v17 = UnsignedSaturate(temp_v51 - temp_v57,0x10);
        temp_v20 = UnsignedSaturate(temp_v50 - temp_v6,0x10);
        temp_v10 = (char)temp_v28;
        temp_v12 = UnsignedSaturate(temp_v1 - temp_v10,0x10);
        temp_v15 = UnsignedSaturate(temp_v54 - (char)temp_v30,0x10);
        temp_v8 = (char)(temp_v28 >> 0x10);
        temp_v18 = UnsignedSaturate(temp_v52 - temp_v8,0x10);
        temp_v9 = (char)(temp_v30 >> 0x10);
        temp_v21 = UnsignedSaturate(temp_v53 - temp_v9,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                                 ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                                 ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
        temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
                 ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
        temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
                 ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
                 ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
        temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
                 ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v61 = UnsignedSaturate(temp_v10 - temp_v1,0x10);
        temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v54,0x10);
        temp_v16 = UnsignedSaturate(temp_v8 - temp_v52,0x10);
        temp_v19 = UnsignedSaturate(temp_v9 - temp_v53,0x10);
        temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
        temp_v14 = UnsignedSaturate(temp_v49 - temp_v54,0x10);
        temp_v17 = UnsignedSaturate(temp_v51 - temp_v52,0x10);
        temp_v20 = UnsignedSaturate(temp_v50 - temp_v53,0x10);
        temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
        temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
        temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                                 ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
        temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
        temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
                 ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
                 ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
        temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
        temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
                 ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
                 ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
        temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
        temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
                 ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
                 ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
        temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
        temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
                 ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
                 ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
        temp_v8 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
        temp_v13 = UnsignedSaturate(temp_v54 - temp_v49,0x10);
        temp_v15 = UnsignedSaturate(temp_v52 - temp_v51,0x10);
        temp_v16 = UnsignedSaturate(temp_v53 - temp_v50,0x10);
        temp_v43 = temp_v65 <= (unsigned char)(temp_v9 + temp_v8);
        temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
        temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                                 ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
        temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                                 ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
        *(unsigned char *)(temp_v24 + 6) = temp_v43 * temp_v55 + !temp_v43 * (char)temp_v35;
        *(unsigned char *)(temp_v24 + 7) = temp_v43 * temp_v0 + !temp_v43 * (char)temp_v33;
        *(unsigned char *)(temp_v24 + 8) = temp_v43 * temp_v1 + !temp_v43 * (char)temp_v34;
        *(char *)(temp_v24 + 9) = temp_v43 * temp_v10 + !temp_v43 * (char)temp_v36;
        *(char *)(temp_v24 + 0x206) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
        *(char *)(temp_v24 + 0x207) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
        *(char *)(temp_v24 + 0x208) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
        *(char *)(temp_v24 + 0x209) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
        *(char *)(temp_v24 + 0x406) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
        *(char *)(temp_v24 + 0x407) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
        *(char *)(temp_v24 + 0x408) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
        *(char *)(temp_v24 + 0x409) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
        *(char *)(temp_v24 + 0x606) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
        *(char *)(temp_v24 + 0x607) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
        *(char *)(temp_v24 + 0x608) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
        *(char *)(temp_v24 + 0x609) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
        temp_v25 = temp_v47 - 8;
        temp_v43 = temp_v47 >= 8;
        temp_v23 = temp_v24 + 8;
        temp_v47 = temp_v25;
      } while (temp_v25 != 0 && temp_v43);
      temp_v48 = temp_v48 - 4;
      if (temp_v48 == 0) break;
      temp_v23 = (temp_v24 + 0x7f0) - temp_v26;
      temp_v24 = temp_v26;
    }
    return param_1;
  }
  do {
    temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x204) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x604) & 0xffff0000);
    temp_v34 = (((int)*(unsigned int *)(temp_v23 + 4) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x404) & 0xffff0000);
    temp_v29 = (*(unsigned int *)(temp_v23 + 0x208) & 0xffff) + *(unsigned int *)(temp_v23 + 0x608) * 0x10000;
    temp_v28 = (*(unsigned int *)(temp_v23 + 8) & 0xffff) + *(unsigned int *)(temp_v23 + 0x408) * 0x10000;
    temp_v33 = temp_v35 & 0xff00ff;
    temp_v42 = temp_v34 & 0xff00ff;
    temp_v37 = temp_v42 | (temp_v33 << 8);
    temp_v35 = (temp_v35 >> 8) & 0xff00ff;
    temp_v34 = (temp_v34 >> 8) & 0xff00ff;
    temp_v38 = temp_v34 | (temp_v35 << 8);
    temp_v39 = (((*(unsigned int *)(temp_v23 + 0x204) & 0xffff) + *(unsigned int *)(temp_v23 + 0x604) * 0x10000) >> 8) &
             0xff00ff;
    temp_v31 = (((*(unsigned int *)(temp_v23 + 4) & 0xffff) + *(unsigned int *)(temp_v23 + 0x404) * 0x10000) >> 8) &
             0xff00ff;
    temp_v36 = temp_v29 & 0xff00ff;
    temp_v40 = temp_v28 & 0xff00ff;
    temp_v27 = temp_v40 | (temp_v36 << 8);
    temp_v30 = (temp_v29 >> 8) & 0xff00ff;
    temp_v28 = (temp_v28 >> 8) & 0xff00ff;
    temp_v29 = temp_v28 | (temp_v30 << 8);
    temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x208) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x608) & 0xffff0000)) & 0xff00ff;
    temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 8) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x408) & 0xffff0000)) & 0xff00ff;
    temp_v51 = (unsigned char)temp_v34;
    temp_v52 = (unsigned char)temp_v40;
    temp_v2 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v52) >> 1;
    temp_v50 = (unsigned char)temp_v35;
    temp_v1 = (unsigned char)temp_v36;
    temp_v3 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v1) >> 1;
    temp_v49 = (unsigned char)(temp_v34 >> 0x10);
    temp_v54 = (unsigned char)(temp_v40 >> 0x10);
    temp_v4 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v54) >> 1;
    temp_v0 = (unsigned char)(temp_v35 >> 0x10);
    temp_v53 = (unsigned char)(temp_v36 >> 0x10);
    temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v53) >> 1;
    temp_v55 = (unsigned char)temp_v31;
    temp_v9 = UnsignedSaturate(temp_v55 - temp_v51,0x10);
    temp_v6 = (unsigned char)temp_v39;
    temp_v13 = UnsignedSaturate(temp_v6 - temp_v50,0x10);
    temp_v57 = (unsigned char)(temp_v31 >> 0x10);
    temp_v15 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
    temp_v56 = (unsigned char)(temp_v39 >> 0x10);
    temp_v17 = UnsignedSaturate(temp_v56 - temp_v0,0x10);
    temp_v10 = UnsignedSaturate(temp_v51 - temp_v55,0x10);
    temp_v14 = UnsignedSaturate(temp_v50 - temp_v6,0x10);
    temp_v16 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
    temp_v18 = UnsignedSaturate(temp_v0 - temp_v56,0x10);
    temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v56) >> 1) << 0x18) |
             ((unsigned int)((unsigned short)(temp_v4 + temp_v57) >> 1) << 0x10) |
             ((unsigned int)((unsigned short)(temp_v3 + temp_v6) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v55) >> 1);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
    temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
             ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
    temp_v7 = (unsigned char)temp_v41;
    temp_v9 = UnsignedSaturate(temp_v7 - temp_v52,0x10);
    temp_v58 = (unsigned char)temp_v32;
    temp_v13 = UnsignedSaturate(temp_v58 - temp_v1,0x10);
    temp_v59 = (unsigned char)(temp_v41 >> 0x10);
    temp_v15 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
    temp_v60 = (unsigned char)(temp_v32 >> 0x10);
    temp_v17 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
    temp_v10 = UnsignedSaturate(temp_v52 - temp_v7,0x10);
    temp_v14 = UnsignedSaturate(temp_v1 - temp_v58,0x10);
    temp_v16 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
    temp_v18 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
    temp_v34 = ~temp_v29;
    temp_v6 = (unsigned char)temp_v42;
    temp_v57 = (unsigned char)temp_v33;
    temp_v56 = (unsigned char)(temp_v42 >> 0x10);
    temp_v55 = (unsigned char)(temp_v33 >> 0x10);
    temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
             ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
             ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
    temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
             ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
    temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v6) >> 1) + 1)
                             >> 1) + 1) >> 1);
    temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
    temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v57) >> 1)
                                      + 1) >> 1) + 1) >> 1);
    temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
    temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v56) >>
                                       1) + 1) >> 1) + 1) >> 1);
    temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
    temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v55) >>
                                       1) + 1) >> 1) + 1) >> 1);
    temp_v14 = UnsignedSaturate(temp_v61 - ' ',0x10);
    temp_v58 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
    temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
    temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
    temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
    temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
    temp_v14 = UnsignedSaturate(' ' - temp_v61,0x10);
    temp_v60 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
    temp_v59 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
    temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
    temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
    temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
    temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v58,0x10);
    temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
    temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
    temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
    temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v58,0x10);
    temp_v7 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
    temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
    temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v59,0x10);
    temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v60,0x10);
    temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7;
    temp_v7 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
    temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
    temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v59,0x10);
    temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v60,0x10);
    temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7;
    temp_v61 = UnsignedSaturate(temp_v6 - temp_v51,0x10);
    temp_v13 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
    temp_v16 = UnsignedSaturate(temp_v56 - temp_v49,0x10);
    temp_v19 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
    temp_v11 = UnsignedSaturate(temp_v51 - temp_v6,0x10);
    temp_v14 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
    temp_v17 = UnsignedSaturate(temp_v49 - temp_v56,0x10);
    temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
    temp_v9 = (char)temp_v28;
    temp_v12 = UnsignedSaturate(temp_v52 - temp_v9,0x10);
    temp_v15 = UnsignedSaturate(temp_v1 - (char)temp_v30,0x10);
    temp_v10 = (char)(temp_v28 >> 0x10);
    temp_v18 = UnsignedSaturate(temp_v54 - temp_v10,0x10);
    temp_v8 = (char)(temp_v30 >> 0x10);
    temp_v21 = UnsignedSaturate(temp_v53 - temp_v8,0x10);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                             ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
    temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
             ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
             ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
             ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
    temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
             ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
             ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
             ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
    temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
             ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
    temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
             ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
    temp_v61 = UnsignedSaturate(temp_v9 - temp_v52,0x10);
    temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v1,0x10);
    temp_v16 = UnsignedSaturate(temp_v10 - temp_v54,0x10);
    temp_v19 = UnsignedSaturate(temp_v8 - temp_v53,0x10);
    temp_v10 = UnsignedSaturate(temp_v51 - temp_v52,0x10);
    temp_v14 = UnsignedSaturate(temp_v50 - temp_v1,0x10);
    temp_v17 = UnsignedSaturate(temp_v49 - temp_v54,0x10);
    temp_v20 = UnsignedSaturate(temp_v0 - temp_v53,0x10);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                             ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
    temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
    temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
             ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
             ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
    temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
    temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
             ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
             ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
    temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
    temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
    temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
    temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
    temp_v8 = UnsignedSaturate(temp_v52 - temp_v51,0x10);
    temp_v13 = UnsignedSaturate(temp_v1 - temp_v50,0x10);
    temp_v15 = UnsignedSaturate(temp_v54 - temp_v49,0x10);
    temp_v16 = UnsignedSaturate(temp_v53 - temp_v0,0x10);
    HintPreloadData(temp_v23 + 0x20);
    temp_v43 = temp_v65 <= (unsigned char)(temp_v10 + temp_v8);
    temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
    temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                             ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
    temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
    *(unsigned char *)(temp_v23 + 6) = temp_v43 * temp_v6 + !temp_v43 * (char)temp_v35;
    *(unsigned char *)(temp_v23 + 7) = temp_v43 * temp_v51 + !temp_v43 * (char)temp_v33;
    *(unsigned char *)(temp_v23 + 8) = temp_v43 * temp_v52 + !temp_v43 * (char)temp_v34;
    *(char *)(temp_v23 + 9) = temp_v43 * temp_v9 + !temp_v43 * (char)temp_v36;
    *(char *)(temp_v23 + 0x206) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
    *(char *)(temp_v23 + 0x207) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
    *(char *)(temp_v23 + 0x208) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
    *(char *)(temp_v23 + 0x209) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
    *(char *)(temp_v23 + 0x406) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
    *(char *)(temp_v23 + 0x407) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
    *(char *)(temp_v23 + 0x408) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
    *(char *)(temp_v23 + 0x409) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
    *(char *)(temp_v23 + 0x606) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
    *(char *)(temp_v23 + 0x607) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
    *(char *)(temp_v23 + 0x608) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
    *(char *)(temp_v23 + 0x609) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
    temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x20c) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x60c) & 0xffff0000);
    temp_v34 = (((int)*(unsigned int *)(temp_v23 + 0xc) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x40c) & 0xffff0000);
    temp_v29 = (*(unsigned int *)(temp_v23 + 0x210) & 0xffff) + *(unsigned int *)(temp_v23 + 0x610) * 0x10000;
    temp_v28 = (*(unsigned int *)(temp_v23 + 0x10) & 0xffff) + *(unsigned int *)(temp_v23 + 0x410) * 0x10000;
    temp_v33 = temp_v35 & 0xff00ff;
    temp_v42 = temp_v34 & 0xff00ff;
    temp_v37 = temp_v42 | (temp_v33 << 8);
    temp_v35 = (temp_v35 >> 8) & 0xff00ff;
    temp_v34 = (temp_v34 >> 8) & 0xff00ff;
    temp_v38 = temp_v34 | (temp_v35 << 8);
    temp_v39 = (((*(unsigned int *)(temp_v23 + 0x20c) & 0xffff) + *(unsigned int *)(temp_v23 + 0x60c) * 0x10000) >> 8) &
             0xff00ff;
    temp_v31 = (((*(unsigned int *)(temp_v23 + 0xc) & 0xffff) + *(unsigned int *)(temp_v23 + 0x40c) * 0x10000) >> 8) &
             0xff00ff;
    temp_v36 = temp_v29 & 0xff00ff;
    temp_v40 = temp_v28 & 0xff00ff;
    temp_v27 = temp_v40 | (temp_v36 << 8);
    temp_v30 = (temp_v29 >> 8) & 0xff00ff;
    temp_v28 = (temp_v28 >> 8) & 0xff00ff;
    temp_v29 = temp_v28 | (temp_v30 << 8);
    temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x210) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x610) & 0xffff0000)) & 0xff00ff;
    temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 0x10) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x410) & 0xffff0000)) & 0xff00ff;
    temp_v0 = (unsigned char)temp_v34;
    temp_v52 = (unsigned char)temp_v40;
    temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v52) >> 1;
    temp_v51 = (unsigned char)temp_v35;
    temp_v53 = (unsigned char)temp_v36;
    temp_v3 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v53) >> 1;
    temp_v50 = (unsigned char)(temp_v34 >> 0x10);
    temp_v54 = (unsigned char)(temp_v40 >> 0x10);
    temp_v4 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v54) >> 1;
    temp_v49 = (unsigned char)(temp_v35 >> 0x10);
    temp_v1 = (unsigned char)(temp_v36 >> 0x10);
    temp_v5 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v1) >> 1;
    temp_v55 = (unsigned char)temp_v31;
    temp_v9 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
    temp_v56 = (unsigned char)temp_v39;
    temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
    temp_v57 = (unsigned char)(temp_v31 >> 0x10);
    temp_v15 = UnsignedSaturate(temp_v57 - temp_v50,0x10);
    temp_v6 = (unsigned char)(temp_v39 >> 0x10);
    temp_v17 = UnsignedSaturate(temp_v6 - temp_v49,0x10);
    temp_v10 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
    temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
    temp_v16 = UnsignedSaturate(temp_v50 - temp_v57,0x10);
    temp_v18 = UnsignedSaturate(temp_v49 - temp_v6,0x10);
    temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
             ((unsigned int)((unsigned short)(temp_v4 + temp_v57) >> 1) << 0x10) |
             ((unsigned int)((unsigned short)(temp_v3 + temp_v56) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v55) >> 1);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
    temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
             ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
    temp_v7 = (unsigned char)temp_v41;
    temp_v9 = UnsignedSaturate(temp_v7 - temp_v52,0x10);
    temp_v58 = (unsigned char)temp_v32;
    temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
    temp_v59 = (unsigned char)(temp_v41 >> 0x10);
    temp_v15 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
    temp_v60 = (unsigned char)(temp_v32 >> 0x10);
    temp_v17 = UnsignedSaturate(temp_v60 - temp_v1,0x10);
    temp_v10 = UnsignedSaturate(temp_v52 - temp_v7,0x10);
    temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
    temp_v16 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
    temp_v18 = UnsignedSaturate(temp_v1 - temp_v60,0x10);
    temp_v34 = ~temp_v29;
    temp_v57 = (unsigned char)temp_v42;
    temp_v56 = (unsigned char)temp_v33;
    temp_v55 = (unsigned char)(temp_v42 >> 0x10);
    temp_v6 = (unsigned char)(temp_v33 >> 0x10);
    temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
             ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
             ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
    temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
             ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
    temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v57) >> 1) + 1)
                             >> 1) + 1) >> 1);
    temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
    temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v56) >> 1)
                                      + 1) >> 1) + 1) >> 1);
    temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
    temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v55) >>
                                       1) + 1) >> 1) + 1) >> 1);
    temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
    temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v6) >>
                                       1) + 1) >> 1) + 1) >> 1);
    temp_v14 = UnsignedSaturate(temp_v61 - ' ',0x10);
    temp_v58 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
    temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
    temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
    temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
    temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
    temp_v14 = UnsignedSaturate(' ' - temp_v61,0x10);
    temp_v59 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
    temp_v60 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
    temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
    temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
    temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
    temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v58,0x10);
    temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
    temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
    temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
    temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v58,0x10);
    temp_v7 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
    temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
    temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v60,0x10);
    temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v59,0x10);
    temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7;
    temp_v7 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
    temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
    temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v60,0x10);
    temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v59,0x10);
    temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7;
    temp_v61 = UnsignedSaturate(temp_v57 - temp_v0,0x10);
    temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
    temp_v16 = UnsignedSaturate(temp_v55 - temp_v50,0x10);
    temp_v19 = UnsignedSaturate(temp_v6 - temp_v49,0x10);
    temp_v11 = UnsignedSaturate(temp_v0 - temp_v57,0x10);
    temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
    temp_v17 = UnsignedSaturate(temp_v50 - temp_v55,0x10);
    temp_v20 = UnsignedSaturate(temp_v49 - temp_v6,0x10);
    temp_v9 = (char)temp_v28;
    temp_v12 = UnsignedSaturate(temp_v52 - temp_v9,0x10);
    temp_v15 = UnsignedSaturate(temp_v53 - (char)temp_v30,0x10);
    temp_v10 = (char)(temp_v28 >> 0x10);
    temp_v18 = UnsignedSaturate(temp_v54 - temp_v10,0x10);
    temp_v8 = (char)(temp_v30 >> 0x10);
    temp_v21 = UnsignedSaturate(temp_v1 - temp_v8,0x10);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                             ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
    temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
             ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
             ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
             ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
    temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
             ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
             ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
             ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
    temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
             ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
    temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
             ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
    temp_v61 = UnsignedSaturate(temp_v9 - temp_v52,0x10);
    temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v53,0x10);
    temp_v16 = UnsignedSaturate(temp_v10 - temp_v54,0x10);
    temp_v19 = UnsignedSaturate(temp_v8 - temp_v1,0x10);
    temp_v10 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
    temp_v14 = UnsignedSaturate(temp_v51 - temp_v53,0x10);
    temp_v17 = UnsignedSaturate(temp_v50 - temp_v54,0x10);
    temp_v20 = UnsignedSaturate(temp_v49 - temp_v1,0x10);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                             ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
    temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
    temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
             ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
             ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
    temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
    temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
             ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
             ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
    temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
    temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
    temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
    temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
    temp_v8 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
    temp_v13 = UnsignedSaturate(temp_v53 - temp_v51,0x10);
    temp_v15 = UnsignedSaturate(temp_v54 - temp_v50,0x10);
    temp_v16 = UnsignedSaturate(temp_v1 - temp_v49,0x10);
    HintPreloadData(temp_v23 + 0x220);
    temp_v43 = temp_v65 <= (unsigned char)(temp_v10 + temp_v8);
    temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
    temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                             ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
    temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
    *(unsigned char *)(temp_v23 + 0xe) = temp_v43 * temp_v57 + !temp_v43 * (char)temp_v35;
    *(unsigned char *)(temp_v23 + 0xf) = temp_v43 * temp_v0 + !temp_v43 * (char)temp_v33;
    *(unsigned char *)(temp_v23 + 0x10) = temp_v43 * temp_v52 + !temp_v43 * (char)temp_v34;
    *(char *)(temp_v23 + 0x11) = temp_v43 * temp_v9 + !temp_v43 * (char)temp_v36;
    *(char *)(temp_v23 + 0x20e) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
    *(char *)(temp_v23 + 0x20f) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
    *(char *)(temp_v23 + 0x210) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
    *(char *)(temp_v23 + 0x211) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
    *(char *)(temp_v23 + 0x40e) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
    *(char *)(temp_v23 + 0x40f) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
    *(char *)(temp_v23 + 0x410) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
    *(char *)(temp_v23 + 0x411) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
    *(char *)(temp_v23 + 0x60e) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
    *(char *)(temp_v23 + 0x60f) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
    *(char *)(temp_v23 + 0x610) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
    *(char *)(temp_v23 + 0x611) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
    temp_v35 = (((int)*(unsigned int *)(temp_v23 + 0x214) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x614) & 0xffff0000);
    temp_v34 = (((int)*(unsigned int *)(temp_v23 + 0x14) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x414) & 0xffff0000);
    temp_v29 = (*(unsigned int *)(temp_v23 + 0x218) & 0xffff) + *(unsigned int *)(temp_v23 + 0x618) * 0x10000;
    temp_v28 = (*(unsigned int *)(temp_v23 + 0x18) & 0xffff) + *(unsigned int *)(temp_v23 + 0x418) * 0x10000;
    temp_v33 = temp_v35 & 0xff00ff;
    temp_v42 = temp_v34 & 0xff00ff;
    temp_v37 = temp_v42 | (temp_v33 << 8);
    temp_v35 = (temp_v35 >> 8) & 0xff00ff;
    temp_v34 = (temp_v34 >> 8) & 0xff00ff;
    temp_v38 = temp_v34 | (temp_v35 << 8);
    temp_v39 = (((*(unsigned int *)(temp_v23 + 0x214) & 0xffff) + *(unsigned int *)(temp_v23 + 0x614) * 0x10000) >> 8) &
             0xff00ff;
    temp_v31 = (((*(unsigned int *)(temp_v23 + 0x14) & 0xffff) + *(unsigned int *)(temp_v23 + 0x414) * 0x10000) >> 8) &
             0xff00ff;
    temp_v36 = temp_v29 & 0xff00ff;
    temp_v40 = temp_v28 & 0xff00ff;
    temp_v27 = temp_v40 | (temp_v36 << 8);
    temp_v30 = (temp_v29 >> 8) & 0xff00ff;
    temp_v28 = (temp_v28 >> 8) & 0xff00ff;
    temp_v29 = temp_v28 | (temp_v30 << 8);
    temp_v32 = ((((int)*(unsigned int *)(temp_v23 + 0x218) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x618) & 0xffff0000)) & 0xff00ff;
    temp_v41 = ((((int)*(unsigned int *)(temp_v23 + 0x18) >> 0x10) & 0xffffU) +
             (*(unsigned int *)(temp_v23 + 0x418) & 0xffff0000)) & 0xff00ff;
    temp_v50 = (unsigned char)temp_v34;
    temp_v1 = (unsigned char)temp_v40;
    temp_v2 = (unsigned short)((unsigned short)temp_v50 + (unsigned short)temp_v1) >> 1;
    temp_v51 = (unsigned char)temp_v35;
    temp_v54 = (unsigned char)temp_v36;
    temp_v3 = (unsigned short)((unsigned short)temp_v51 + (unsigned short)temp_v54) >> 1;
    temp_v49 = (unsigned char)(temp_v34 >> 0x10);
    temp_v53 = (unsigned char)(temp_v40 >> 0x10);
    temp_v4 = (unsigned short)((unsigned short)temp_v49 + (unsigned short)temp_v53) >> 1;
    temp_v0 = (unsigned char)(temp_v35 >> 0x10);
    temp_v52 = (unsigned char)(temp_v36 >> 0x10);
    temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v52) >> 1;
    temp_v6 = (unsigned char)temp_v31;
    temp_v9 = UnsignedSaturate(temp_v6 - temp_v50,0x10);
    temp_v57 = (unsigned char)temp_v39;
    temp_v13 = UnsignedSaturate(temp_v57 - temp_v51,0x10);
    temp_v55 = (unsigned char)(temp_v31 >> 0x10);
    temp_v15 = UnsignedSaturate(temp_v55 - temp_v49,0x10);
    temp_v56 = (unsigned char)(temp_v39 >> 0x10);
    temp_v17 = UnsignedSaturate(temp_v56 - temp_v0,0x10);
    temp_v10 = UnsignedSaturate(temp_v50 - temp_v6,0x10);
    temp_v14 = UnsignedSaturate(temp_v51 - temp_v57,0x10);
    temp_v16 = UnsignedSaturate(temp_v49 - temp_v55,0x10);
    temp_v18 = UnsignedSaturate(temp_v0 - temp_v56,0x10);
    temp_v34 = ((unsigned int)((unsigned short)(temp_v5 + temp_v56) >> 1) << 0x18) |
             ((unsigned int)((unsigned short)(temp_v4 + temp_v55) >> 1) << 0x10) |
             ((unsigned int)((unsigned short)(temp_v3 + temp_v57) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
    temp_v35 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v34) & 0xff) |
             ((temp_v44 * temp_v37 + !temp_v44 * temp_v34) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v34) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v34) & 0xff000000);
    temp_v7 = (unsigned char)temp_v41;
    temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
    temp_v58 = (unsigned char)temp_v32;
    temp_v13 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
    temp_v59 = (unsigned char)(temp_v41 >> 0x10);
    temp_v15 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
    temp_v60 = (unsigned char)(temp_v32 >> 0x10);
    temp_v17 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
    temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
    temp_v14 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
    temp_v16 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
    temp_v18 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
    temp_v34 = ~temp_v29;
    temp_v55 = (unsigned char)temp_v42;
    temp_v56 = (unsigned char)temp_v33;
    temp_v57 = (unsigned char)(temp_v42 >> 0x10);
    temp_v6 = (unsigned char)(temp_v33 >> 0x10);
    temp_v33 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
             ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
             ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
    temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v33) & 0xff) |
             ((temp_v44 * temp_v29 + !temp_v44 * temp_v33) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v33) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v33) & 0xff000000);
    temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v34 + (unsigned short)temp_v55) >> 1) + 1)
                             >> 1) + 1) >> 1);
    temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
    temp_v61 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 8) + (unsigned short)temp_v56) >> 1)
                                      + 1) >> 1) + 1) >> 1);
    temp_v16 = UnsignedSaturate(temp_v61 - ' ',0x10);
    temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x10) + (unsigned short)temp_v57) >>
                                       1) + 1) >> 1) + 1) >> 1);
    temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
    temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v34 >> 0x18) + (unsigned short)temp_v6) >>
                                       1) + 1) >> 1) + 1) >> 1);
    temp_v14 = UnsignedSaturate(temp_v10 - ' ',0x10);
    temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
    temp_v58 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
    temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
    temp_v17 = UnsignedSaturate(' ' - temp_v61,0x10);
    temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
    temp_v14 = UnsignedSaturate(' ' - temp_v10,0x10);
    temp_v59 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
    temp_v60 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
    temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
    temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
    temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v58,0x10);
    temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
    temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
    temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
    temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v58,0x10);
    temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
    temp_v7 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
    temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
    temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v60,0x10);
    temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v59,0x10);
    temp_v33 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7;
    temp_v7 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
    temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
    temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v60,0x10);
    temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v59,0x10);
    temp_v36 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v7;
    temp_v61 = UnsignedSaturate(temp_v55 - temp_v50,0x10);
    temp_v13 = UnsignedSaturate(temp_v56 - temp_v51,0x10);
    temp_v16 = UnsignedSaturate(temp_v57 - temp_v49,0x10);
    temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
    temp_v11 = UnsignedSaturate(temp_v50 - temp_v55,0x10);
    temp_v14 = UnsignedSaturate(temp_v51 - temp_v56,0x10);
    temp_v17 = UnsignedSaturate(temp_v49 - temp_v57,0x10);
    temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
    temp_v9 = (char)temp_v28;
    temp_v12 = UnsignedSaturate(temp_v1 - temp_v9,0x10);
    temp_v15 = UnsignedSaturate(temp_v54 - (char)temp_v30,0x10);
    temp_v10 = (char)(temp_v28 >> 0x10);
    temp_v18 = UnsignedSaturate(temp_v53 - temp_v10,0x10);
    temp_v8 = (char)(temp_v30 >> 0x10);
    temp_v21 = UnsignedSaturate(temp_v52 - temp_v8,0x10);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v61 + temp_v11);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                             ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                             ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
    temp_v34 = ((temp_v43 * temp_v38 + !temp_v43 * temp_v33) & 0xff) |
             ((temp_v44 * temp_v38 + !temp_v44 * temp_v33) & 0xff00) |
             ((temp_v45 * temp_v38 + !temp_v45 * temp_v33) & 0xff0000) |
             ((temp_v46 * temp_v38 + !temp_v46 * temp_v33) & 0xff000000);
    temp_v32 = ((temp_v43 * temp_v27 + !temp_v43 * temp_v36) & 0xff) |
             ((temp_v44 * temp_v27 + !temp_v44 * temp_v36) & 0xff00) |
             ((temp_v45 * temp_v27 + !temp_v45 * temp_v36) & 0xff0000) |
             ((temp_v46 * temp_v27 + !temp_v46 * temp_v36) & 0xff000000);
    temp_v36 = ((temp_v43 * temp_v37 + !temp_v43 * temp_v35) & 0xff) |
             ((temp_v44 * temp_v37 + !temp_v44 * temp_v35) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v35) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v35) & 0xff000000);
    temp_v31 = ((temp_v43 * temp_v29 + !temp_v43 * temp_v31) & 0xff) |
             ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
    temp_v61 = UnsignedSaturate(temp_v9 - temp_v1,0x10);
    temp_v13 = UnsignedSaturate((char)temp_v30 - temp_v54,0x10);
    temp_v16 = UnsignedSaturate(temp_v10 - temp_v53,0x10);
    temp_v19 = UnsignedSaturate(temp_v8 - temp_v52,0x10);
    temp_v10 = UnsignedSaturate(temp_v50 - temp_v1,0x10);
    temp_v14 = UnsignedSaturate(temp_v51 - temp_v54,0x10);
    temp_v17 = UnsignedSaturate(temp_v49 - temp_v53,0x10);
    temp_v20 = UnsignedSaturate(temp_v0 - temp_v52,0x10);
    temp_v43 = temp_v22 <= (unsigned char)(temp_v12 + temp_v61);
    temp_v44 = temp_v64 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
    temp_v45 = temp_v62 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
    temp_v46 = temp_v63 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                             ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
    temp_v33 = temp_v43 * temp_v38 + !temp_v43 * temp_v34;
    temp_v28 = (temp_v33 & 0xff) | ((temp_v44 * temp_v38 + !temp_v44 * temp_v34) & 0xff00) |
             ((temp_v45 * temp_v38 + !temp_v45 * temp_v34) & 0xff0000) |
             ((temp_v46 * temp_v38 + !temp_v46 * temp_v34) & 0xff000000);
    temp_v34 = temp_v43 * temp_v27 + !temp_v43 * temp_v32;
    temp_v32 = (temp_v34 & 0xff) | ((temp_v44 * temp_v27 + !temp_v44 * temp_v32) & 0xff00) |
             ((temp_v45 * temp_v27 + !temp_v45 * temp_v32) & 0xff0000) |
             ((temp_v46 * temp_v27 + !temp_v46 * temp_v32) & 0xff000000);
    temp_v35 = temp_v43 * temp_v37 + !temp_v43 * temp_v36;
    temp_v30 = (temp_v35 & 0xff) | ((temp_v44 * temp_v37 + !temp_v44 * temp_v36) & 0xff00) |
             ((temp_v45 * temp_v37 + !temp_v45 * temp_v36) & 0xff0000) |
             ((temp_v46 * temp_v37 + !temp_v46 * temp_v36) & 0xff000000);
    temp_v36 = temp_v43 * temp_v29 + !temp_v43 * temp_v31;
    temp_v31 = (temp_v36 & 0xff) | ((temp_v44 * temp_v29 + !temp_v44 * temp_v31) & 0xff00) |
             ((temp_v45 * temp_v29 + !temp_v45 * temp_v31) & 0xff0000) |
             ((temp_v46 * temp_v29 + !temp_v46 * temp_v31) & 0xff000000);
    temp_v8 = UnsignedSaturate(temp_v1 - temp_v50,0x10);
    temp_v13 = UnsignedSaturate(temp_v54 - temp_v51,0x10);
    temp_v15 = UnsignedSaturate(temp_v53 - temp_v49,0x10);
    temp_v16 = UnsignedSaturate(temp_v52 - temp_v0,0x10);
    HintPreloadData(temp_v23 + 0x420);
    temp_v43 = temp_v65 <= (unsigned char)(temp_v10 + temp_v8);
    temp_v44 = temp_v66 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
    temp_v45 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                             ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
    temp_v46 = temp_v68 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                             ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
    *(unsigned char *)(temp_v23 + 0x16) = temp_v43 * temp_v55 + !temp_v43 * (char)temp_v35;
    *(unsigned char *)(temp_v23 + 0x17) = temp_v43 * temp_v50 + !temp_v43 * (char)temp_v33;
    *(unsigned char *)(temp_v23 + 0x18) = temp_v43 * temp_v1 + !temp_v43 * (char)temp_v34;
    *(char *)(temp_v23 + 0x19) = temp_v43 * temp_v9 + !temp_v43 * (char)temp_v36;
    *(char *)(temp_v23 + 0x216) = (char)((temp_v44 * temp_v37 + !temp_v44 * temp_v30) >> 8);
    *(char *)(temp_v23 + 0x217) = (char)((temp_v44 * temp_v38 + !temp_v44 * temp_v28) >> 8);
    *(char *)(temp_v23 + 0x218) = (char)((temp_v44 * temp_v27 + !temp_v44 * temp_v32) >> 8);
    *(char *)(temp_v23 + 0x219) = (char)((temp_v44 * temp_v29 + !temp_v44 * temp_v31) >> 8);
    *(char *)(temp_v23 + 0x416) = (char)((temp_v45 * temp_v37 + !temp_v45 * temp_v30) >> 0x10);
    *(char *)(temp_v23 + 0x417) = (char)((temp_v45 * temp_v38 + !temp_v45 * temp_v28) >> 0x10);
    *(char *)(temp_v23 + 0x418) = (char)((temp_v45 * temp_v27 + !temp_v45 * temp_v32) >> 0x10);
    *(char *)(temp_v23 + 0x419) = (char)((temp_v45 * temp_v29 + !temp_v45 * temp_v31) >> 0x10);
    *(char *)(temp_v23 + 0x616) = (char)((temp_v46 * temp_v37 + !temp_v46 * temp_v30) >> 0x18);
    *(char *)(temp_v23 + 0x617) = (char)((temp_v46 * temp_v38 + !temp_v46 * temp_v28) >> 0x18);
    *(char *)(temp_v23 + 0x618) = (char)((temp_v46 * temp_v27 + !temp_v46 * temp_v32) >> 0x18);
    *(char *)(temp_v23 + 0x619) = (char)((temp_v46 * temp_v29 + !temp_v46 * temp_v31) >> 0x18);
    temp_v23 = temp_v23 + 0x800;
    temp_v48 = temp_v48 - 4;
  } while (temp_v48 != 0);
  return param_1;
}
