/* NON_MATCHING: register allocation and store grouping only: retail loads the stack halfwords into r6,r5,ip,r4 and stores the two words with writeback (str [r0,#12]!; str [r0,#4]!), the build uses r4-r6 in order and stm */
#include "common.h"

extern "C" {

typedef struct Params002c312c {
    /* 0x00 */ u16 h0;
    /* 0x02 */ u16 h2;
    /* 0x04 */ u16 h4;
    /* 0x06 */ u16 h6;
    /* 0x08 */ u16 h8;
    /* 0x0a */ u16 unk0a;
    /* 0x0c */ u32 w0c;
    /* 0x10 */ u32 w10;
    /* 0x14 */ u32 w14;
    /* 0x18 */ u32 w18;
    /* 0x1c */ u32 w1c;
} Params002c312c;

/* Fills a parameter block from its arguments (interleaved halfwords, words). */
void paramsInit(Params002c312c *params, u32 w0c, u16 h0, u32 w10, u16 h2, u32 w14, u16 h4, u32 w18, u16 h6, u32 w1c, u16 h8)
{
    params->h0 = h0;
    params->h2 = h2;
    params->h4 = h4;
    params->h6 = h6;
    params->h8 = h8;
    params->w0c = w0c;
    params->w10 = w10;
    params->w14 = w14;
    params->w18 = w18;
    params->w1c = w1c;
}

} /* extern "C" */
