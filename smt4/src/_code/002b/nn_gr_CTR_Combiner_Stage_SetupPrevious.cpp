#include "common.h"

extern "C" {

void nn_gr_CTR_Combiner_Stage_SetupPrevious(u8 *stage)
{
    stage[0] = 0;
    stage[1] = 0;
    stage[2] = 0;
    stage[3] = 0;
    stage[4] = 15;
    stage[5] = 15;
    stage[6] = 15;
    stage[7] = 0;
    stage[8] = 0;
    stage[9] = 0;
    stage[10] = 0;
    stage[11] = 0;
    stage[12] = 0;
    stage[13] = 15;
    stage[14] = 15;
    stage[15] = 15;
    stage[16] = 0;
    stage[17] = 0;
}

} /* extern "C" */
