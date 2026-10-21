/* NON_MATCHING: register allocation and store grouping only: retail loads the stack halfwords into r6,r5,ip,r4 and stores the two words with writeback (str [r0,#12]!; str [r0,#4]!), the build uses r4-r6 in order and stm */
#include "shard/W6_W6Match7_DrawParameters.h"

extern "C" {

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
