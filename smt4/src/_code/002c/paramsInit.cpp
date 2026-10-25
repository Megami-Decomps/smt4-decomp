/* NON_MATCHING: register allocation and store grouping only: retail loads the stack halfwords into r6,r5,ip,r4 and stores the two words with writeback (str [r0,#12]!; str [r0,#4]!), the build uses r4-r6 in order and stm */
#include "shard/W6_W6Match8_UiResourceParameters.h"

extern "C" {

/* Fills a parameter block from its arguments (interleaved halfwords, words). */
void paramsInit(UiResourceParameters *parameters,
    const void *first, u16 firstBytes, const void *second, u16 secondBytes,
    const void *third, u16 thirdBytes, const void *fourth, u16 fourthBytes,
    const void *fifth, u16 fifthBytes)
{
    parameters->counts[0] = firstBytes;
    parameters->counts[1] = secondBytes;
    parameters->counts[2] = thirdBytes;
    parameters->counts[3] = fourthBytes;
    parameters->counts[4] = fifthBytes;
    parameters->chunks[0] = first;
    parameters->chunks[1] = second;
    parameters->chunks[2] = third;
    parameters->chunks[3] = fourth;
    parameters->chunks[4] = fifth;
}

} /* extern "C" */
